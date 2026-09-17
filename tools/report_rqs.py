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
import re
import statistics as st
import sys
from collections import Counter, defaultdict
from pathlib import Path

ROOT = Path(__file__).resolve().parents[1]
sys.path.insert(0, str(ROOT))

from ace import formula, mining

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


#: Constants a bound may legitimately mention: the boundaries of a declared width and the
#: values a flag takes. A literal outside this set was read off the samples, not off the
#: design - `op_a_i >= 38111` is where the stimulus happened to stop.
WIDTHS = {0, 1, 2, 127, 128, 255, 256, 2147483647, 2147483648, 4294967295}

AUDIT_CLASSES = ("event-anchoring", "sampled range", "unclassified")


def classify_region_specific(clause: str, event_signals) -> str:
    """What kind of thing a region-specific clause is. Mechanical, so it can be rerun.

    A region is a window anchored on occurrences of its own event, so inside it "anything
    implies the event follows" is true by construction rather than by design: `G(done |->
    ##[1:24] error == 1)` holds on the square root's error region and is violated at 7894
    positions of the corpus. Any implication whose CONSEQUENT mentions a signal of the event
    is that shape, and is counted as **event-anchoring**.

    Otherwise a literal outside `WIDTHS` makes the clause a **sampled range**, a bound read
    off the region's samples.

    What is left is **unclassified**, and the label is deliberately neutral: inspecting these
    finds relational coincidences (`G(paddr >= prdata |-> prdata == 0)`) rather than
    obligations, so calling them plausible would be the same overclaim this audit exists to
    remove.
    """
    try:
        parsed = formula.parse(clause)
    except formula.FormulaError:
        return "unclassified"
    if parsed.is_implication():
        head = mining._consequent_text(clause) or ""
        try:
            consequent = formula.parse(head).signals()
        except formula.FormulaError:
            consequent = frozenset()
        if consequent & set(event_signals):
            return "event-anchoring"
    literals = (int(n) for n in re.findall(r"(?<![\w.])(\d+)", clause))
    return "sampled range" if any(n not in WIDTHS for n in literals) else "unclassified"


def region_specific_audit(results_root: Path) -> tuple:
    """Classify every region-specific guarantee under `results_root`.

    Returns `(kept, per_design)` where `per_design[design]` counts the classes. A clause is
    region-specific when the corpus violates it outside the region it was mined from -
    `ace/mining.py:mine` records that as `region_specific` - which is exactly the property
    that puts it beyond a whole-trace miner, since that miner only returns what holds on the
    traces it is handed.
    """
    kept, per_design = 0, defaultdict(Counter)
    for path in sorted(Path(results_root).glob("*/contracts.json")):
        results = json.loads(path.read_text())
        for region in results["regions"]:
            if region.get("skipped"):
                continue
            try:
                event = formula.parse(region["event"]).signals()
            except formula.FormulaError:
                event = frozenset()
            for clause in region["guarantees"]:
                kept += 1
                if clause.get("region_specific"):
                    per_design[path.parent.name][
                        classify_region_specific(clause["text"], event)] += 1
    return kept, per_design


def print_region_specific_audit(results_root=ROOT / "results/declared"):
    kept, per_design = region_specific_audit(results_root)
    if not kept:
        print(f"%% rq1 region-specific audit: no contracts.json under {results_root}")
        return
    total = Counter()
    for counts in per_design.values():
        total.update(counts)
    spec = sum(total.values())
    print(f"%% rq1 region-specific audit: {spec} of {kept} kept guarantees "
          f"({100 * spec / kept:.0f}%) are region-specific; of those "
          + ", ".join(f"{total[c]} {c} ({100 * total[c] / spec:.0f}%)"
                      for c in AUDIT_CLASSES))
    print("%% rq1 audit per design: design & region-specific & "
          + " & ".join(AUDIT_CLASSES))
    for design in ORDER:
        counts = per_design.get(design)
        if counts:
            print(f"%%   {design} & {sum(counts.values())} & "
                  + " & ".join(str(counts[c]) for c in AUDIT_CLASSES))


def print_reachability(path=ROOT / "results/reachability.json"):
    """What `tools/reachability.py` measured: obligations the control cannot state.

    The flow gets a region's condition by restricting samples; the control must have it
    conjoined into one declared proposition, because a template has a single antecedent slot.
    Where the vocabulary lacks that conjunction the obligation is beyond it entirely.
    """
    path = Path(path)
    if not path.exists():
        print(f"%% rq1 reachability: {path} missing; run tools/reachability.py")
        return
    data = json.loads(path.read_text())
    designs = data["designs"]
    total = sum(d["obligations"] for d in designs)
    if not total:
        print("%% rq1 reachability: no obligations recorded")
        return
    covers = [str(c) for c in data["cover_thresholds"]]
    beyond = {c: sum(d["beyond"][c] for d in designs) for c in covers}
    print(f"%% rq1 reachability: {total} region-local obligations across "
          f"{len(designs)} designs; beyond the control at cover "
          + ", ".join(f"{c}: {beyond[c]} ({100 * beyond[c] / total:.0f}%)" for c in covers))
    print(f"%% rq1 reachability note: {data['note']}")
    for d in sorted(designs, key=lambda x: -x["beyond"][covers[1]]):
        if d["beyond"][covers[1]]:
            print(f"%%   {d['design']} & {d['beyond'][covers[1]]} & {d['obligations']}")


