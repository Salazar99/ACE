"""In-process template instantiator: the temporal backend when HARM is not installed.

HARM enumerates its templates over a declared proposition vocabulary and keeps the
instances a trace supports. That enumeration is not a contribution of the flow, so the flow
can do it itself and stay measurable on a machine with no miner installed.

Propositions are propositional, so each one is a bitmask over the samples of a run and
every template in `backends.GRAMMARS` becomes a shift and a mask:

    G(P0 |-> P1)            A & ~C            == 0
    G(P0 |=> P1)            A & ~(C >> 1)     == 0
    G(P0 |-> ##[1:H] P1)    A & ~(C>>1|...|C>>H) == 0

restricted to the positions where the instance is decidable (`t + depth < len(run)`, the
same rule as `Formula.evaluable`). An antecedent of one or two propositions stands in for
HARM's decision-tree slot (`loc="dt"`), which is how a two-proposition antecedent such as
`done == 1 && ain == 0` is reachable from a one-slot template.

The instantiator only proposes. Everything it returns is re-checked by
`validation.evaluate` with formula.py's semantics, which is what decides whether a clause
enters a contract; the bitmask pass exists to make the enumeration cheap, not to define
truth. Ranking prefers the tightest delay first and support second, so a same-cycle
implication is offered before the bounded-response instance that also happens to hold.
"""
from __future__ import annotations

import re

from . import formula


def _num(value):
    return int(value) if float(value).is_integer() else value


def predicates(rows, signals, top: int = 6, small_domain: int = 24) -> list:
    """Atom vocabulary read off the observed values.

    Equalities against the values a signal takes, its observed bounds, and a sign split when
    it takes both signs. This is what HARM's numeric clustering does - it also derives
    comparisons against constants from the data - so a relation between two signals is NOT
    here: it has to be declared (mining.interface_vocabulary).

    A signal with few distinct values gets an equality for EVERY one of them, not just the
    most frequent: an opcode is exactly that kind of signal, and taking the top six values
    of the Ibex ALU's 18-operation selector silently made two thirds of its reference
    contracts unreachable. Above `small_domain` distinct values the vocabulary falls back to
    the most frequent ones plus bounds.
    """
    out = []
    for signal in signals:
        counts = {}
        for row in rows:
            value = row.get(signal)
            if isinstance(value, (int, float)) and not isinstance(value, bool):
                counts[value] = counts.get(value, 0) + 1
        if not counts:
            continue
        common = sorted(counts, key=lambda v: (-counts[v], v))
        common = common if len(common) <= small_domain else common[:top]
        out += [f"{signal} == {_num(v)}" for v in sorted(common)]
        lo, hi = min(counts), max(counts)
        if lo != hi:
            out += [f"{signal} >= {_num(lo)}", f"{signal} <= {_num(hi)}"]
            if lo < 0 <= hi:
                out += [f"{signal} >= 0", f"{signal} < 0"]
    return list(dict.fromkeys(out))


def edge_predicates(rows, signals) -> list:
    """Rising and falling edges of the two-valued signals, as propositions.

    A request that is a transition rather than a level - `div_en_i` going from 0 to 1 - is
    the antecedent of every response contract on a handshake interface, and no value
    predicate can express it: `div_en_i == 1` also matches the 35 cycles the enable stays
    high. The clause language already evaluates the two-sample form, so this needs no new
    template - it is a vocabulary entry, which is exactly how HARM would take it.
    """
    out = []
    for signal in signals:
        values = {row.get(signal) for row in rows} - {None}
        if values and values <= {0, 1} and len(values) == 2:
            out.append(f"(!({signal} == 1)) ##1 ({signal} == 1)")
            out.append(f"({signal} == 1) ##1 (!({signal} == 1))")
    return out


