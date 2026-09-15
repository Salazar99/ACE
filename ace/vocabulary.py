"""Atom vocabulary read off the traces: the propositions a clause can be built from.

HARM builds its own vocabulary by clustering each signal's values, and that is what it
mines over. This module builds the flow's side of the same idea, for the three places that
need propositions without asking a miner for them:

* `__main__.observed_predicates` - the trigger candidates, unioned with the antecedents
  HARM returns. Clustering only ever produces comparisons against constants, so an ordering
  between two signals (`A > B`) is not in HARM's vocabulary and has to be added here.
* `mining.refine` - the guard candidates for an assumption that has to restrict the
  environment, which are the equalities and bounds of the control-facing inputs.
* `mining._vocabulary` - the propositions DECLARED to HARM for a mining pass (`compound`).
  HARM fills a template slot with exactly ONE declared proposition, so a contract whose
  antecedent is a bus phase, an occupancy value, a request edge with its operands or a
  one-hot condition is unreachable until that whole condition is a proposition of its own.

Nothing here decides anything: `validation.evaluate` scores every proposition and every
clause built from one, with formula.py's semantics.
"""
from __future__ import annotations

import re

from . import formula, traces

#: Declared widths a CSV column can have come from, smallest first. Used to read a wrapped
#: negative (`in >= 2147483648`) and a no-overflow bound (`a + b <= 4294967295`) off data
#: that carries neither a sign nor a width.
WIDTHS = (8, 16, 32, 64)

_STEM = re.compile(r"^(.*?)\d+$")


def _num(value):
    return int(value) if float(value).is_integer() else value


def _columns(rows, signals) -> dict:
    """Numeric column per signal, in sample order; a signal with a gap is left out.

    Stricter than what `predicates` needs: a relation between two signals has to be decided
    at every sample or it is not an invariant candidate at all.
    """
    out = {}
    for signal in signals:
        column = [row.get(signal) for row in rows]
        if all(isinstance(v, (int, float)) and not isinstance(v, bool) for v in column):
            out[signal] = column
    return out


def _width(hi) -> int | None:
    """The narrowest declared width a value this large fits in."""
    return next((w for w in WIDTHS if 0 <= hi < (1 << w)), None)


def wide_signals(rows, signals, small_domain: int = 24) -> set:
    """The data-path signals: the ones that take more values than a condition is written on.

    Not a declaration in the config, a count over the traces. A contract's antecedent is
    written on control - a phase, an opcode, an address, an occupancy - and a control signal
    has a handful of values, while a data bus has as many as the stimulus produced. The
    distinction matters for `conjunctions`: an atom over a data bus (`pwdata <= 127`) splits
    the samples roughly in half wherever it is put, so it looks like the most informative
    conjunct available and pushes out every bus phase, which by construction selects few.
    """
    out = set()
    for signal in signals:
        values = {row.get(signal) for row in rows} - {None}
        if len(values) > small_domain:
            out.add(signal)
    return out


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
    for signal in two_valued(rows, signals):
        out.append(f"(!({signal} == 1)) ##1 ({signal} == 1)")
        out.append(f"({signal} == 1) ##1 (!({signal} == 1))")
    return out


def two_valued(rows, signals) -> list:
    """The signals that take both of {0, 1} and nothing else: the ones that have edges."""
    out = []
    for signal in signals:
        values = {row.get(signal) for row in rows} - {None}
        if values == {0, 1}:
            out.append(signal)
    return out


# ------------------------------------------------- what an atom family cannot express

