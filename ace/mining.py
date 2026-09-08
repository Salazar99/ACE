"""Step 4: contract mining and assembly.

The episodes of a behavioral region are fed to the backends instead of full-length,
re-simulated traces. A region yields one candidate contract C_r = (A_r, G_r):

* A_r  environment obligations. Two families: propositional invariants over the
       environment-facing signals, computed directly on the episode samples, and temporal
       environment clauses mined by HARM over the same vocabulary. A selected trigger is
       NOT copied into A_r; it only enters if it passes the same checks as any other
       candidate assumption, which keeps event-explanation machinery out of A/G semantics.
* G_r  component obligations, mined over the full I/O vocabulary of the episodes; a clause
       qualifies only if it constrains at least one observable output.

Clauses that are vacuous, or that hold over the whole corpus and so merely restate a signal
domain rather than the region's behavior, are marked and dropped from the contract body.
"""
from __future__ import annotations

from dataclasses import dataclass, field, asdict
from pathlib import Path

from . import backends, templates as templates_mod, episodes as episodes_mod, validation


@dataclass
class Clause:
    text: str
    kind: str                 # 'propositional' or 'temporal'
    role: str                 # 'assumption' or 'guarantee'
    backend: str
    scope: str = None         # which samples the clause was derived from
    region: dict = None       # support/violations on the episodes it came from
    global_support: dict = None
    region_specific: bool = None
    held_out: dict = None
    kept: bool = None

    def to_dict(self) -> dict:
        return asdict(self)


@dataclass
class Contract:
    event: str
    assumptions: list = field(default_factory=list)
    guarantees: list = field(default_factory=list)
    triggers: list = field(default_factory=list)
    provenance: dict = field(default_factory=dict)
    metrics: dict = field(default_factory=dict)
    dropped: list = field(default_factory=list)
    validation: object = None

    def to_dict(self) -> dict:
        return {"event": self.event,
                "assumptions": [c.to_dict() for c in self.assumptions],
                "guarantees": [c.to_dict() for c in self.guarantees],
                "triggers": self.triggers,
                "provenance": self.provenance,
                "metrics": self.metrics,
                "dropped": self.dropped,
                "validation": self.validation.to_dict() if self.validation else None}


# ------------------------------------------------------ propositional invariants

def propositional_invariants(rows, signals, ranges: bool = True,
                             max_pairs: int = 64) -> list:
    """Invariants that hold over every episode sample: constants, ranges and relations.

    This is the propositional family the flow needs from an invariant detector, computed in
    process. backends.invgen (ACE's HARM-template instantiator) and backends.daikon remain
    available as alternative backends; neither is required to run the flow.
    """
    if not rows:
        return []
    usable = [s for s in signals
              if all(isinstance(row.get(s), (int, float)) and not isinstance(row.get(s), bool)
                     for row in rows)]
    out = []
    values = {s: [row[s] for row in rows] for s in usable}

    for s in usable:
        lo, hi = min(values[s]), max(values[s])
        if lo == hi:
            out.append(f"{s} == {_num(lo)}")
        elif ranges:
            out.append(f"{s} >= {_num(lo)}")
            out.append(f"{s} <= {_num(hi)}")

    constant = {s for s in usable if min(values[s]) == max(values[s])}

    pairs = 0
    for i, a in enumerate(usable):
        for b in usable[i + 1:]:
            if pairs >= max_pairs:
                break
            if a in constant or b in constant:
                # a relation against a signal that never changes is a bound in disguise
                # ("rst <= in" when rst is 0 is just "in >= 0"), and the bound above says
                # it more clearly. Skipping these is what keeps the contract readable.
                continue
            va, vb = values[a], values[b]
            if all(x == y for x, y in zip(va, vb)):
                out.append(f"{a} == {b}")
            elif all(x <= y for x, y in zip(va, vb)):
                out.append(f"{a} <= {b}")
            elif all(x >= y for x, y in zip(va, vb)):
                out.append(f"{b} <= {a}")
            else:
                continue
            pairs += 1
    return out


def _num(value):
    return int(value) if float(value).is_integer() else value


