"""Finite-trace formula evaluation. The whole flow rests on this module.

Grammar (the HARM/SVA-lite subset the DATE2027 plan needs):

    formula     := 'G' '(' implication ')' | implication
    implication := sere [ ('|->' | '|=>' | '->') sere ]
    sere        := disj
    disj        := conj ('||' conj)*
    conj        := delayed ('&&' delayed)*
    delayed     := DELAY unary | unary (DELAY unary)*
    DELAY       := '##' NUM | '##' '[' NUM ':' NUM ']'
    unary       := '!' unary | 'X' unary | '(' implication ')' | comparison
    comparison  := bitwise [ ('<'|'<='|'>'|'>='|'=='|'!=') bitwise ]
    bitwise     := shift (('&'|'|'|'^') shift)*
    shift       := arith (('<<'|'>>') arith)*
    arith       := term (('+'|'-') term)*
    term        := factor (('*'|'/') factor)*
    factor      := NUM | SIGNAL | '(' arith ')' | '-' factor

Semantics are finite-trace and run-local:

* a match starting at t is a set of END positions inside the same run; the empty set means
  no match, so nothing is ever satisfied by looking past the end of a run;
* `a |-> b` is satisfied at t when EVERY match of a starting at t is followed by a match of
  b (SVA), and is vacuously satisfied when a does not match at t. `support()` reports
  whether the antecedent matched, which is what separates ATCT/AFCT from vacuity.

Why not reuse ACE/trace_filtering/filter.py: its evaluator resolves the antecedent by
regex-substituting placeholders, keeps a single match end instead of a set, treats an
implication as satisfied on the FIRST antecedent match, and crashes on an arithmetic
right-hand operand (NumericExpression passes a node where a string is expected). The
labeling, scoring and held-out stages all depend on these details.
"""
from __future__ import annotations

import functools
import re
from dataclasses import dataclass, field

_TOKEN = re.compile(r"""
    \s*(?:
      (?P<impl>\|->|\|=>|->)
    | (?P<delay>\#\#)
    | (?P<andop>&&)
    | (?P<orop>\|\|)
    | (?P<shift><<|>>)
    | (?P<cmp><=|>=|==|!=|<|>)
    | (?P<bitop>[&|^])
    | (?P<notop>!)
    | (?P<lpar>\()
    | (?P<rpar>\))
    | (?P<lbrk>\[)
    | (?P<rbrk>\])
    | (?P<colon>:(?!:))
    | (?P<arith>[+\-*/])
    | (?P<num>\d+(?:\.\d+)?)
    | (?P<name>[A-Za-z_][A-Za-z0-9_]*(?:::[A-Za-z_][A-Za-z0-9_]*)*)
    )""", re.VERBOSE)


class Undefined(ValueError):
    """An operand that has no value at this sample: a division by zero, a shift by a
    negative amount. The proposition does not hold there. Distinct from FormulaError, which
    means the clause itself is wrong (a bad grammar, an unknown signal) and must be seen."""


class FormulaError(ValueError):
    pass


def tokenize(text: str) -> list:
    tokens, pos = [], 0
    while pos < len(text):
        m = _TOKEN.match(text, pos)
        if not m or m.end() == pos:
            if text[pos:].strip() == "":
                break
            raise FormulaError(f"cannot tokenize {text[pos:]!r} in {text!r}")
        pos = m.end()
        kind = m.lastgroup
        tokens.append((kind, m.group(kind)))
    return tokens


# ------------------------------------------------------------------ value nodes

@dataclass(frozen=True)
class Const:
    value: float

    def eval(self, run, t):
        return self.value

    def signals(self):
        return frozenset()


@dataclass(frozen=True)
class Signal:
    name: str

    def eval(self, run, t):
        row = run.rows[t]
        if self.name not in row:
            raise FormulaError(f"signal {self.name!r} is not in trace {run.name!r}")
        value = row[self.name]
        if value is None:
            raise FormulaError(f"signal {self.name!r} has no value yet at t={t} "
                               f"in {run.name!r}")
        return value

    def signals(self):
        return frozenset({self.name})