def shape(template: str, horizon: int):
    """(delays, depth, op) for a template, or None when this instantiator cannot express it.

    `delays` is the set of offsets at which the consequent may match, counted from the
    antecedent match; `depth` is how far past the current sample the instance reads, which
    is what makes end-of-trace positions vacuous rather than violated.
    """
    m = re.match(r"^G\s*\((.*?)(\|->|\|=>)(.*)\)\s*$", template.strip(), re.DOTALL)
    if not m:
        return None
    antecedent, op, consequent = m.group(1), m.group(2), m.group(3)
    if not re.fullmatch(r"\s*P\d+(\s*&&\s*P\d+)*\s*", antecedent):
        return None                                    # {..#1&..} and other placeholders
    window = re.fullmatch(r"\s*(?:##\[(\d+):(\w+)\]\s*)?P\d+\s*", consequent)
    if not window:
        return None
    if window.group(1) is None:
        delays = [1] if op == "|=>" else [0]
    else:
        lo = int(window.group(1))
        hi = horizon if window.group(2) == "H" else int(window.group(2))
        delays = list(range(lo, hi + 1))
    return delays, max(delays), op


def _masks(runs, props) -> dict:
    """{proposition: ([bitmask per run], depth)}, dropping propositions never true.

    A bit is set at the sample where a match ENDS, not where it starts, because that is the
    position the clause language counts delays from: in `G(a |-> ##3 b)`, b is required three
    samples after the end of a's match, and `a && b` requires both to end at the SAME sample
    (`formula.And` intersects end positions). A one-sample predicate ends where it starts, so
    for those the two spaces coincide - but a rising edge `(!(x)) ##1 (x)` ends one sample
    later, and working in start space silently proposed every edge clause one cycle early and
    every edge-with-value conjunction as satisfiable when the evaluator reads it as empty.
    """
    out = {}
    for prop in props:
        try:
            parsed = formula.parse(prop)
        except formula.FormulaError:
            continue
        depth = parsed.depth()
        masks, total = [], 0
        for run in runs:
            mask, limit = 0, (1 << len(run)) - 1
            for t in range(len(run)):
                if parsed.holds(run, t):
                    mask |= 1 << (t + depth)
            mask &= limit
            total += _popcount(mask)
            masks.append(mask)
        if total:
            out[prop] = (masks, depth)
    return out


def _popcount(mask: int) -> int:
    return bin(mask).count("1")


def _reach(consequent_mask: int, delays) -> int:
    reach = 0
    for d in delays:
        reach |= consequent_mask >> d
    return reach


def _everywhere(masks, lengths) -> bool:
    """A consequent that is true at every sample makes every instance built on it trivial:
    the antecedent selects nothing. Dropping these here rather than downstream matters,
    because they have the highest support and would otherwise fill the instance budget
    ahead of clauses that say something (`done == 1 |-> yout == ain * bin` fires 157 times;
    `yout >= 0` fires at all 5000 samples)."""
    return all(mask == (1 << n) - 1 for mask, n in zip(masks, lengths))


def _support(antecedent, reach, decidable) -> int:
    """Support of an instance, or 0 if it is violated anywhere or never fires."""
    support = 0
    for a, r, d in zip(antecedent, reach, decidable):
        fires = a & d
        if fires & ~r:
            return 0
        support += _popcount(fires)
    return support


def _tighten(antecedent, consequent_masks, delays, decidable, support):
    """The fixed delays inside a window at which the consequent ALWAYS answers.

    `G(a |-> ##[1:20] b)` says b happens somewhere in the window; `G(a |-> ##3 b)` says it
    happens exactly three cycles later. The second is the stronger statement and the one a
    latency contract is written with, and it costs one mask test per offset to find out
    whether the window instance is really a fixed-latency one. Existential and fixed delays
    are not comparable in either direction, so both are offered and subsumption keeps the
    fixed one when it exists.
    """
    if len(delays) == 1:
        return []
    out = []
    for d in delays:
        if _support(antecedent, [c >> d for c in consequent_masks], decidable) == support:
            out.append(d)
    return out


def _interleave(blocks, limit) -> list:
    """Flatten the per-consequent blocks round-robin, best of each first.

    A single global ranking is not fair across consequents: a compound consequent fires
    whenever its flag fires, so it outranks everything and a plain-consequent instance with
    modest support falls off the end of the budget. That is how enabling compound
    consequents deleted the square root's entire recovered set - the clauses were generated
    and then truncated away. Taking the best of every consequent before any consequent takes
    a second slot keeps the budget's effect independent of vocabulary size.
    """
    out = []
    for rank in range(max((len(b) for b in blocks), default=0)):
        for block in blocks:
            if rank < len(block):
                out.append(block[rank])
        if len(out) >= limit:
            break
    out.sort()
    return [text for _, _, text in out[:limit]]


