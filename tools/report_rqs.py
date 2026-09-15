#!/usr/bin/env python3
"""Turn the sweep records into the LaTeX bodies of the results section.

    python3 tools/report_rqs.py --section all > /tmp/bodies.tex

Formats; computes nothing the sweep did not already record, so that every number in
`reports/RESULTS.tex` can be traced back to one line of one JSONL file. Emits table bodies
(rows, no preamble) and pgfplots coordinate blocks, each behind a `%% <name>` marker.
"""
from __future__ import annotations

import argparse
import json
import statistics as st
import sys
from collections import defaultdict
from pathlib import Path

ROOT = Path(__file__).resolve().parents[1]

FAMILY = {"ibex_alu": "Ibex", "ibex_csr": "Ibex", "ibex_multdiv_fast": "Ibex",
          "apb_slave": "protocol", "arbiter4": "protocol", "fifo_sync": "protocol"}
ORDER = ["ibex_alu", "ibex_csr", "ibex_multdiv_fast",
         "apb_slave", "arbiter4", "fifo_sync",
         "accumulator", "adder_8bit", "comparator_3bit", "multi_16bit", "sqrt"]


def tex(name: str) -> str:
    return name.replace("_", "\\_")


def load(path) -> list:
    path = Path(path)
    if not path.exists():
        return []
    return [json.loads(line) for line in path.read_text().splitlines() if line.strip()]


def by_design(records) -> dict:
    return {r["design"]: r for r in records}


def pct(x) -> str:
    return "--" if x is None else f"{100 * x:.0f}"


# ------------------------------------------------------------------ setup table

def setup():
    summary = {r["design"]: r for r in
               json.loads((ROOT / "benchmarks/traces/summary.json").read_text())}
    print("%% setup: design & family & in & out & events & runs & samples & A refs & G refs")
    total = [0] * 5
    for design in ORDER:
        cfg = json.loads((ROOT / "benchmarks" / design / "config.json").read_text())
        s = summary[design]
        cells = [len(cfg["events"]), s["runs"], s["samples"],
                 len(cfg.get("reference_assumptions", [])), len(cfg.get("references", []))]
        total = [t + c for t, c in zip(total, cells)]
        print(f"{tex(design)} & {FAMILY.get(design, 'arithmetic')} & "
              f"{len(cfg['inputs'])} & {len(cfg['outputs'])} & "
              + " & ".join(str(c) for c in cells) + r" \\")
    print("total & & & & " + " & ".join(str(c) for c in total) + r" \\")


def per_recovered(side) -> str:
    """Mined clauses per reference this side actually recovered.

    Recall says how much of the reference set came back; it says nothing about how much an
    engineer has to read to find it. Dividing the mined volume by the references recovered
    puts the two in one number, and it is the only precision-like figure the artifact
    supports - the threats section explains why no ranking separates the extras from the
    witnesses.
    """
    got = sum(v for k, v in side["categories"].items()
              if k in ("equivalent", "mined-stronger"))
    return f"{side['mined'] / got:.0f}" if got else "--"


# --------------------------------------------------------------------- RQ1

def rq1(baseline, cost):
    """Undecomposed mining as a CONTROL for the decomposed flow, at each design's own grammar.

    Not a competitor: every reference guarantee holds over the whole corpus, so the control
    can reach all of them and the flow cannot recover one it structurally cannot. What this
    table measures is whether decomposition LOSES any, and what it costs to find out.

    Both sides come from serial runs (`--jobs 1`), so the seconds are comparable; the
    grammar sweep is run in parallel and its timings are not used here.
    """
    base = by_design(baseline)
    flow = by_design([r for r in cost if not r.get("failed")])
    print("%% rq1: design & (mined, clauses per reference recovered, exact, acceptable, "
          "assumption acceptable, seconds) for the control then the flow")
    for design in ORDER:
        b, f = base.get(design), flow.get(design)
        if not b or not f:
            continue
        cells = []
        for r in (b, f):
            if r.get("failed"):
                cells += ["\\multicolumn{6}{c}{" + str(r["failed"])[:20] + "}"]
                continue
            g = r["guarantees"]
            cells += [str(g["mined"]), per_recovered(g),
                      pct(g["recall"]), pct(g["acceptable_recall"]),
                      pct(r["assumptions"]["acceptable_recall"]), f"{r['wall_s']:.1f}"]
        print(f"{tex(design)} & " + " & ".join(cells) + r" \\")

    # the two summary lines under the rule, so they cannot drift from the rows above them
    def mean(records, side, field):
        vals = [r[side][field] for r in records.values()
                if not r.get("failed") and r[side][field] is not None]
        return pct(st.mean(vals)) if vals else "--"

    # Pooled over every reference, alongside the mean of the per-design percentages. The two
    # disagree because the reference sets differ in size by a factor of four: a mean over
    # designs weights `ibex_csr`'s four clauses like `apb_slave`'s eighteen, and on this
    # benchmark that alone moves the baseline's acceptable recall by six points.
    def pooled(records, side):
        got = {"equivalent": 0, "mined-stronger": 0}
        total = 0
        for r in records.values():
            if r.get("failed"):
                continue
            counts = r[side]["categories"]
            total += sum(counts.values())
            for k in got:
                got[k] += counts.get(k, 0)
        if not total:
            return "--", "--"
        return (pct(got["equivalent"] / total),
                pct((got["equivalent"] + got["mined-stronger"]) / total))

    pair = {"control": base, "flow": flow}
    print(r"\midrule")
    print(r"\multicolumn{13}{l}{\emph{pooled over all references}\quad "
          + r"\quad ".join(f"{name} {pooled(rs, 'guarantees')[0]}\\% / "
                           f"{pooled(rs, 'guarantees')[1]}\\%"
                           for name, rs in pair.items())
          + r"} \\")
    print(r"\multicolumn{13}{l}{\emph{mean guarantee recall}\quad "
          + r"\quad ".join(
              f"{name} {mean(rs, 'guarantees', 'recall')}\\% / "
              f"{mean(rs, 'guarantees', 'acceptable_recall')}\\%"
              for name, rs in pair.items())
          + r"} \\")
    print(r"\multicolumn{13}{l}{\emph{mean assumption acceptable recall}\quad "
          + r"\quad ".join(
              f"{name} {mean(rs, 'assumptions', 'acceptable_recall')}\\%"
              for name, rs in pair.items())
          + r"} \\")