@dataclass(frozen=True)
class Arith:
    op: str
    left: object
    right: object

    #: Bitwise and shift operators need integer operands, which every trace value is; a
    #: float would be a trace defect, so it is reported rather than silently truncated.
    _BITWISE = {"&": lambda a, b: a & b, "|": lambda a, b: a | b, "^": lambda a, b: a ^ b,
                "<<": lambda a, b: a << b, ">>": lambda a, b: a >> b}

    def eval(self, run, t):
        a, b = self.left.eval(run, t), self.right.eval(run, t)
        if self.op == "+":
            return a + b
        if self.op == "-":
            return a - b
        if self.op == "*":
            return a * b
        if self.op in Arith._BITWISE:
            if isinstance(a, float) and not a.is_integer():
                raise Undefined(f"{self.op} needs integers, got {a} at t={t}")
            if isinstance(b, float) and not b.is_integer():
                raise Undefined(f"{self.op} needs integers, got {b} at t={t}")
            if self.op in ("<<", ">>") and b < 0:
                raise Undefined(f"negative shift {b} at t={t} in {run.name!r}")
            return Arith._BITWISE[self.op](int(a), int(b))
        if b == 0:
            raise Undefined(f"division by zero at t={t} in {run.name!r}")
        return a / b

    def signals(self):
        return self.left.signals() | self.right.signals()


# --------------------------------------------------------------- formula nodes

class Node:
    """A node matches at t by returning the END positions of its matches."""

    def ends(self, run, t) -> list:
        raise NotImplementedError

    def holds(self, run, t) -> bool:
        return bool(self.ends(run, t))

    def depth(self) -> int:
        """How many samples past its start position a match of this node can reach.

        Used to decide where a clause is evaluable at all: a window that runs off the end
        of a finite run is not a violation, it is a position where the clause has no
        temporal support (Section III)."""
        return 0


@dataclass(frozen=True)
class Compare(Node):
    op: str
    left: object
    right: object

    _OPS = {"<": lambda a, b: a < b, "<=": lambda a, b: a <= b,
            ">": lambda a, b: a > b, ">=": lambda a, b: a >= b,
            "==": lambda a, b: a == b, "!=": lambda a, b: a != b}

    def ends(self, run, t):
        # An operand that cannot be computed at this sample - a division by zero, a shift by
        # a negative amount - makes the comparison undefined, so the proposition does not
        # hold here. Letting the error escape aborts the whole run instead, which is what a
        # `result_o == (a << b)` proposition did to the square root the first time its
        # negative input was shifted.
        try:
            a, b = self.left.eval(run, t), self.right.eval(run, t)
        except Undefined:
            return []
        return [t] if Compare._OPS[self.op](a, b) else []

    def signals(self):
        return self.left.signals() | self.right.signals()


@dataclass(frozen=True)
class Truth(Node):
    """A bare value used as a Boolean: non-zero is true."""

    value: object

    def ends(self, run, t):
        try:
            value = self.value.eval(run, t)
        except Undefined:
            return []
        return [t] if value not in (0, False) else []

    def signals(self):
        return self.value.signals()


@dataclass(frozen=True)
class Not(Node):
    inner: Node

    def ends(self, run, t):
        return [] if self.inner.ends(run, t) else [t]

    def depth(self):
        return self.inner.depth()

    def signals(self):
        return self.inner.signals()


@dataclass(frozen=True)
class And(Node):
    left: Node
    right: Node

    def ends(self, run, t):
        right = set(self.right.ends(run, t))
        return [e for e in self.left.ends(run, t) if e in right]

    def depth(self):
        return max(self.left.depth(), self.right.depth())

    def signals(self):
        return self.left.signals() | self.right.signals()


@dataclass(frozen=True)
class Or(Node):
    left: Node
    right: Node

    def ends(self, run, t):
        return sorted(set(self.left.ends(run, t)) | set(self.right.ends(run, t)))

    def depth(self):
        return max(self.left.depth(), self.right.depth())

    def signals(self):
        return self.left.signals() | self.right.signals()