def _conjuncts(text: str) -> list:
    """Split a trigger on top-level '&&' only."""
    parts, depth, current = [], 0, ""
    i = 0
    while i < len(text):
        if text[i] == "(":
            depth += 1
        elif text[i] == ")":
            depth -= 1
        if depth == 0 and text[i:i + 2] == "&&":
            parts.append(current.strip())
            current, i = "", i + 2
            continue
        current += text[i]
        i += 1
    parts.append(current.strip())
    return [p for p in parts if p]


def interface_vocabulary(inputs, outputs, arithmetic=True, arity=3, bitwise=True,
                         output_arithmetic=True, limit: int = 150) -> list:
    """Systematic proposition vocabulary derived from the interface alone.

    HARM is a hint-based miner: the propositions it can put in a template slot are the ones
    the configuration declares, and clustering only ever produces comparisons against
    constants. A relation between signals - `yout == ain * bin`, `result_o <= operand_a_i` -
    therefore has to be declared, and if the declarations were lifted from the reference
    contracts the recall figures would be meaningless.

    This builds the declarations from the interface instead, in four families, each of which
    a measurement showed was needed:

    * orderings and equality of every output against every input;
    * `arithmetic` - every output against a `+ - *` combination of two inputs, and against a
      sum of `arity` inputs (the 8-bit adder's contract is `sum == a + b + cin`, which no
      pairwise family can express);
    * `bitwise` - `& | ^ << >>` of two inputs, which is what an ALU's operations are;
    * `output_arithmetic` - the output on the left of the relation (`result_o * 2 <=
      operand_a_i`, `multdiv_result_o * op_b_i <= op_a_i`), which is how a shift or a
      division is specified without naming the operation.

    Nothing here looks at what the reference contracts say, so a mined clause that matches
    one is evidence rather than bookkeeping. The size is what RQ4 measures, and it is now
    dominated by the pair families: |O| * (3|I| + (3 + 5 + 4)|I|(|I|-1)/2 + C(|I|,3)).
    """
    props = []
    for out in outputs:
        for signal in inputs:
            props += [f"{out} == {signal}", f"{out} <= {signal}", f"{out} >= {signal}"]
        for i, a in enumerate(inputs):
            for b in inputs[i + 1:]:
                if arithmetic:
                    props += [f"{out} == {a} + {b}", f"{out} == {a} * {b}",
                              f"{out} == {a} - {b}"]
                if bitwise:
                    props += [f"{out} == ({a} & {b})", f"{out} == ({a} | {b})",
                              f"{out} == ({a} ^ {b})", f"{out} == ({a} << {b})",
                              f"{out} == ({a} >> {b})"]
                if output_arithmetic:
                    props += [f"{out} * {b} <= {a}", f"{out} * {b} + {b} > {a}",
                              f"{out} < {b}", f"{out} * 2 <= {a}", f"{out} * 2 + 1 >= {a}"]
        if arithmetic and arity >= 3:
            for i, a in enumerate(inputs):
                for j, b in enumerate(inputs[i + 1:], start=i + 1):
                    for c in inputs[j + 1:]:
                        props += [f"{out} == {a} + {b} + {c}",
                                  f"{out} == {a} + {b} + {c} - 256"]
    seen, unique = set(), []
    for prop in props:
        if prop not in seen:
            seen.add(prop)
            unique.append(prop)
    # The family grows with |I|^2 - 446 propositions for the six-input divider - and every
    # member becomes its own consequent group with its own instance budget, so run time
    # grows with it. The order above is deliberate (orderings, arithmetic, bitwise,
    # output-side), so truncating keeps the cheapest families whole.
    if limit:
        unique = unique[:limit]
    return [{"exp": p, "loc": "c", "stage": "guarantee"} for p in unique]


# ---------------------------------------------------------------- temporal mining