# --------------------------------------------------------------------- RQ2

CATEGORIES = ("equivalent", "mined-stronger", "mined-weaker", "missed")


def _row(label, rows, side) -> str:
    """One family's counts, as the cells of `tab:rq2`."""
    counts = {c: 0 for c in CATEGORIES}
    references = mined = 0
    for r in rows:
        side_data = r["declared"][side]
        references += side_data["references"]
        mined += side_data["mined"]
        for c, v in side_data["categories"].items():
            counts[c] += v
    n = sum(counts.values()) or 1
    cells = [str(references), str(mined)] + [str(counts[c]) for c in CATEGORIES] + [
        pct(counts["equivalent"] / n),
        pct((counts["equivalent"] + counts["mined-stronger"]) / n)]
    return f"{label} & " + " & ".join(cells) + r" \\"


def rq2(summary):
    """Reference recovery by design family, declared vocabulary.

    `summary` is `results/recovery_summary.json`, which `tools/score_recovery.py` writes with
    only the designs of its own invocation - so a partial scoring run makes a partial table
    rather than a silently wrong one, and the family counts below say which.
    """
    if not summary:
        print("%% rq2: no results/recovery_summary.json")
        return
    families = defaultdict(list)
    for r in summary:
        families[FAMILY.get(r["design"], "arithmetic")].append(r)
    print(f"%% rq2: {len(summary)} designs, declared vocabulary; "
          f"family & ref & mined & eq & str & wk & miss & ex & acc")
    for family in ("Ibex", "protocol", "arithmetic"):
        if families.get(family):
            print(_row(family, families[family], "guarantees"))
    total = _row(r"\textbf{all guarantees}", summary, "guarantees")
    head, rest = total.split(" & ", 1)
    print(head + " & " + " & ".join(f"\\textbf{{{c.strip()}}}"
                                    for c in rest.rsplit(r" \\", 1)[0].split(" & "))
          + r" \\")
    print(r"\midrule")
    print(_row("assumptions", summary, "assumptions"))


# --------------------------------------------------------------------- RQ3

def rq3(budget):
    groups = defaultdict(list)
    for r in budget:
        if not r.get("failed"):
            groups[(r["design"], r["budget"])].append(r)
    for design in sorted({d for d, _ in groups}):
        for field, label in (("acceptable_recall", "acc"), ("recall", "exact")):
            points = []
            for b in sorted({x for d, x in groups if d == design}):
                rs = groups[(design, b)]
                vals = [r["guarantees"][field] for r in rs]
                points.append((b, st.mean(vals), min(vals), max(vals),
                               rs[0]["runs"], len(vals)))
            print(f"%% rq3 {design} {label}: (budget, mean, min, max) over seeds; "
                  f"runs kept = {[p[4] for p in points]}, seeds = {[p[5] for p in points]}")
            # pgfplots asymmetric explicit errors: += is the upward leg, -= the downward one
            print(" ".join(
                f"({b:.2f},{m:.4f}) += (0,{hi - m:.4f}) -= (0,{m - lo:.4f})"
                for b, m, lo, hi, _, _ in points))
        rs_all = [r for (d, _), v in groups.items() if d == design for r in v]
        print(f"%% rq3 {design} mined: " + " ".join(
            f"({b:.2f},{st.mean([r['guarantees']['mined'] for r in groups[(design, b)]]):.1f})"
            for b in sorted({x for d, x in groups if d == design})))