def _tautology(antecedents, consequent, delays) -> bool:
    """Whether the consequent merely restates the antecedent at the same sample."""
    if delays != [0]:
        return False
    parts = {p.strip().strip("()") for p in consequent.split("&&")}
    return parts <= {a.strip().strip("()") for a in antecedents}


def _emit(delays, op, antecedents, consequent, support, fixed) -> list:
    """One instance per (antecedent, consequent, template): the window form and, when the
    data allows it, the tightest fixed latency inside it.

    Emitting every qualifying offset instead fills the per-consequent budget with delay
    variants of a single antecedent - the square root offered `##12` and `##13` of the same
    clause and pushed out every other antecedent for that consequent, including the one that
    matched its response contract.
    """
    if _tautology(antecedents, consequent, delays):
        return []
    out = [(len(delays), -support, _text(delays, op, antecedents, consequent))]
    if fixed:
        out.append((1, -support, _text([min(fixed)], "##", antecedents, consequent)))
    return out


def _text(delays, op, antecedents, consequent) -> str:
    lhs = " && ".join(f"({a})" for a in antecedents)
    if delays == [0]:
        return f"G({lhs} |-> ({consequent}))"
    if delays == [1] and op == "|=>":
        return f"G({lhs} |=> ({consequent}))"
    if len(delays) == 1:
        return f"G({lhs} |-> ##{delays[0]} ({consequent}))"
    return f"G({lhs} |-> ##[{delays[0]}:{delays[-1]}] ({consequent}))"


_FLAG = re.compile(r"^\s*(\w+)\s*==\s*[01]\s*$")


def _compound_consequents(con_masks, lengths, limit: int = 12) -> dict:
    """Conjunctions of two consequents: a flag together with a value.

    `G(... |-> valid_o == 1 && multdiv_result_o == op_a_i)` is the shape a handshake
    contract uses - the result is only claimed at the sample where the interface says it is
    valid. Only a two-valued predicate is paired, and only with a predicate over other
    signals, because enumerating all pairs would square the consequent vocabulary to
    recover a handful of clauses.
    """
    flags = [(c, m) for c, m in con_masks.items() if _FLAG.match(c)]
    out = {}
    for flag, fmask in flags:
        signal = _FLAG.match(flag).group(1)
        for other, omask in con_masks.items():
            if other == flag or signal in formula.parse(other).signals():
                continue
            mask = [a & b for a, b in zip(fmask, omask)]
            if any(mask) and not _everywhere(mask, lengths):
                out[f"({flag}) && ({other})"] = mask
    ranked = sorted(out, key=lambda c: -sum(_popcount(m) for m in out[c]))
    return {c: out[c] for c in ranked[:limit]}