def _vocabulary(cfg, tag) -> list:
    """Propositions to declare for one mining pass.

    `auto_vocabulary` builds the interface family (nothing from the reference contracts);
    `extra_props` is an explicit list, used when a design needs a hint the family misses.
    """
    props = [p for p in cfg.get("extra_props", [])
             if tag in p.get("stage", ("assume", "guarantee"))]
    if cfg.get("auto_vocabulary"):
        props = interface_vocabulary(
            list(cfg["inputs"]), list(cfg["outputs"]),
            arity=int(cfg.get("vocabulary_arity", 3)),
            bitwise=bool(cfg.get("vocabulary_bitwise", True)),
            output_arithmetic=bool(cfg.get("vocabulary_output_arithmetic", True)),
            limit=int(cfg.get("max_vocabulary", 150))) + props
    return props


def domain_trivial(corpus, clause: str, cache: dict = None,
                   consequent: bool = True) -> str | None:
    """Why a clause says nothing, or None if it says something.

    Two ways to say nothing. Its ANTECEDENT holds over the whole corpus, so the clause is
    not conditional at all - it asserts the consequent everywhere and merely looks like a
    contract clause. Or its CONSEQUENT holds over the whole corpus, so the antecedent
    selects nothing and the clause is a signal domain restated
    (`G(ain <= 65535 |-> bin <= 65535)`).

    `consequent=False` runs only the first check. It is what assumptions get: an environment
    restriction that holds everywhere is not trivial, it IS the assumption (`rst_n == 1`,
    `ain <= 65535`), and dropping those leaves A empty.

    What is NOT trivial is a true global implication. An earlier version dropped any clause
    that held over the whole corpus, which rejected exactly the well-formed ones: a contract
    guarantee such as `G(done == 1 |-> yout == ain * bin)` is meant to hold on every trace,
    and it describes its region through its antecedent, not through failing elsewhere.
    """
    from . import formula

    cache = cache if cache is not None else {}

    def holds_always(text):
        if text not in cache:
            result = validation.evaluate(corpus, text)
            cache[text] = bool(result["support"]) and not result["violations"]
        return cache[text]

    parsed = formula.parse(clause)
    if not parsed.is_implication():
        return ("holds at every corpus position, so it restates a signal domain"
                if consequent and holds_always(clause) else None)
    antecedent = _antecedent_text(clause)
    if antecedent and holds_always(antecedent):
        # `G(out >= 0 |-> ##[1:24] done == 1)` is not a conditional statement: its antecedent
        # is true at every sample, so it says "the event follows every position", which holds
        # only because the stimulus keeps the design busy. Left in, it also wins every
        # subsumption contest against the clauses that do condition on something, which is
        # how the square root's response guarantee disappeared behind it.
        return ("antecedent holds at every corpus position, so the clause is not "
                "conditional")
    text = _consequent_text(clause) if consequent else None
    if text is None:
        return None
    return (f"consequent `{text}` holds at every corpus position, so the antecedent "
            f"selects nothing" if holds_always(text) else None)


def _antecedent_text(clause: str) -> str | None:
    """The antecedent of an implication, as text."""
    import re
    body = re.sub(r"^\s*G\s*\((.*)\)\s*$", r"\1", clause.strip(), flags=re.DOTALL)
    parts = re.split(r"\|->|\|=>|(?<![|>=])->", body, maxsplit=1)
    return validation._strip_parens(parts[0]) if len(parts) == 2 else None


def _consequent_text(clause: str) -> str | None:
    """The consequent of an implication, as text (the parser keeps no per-node source)."""
    import re
    body = re.sub(r"^\s*G\s*\((.*)\)\s*$", r"\1", clause.strip(), flags=re.DOTALL)
    parts = re.split(r"\|->|\|=>|(?<![|>=])->", body, maxsplit=1)
    if len(parts) != 2:
        return None
    text = parts[1].strip()
    text = validation._strip_parens(text)
    text = re.sub(r"^##(\[\d+:\d+\]|\d+)", "", text).strip()   # a delayed consequent still
    return validation._strip_parens(text) or None            # has to hold on its own


_EQUALITY = __import__("re").compile(r"^\s*(\w+)\s*==\s*(-?\d+)\s*$")