@dataclass(frozen=True)
class Next(Node):
    inner: Node

    def ends(self, run, t):
        return self.inner.ends(run, t + 1) if t + 1 < len(run) else []

    def depth(self):
        return 1 + self.inner.depth()

    def signals(self):
        return self.inner.signals()


@dataclass(frozen=True)
class Delay(Node):
    """`left ##[lo:hi] right`, or `##[lo:hi] right` when left is None.

    The delay is counted from the END of the left match, so `a ##1 b` with a single-cycle
    a means b one sample later. A window that leaves the run does not match.
    """

    lo: int
    hi: int
    right: Node
    left: Node = None

    def ends(self, run, t):
        starts = self.left.ends(run, t) if self.left is not None else [t]
        out = set()
        for e in starts:
            for d in range(self.lo, self.hi + 1):
                u = e + d
                if 0 <= u < len(run):
                    out.update(self.right.ends(run, u))
        return sorted(out)

    def depth(self):
        left = self.left.depth() if self.left is not None else 0
        return left + self.hi + self.right.depth()

    def signals(self):
        s = self.right.signals()
        return s | self.left.signals() if self.left is not None else s


@dataclass(frozen=True)
class Implication(Node):
    kind: str  # '|->', '|=>' or '->'
    antecedent: Node
    consequent: Node

    def ends(self, run, t):
        starts = self.antecedent.ends(run, t)
        if not starts:
            return [t]  # vacuously satisfied; support() tells them apart
        out = set()
        for e in starts:
            u = e + 1 if self.kind == "|=>" else e
            if not 0 <= u < len(run):
                return []
            m = self.consequent.ends(run, u)
            if not m:
                return []  # every antecedent match must be followed (SVA)
            out.update(m)
        return sorted(out)

    def depth(self):
        return (self.antecedent.depth() + (1 if self.kind == "|=>" else 0)
                + self.consequent.depth())

    def signals(self):
        return self.antecedent.signals() | self.consequent.signals()


# ------------------------------------------------------------------ the parser

class _Parser:
    def __init__(self, tokens):
        self.tokens = tokens
        self.i = 0

    def peek(self, kind=None, text=None):
        if self.i >= len(self.tokens):
            return None
        k, v = self.tokens[self.i]
        if (kind is None or k == kind) and (text is None or v == text):
            return self.tokens[self.i]
        return None

    def take(self, kind=None, text=None):
        tok = self.peek(kind, text)
        if tok is None:
            got = self.tokens[self.i] if self.i < len(self.tokens) else "end of formula"
            raise FormulaError(f"expected {text or kind}, got {got}")
        self.i += 1
        return tok

    # implication := sere [ IMPL sere ]
    def implication(self):
        left = self.disj()
        tok = self.peek("impl")
        if tok is None:
            return left
        self.take("impl")
        return Implication(tok[1], left, self.disj())

    def disj(self):
        node = self.conj()
        while self.peek("orop"):
            self.take("orop")
            node = Or(node, self.conj())
        return node

    def conj(self):
        node = self.delayed()
        while self.peek("andop"):
            self.take("andop")
            node = And(node, self.delayed())
        return node

    def _delay_bounds(self):
        self.take("delay")
        if self.peek("lbrk"):
            self.take("lbrk")
            lo = int(self.take("num")[1])
            self.take("colon")
            hi = int(self.take("num")[1])
            self.take("rbrk")
        else:
            lo = hi = int(self.take("num")[1])
        if lo > hi or lo < 0:
            raise FormulaError(f"bad delay window [{lo}:{hi}]")
        return lo, hi

    def delayed(self):
        if self.peek("delay"):
            lo, hi = self._delay_bounds()
            return Delay(lo, hi, self.unary())
        node = self.unary()
        while self.peek("delay"):
            lo, hi = self._delay_bounds()
            node = Delay(lo, hi, self.unary(), node)
        return node

    def unary(self):
        if self.peek("notop"):
            self.take("notop")
            return Not(self.unary())
        if self.peek("name", "X"):
            self.take("name", "X")
            if self.peek("lpar"):
                self.take("lpar")
                inner = self.implication()
                self.take("rpar")
                return Next(inner)
            return Next(self.unary())
        if self.peek("lpar"):
            save = self.i
            self.take("lpar")
            node = self.implication()
            self.take("rpar")
            # a parenthesised arithmetic operand must fall through to comparison
            if self.peek("cmp") or self.peek("arith"):
                self.i = save
                return self.comparison()
            return node
        return self.comparison()

    def comparison(self):
        left = self.bitwise()
        tok = self.peek("cmp")
        if tok is None:
            return Truth(left)          # a bare value is Boolean: non-zero is true
        self.take("cmp")
        return Compare(tok[1], left, self.bitwise())

    def bitwise(self):
        node = self.shift()
        while self.peek("bitop"):
            op = self.take("bitop")[1]
            node = Arith(op, node, self.shift())
        return node

    def shift(self):
        node = self.arith()
        while self.peek("shift"):
            op = self.take("shift")[1]
            node = Arith(op, node, self.arith())
        return node

    def arith(self):
        node = self.term()
        while self.peek("arith", "+") or self.peek("arith", "-"):
            op = self.take("arith")[1]
            node = Arith(op, node, self.term())
        return node

    def term(self):
        node = self.factor()
        while self.peek("arith", "*") or self.peek("arith", "/"):
            op = self.take("arith")[1]
            node = Arith(op, node, self.factor())
        return node

    def factor(self):
        if self.peek("arith", "-"):
            self.take("arith")
            return Arith("-", Const(0.0), self.factor())
        if self.peek("num"):
            return Const(float(self.take("num")[1]))
        if self.peek("lpar"):
            self.take("lpar")
            node = self.bitwise()
            self.take("rpar")
            return node
        name = self.take("name")[1]
        if name in ("true", "True"):
            return Const(1.0)
        if name in ("false", "False"):
            return Const(0.0)
        return Signal(name)


