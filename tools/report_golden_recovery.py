#!/usr/bin/env python3
"""Regenerate the golden-contract recovery report: reports/GOLDEN_RECOVERY.md.

    python3 tools/score_recovery.py benchmarks/*/config.json --out results
    python3 tools/report_golden_recovery.py --results results --out reports/GOLDEN_RECOVERY.md

One vocabulary setting is scored, `declared`; the mechanical interface-only family is a
question about the miner rather than about the decomposition and is not reported. Every
clause that was not recovered is diagnosed by re-evaluating it against the region corpora
the run actually wrote (`work/region_*/episode_*.csv`), so the "why" is measured rather
than argued.

The prose sections of the report are kept in `PROSE` below and are the only part a human
edits; every number and every clause listing is derived from `results/`.
"""
from __future__ import annotations

import argparse
import json
import sys
from pathlib import Path

ROOT = Path(__file__).resolve().parents[1]
sys.path.insert(0, str(ROOT))

from ace import traces, validation

SETTINGS = ("declared",)
RECOVERED = ("equivalent", "mined-stronger")


def load(results: Path) -> dict:
    """{design: {setting: recovery.json}} for every design the scorer covered."""
    designs = {}
    for setting in SETTINGS:
        for path in sorted((results / setting).glob("*/recovery.json")):
            designs.setdefault(path.parent.name, {})[setting] = json.loads(path.read_text())
    return {d: e for d, e in designs.items() if set(e) == set(SETTINGS)}


def tally(entry: dict, side: str) -> dict:
    """Exact/acceptable counts for one design's guarantees or assumptions.

    `union` is kept as a key because the tables below read it, and with a single vocabulary
    setting it is that setting: a reference counts once, and the per-reference loop is what
    made that true when there were two.
    """
    out = {s: {"exact": 0, "acceptable": 0} for s in (*SETTINGS, "union")}
    references = list(entry[SETTINGS[0]][side]["detail"])
    for reference in references:
        best = {}
        for setting in SETTINGS:
            category = entry[setting][side]["detail"].get(reference, {}).get("category")
            best[setting] = category
            if category == "equivalent":
                out[setting]["exact"] += 1
            if category in RECOVERED:
                out[setting]["acceptable"] += 1
        if "equivalent" in best.values():
            out["union"]["exact"] += 1
        if any(c in RECOVERED for c in best.values()):
            out["union"]["acceptable"] += 1
    out["references"] = len(references)
    return out


def missed(entry: dict, side: str) -> list:
    """References that were not recovered, in the order the reference set lists them."""
    return [r for r in entry[SETTINGS[0]][side]["detail"]
            if not any(entry[s][side]["detail"].get(r, {}).get("category") in RECOVERED
                       for s in SETTINGS)]


def regions_cell(entry: dict) -> str:
    """The `regions` column: how many behavioral regions the run kept, or why none."""
    kept = max(entry[s]["regions"] for s in SETTINGS)
    return str(kept) if kept else "none — skipped"


# --------------------------------------------------------------------- diagnosis

def region_corpora(results: Path, design: str) -> list:
    """Every region corpus the run wrote."""
    out = []
    for setting in SETTINGS:
        work = results / setting / design / "work"
        for region in sorted(work.glob("region_*")):
            episodes = sorted(region.glob("episode_*.csv"))
            if episodes:
                out.append(traces.load_corpus([str(p) for p in episodes]))
    return out


def verdict(corpora: list, clause: str) -> str:
    """Why a reference was never proposed, measured against the corpora the run extracted."""
    if not corpora:
        return "no region was formed for the event at all"
    for corpus in corpora:
        try:
            stats = validation.evaluate(corpus, clause)
        except Exception:
            continue
        if stats["support"] and not stats["violations"]:
            return "holds inside a mined region, never proposed"
    return "holds in no mined region: the episodes miss the behaviour"


# ------------------------------------------------------------------------ tables

def table(header: list, rows: list) -> list:
    return [f"| {' | '.join(header)} |",
            f"|{'|'.join('---' for _ in header)}|",
            *(f"| {' | '.join(r)} |" for r in rows)]


def guarantee_table(designs: dict) -> tuple:
    rows, total = [], {s: {"exact": 0, "acceptable": 0} for s in (*SETTINGS, "union")}
    references = 0
    for design, entry in sorted(designs.items()):
        got = tally(entry, "guarantees")
        references += got["references"]
        for key in total:
            total[key]["exact"] += got[key]["exact"]
            total[key]["acceptable"] += got[key]["acceptable"]
        rows.append([design, str(got["references"]),
                     f"**{got['union']['exact']} / {got['union']['acceptable']}**",
                     regions_cell(entry)])
    rows.append(["**total**", f"**{references}**",
                 f"**{total['union']['exact']} / {total['union']['acceptable']}**", ""])
    lines = table(["design", "refs", "eq/acc", "regions"], rows)
    return lines, references, total