def generalize(corpus, clauses, rounds: int = 3) -> tuple:
    """Merge clauses that differ only in the value of one antecedent equality.

    A value-equality vocabulary produces a family per operand the stimulus happened to use:
    `in == 4 |-> ##12 done == 1`, `in == 25 |-> ...`, `in == 900 |-> ...`, all true, all
    saying the same thing about a range. Clauses that agree everywhere except in one
    `signal == value` conjunct are grouped, the interval that covers their values is
    proposed, and it is VERIFIED on the same episodes - an interval that does not hold is
    not kept, so this never weakens the guarantee set, it only states it in fewer clauses.

    A clause may vary in more than one conjunct (`ain == 1 && yout == 0`), so groups are
    formed per position and the pass repeats: each round collapses one dimension, and the
    largest group goes first so the widest interval wins.

    Returns (clauses, merged) where `merged` records what replaced what.
    """
    current, merged_all = list(clauses), []
    for _ in range(rounds):
        groups = {}
        for text in current:
            antecedent = _antecedent_text(text)
            if antecedent is None:
                continue
            parts = _conjuncts(antecedent)
            for i, part in enumerate(parts):
                match = _EQUALITY.match(part.strip().strip("()"))
                if not match:
                    continue
                key = (tuple(parts[:i] + parts[i + 1:]), match.group(1),
                       _consequent_shape(text))
                groups.setdefault(key, []).append((text, int(match.group(2)), parts, i))

        used, merged = set(), []
        for members in sorted(groups.values(), key=lambda m: -len(m)):
            members = [m for m in members if m[0] not in used]
            if len(members) < 2:
                continue
            values = sorted(v for _, v, _, _ in members)
            _, _, parts, index = members[0]
            signal = _EQUALITY.match(parts[index].strip().strip("()")).group(1)
            interval = f"{signal} >= {values[0]} && {signal} <= {values[-1]}"
            antecedent = " && ".join(parts[:index] + [interval] + parts[index + 1:])
            candidate = _rebuild(members[0][0], antecedent)
            result = validation.evaluate(corpus, candidate)
            if not result["support"] or result["violations"]:
                continue
            used.update(text for text, _, _, _ in members)
            merged.append({"clause": candidate,
                           "replaces": [text for text, _, _, _ in members]})
        if not merged:
            break
        current = [t for t in current if t not in used] + [m["clause"] for m in merged]
        merged_all += merged
    return current, merged_all


def _consequent_shape(clause: str) -> tuple:
    import re
    body = re.sub(r"^\s*G\s*\((.*)\)\s*$", r"\1", clause.strip(), flags=re.DOTALL)
    parts = re.split(r"(\|->|\|=>)", body, maxsplit=1)
    return (parts[1], parts[2].strip()) if len(parts) == 3 else (None, body)


def _rebuild(clause: str, antecedent: str) -> str:
    """The same clause with a new antecedent, keeping operator, delay and consequent."""
    operator, consequent = _consequent_shape(clause)
    return f"G({antecedent} {operator} {consequent})"


def _declared(cfg, tag, where) -> list:
    """Declared propositions eligible for one slot: 'a' antecedent, 'c' consequent."""
    return [p["exp"] for p in _vocabulary(cfg, tag) if where in p.get("loc", "a,c")]


def _touches(prop, signals) -> bool:
    from . import formula
    try:
        return bool(formula.parse(prop).signals() & set(signals))
    except formula.FormulaError:
        return False


def _mine_in_process(runs, rows, vocabulary, grammar, horizon, tag, cfg) -> list:
    """Instantiate the same templates in process, over the same declared vocabulary.

    The antecedent vocabulary is the observed-value atoms over the pass's signals, the
    rising and falling edges of its two-valued signals, and the declared propositions marked
    for the antecedent; the consequent vocabulary is the same
    set, restricted on the guarantee pass to propositions that mention an output - a
    guarantee that says nothing about an observable is dropped downstream anyway.
    """
    atoms = templates_mod.predicates(rows, vocabulary)
    edges = (templates_mod.edge_predicates(rows, vocabulary)
             if cfg.get("edge_props", True) else [])
    antecedents = atoms + edges + _declared(cfg, tag, "a")
    consequents = atoms + _declared(cfg, tag, "c")
    if tag == "guarantee":
        outputs = list(cfg.get("outputs", ()))
        consequents = [c for c in consequents if _touches(c, outputs)]
    return templates_mod.instantiate(
        runs, backends.GRAMMARS[grammar], antecedents, consequents, horizon,
        max_ant=int(cfg.get("max_antecedent_props", 2)),
        max_instances=int(cfg.get("max_instances", 800)),
        min_support=_min_support(cfg, len(rows)),
        max_per_consequent=int(cfg.get("max_per_consequent", 12)),
        compound=bool(cfg.get("compound_consequents", True)))