def covered(side) -> tuple:
    """References with any related clause, and how many there are.

    The robust question, and the one this section leads with: did something related come back
    for this reference? It needs no view on whether the mined clause is equivalent to it,
    implies it or follows from it, so it does not rest on `validation.classify`'s trace-bounded
    judgement the way a recall figure does.
    """
    total = sum(side["categories"].values())
    return total - side["categories"].get("missed", 0), total


def per_covered(side) -> str:
    """Mined clauses per covered reference.

    Coverage says how much of the reference set came back; it says nothing about how much an
    engineer reads to find it. Dividing the mined volume by the references covered puts the
    two in one number, and it is the only precision-like figure the artifact supports - the
    threats section explains why no ranking separates the extras from the witnesses.
    """
    got, _ = covered(side)
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
    print("%% rq1: design & (mined, clauses per covered reference, guarantees covered, "
          "assumption acceptable recall, seconds) for the control then the flow")
    for design in ORDER:
        b, f = base.get(design), flow.get(design)
        if not b or not f:
            continue
        cells = []
        for r in (b, f):
            if r.get("failed"):
                cells += ["\\multicolumn{5}{c}{" + str(r["failed"])[:20] + "}"]
                continue
            g = r["guarantees"]
            got, total = covered(g)
            cells += [str(g["mined"]), per_covered(g), f"{got}/{total}",
                      pct(r["assumptions"]["acceptable_recall"]), f"{r['wall_s']:.1f}"]
        print(f"{tex(design)} & " + " & ".join(cells) + r" \\")

    # the summary lines under the rule, so they cannot drift from the rows above them
    def totals(records, side):
        got = n = 0
        for r in records.values():
            if r.get("failed"):
                continue
            c, t = covered(r[side])
            got += c
            n += t
        return got, n

    def mean(records, side, field):
        vals = [r[side][field] for r in records.values()
                if not r.get("failed") and r[side][field] is not None]
        return pct(st.mean(vals)) if vals else "--"

    pair = {"control": base, "flow": flow}
    print(r"\midrule")
    print(r"\multicolumn{11}{l}{\emph{reference guarantees with a related clause}\quad "
          + r"\quad ".join(f"{name} {totals(rs, 'guarantees')[0]}/"
                           f"{totals(rs, 'guarantees')[1]}"
                           for name, rs in pair.items())
          + r"} \\")
    print(r"\multicolumn{11}{l}{\emph{assumption acceptable recall}\quad "
          + r"\quad ".join(
              f"{name} {mean(rs, 'assumptions', 'acceptable_recall')}\\%"
              for name, rs in pair.items())
          + r"} \\")

    # not table rows: what the region-specific clauses are, and which of the obligations
    # they carry the control could not have stated. Both belong in the prose.
    print_region_specific_audit()
    print_reachability()


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


def demo():
    """Self-check for the one piece of non-trivial logic here: the audit classifier.

    Every other number this module prints is a sum or a mean of something the sweep already
    recorded. The classifier is a judgement rendered mechanical, and it is the part a reader
    is entitled to distrust, so it is the part with hand-labelled cases behind it.
    """
    # the region's event is `error == 1`, so a consequent mentioning `error` asserts the
    # event the region was built around
    assert classify_region_specific(
        "G((done) |-> (##[1:24] error == 1))", {"error"}) == "event-anchoring"
    assert classify_region_specific(
        "G((paddr == 3) |-> (##[1:5] pslverr == 1))", {"pslverr"}) == "event-anchoring"
    # an event signal in the ANTECEDENT is not the same thing: the clause constrains
    # something else, and the region does not make it true for free
    assert classify_region_specific(
        "G((error == 1) |-> (out == 0))", {"error"}) == "unclassified"
    # bounds read off the samples
    assert classify_region_specific(
        "G((op_a_i >= 38111) |-> (##[1:40] valid_o == 1))", {"done"}) == "sampled range"
    assert classify_region_specific("dout >= 3", {"full"}) == "sampled range"
    # width and flag constants are not sampled ranges
    assert classify_region_specific("pwdata <= 255", {"full"}) == "unclassified"
    assert classify_region_specific(
        "G((psel == 1) |=> (pready == 1))", {"pslverr"}) == "unclassified"
    assert classify_region_specific(
        "in >= 2147483648", {"done"}) == "unclassified"
    # an unparseable clause is not silently called a range
    assert classify_region_specific("$rose(x) &&", {"x"}) == "unclassified"
    print(f"report_rqs ok: classifier agrees on 9 hand-labelled cases, "
          f"classes {AUDIT_CLASSES}")


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
    parser.add_argument("--demo", action="store_true",
                        help="self-check the audit classifier and exit")
    args = parser.parse_args()

    if args.demo:
        demo()
        return 0

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