# --------------------------------------------------------------------- RQ4

def rq4(grammar):
    """Grammars are compared on the designs that completed under ALL of them.

    Averaging each grammar over whatever finished would score G5 on an easier subset than G1,
    since the design G5 cannot finish is the hardest one - the comparison would then reward a
    grammar for failing.
    """
    ok = {(r["design"], r["grammar"]): r for r in grammar if not r.get("failed")}
    grammars = sorted({g for _, g in ok})
    designs = sorted({d for d, _ in ok})
    common = [d for d in designs if all((d, g) in ok for g in grammars)]
    print(f"%% rq4: {len(common)} of {len(designs)} designs complete under all "
          f"{len(grammars)} grammars; means are over those")
    print("%% grammar & designs & mean exact & mean acc & mined & distinct & s & peak MiB")
    for g in grammars:
        rs = [ok[(d, g)] for d in common]
        print(f"{g} & {sum(1 for d in designs if (d, g) in ok)}/{len(designs)} & "
              f"{pct(st.mean([r['guarantees']['recall'] for r in rs]))} & "
              f"{pct(st.mean([r['guarantees']['acceptable_recall'] for r in rs]))} & "
              f"{sum(r['guarantees']['mined'] for r in rs)} & "
              f"{sum(r['distinct_guarantees'] for r in rs)} & "
              f"{sum(r['wall_s'] for r in rs):.0f} & "
              f"{max(r['peak_rss_kb'] for r in rs) / 1024:.0f}" + r" \\")

    print("%% rq4 per design, acceptable recall by grammar (-- did not complete)")
    for design in ORDER:
        if design not in designs:
            continue
        cells = [pct(ok[(design, g)]["guarantees"]["acceptable_recall"])
                 if (design, g) in ok else "--" for g in grammars]
        print(f"{tex(design)} & " + " & ".join(cells) + r" \\")


# --------------------------------------------------------------------- RQ5

def rq5(cost, grammar):
    """Cost at each design's own grammar, measured serially; scatter over every sweep point."""
    rs = [r for r in cost if not r.get("failed")]
    print("%% rq5: design & samples & signals & episode samples "
          "& mine s & total s & mine share & peak MiB")
    for design in ORDER:
        r = next((x for x in rs if x["design"] == design), None)
        if not r:
            continue
        cfg = json.loads((ROOT / "benchmarks" / design / "config.json").read_text())
        mine_s = sum(v for k, v in r["timers_s"].items() if k.startswith("4_mine"))
        total = sum(r["timers_s"].values())
        print(f"{tex(design)} & {r['samples']} & "
              f"{len(cfg['inputs']) + len(cfg['outputs'])} & {r['episode_samples']} & "
              f"{mine_s:.1f} & {total:.1f} & {100 * mine_s / total:.0f} & "
              f"{r['peak_rss_kb'] / 1024:.0f}" + r" \\")

    # an incomplete point carries no timers, so it cannot appear on a cost scatter
    plotted = [r for r in grammar if not r.get("failed") and r.get("timers_s")]
    print("%% rq5 scatter: (samples, total seconds) per design, all grammars")
    print(" ".join(f"({r['samples']},{sum(r['timers_s'].values()):.2f})"
                   for r in sorted(plotted, key=lambda x: x["samples"])))


def main():
    parser = argparse.ArgumentParser(description=__doc__.splitlines()[0])
    parser.add_argument("--budget", default="results/sweeps/budget.jsonl")
    parser.add_argument("--grammar", default="results/sweeps/grammar.jsonl")
    parser.add_argument("--baseline", default="results/sweeps/baseline.jsonl")
    parser.add_argument("--cost", default="results/sweeps/cost.jsonl",
                        help="serial runs at each design's own grammar: RQ1 and RQ5 cost")
    parser.add_argument("--summary", default="results/recovery_summary.json",
                        help="per-design recovery: RQ2")
    parser.add_argument("--section", default="all",
                        choices=("all", "setup", "rq1", "rq2", "rq3", "rq4", "rq5"))
    args = parser.parse_args()

    budget, grammar, baseline = load(args.budget), load(args.grammar), load(args.baseline)
    cost = load(args.cost)
    summary_path = Path(args.summary)
    summary = json.loads(summary_path.read_text()) if summary_path.exists() else []
    want = (("setup", "rq1", "rq2", "rq3", "rq4", "rq5") if args.section == "all"
            else (args.section,))
    for section in want:
        print(f"\n%%%%%%%%%% {section}")
        if section == "setup":
            setup()
        elif section == "rq1":
            rq1(baseline, cost)
        elif section == "rq2":
            rq2(summary)
        elif section == "rq3":
            rq3(budget)
        elif section == "rq4":
            rq4(grammar)
        elif section == "rq5":
            rq5(cost, grammar)
    return 0


if __name__ == "__main__":
    sys.exit(main())