def _min_support(cfg, samples: int) -> int:
    """How often an instance has to fire to be worth proposing: a share of the region, at
    least two samples. HARM's --min-frank plays the same role."""
    return max(3, int(float(cfg.get("min_instance_support", 0.002)) * samples))


def _mine_temporal(trace, rows, vocabulary, grammar, horizon, workdir, tag,
                   reset=None, cfg=None, runs=None) -> list:
    """One HARM call over the whole region, or the in-process instantiator when HARM is
    not installed (ace.templates - same templates, same vocabulary, no external binary).

    `trace` is the region directory when episodes were written one per file, in which case
    HARM reads each episode as a separate trace and no mined property can span an episode
    boundary. Booleans and bitvectors are declared differently, which HARM needs in order
    to build a usable proposition vocabulary from a multi-bit signal.
    """
    if not vocabulary or trace is None:
        return []
    cfg = cfg or {}
    if not backends.available("harm"):
        return (_mine_in_process(runs, rows, vocabulary, grammar, horizon, tag, cfg)
                if runs else [])
    booleans, numerics = backends.classify_signals(rows, vocabulary)
    conf = backends.write_conf(
        backends.harm_conf(backends.GRAMMARS[grammar], booleans, numerics, horizon,
                           clustering=cfg.get("numeric_clustering",
                                              backends.NUMERIC_CLUSTERING),
                           extra_props=_vocabulary(cfg, tag)),
        Path(workdir) / f"{tag}_conf.xml")
    try:
        mined = backends.harm(trace, conf, Path(workdir) / f"{tag}_harm", reset=reset,
                              max_ass=cfg.get("max_ass"), min_frank=cfg.get("min_frank"))
    except backends.BackendMissing:
        return []
    from . import formula
    return [formula.strip_braces(clause) for clause in mined]


# --------------------------------------------------------------------- assembly

