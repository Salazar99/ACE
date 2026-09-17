#!/usr/bin/env python3
"""Which region-local obligations can undecomposed mining state at all?

    python3 tools/reachability.py --out results/reachability.json
    python3 tools/reachability.py --demo

The flow mines a region: a clause holds there because the samples that would falsify it are
outside the episodes. The control mines whole traces, and HARM fills a template's antecedent
with exactly ONE declared proposition, so to state the same obligation it needs the region's
characterising condition conjoined into a proposition its vocabulary already contains. The
flow never needs that - it gets the condition by restricting which samples the miner sees.
Where the vocabulary lacks the conjunction, the obligation is beyond the control entirely.

That is the gap this measures, over the clauses the flow already produced:

    the control can state an obligation `G(P |-> Q)`  iff  some declared proposition D makes
    `G(D |-> Q)` true over the WHOLE corpus and D covers at least `--cover` of the positions
    where the flow's clause is owed and met.

Existence alone is not the question. Among a hundred declared propositions there is nearly
always some very narrow one whose support sits inside Q, which makes a globally true clause
that states almost nothing; requiring coverage is what makes the test mean "the same
obligation" rather than "a true sentence with the same consequent".

Reads `results/declared/<design>/contracts.json` and rebuilds the control's vocabulary in
process with the same call `tools/baseline.py` makes. Nothing is re-mined.
"""
from __future__ import annotations

import argparse
import json
import sys
from pathlib import Path

ROOT = Path(__file__).resolve().parents[1]
sys.path.insert(0, str(ROOT))

from ace import formula, mining, traces

#: Thresholds reported alongside the chosen one, so the choice is visible rather than tuned.
SENSITIVITY = (0.5, 0.8, 0.95)


def masks(rows, texts) -> dict:
    """Bitmask per text over `rows`; a text the evaluator cannot decide is left out."""
    run = traces.Run("reachability", [], list(rows))
    out = {}
    for text in texts:
        try:
            node = formula.parse(text)
            mask = 0
            for t in range(len(rows)):
                if node.holds(run, t):
                    mask |= 1 << t
        except (formula.FormulaError, formula.Undefined, ArithmeticError):
            continue
        out[text] = mask
    return out


def globally_true(per_run, D, Q, next_cycle) -> bool:
    """Is `G(D |-> Q)` (or `|=>`) true at every position of every run?

    Masks are per run, so shifting for `|=>` cannot carry an obligation across a trace
    boundary: the bit that would fall off the end of a run is dropped by `& full`, which is
    the same finite-trace rule `formula.Delay` applies.
    """
    for run_masks, size in per_run:
        if D not in run_masks or Q not in run_masks:
            return False
        dm, qm, full = run_masks[D], run_masks[Q], (1 << size) - 1
        fired = ((dm << 1) & full) if next_cycle else dm
        if fired & ~qm:
            return False
    return True


def obligations(design: str, results_root: Path) -> list:
    """Region-specific implications of the flow, as `(antecedent, consequent, next_cycle)`.

    Windowed clauses are excluded: `##[1:H]` is not decided by a subset test on shifted
    masks, and guessing would put a number in the paper that the method does not support.
    Consequents that are not declared propositions are excluded too - those are
    `mining.generalize` interval output, produced after mining, so the control's inability to
    state them says nothing about decomposition.
    """
    path = results_root / design / "contracts.json"
    if not path.exists():
        return []
    out = []
    for region in json.loads(path.read_text())["regions"]:
        if region.get("skipped"):
            continue
        for clause in region["guarantees"]:
            text = clause["text"]
            if not clause.get("region_specific") or "##" in text:
                continue
            if "|->" not in text and "|=>" not in text:
                continue
            antecedent = mining._antecedent_text(text)
            consequent = mining._consequent_text(text)
            if antecedent and consequent:
                out.append((antecedent, consequent, "|=>" in text))
    return out