def relations(rows, signals, max_pairs: int = 48) -> list:
    """Propositions that relate two signals, which value clustering never produces.

    Two families, both read off the pair rather than off either member. The orderings and
    equality: `operand_a_i >= operand_b_i` is the whole difference between the ALU's signed
    and unsigned comparison contracts, and no bound on either operand comes near it. And the
    no-overflow bound on their sum, `operand_a_i + operand_b_i <= 4294967295`, which is how
    an arithmetic contract says "this result did not wrap" - the condition under which the
    result equals the sum at all, and the one conjunct of `ALU1` that was not declarable.

    `mining.interface_vocabulary` has the output-against-input half of this; these are the
    input-against-input ones, which no output-guided family emits.

    Only signals with more than two values take part. An ordering between two flags is a
    boolean identity rather than a relation (`prdata >= pslverr` is true wherever `prdata`
    is not zero), and on a design with six control bits that family alone is a hundred
    propositions that say nothing and crowd out the ones that do.
    """
    columns = _columns(rows, signals)
    names = [s for s in signals if s in columns and len(set(columns[s])) > 2]
    out, pairs = [], 0
    for i, a in enumerate(names):
        for b in names[i + 1:]:
            if pairs >= max_pairs:
                return out
            pairs += 1
            out += [f"{a} == {b}", f"{a} >= {b}", f"{a} < {b}"]
            width = _width(max(max(columns[a]), max(columns[b])))
            if width:
                out.append(f"{a} + {b} <= {(1 << width) - 1}")
    return out


def sign_predicates(rows, signals, least: int = 32) -> list:
    """The sign-bit split of a signal whose observed values reach the top half of its width.

    A negative operand written into an unsigned CSV column comes back as a large positive
    number, so `in < 0` is not a statement about the trace at all - `in >= 2147483648` is the
    same statement in the data's own terms. Nothing else produces it: `predicates` reads
    bounds off the observed extremes, and that value is the minimum of the column only by
    accident. The square root's error contracts are conditioned on nothing else.

    `least` keeps this to the widths where reaching the top half is evidence of a wrapped
    negative rather than of an ordinary value. An 8-bit data bus that takes 200 is a data
    bus that takes 200; a 32-bit operand that takes 4294967295 is a -1 the CSV could not
    write, and splitting the first produces `pwdata <= 127`, an atom that cuts any sample
    set in half and means nothing.
    """
    out = []
    for signal, column in _columns(rows, signals).items():
        hi = max(column)
        width = _width(hi)
        if width is None or width < least or min(column) < 0 or hi < (1 << (width - 1)):
            continue   # a column that carries its own sign needs no reinterpretation
        out += [f"{signal} >= {1 << (width - 1)}", f"{signal} <= {(1 << (width - 1)) - 1}"]
    return out


def group_sums(rows, signals, min_members: int = 3, top: int = 6) -> list:
    """Sums over a family of same-stem two-valued signals: `req0 + req1 + req2 + req3 == 1`.

    Mutual exclusion, one-hot encoding and "exactly one request outstanding" are statements
    about a bit vector that the traces carry as one column per bit, and no family that pairs
    signals two at a time can express them - which is why `arbiter4`, the design whose every
    contract is one of these, loses two thirds of its recall the moment the hand-written
    hints are taken away.

    The family is found by stem, the name with its trailing digits removed, which is how a
    bus split into columns is named in every design in the benchmark.
    """
    # ponytail: stem = name minus trailing digits. A design naming its bits `gnt_a/gnt_b`
    # needs the family declared in `extra_props`; none in the benchmark does.
    columns = _columns(rows, signals)
    families = {}
    for signal in signals:
        match = _STEM.match(signal)
        # a bit of the bus that never fires in this region is still a bit of the bus, so
        # membership is "takes no value outside {0, 1}", not `two_valued`
        if match and match.group(1) and set(columns.get(signal, [2])) <= {0, 1}:
            families.setdefault(match.group(1), []).append(signal)
    out = []
    for members in families.values():
        if len(members) < min_members:
            continue
        expression = " + ".join(members)
        totals = {sum(columns[s][t] for s in members) for t in range(len(rows))}
        out += [f"{expression} == {_num(k)}" for k in sorted(totals)[:top]]
        out.append(f"{expression} <= 1")
    return out


# ------------------------------------------------------- the single-slot problem