def mine(corpus, region, selection, cfg, workdir, holdout=None) -> Contract:
    """Assemble the candidate contract for one behavioral region."""
    from . import formula

    inputs = list(cfg["inputs"])
    outputs = list(cfg["outputs"])
    grammar = cfg.get("grammar", "G3")
    horizon = int(cfg["horizon"])
    eps = region["episodes"]
    csvs = region["write"]["paths"]
    rows = episodes_mod.rows_of(corpus, eps)
    region_corpus = episodes_mod.as_corpus(corpus, eps)
    workdir = Path(workdir)

    def role_of(text):
        return ("guarantee" if formula.parse(text).signals() & set(outputs)
                else "assumption")

    candidates = []

    # Episode scope: what holds at every sample of the region. Ranges are included, but a
    # range read off merged windows can be an artifact of which samples were swept in, so
    # each one still has to survive the domain-triviality, subsumption and held-out checks
    # below.
    for text in propositional_invariants(rows, inputs + outputs):
        candidates.append(Clause(text, "propositional", role_of(text), "in-process",
                                 scope="episode"))

    # Anchor scope: what holds where the region is entered. Conditioning on the trigger is
    # what turns a bound over environment-facing samples into an assumption clause: the
    # square-root region yields G(start && in >= 0 |-> in >= 0), not a global range on in.
    for trigger in selection.selected:
        anchor_rows = [corpus.runs[k].rows[t]
                       for k, t in selection.stats[trigger].anchors]   # ATCT positions
        if not anchor_rows:
            continue
        conjuncts = _conjuncts(trigger)
        for invariant in propositional_invariants(anchor_rows, inputs + outputs):
            invariant_signals = formula.parse(invariant).signals()
            # A clause guarded by a conjunct that already constrains the same signals is a
            # tautology: G(in >= 0 |-> in >= 0) says nothing. Guard on the rest of the
            # trigger instead, which is how the square-root region yields
            # G(start == 1 |-> in >= 0) - the environment assumption, not a global range.
            guard = [c for c in conjuncts
                     if not (formula.parse(c).signals() & invariant_signals)]
            if not guard:
                continue
            candidates.append(Clause(f"G({' && '.join(guard)} |-> ({invariant}))",
                                     "propositional", role_of(invariant), "in-process",
                                     scope=f"anchor:{trigger}"))

    # A trigger conjunct that constrains only environment signals is itself a candidate
    # assumption, but it is not copied into A_r wholesale: it enters only by passing the same
    # region, domain-triviality and held-out checks as any other candidate.
    for trigger in selection.selected:
        conjuncts = _conjuncts(trigger)
        for i, conjunct in enumerate(conjuncts):
            try:
                if not formula.parse(conjunct).signals() <= set(inputs):
                    continue
            except formula.FormulaError:
                continue
            rest = conjuncts[:i] + conjuncts[i + 1:]
            text = (f"G({' && '.join(rest)} |-> ({conjunct}))" if rest
                    else f"G({conjunct})")
            candidates.append(Clause(text, "trigger-derived", "assumption", "selection",
                                     scope=f"trigger:{trigger}"))

    # In split mode HARM is pointed at the directory, so it reads every episode as its own
    # trace; in concat mode there is a single region CSV.
    region_trace = (Path(csvs[0]).parent
                    if region["write"]["manifest"]["mode"] == "split" else Path(csvs[0]))
    reset = cfg.get("reset")
    backend = backends.temporal_backend()
    # Temporal environment clauses are off by default. A contract's A is a conjunction of
    # INVARIANTS - propositional, no temporal operator - so a mined `op_a_i == 100 |-> ##40
    # operator_i == 2` cannot enter A, and on the benchmark that family was 310 of 325
    # assumption-side clauses: all true of the stimulus generator, none of them assumptions.
    # `temporal_assumptions: true` keeps them, as environment observations rather than A.
    if cfg.get("temporal_assumptions", False):
        for text in _mine_temporal(region_trace, rows, inputs, grammar, horizon, workdir,
                                   "assume", reset, cfg, region_corpus.runs):
            candidates.append(Clause(text, "temporal", "assumption", backend,
                                     scope="episode"))
    for text in _mine_temporal(region_trace, rows, inputs + outputs, grammar, horizon,
                               workdir, "guarantee", reset, cfg, region_corpus.runs):
        candidates.append(Clause(text, "temporal", "guarantee", backend, scope="episode"))

    contract = Contract(event=selection.event)
    trivial_cache, seen, violated = {}, set(), []
    for clause in candidates:
        if clause.text in seen:
            contract.dropped.append({"clause": clause.text, "why": "duplicate"})
            continue
        seen.add(clause.text)

        try:
            signals = formula.parse(clause.text).signals()
        except formula.FormulaError as exc:
            contract.dropped.append({"clause": clause.text, "why": f"not evaluable: {exc}"})
            continue

        if clause.role == "assumption" and not signals <= set(inputs):
            contract.dropped.append({"clause": clause.text,
                                     "why": "assumption must constrain only environment "
                                            "signals"})
            continue
        if clause.role == "guarantee" and not signals & set(outputs):
            contract.dropped.append({"clause": clause.text,
                                     "why": "guarantee must constrain an observable output"})
            continue

        # Only guarantees have to describe the region. An assumption that holds everywhere
        # is not trivial - it IS the environment restriction the contract is about
        # (`rst_n == 1`, `ain <= 65535`), and dropping it leaves A empty.
        trivial = domain_trivial(corpus, clause.text, trivial_cache,
                                 consequent=clause.role == "guarantee")
        if trivial:
            contract.dropped.append({"clause": clause.text,
                                     "why": f"domain-trivial: {trivial}"})
            continue

        clause.region = validation.evaluate(region_corpus, clause.text)
        if clause.region["vacuous"]:
            contract.dropped.append({"clause": clause.text, "why": "vacuous on the region"})
            continue
        if clause.region["violations"]:
            contract.dropped.append({"clause": clause.text,
                                     "why": f"violated on {clause.region['violations']} of "
                                            f"{clause.region['support']} region positions"})
            if clause.role == "guarantee":
                violated.append(clause)
            continue

        clause.global_support = validation.evaluate(corpus, clause.text)
        clause.region_specific = bool(clause.global_support["violations"])

        (contract.assumptions if clause.role == "assumption"
         else contract.guarantees).append(clause)

    for role in ("assumptions", "guarantees"):
        clauses = getattr(contract, role)
        kept, dropped = validation.reduce_subsumed(region_corpus,
                                                   [c.text for c in clauses])
        setattr(contract, role, [c for c in clauses if c.text in kept])
        contract.dropped += dropped

    if cfg.get("generalize", True):
        for role in ("assumptions", "guarantees"):
            clauses = getattr(contract, role)
            by_text = {c.text: c for c in clauses}
            kept, merged = generalize(region_corpus, list(by_text))
            for record in merged:
                # a merged clause can itself be merged in a later round, so fall back to
                # any member when the first one has already been replaced
                first = next((by_text[t] for t in record["replaces"] if t in by_text),
                             clauses[0])
                by_text[record["clause"]] = Clause(
                    record["clause"], first.kind, first.role, first.backend,
                    scope=first.scope, region=validation.evaluate(region_corpus,
                                                                  record["clause"]))
                contract.dropped += [{"clause": t, "why": f"generalised into "
                                      f"`{record['clause']}`"}
                                     for t in record["replaces"]]
            setattr(contract, role, [by_text[t] for t in kept])
        # generalisation can make two clauses equal in strength, so subsume once more
        for role in ("assumptions", "guarantees"):
            clauses = getattr(contract, role)
            kept, dropped = validation.reduce_subsumed(region_corpus,
                                                       [c.text for c in clauses])
            setattr(contract, role, [c for c in clauses if c.text in kept])
            contract.dropped += dropped

    if cfg.get("refine_assumptions", True):
        contract.dropped += refine(contract, region_corpus, rows, violated, inputs, cfg)

    contract.triggers = [selection.stats[t].report() for t in selection.selected]
    contract.provenance = {
        "event": selection.event,
        "triggers": selection.selected,
        "grammar": grammar,
        "horizon": horizon,
        "h_pre": cfg["h_pre"],
        "h_post": cfg["h_post"],
        "episode_mode": region["write"]["manifest"]["mode"],
        "episodes": region["write"]["manifest"]["episodes"],
        "episode_samples": region["write"]["manifest"]["samples"],
        "episode_provenance_ok": region["write"]["manifest"]["provenance_ok"],
        "temporal_backend": backends.temporal_backend(),
        "propositional_backend": "in-process",
        "region_csvs": csvs[:8] + (["..."] if len(csvs) > 8 else []),
    }
    contract.metrics = {
        "assumptions": len(contract.assumptions),
        "guarantees": len(contract.guarantees),
        "dropped": len(contract.dropped),
        "trace_consistent": trace_consistency(region_corpus, contract),
    }
    contract.validation = validation.validate(contract, holdout_region(
        holdout, selection, cfg), cfg.get("references", []))
    return contract