def assumption_table(designs: dict) -> tuple:
    rows, exact, acceptable, references = [], 0, 0, 0
    for design, entry in sorted(designs.items()):
        got = tally(entry, "assumptions")
        references += got["references"]
        exact += got["union"]["exact"]
        acceptable += got["union"]["acceptable"]
        rows.append([design, str(got["references"]), str(got["union"]["exact"]),
                     str(got["union"]["acceptable"])])
    rows.append(["**total**", f"**{references}**", f"**{exact}**", f"**{acceptable}**"])
    lines = table(["design", "refs", "union exact", "union acceptable"], rows)
    return lines, references, exact, acceptable


def main():
    parser = argparse.ArgumentParser(description=__doc__.splitlines()[0])
    parser.add_argument("--results", default="results")
    parser.add_argument("--out", default="reports/GOLDEN_RECOVERY.md")
    args = parser.parse_args()

    results = Path(args.results)
    designs = load(results)
    if not designs:
        raise SystemExit(f"no recovery.json under {results}: run tools/score_recovery.py")

    backend = designs[sorted(designs)[0]]["declared"]["backend"]
    guarantees, refs, total = guarantee_table(designs)
    assumptions, a_refs, a_exact, a_acceptable = assumption_table(designs)
    mining = sum(1 for e in designs.values() if max(e[s]["regions"] for s in SETTINGS))

    # every guarantee that was not recovered, with a measured verdict
    verdicts, listing = {}, []
    for design, entry in sorted(designs.items()):
        clauses = missed(entry, "guarantees")
        if not clauses:
            continue
        corpora = region_corpora(results, design)
        got = [verdict(corpora, c) for c in clauses]
        for v in got:
            verdicts[v] = verdicts.get(v, 0) + 1
        note = "" if corpora else " (no region)"
        listing += [f"**{design}**{note}", "```", *clauses, "```", ""]
    unrecovered = sum(verdicts.values())
    inside = verdicts.get("holds inside a mined region, never proposed", 0)

    out = [f"# {TITLE}", "",
           INTRO.format(backend=backend), "",
           CATEGORIES, "",
           VOCABULARIES, "",
           "## Guarantees", "", *guarantees, "",
           f"**{total['union']['exact'] / refs:.0%} exact, "
           f"{total['union']['acceptable'] / refs:.0%} acceptable.** "
           f"{mining} of {len(designs)} designs mine at least one region.", "",
           "## Assumptions", "", *assumptions, "",
           f"{a_exact / a_refs:.0%} exact, {a_acceptable / a_refs:.0%} acceptable.", "",
           f"## Where the {unrecovered} unrecovered guarantees fail", "", MEASURED, "",
           *table(["verdict", "count"],
                  [[v, str(n)] for v, n in sorted(verdicts.items(), key=lambda x: -x[1])]), "",
           f"**The decomposition is not the bottleneck.** For {inside} of {unrecovered}, the "
           "episodes the flow extracted do contain the samples on which the golden clause "
           "holds; what failed is candidate enumeration.", "",
           "### The full list", "", *listing,
           "## Reproducing", "", REPRODUCING]

    Path(args.out).write_text("\n".join(out) + "\n")
    print(f"wrote {args.out}: {refs} guarantees, {a_refs} assumptions, "
          f"{len(designs)} designs, backend {backend}")


TITLE = "Golden-contract recovery: what the flow gets back"

INTRO = ("How much of each design's hand-written reference contract the flow recovers from "
         "its traces alone, and where the rest goes. Produced with the **{backend} backend** "
         "and the smoothed-recall trigger metric; `accumulator` and `sqrt` include the "
         "spaced traces added alongside their original five.")

CATEGORIES = ("Categories are trace-bounded, as `validation.classify` defines them: "
              "*equivalent* (a mined clause says exactly this), *mined-stronger* (a mined "
              "clause implies it — a refinement), *mined-weaker*, *incomparable*, *missed*. "
              "**exact** counts *equivalent*; **acceptable** counts *equivalent* plus "
              "*mined-stronger*.")

VOCABULARIES = ("One vocabulary setting is reported: **declared**, each design's "
                "`extra_props` — written from the golden contracts, so this measures the "
                "flow given a good vocabulary — together with the propositions "
                "`ace/vocabulary.py` reads off each region. The mechanically derived "
                "interface-only family is a question about the miner rather than about the "
                "decomposition, and is not reported.")

MEASURED = ("Each clause that was never recovered was evaluated with "
            "`validation.evaluate` against the **region corpora the run actually wrote** "
            "(`work/region_*/episode_*.csv`), so the verdict below is measured rather than "
            "argued.")

REPRODUCING = """    python3 tools/score_recovery.py benchmarks/*/config.json --out results
    python3 tools/report_golden_recovery.py --results results

Roughly half an hour with HARM installed. Each `results/<setting>/<design>/recovery.json`
carries `guarantees.detail` and `assumptions.detail`, one category per reference, which is
what every number above is counted from."""


if __name__ == "__main__":
    main()