def masks(rows, atoms, max_share: float = 1.0) -> dict:
    """Sample set of each atom, as a bitmask over `rows`.

    An atom that never holds cannot start a conjunction and one that holds at more than
    `max_share` of the samples cannot narrow one to any useful degree - the conjunction
    without it says very nearly the same thing, and `predicates` already reports the bound
    on its own. That threshold is what keeps a no-overflow bound that is true of 97% of an
    8-bit address plus an 8-bit data word (`paddr + pwdata <= 255`) out of the antecedents
    of a bus contract, while leaving the same family in place on the design whose adder
    actually wraps.

    An atom the evaluator cannot decide on this data (an unknown signal, a sample with no
    value yet) is dropped rather than raised: it is a candidate, not a claim.
    """
    if not rows:
        return {}
    run = traces.Run("vocabulary", [], list(rows))
    ceiling = int(max_share * len(rows))
    out = {}
    for atom in atoms:
        try:
            node = formula.parse(atom)
            mask = 0
            for t in range(len(rows)):
                if node.holds(run, t):
                    mask |= 1 << t
        except (formula.FormulaError, formula.Undefined, ArithmeticError):
            continue
        if 0 < mask.bit_count() <= ceiling and mask.bit_count() < len(rows):
            out[atom] = mask
    return out