def refine(contract, region_corpus, rows, violated, inputs, cfg) -> list:
    """Choose assumptions that make rejected guarantees hold, instead of only reporting the
    invariants the region happens to have.

    A contract's A is not a summary of the region - it is the environment restriction chosen
    so that G holds. The region the flow decomposes is wider than a contract's domain: the
    Ibex divider's `valid_o` region contains reset samples and divide-by-zero requests, so
    the invariants of that region are loose bounds (`div_en_i <= 1`) while the contract wants
    `rst_n == 1` and `op_b_i >= 1`. Those cannot come from the region's invariants because
    they are not true of it.

    So each candidate restriction over the environment is tried as a GUARD: a guarantee that
    was violated on the region is re-checked at the samples where the guard holds
    (`validation.evaluate_under`, the same semantics the benchmark validates references
    with). A guard that turns at least `min_unlocked` rejected guarantees into clean ones
    earns its place in A, together with those guarantees, and every one of them records the
    guard it is owed under.

    Candidates are the equalities and bounds of the control-facing inputs, which is where an
    environment restriction lives; the search is one pass, capped, and never weakens anything
    that already held.
    """
    if not violated:
        return []
    dropped = []
    candidates = [c for c in templates_mod.predicates(rows, inputs)
                  if validation.evaluate(region_corpus, c)["violations"]]
    ranked = sorted(candidates,
                    key=lambda c: -validation.evaluate(region_corpus, c)["support"])
    limit = int(cfg.get("max_refinements", 4))
    min_unlocked = int(cfg.get("min_unlocked", 1))
    owed = {c.text for c in contract.guarantees}

    for guard in ranked[:int(cfg.get("max_refinement_candidates", 8))]:
        if len(contract.assumptions) and limit <= 0:
            break
        unlocked = []
        for clause in violated:
            if clause.text in owed:
                continue
            result = validation.evaluate_under(region_corpus, clause.text, [guard])
            if result["support"] and not result["violations"]:
                unlocked.append((clause, result))
        if len(unlocked) < min_unlocked:
            continue
        limit -= 1
        contract.assumptions.append(Clause(guard, "propositional", "assumption",
                                           "refinement", scope="refined",
                                           region=validation.evaluate(region_corpus, guard)))
        for clause, result in unlocked:
            clause.region = result
            clause.scope = f"under {guard}"
            contract.guarantees.append(clause)
            owed.add(clause.text)
            dropped.append({"clause": clause.text,
                            "why": f"restored under the assumption `{guard}`"})
    return dropped