@dataclass(frozen=True)
class Formula:
    """A parsed clause. `text` is kept verbatim for provenance and reporting."""

    text: str
    body: Node
    globally: bool = False

    def holds(self, run, t) -> bool:
        return bool(self.body.ends(run, t))

    def ends(self, run, t) -> list:
        return self.body.ends(run, t)

    def depth(self) -> int:
        return self.body.depth()

    def evaluable(self, run, t) -> bool:
        """Whether a match of this clause starting at t fits inside the run.

        Positions closer to the end of a run than the clause's depth are not evaluable:
        the run simply stops before the clause could be decided. Counting them as
        violations would make every bounded-response contract fail at the end of every
        trace."""
        return t + self.depth() < len(run)

    def support(self, run, t) -> bool:
        """True when the clause says something here: it is evaluable at t, and either the
        antecedent matched or there is no antecedent. Non-supported positions are vacuous
        and are never counted."""
        if not self.evaluable(run, t):
            return False
        if isinstance(self.body, Implication):
            return bool(self.body.antecedent.ends(run, t))
        return True

    def signals(self) -> frozenset:
        return self.body.signals()

    def is_implication(self) -> bool:
        return isinstance(self.body, Implication)


@functools.lru_cache(maxsize=4096)
def parse(text: str) -> Formula:
    """Parse a clause. Results are cached: the flow re-evaluates the same clauses often."""
    stripped = text.strip()
    globally = False
    m = re.match(r"^G\s*\((.*)\)$", stripped, re.DOTALL)
    if m and _balanced(m.group(1)):
        stripped, globally = m.group(1), True
    tokens = tokenize(stripped)
    if not tokens:
        raise FormulaError(f"empty formula {text!r}")
    parser = _Parser(tokens)
    body = parser.implication()
    if parser.i != len(tokens):
        raise FormulaError(f"trailing tokens in {text!r}: {tokens[parser.i:]}")
    return Formula(text.strip(), body, globally)


def _balanced(s: str) -> bool:
    depth = 0
    for ch in s:
        depth += (ch == "(") - (ch == ")")
        if depth < 0:
            return False
    return depth == 0


def strip_braces(text: str) -> str:
    """HARM brackets its operands: 'G({a} |-> {##1 b})' -> 'G(a |-> ##1 b)'."""
    return text.replace("{", "(").replace("}", ")")