def measure(design: str, results_root: Path, covers=SENSITIVITY) -> dict:
    cfg = json.loads((ROOT / "benchmarks" / design / "config.json").read_text())
    corpus = traces.load_corpus(cfg["traces"], ROOT / "benchmarks" / design)
    signals = list(cfg["inputs"]) + list(cfg["outputs"])
    rows = [row for run in corpus.runs for row in run.rows]

    # exactly what tools/baseline.py declares to HARM for the whole corpus
    props = [p["exp"] if isinstance(p, dict) else p
             for p in mining._vocabulary(cfg, "guarantee", rows, signals)]
    declared = set(props)

    clauses = [(a, q, n) for a, q, n in obligations(design, results_root) if q in declared]
    texts = sorted({a for a, _, _ in clauses} | {q for _, q, _ in clauses} | declared)
    per_run = [(masks(run.rows, texts), len(run)) for run in corpus.runs]

    best_cover, skipped = [], 0
    for antecedent, consequent, next_cycle in clauses:
        owed = 0
        target = []
        for run_masks, size in per_run:
            full = (1 << size) - 1
            am = run_masks.get(antecedent, 0)
            qm = run_masks.get(consequent, 0)
            met = am & ((qm >> 1) if next_cycle else qm) & full
            target.append(met)
            owed += met.bit_count()
        if not owed:
            skipped += 1
            continue
        best = 0.0
        for D in props:
            if not globally_true(per_run, D, consequent, next_cycle):
                continue
            hit = sum((run_masks.get(D, 0) & met).bit_count()
                      for (run_masks, _), met in zip(per_run, target))
            best = max(best, hit / owed)
            if best >= 1.0:
                break
        best_cover.append(best)

    return {"design": design, "declared_props": len(props),
            "obligations": len(best_cover), "vacuous_skipped": skipped,
            "statable": {f"{c}": sum(1 for b in best_cover if b >= c) for c in covers},
            "beyond": {f"{c}": sum(1 for b in best_cover if b < c) for c in covers}}


def main(argv=None) -> int:
    parser = argparse.ArgumentParser(description=__doc__.splitlines()[0])
    parser.add_argument("designs", nargs="*", help="default: every design under --results")
    parser.add_argument("--results", default="results/declared")
    parser.add_argument("--out", default="results/reachability.json")
    parser.add_argument("--demo", action="store_true", help="self-check and exit")
    args = parser.parse_args(argv)

    if args.demo:
        return demo()

    root = Path(args.results)
    designs = args.designs or sorted(p.parent.name for p in root.glob("*/contracts.json"))
    records = []
    for design in designs:
        record = measure(design, root)
        records.append(record)
        print(f"{design:20s} {record['obligations']:4d} obligations, "
              f"beyond the control at 0.8: {record['beyond']['0.8']:4d} "
              f"({record['declared_props']} declared props)", flush=True)
    Path(args.out).write_text(json.dumps(
        {"cover_thresholds": list(SENSITIVITY),
         "note": "windowed (##[1:H]) clauses and non-declared consequents are excluded",
         "designs": records}, indent=1) + "\n")
    print(f"wrote {args.out}")
    return 0


def demo() -> int:
    """The classification must turn on coverage, not on existence.

    Built so that a narrow proposition makes a globally true clause with the right consequent
    while covering almost none of the obligation - the case that made an earlier version of
    this measurement report a gap of zero.
    """
    rows = [{"p": 1, "q": 1, "narrow": 0} for _ in range(20)]
    rows += [{"p": 1, "q": 0, "narrow": 0} for _ in range(5)]      # falsifies G(p |-> q)
    rows[0]["narrow"] = 1                                          # covers 1 of 20
    run = traces.Run("demo", [], rows)
    per_run = [(masks(rows, ["p == 1", "q == 1", "narrow == 1"]), len(run))]

    assert not globally_true(per_run, "p == 1", "q == 1", False), \
        "G(p |-> q) is violated on the whole trace, which is why the region mined it"
    assert globally_true(per_run, "narrow == 1", "q == 1", False), \
        "the narrow proposition does give a globally true clause"

    target = per_run[0][0]["p == 1"] & per_run[0][0]["q == 1"]
    cover = (per_run[0][0]["narrow == 1"] & target).bit_count() / target.bit_count()
    assert cover < 0.5, cover
    assert cover < 0.8, "so it must not count as stating the obligation at any threshold here"
    print(f"reachability ok: the narrow witness covers {cover:.0%} of the obligation, "
          f"so it counts as statable at no threshold in {SENSITIVITY}")
    return 0


if __name__ == "__main__":
    sys.exit(main())
