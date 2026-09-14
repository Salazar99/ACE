"""Atom vocabulary read off the traces: the propositions a clause can be built from.

HARM builds its own vocabulary by clustering each signal's values, and that is what it
mines over. This module builds the flow's side of the same idea, for the two places that
need propositions without asking a miner for them:

* `__main__.observed_predicates` - the trigger candidates, unioned with the antecedents
  HARM returns. Clustering only ever produces comparisons against constants, so an ordering
  between two signals (`A > B`) is not in HARM's vocabulary and has to be added here.
* `mining.refine` - the guard candidates for an assumption that has to restrict the
  environment, which are the equalities and bounds of the control-facing inputs.

Nothing here decides anything: `validation.evaluate` scores every proposition and every
clause built from one, with formula.py's semantics.
"""
from __future__ import annotations


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
    print(f"vocabulary ok: {len(atoms)} atoms, {len(edges)} edges")


if __name__ == "__main__":
    demo()