def holdout_region(holdout, selection, cfg):
    """Decompose the held-out corpus with the SAME event and triggers, and return its
    episodes as a corpus.

    Region clauses are claims about a behavioral region, so they have to be checked on the
    corresponding region of the independent traces. Checking them against whole held-out
    runs would count every sample outside the region as a violation and reject exactly the
    region-specific clauses the flow is meant to find.
    """
    if holdout is None:
        return None
    from . import labeling

    anchors = set(labeling.label(holdout, selection.event).occurrences)
    for trigger in selection.selected:
        anchors |= set(labeling.occurrences_of(holdout, trigger))
    if not anchors:
        return None
    eps = episodes_mod.extract(holdout, anchors, int(cfg["h_pre"]), int(cfg["h_post"]))
    return episodes_mod.as_corpus(holdout, eps)


def trace_consistency(region_corpus, contract) -> dict:
    """Equation (4): on the region's episodes, does (AND A) imply (AND G)?

    Empirical only. It is not implementation-level soundness M |= A => G.
    """
    from . import formula

    assumptions = [formula.parse(c.text) for c in contract.assumptions]
    guarantees = [formula.parse(c.text) for c in contract.guarantees]
    if not guarantees:
        return {"positions": 0, "violations": 0, "rate": None,
                "note": "no guarantees to check"}
    checked = violations = 0
    for run in region_corpus.runs:
        for t in range(len(run)):
            if not all(a.holds(run, t) for a in assumptions):
                continue
            # a guarantee claims something at t only where it is supported: its antecedent
            # fires AND the run is long enough to decide it. Counting a bounded-response
            # clause as violated in the last H samples of an episode - where the window
            # simply leaves the trace - reports a contradiction that is not there.
            owed = [g for g in guarantees if g.support(run, t)]
            if not owed:
                continue
            checked += 1
            if not all(g.holds(run, t) for g in owed):
                violations += 1
    return {"positions": checked, "violations": violations,
            "rate": (violations / checked) if checked else None,
            "method": validation.TRACE_BOUNDED}