def conjunctions(rows, atoms, arity: int = 4, limit: int = 160, beam: int = 384,
                 max_share: float = 0.95, min_share: float = 0.01, wide=()) -> list:
    """Conjunctions of atoms over distinct signals, kept only where the traces support them.

    HARM fills a template's antecedent slot with exactly ONE declared proposition, and its
    decision tree - the machinery that would build a conjunction for it - is only constructed
    for a template carrying a decision-tree placeholder, which no grammar the benchmark runs
    has. So a contract that keys on a bus phase (`psel == 1 && penable == 0 && paddr <= 2`)
    or on an occupancy (`count == 4 && wr_en == 1 && rd_en == 0`) is reachable only when that
    conjunction is declared as a proposition of its own. Enumerating every combination of a
    60-atom vocabulary is hopeless; enumerating the ones the traces actually exhibit is not.

    A conjunction is kept when it holds somewhere, does not hold everywhere, and holds
    STRICTLY less often than the conjunction it extends: an atom that removes no sample adds
    no information, and `paddr <= 3` conjoined onto a phase where `paddr` never exceeds 3 is
    exactly that. Two conjunctions with the same sample set are one proposition written two
    ways, so only the first survives. That is what collapses four control bits from thousands
    of combinations to the handful of phases the bus has.

    Those three tests are also why nothing here requires the conjuncts to be over DISTINCT
    signals. `paddr == 1 && paddr == 3` holds nowhere, `paddr >= 0 && paddr == 3` holds where
    `paddr == 3` does and is that atom written twice - both are already rejected - while
    `req0 + req1 + req2 + req3 == 1 && req0 == 1`, which a distinctness rule would reject with
    them, is the antecedent of four of `arbiter4`'s contracts.

    Each width gets its own share of `limit`, because truncating a flat list would spend the
    whole budget on pairs and never reach the four-proposition antecedents that are the
    reason this family exists. Within a width the ranking is two things, both of them
    lessons from a measured run:

    * fewest `wide` signals first. An atom over a 256-valued data bus splits any sample set
      near in half wherever it is put, so it always looks like the most informative conjunct
      available; one run spent its entire budget on `pready == 0 && pwdata <= 127` and not
      one bus phase reached the miner.
    * then MOST SELECTIVE first, above a `min_share` floor. A contract antecedent names the
      situation the obligation is about, and that situation is a minority of the samples;
      ranking by support instead puts the negations first, because "nothing is happening"
      is the most frequent thing a set of control flags ever says. On `arbiter4` that filled
      the whole budget with `req0 == 0 && gnt0 == 0` and left every one-hot request
      combination - the antecedent of eight of its contracts - undeclared. The floor is what
      keeps selectivity from running to a conjunction that holds at two samples.
    """
    wide = set(wide)
    sample_sets = masks(rows, atoms, max_share)
    if not sample_sets or arity < 2:
        return []
    signals = {}
    for atom in sample_sets:
        signals[atom] = formula.parse(atom).signals()
    ordered = list(sample_sets)
    position = {atom: i for i, atom in enumerate(ordered)}
    level = [((atom,), signals[atom], sample_sets[atom]) for atom in ordered]
    seen = {mask for _, _, mask in level}
    per_width = max(1, limit // (arity - 1))
    floor = max(1, int(min_share * len(rows)))
    out = []
    for _ in range(arity - 1):
        grown = []
        for parts, covered, mask in level:
            for atom in ordered[position[parts[-1]] + 1:]:
                joint = mask & sample_sets[atom]
                if joint.bit_count() < floor or joint == mask or joint in seen:
                    continue
                seen.add(joint)
                grown.append((parts + (atom,), covered | signals[atom], joint))
        if not grown:
            break
        grown.sort(key=lambda c: (len(c[1] & wide), c[2].bit_count()))
        out += [" && ".join(parts) for parts, _, _ in grown[:per_width]]
        level = grown[:beam]
    return out[:limit]


def _wide_count(text, wide) -> int:
    try:
        return len(formula.parse(text).signals() & set(wide))
    except formula.FormulaError:
        return 0


def edge_props(rows, signals, atoms=(), scope=None, per_signal: int = 4, arity: int = 4,
               max_share: float = 0.95, wide=()) -> list:
    """Request transitions as declarations, alone and guarded by what is sampled with them.

    Two forms of the same proposition. HARM's proposition grammar has no `##` at all, so a
    transition can only be declared to it as `$rose(x)` / `$fell(x)`; `formula.py` has no
    `$rose`, and evaluates the two-sample form instead. HARM prints a declared proposition
    back verbatim, so each entry carries both and `mining._readable` swaps one for the other
    on read-back - a textual swap over propositions this module wrote, not a second parser.

    The guard goes INSIDE the second element of the sequence
    (`(!(x == 1)) ##1 (x == 1 && operator_i == 2)`) and not beside it: `formula.And`
    intersects match ENDS, so a two-sample edge conjoined with a same-sample predicate
    matches nowhere at all. This is the shape of every response contract the divider has -
    the request is the transition, and what separates one response from another is the
    operator and operand sampled on the cycle the request is taken.

    Guards are therefore built from the ONSET samples rather than from the region: what
    distinguishes one request from another is a question about the cycles the requests are
    taken on, and a conjunction ranked over the whole region is ranked mostly over cycles
    where no request happens. The widest guard wins, because a looser one is already covered
    by the plain edge together with whatever HARM puts beside it.

    `scope` - the environment signals, normally - limits both which edges are guarded and
    what may guard them. A guarded edge states a request and the conditions the environment
    presented with it; drawing the guard from the outputs instead produces a description of
    the response conditioned on itself, which is how `$rose(valid_o) && multdiv_result_o <=
    2147483647` gets proposed and then dropped as a domain restated.
    """
    scope = set(signals if scope is None else scope)
    mentioned = {}
    for atom in atoms:
        try:
            names = formula.parse(atom).signals()
        except formula.FormulaError:
            continue
        if names <= scope:
            mentioned[atom] = names
    out = []
    for signal in two_valued(rows, signals):
        rise, fall = f"$rose({signal})", f"$fell({signal})"
        out.append({"exp": rise, "loc": "a,dt",
                    "ace": f"((!({signal} == 1)) ##1 ({signal} == 1))"})
        out.append({"exp": fall, "loc": "a,dt",
                    "ace": f"(({signal} == 1) ##1 (!({signal} == 1)))"})
        # ponytail: edge positions read off the rows as handed in. In split mode those are
        # episodes concatenated, so an episode seam can look like an edge; it costs a
        # candidate that is then dropped, never a wrong clause - HARM mines each episode
        # separately and validation re-checks every clause on the region corpus.
        onsets = [rows[t] for t in range(1, len(rows))
                  if rows[t - 1].get(signal) == 0 and rows[t].get(signal) == 1]
        free = [a for a, s in mentioned.items() if signal not in s]
        if not onsets or not free or signal not in scope:
            continue
        pool = masks(onsets, free, max_share)
        pool.update(masks(onsets, conjunctions(onsets, free, arity=arity,
                                               limit=per_signal * 4, max_share=max_share,
                                               wide=wide), max_share))
        ranked = sorted(pool, key=lambda g: (_wide_count(g, wide), -g.count("&&"),
                                             pool[g].bit_count()))
        for guard in ranked[:per_signal]:
            out.append({"exp": f"{rise} && {guard}", "loc": "a,dt",
                        "ace": f"((!({signal} == 1)) ##1 ({signal} == 1 && {guard}))"})
    return out


def compound(rows, signals, outputs=(), declared=(), arity: int = 4, limit: int = 64,
             edges: bool = True, per_signal: int = 4) -> list:
    """Every proposition the families above produce, as HARM `<prop>` declarations.

    This is the answer to "the antecedent is one proposition slot": everything a reference
    clause needs in that slot, built from the traces rather than from the references.

    * the value equalities of a multi-valued signal, so an occupancy equality is declared
      even where clustering did not derive one - `count == 4` and `count == 5` appear
      nowhere in the vocabulary HARM builds for the FIFO on its own;
    * `relations`, `sign_predicates` and `group_sums`, the three things a family of
      comparisons against constants cannot say;
    * `conjunctions` of all of those and of the single propositions already declared, over
      distinct signals and only where the traces show the combination happening;
    * `edge_props`, the transitions, alone and guarded.

    Every atom is an INGREDIENT of the conjunctions; only the ones HARM cannot build for
    itself are also DECLARED. `<prop>` for every two-valued signal and `<numeric
    clustering=...>` for every other is where a bound and an equality against a constant
    already come from, and re-declaring those costs a slot in every budget downstream while
    buying nothing - the clause count out of a pass, and the quadratic subsumption over it,
    is what the vocabulary size is actually spent on.

    `loc` is decided per CONJUNCT, not per proposition. A conjunct that names no output is
    not an obligation of the design, so a conjunction containing one is an antecedent only -
    `G(a |-> psel == 1 && pready == 1)` would assert that the environment asserts select. A
    conjunct that does name an output is fine in either slot even when it also names an
    input, because it relates the two rather than constraining the environment, and
    `prdata == pwdata` and `dout == din` - read-back contracts, one per protocol design - are
    exactly that shape. A pass with no outputs in scope is the assumption pass, where
    everything is both.
    """
    if not rows:
        return []
    signals = list(signals)
    outputs = [s for s in outputs if s in signals]
    inputs = set(signals) - set(outputs)
    single = [p["exp"] if isinstance(p, dict) else p for p in declared]
    # top=0: the equalities of a SMALL-domain signal (an opcode, an occupancy, an address)
    # and nothing from a wide one. `pwdata == 53` is the value the stimulus happened to
    # write, and conjoining it produces a proposition per sample.
    values = predicates(rows, signals, top=0)
    novel = (relations(rows, signals) + sign_predicates(rows, signals)
             + group_sums(rows, signals))
    flags = set(two_valued(rows, signals))
    novel += [a for a in values
              if a.split(" ")[1] == "==" and a.split(" ")[0] not in flags]
    atoms = list(dict.fromkeys(values + novel + [p for p in single if "&&" not in p]))
    data = wide_signals(rows, signals)
    conjoined = conjunctions(rows, atoms, arity=arity, limit=limit, wide=data)

    produced = set(outputs)

    def loc_of(text):
        if not produced:
            return "a,c,dt"
        try:
            parts = [formula.parse(p).signals() for p in text.split(" && ")]
        except formula.FormulaError:
            return "a,dt"
        return "a,c,dt" if all(part & produced for part in parts) else "a,dt"

    out = [{"exp": text, "loc": loc_of(text)}
           for text in list(dict.fromkeys(novel)) + conjoined]
    if edges:
        out += edge_props(rows, signals, atoms, scope=inputs or None,
                          per_signal=per_signal, arity=arity, wide=data)
    return out


def demo():
    rows = [{"op": 0, "req": 0, "acc": -2}, {"op": 1, "req": 1, "acc": 0},
            {"op": 2, "req": 1, "acc": 5}, {"op": 1, "req": 0, "acc": 5}]

    atoms = predicates(rows, ["op", "acc"])
    assert "op == 0" in atoms and "op == 1" in atoms and "op == 2" in atoms, atoms
    assert "op >= 0" in atoms and "op <= 2" in atoms, atoms
    assert "acc >= 0" in atoms and "acc < 0" in atoms, atoms   # the sign split
    assert atoms == list(dict.fromkeys(atoms)), atoms          # no duplicates

    # a signal above small_domain keeps the most frequent values plus its bounds
    wide = [{"d": v} for v in range(40)] + [{"d": 7}] * 5
    assert "d == 7" in predicates(wide, ["d"], top=2, small_domain=24)
    assert "d <= 39" in predicates(wide, ["d"], top=2, small_domain=24)

    edges = edge_predicates(rows, ["op", "req", "acc"])
    assert edges == ["(!(req == 1)) ##1 (req == 1)",
                     "(req == 1) ##1 (!(req == 1))"], edges     # two-valued signals only

    # --- the families a comparison against a constant cannot express
    pairs = relations(rows, ["op", "acc"])
    assert "op >= acc" in pairs and "op == acc" in pairs, pairs
    assert "op + acc <= 255" in pairs, pairs                    # the no-overflow bound

    wrapped = [{"in": 5}, {"in": 4294967295}]
    assert sign_predicates(wrapped, ["in"]) == ["in >= 2147483648", "in <= 2147483647"]
    assert sign_predicates([{"in": 5}, {"in": 9}], ["in"]) == []   # top half never reached
    assert sign_predicates(rows, ["acc"]) == []                    # already signed

    onehot = [{"req0": 1, "req1": 0, "req2": 0}, {"req0": 0, "req1": 1, "req2": 0},
              {"req0": 0, "req1": 0, "req2": 0}]
    sums = group_sums(onehot, ["req0", "req1", "req2"])
    assert "req0 + req1 + req2 == 1" in sums and "req0 + req1 + req2 <= 1" in sums, sums
    assert group_sums(onehot, ["req0", "req1"]) == []           # a pair is not a bus

    # a one-hot sum conjoined with one of its own bits - the arbiter's antecedent, and what
    # a distinct-signals rule would have thrown out along with `paddr == 1 && paddr == 3`
    grants = [{"req0": a, "req1": b, "req2": c}
              for a in (0, 1) for b in (0, 1) for c in (0, 1)]
    onehot_atoms = (group_sums(grants, ["req0", "req1", "req2"])
                    + predicates(grants, ["req0", "req1", "req2"], top=0))
    assert "req0 + req1 + req2 == 1 && req0 == 1" in conjunctions(grants, onehot_atoms), (
        conjunctions(grants, onehot_atoms))

    # --- the single-slot problem: a bus phase as ONE proposition
    bus = [{"psel": 1, "penable": 0, "paddr": 1}, {"psel": 1, "penable": 1, "paddr": 1},
           {"psel": 1, "penable": 0, "paddr": 5}, {"psel": 0, "penable": 0, "paddr": 0},
           {"psel": 0, "penable": 0, "paddr": 1}]
    wide_props = conjunctions(bus, predicates(bus, ["psel", "penable", "paddr"]))
    assert "psel == 1 && penable == 0 && paddr == 1" in wide_props, wide_props
    for text in wide_props:                     # every one is observed and discriminating
        held = masks(bus, [text])
        assert held and 0 < held[text].bit_count() < len(bus), text
    assert len(set(masks(bus, wide_props).values())) == len(masks(bus, wide_props)), (
        "two conjunctions with the same sample set are one proposition written twice")

    # a data-path atom splits any sample set near in half, so ranking on support alone
    # would put it ahead of every bus phase
    noisy = [dict(row, pwdata=(7 * i) % 251) for i, row in enumerate(bus * 24)]
    signals3 = ["psel", "penable", "paddr", "pwdata"]
    data = wide_signals(noisy, signals3)
    assert data == {"pwdata"}, data
    ranked = conjunctions(noisy, predicates(noisy, signals3, top=0), limit=8, wide=data)
    assert ranked and "pwdata" not in ranked[0], ranked
    assert any("psel" in c and "penable" in c for c in ranked), ranked

    # the situation a contract is about is a minority of the samples, so the most selective
    # conjunction wins: ranking by support puts "nothing is happening" first every time
    flags = ([{"a": 0, "b": 0, "c": 0}] * 30 + [{"a": 1, "b": 0, "c": 0}] * 6
             + [{"a": 0, "b": 1, "c": 1}] * 6 + [{"a": 1, "b": 1, "c": 0}] * 4)
    ranked = conjunctions(flags, predicates(flags, ["a", "b", "c"], top=0), limit=3)
    assert ranked[0] == "a == 1 && b == 1", ranked        # not `a == 0 && b == 0`, which
    assert masks(flags, ranked[:1])[ranked[0]].bit_count() == 4, ranked   # holds 30 times

    # --- edges carry both forms: HARM's grammar has no `##`, formula.py has no `$rose`
    handshake = [{"en": 0, "opcode": 2}, {"en": 1, "opcode": 2},
                 {"en": 0, "opcode": 7}, {"en": 1, "opcode": 7}]
    props = edge_props(handshake, ["en", "opcode"], ["opcode == 2", "opcode == 7"])
    by_exp = {p["exp"]: p["ace"] for p in props}
    assert by_exp["$rose(en)"] == "((!(en == 1)) ##1 (en == 1))", by_exp
    assert by_exp["$rose(en) && opcode == 2"] == (
        "((!(en == 1)) ##1 (en == 1 && opcode == 2))"), by_exp   # guard INSIDE the sequence
    run = traces.Run("demo", [], handshake)
    guarded = formula.parse(by_exp["$rose(en) && opcode == 2"])
    assert guarded.ends(run, 0) == [1] and not guarded.ends(run, 2), by_exp

    declarations = compound(bus, ["psel", "penable", "paddr"], outputs=["paddr"])
    locs = {d["exp"]: d["loc"] for d in declarations}
    assert "psel == 1" not in locs, "HARM declares a flag itself; re-declaring buys nothing"
    assert locs["paddr == 1"] == "a,c,dt", locs
    assert locs["psel == 1 && penable == 0 && paddr == 1"] == "a,dt", locs
    # a relation is an obligation even though it names an input: it relates the two
    readback = compound([{"din": v, "dout": (v + 1) % 7, "en": v % 2} for v in range(14)],
                        ["din", "en", "dout"], outputs=["dout"])
    assert {"exp": "din == dout", "loc": "a,c,dt"} in readback, readback
    assert not [d for d in readback
                if d["loc"] != "a,dt" and "en" in d["exp"] and "dout" not in d["exp"]], (
        "a conjunct that names no output is not an obligation of the design")
    print(f"vocabulary ok: {len(atoms)} atoms, {len(edges)} edges, "
          f"{len(wide_props)} conjunctions, {len(declarations)} declarations")


if __name__ == "__main__":
    demo()