def instantiate(runs, templates, antecedents, consequents, horizon,
                max_ant: int = 2, max_instances: int = 800, min_support: int = 2,
                max_per_consequent: int = 12, compound: bool = True) -> list:
    """Every template instance that holds without violation on `runs`, best first.

    `max_per_consequent` keeps only the best-supported antecedents for each consequent and
    delay. Its effect on recall is not monotone - the budget decides which clauses reach
    subsumption, and a broader clause admitted by a larger budget can absorb the one that
    matched a reference - so the default (12) is measured, not assumed: on this benchmark it
    recovers 12 reference clauses more than a budget of 4, and one more than a budget of 40.
    Without it a value-equality vocabulary produces a family per value - forty clauses of the
    shape `in == k |-> ##3 in == 0`, one for every operand the stimulus happened to use.

    `min_support` is the analogue of HARM's frequency rank: an instance whose antecedent
    fires two or three times in a region is an accident of the stimulus, not a property, and
    keeping it only costs the validation and subsumption steps work.

    A two-proposition antecedent is only tried when neither of its propositions works on
    its own for the same consequent and delay: if `A |-> C` already holds then
    `A && B |-> C` is a weaker statement about a smaller domain, and offering both only
    gives the subsumption check more work to do. `max_ant=3` extends the same rule one level
    further, over the pairs that failed, which is the only reason it is affordable.

    `compound` conjoins two consequents where the contract's obligation is a flag together
    with a value (`valid_o == 1 && multdiv_result_o == op_a_i`).
    """
    shapes = [s for s in (shape(t, horizon) for t in templates) if s]
    lengths = [len(run) for run in runs]
    # An antecedent's own length shifts where its obligation starts, so propositions are
    # grouped by depth and only conjoined within a group - a mixed conjunction is empty
    # under the evaluator's semantics, so proposing one only wastes the budget.
    ant_groups = {}
    for prop, (masks, depth) in _masks(runs, antecedents).items():
        ant_groups.setdefault(depth, {})[prop] = masks
    con_masks = {c: masks for c, (masks, depth) in _masks(runs, consequents).items()
                 if depth == 0 and not _everywhere(masks, lengths)}
    if compound:
        con_masks.update(_compound_consequents(con_masks, lengths))

    blocks = []
    for delays, _, op in shapes:
        horizon_of = max(delays)
        decidable = [((1 << (n - horizon_of)) - 1) if n > horizon_of else 0 for n in lengths]
        for consequent, cmask in con_masks.items():
            reach = [_reach(c, delays) for c in cmask]
            block = []
            for ant_masks in ant_groups.values():
                singles, rest = [], []
                for prop, mask in ant_masks.items():
                    if prop == consequent:
                        continue
                    support = _support(mask, reach, decidable)
                    (singles if support >= min_support
                     else rest).append((prop, mask, support))
                for prop, mask, support in singles:
                    block += _emit(delays, op, [prop], consequent, support,
                                   _tighten(mask, cmask, delays, decidable, support))
                if max_ant < 2:
                    blocks.append(sorted(block)[:max_per_consequent])
                    block = []
                    continue
                failed = []
                for i, (a, ma, _) in enumerate(rest):
                    for b, mb, _ in rest[i + 1:]:
                        if a.split()[0] == b.split()[0]:
                            continue      # same signal twice: trivial or empty
                        conj = [x & y for x, y in zip(ma, mb)]
                        support = _support(conj, reach, decidable)
                        if support >= min_support:
                            block += _emit(delays, op, [a, b], consequent, support,
                                           _tighten(conj, cmask, delays, decidable, support))
                        elif any(conj):
                            failed.append(((a, b), conj))
                if max_ant >= 3:
                    for (pair, conj) in failed:
                        for c, mc, _ in rest:
                            if c in pair or c.split()[0] in {p.split()[0] for p in pair}:
                                continue
                            triple = [x & y for x, y in zip(conj, mc)]
                            support = _support(triple, reach, decidable)
                            if support >= min_support:
                                block += _emit(delays, op, [*pair, c], consequent, support,
                                               _tighten(triple, cmask, delays, decidable,
                                                        support))
                # one budget per antecedent depth: a same-sample antecedent has far more
                # support than an edge, so a shared budget hides every edge-triggered
                # response behind value predicates that fire on every cycle of an operation
                blocks.append(sorted(block)[:max_per_consequent])
                block = []
    return _interleave(blocks, max_instances)


def demo():
    """Self-check: plant req |=> ack in a trace and see the instance come back."""
    from .traces import Run

    rows = []
    for t in range(60):
        req = int(t % 5 == 0)
        rows.append({"req": req, "ack": int(t % 5 == 1), "payload": (t * 7) % 64 if req else 0})
    runs = [Run("demo", ["req", "ack", "payload"], rows)]

    from .backends import GRAMMARS
    out = instantiate(runs, GRAMMARS["G3"],
                      predicates(rows, ["req", "payload"]),
                      predicates(rows, ["ack"]), horizon=4)
    assert "G((req == 1) |=> (ack == 1))" in out, out
    assert not any("|-> (ack == 1)" in c and "req == 1)" in c for c in out), \
        "same-cycle response must not be mined: ack is low when req is high"
    assert shape("G({..#1&..} |-> P0)", 4) is None
    assert shape("G(P0 |-> ##[1:H] P1)", 4) == ([1, 2, 3, 4], 4, "|->")
    print(f"ok: {len(out)} instances, e.g. {out[0]}")


if __name__ == "__main__":
    demo()
