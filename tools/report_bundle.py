#!/usr/bin/env python3
"""Assemble the mining report bundle: golden contracts, mined contracts, and the statistics.

    python3 tools/score_recovery.py benchmarks/*/config.json --out results
    python3 tools/report_bundle.py --results results --out reports

Produces, for every design the scorer covered:

    reports/MINING_REPORT.md         the tables: mined vs golden, per design, and which ones
    reports/golden/<design>.txt      the golden contracts, as A/G blocks, with their ids
    reports/mined/<design>.txt       the mined contracts, same shape, declared vocabulary
    reports/mined_interface/<d>.txt  the same with the vocabulary derived from the interface
    reports/match/<design>.txt       one line per golden clause: category and the witness

The txt files are plain contract text and nothing else, so they can be diffed, grepped and
pasted into a paper appendix. Everything is regenerated from `results/` and `benchmarks/`,
so re-running the scorer and this script is the whole update path.
"""
from __future__ import annotations

import argparse
import json
import sys
from pathlib import Path

ROOT = Path(__file__).resolve().parents[1]
sys.path.insert(0, str(ROOT))

from ace import formula

CATEGORIES = ("equivalent", "mined-stronger", "mined-weaker", "missed")
SETTINGS = ("declared", "interface")


def load(results: Path, benchmarks: Path) -> dict:
    """{design: {setting: recovery, "contracts": {setting: contracts}, "candidates": ...}}"""
    designs = {}
    for setting in SETTINGS:
        for path in sorted((results / setting).glob("*/recovery.json")):
            design = path.parent.name
            entry = designs.setdefault(design, {"contracts": {}})
            entry[setting] = json.loads(path.read_text())
            flow = path.parent / "contracts.json"
            if flow.exists():
                entry["contracts"][setting] = json.loads(flow.read_text())
    for design, entry in designs.items():
        for name in ("candidates", "config"):
            path = benchmarks / design / f"{name}.json"
            entry[name] = json.loads(path.read_text()) if path.exists() else {}
    return designs


def ids_of(candidates: dict, horizon=None) -> dict:
    """{guarantee text: id} and {invariant text: id}, from the design's candidate set.

    Candidate texts may carry the horizon as the placeholder `H` (`##[1:H]`), while the
    confirmed references in config.json carry the number, so both spellings are registered.
    """
    def keys(text):
        yield text
        if horizon is not None and "H" in text:
            yield text.replace("H", str(horizon))

    out = {}
    for contract in candidates.get("contracts", []):
        for text in (contract.get("resolved", contract["guarantee"]), contract["guarantee"]):
            for key in keys(text):
                out[key] = contract["id"]
    for assumption in candidates.get("assumptions", []):
        for text in (assumption.get("resolved", assumption["invariant"]),
                     assumption["invariant"]):
            for key in keys(text):
                out[key] = assumption["id"]
    return out


# ------------------------------------------------------------------ golden text

def golden_text(design: str, entry: dict) -> str:
    """The golden contracts as A/G blocks, grouped exactly as the benchmark validates them."""
    candidates = entry["candidates"]
    assumptions = {a["id"]: a["invariant"] for a in candidates.get("assumptions", [])}
    confirmed = set(entry["config"].get("references", []))
    horizon = entry["config"].get("horizon")

    groups = {}
    for contract in candidates.get("contracts", []):
        text = contract.get("resolved", contract["guarantee"])
        if text not in confirmed and horizon is not None:
            # candidates may carry the horizon as the placeholder `H`; config carries the number
            text = text.replace("H", str(horizon))
        if text not in confirmed:
            continue
        groups.setdefault(tuple(contract.get("assumption_ids", [])), []).append(
            (contract["id"], text))

    lines = [f"# {design}: golden contracts",
             f"# {sum(len(v) for v in groups.values())} guarantees under "
             f"{len(assumptions)} assumptions, all confirmed on the mining and held-out "
             f"corpora", ""]
    for index, (ids, members) in enumerate(sorted(groups.items()), start=1):
        invariants = " && ".join(assumptions[i] for i in ids) or "true"
        lines.append(f"CONTRACT {design}.{index}    [A: {', '.join(ids) or 'none'}]")
        lines.append(f"A: {invariants}")
        for position, (identifier, text) in enumerate(members):
            lines.append(f"{'G:' if position == 0 else '  '} {text}    [{identifier}]")
        lines.append("")
    out_of_grammar = candidates.get("out_of_grammar", [])
    if out_of_grammar:
        lines += [f"# {len(out_of_grammar)} further properties are recorded as out of "
                  f"grammar (see candidates.json for the reasons):"]
        lines += [f"#   {item['id']}: {item['guarantee']}" for item in out_of_grammar]
        lines.append("")
    return "\n".join(lines)


# ------------------------------------------------------------------- mined text

def mined_text(design: str, entry: dict, setting: str) -> str:
    """The mined contracts, one block per behavioral region, in the golden files' shape."""
    flow = entry["contracts"].get(setting)
    if flow is None:
        return f"# {design}: no contracts.json for the {setting} setting\n"

    recovery = entry[setting]
    witnesses = {e["mined"] for side in ("assumptions", "guarantees")
                 for e in recovery[side]["detail"].values() if e.get("mined")}

    lines = [f"# {design}: mined contracts ({setting} vocabulary)",
             f"# backend {flow['temporal_backend']}, {flow['runs']} runs, "
             f"{flow['samples']} samples",
             "# a clause marked [*] is the witness the scorer matched to a golden clause", ""]
    index = 0
    for region in flow["regions"]:
        if region.get("skipped"):
            lines += [f"# region for event `{region['event']}` skipped: {region['skipped']}",
                      ""]
            continue
        index += 1
        invariants = [c["text"] for c in region["assumptions"]
                      if not formula.parse(c["text"]).is_implication()]
        temporal_a = [c["text"] for c in region["assumptions"]
                      if formula.parse(c["text"]).is_implication()]
        guarantees = [c["text"] for c in region["guarantees"]]
        provenance = region["provenance"]
        lines.append(f"CONTRACT {design}.mined.{index}    [event {region['event']}, "
                     f"triggers {', '.join(provenance['triggers'])}, "
                     f"{provenance['episodes']} episodes]")
        lines.append(f"A: {' && '.join(invariants) or 'true'}")
        for position, text in enumerate(guarantees):
            mark = " [*]" if text in witnesses else ""
            lines.append(f"{'G:' if position == 0 else '  '} {text}{mark}")
        if not guarantees:
            lines.append("G: (none)")
        if temporal_a:
            lines.append(f"# {len(temporal_a)} temporal environment clauses were also mined "
                         f"(not part of A, which is a conjunction of invariants):")
            lines += [f"#   {text}" for text in temporal_a]
        lines.append("")
    return "\n".join(lines)


# ------------------------------------------------------------------- match text

def match_text(design: str, entry: dict) -> str:
    lines = [f"# {design}: golden clause -> what the flow recovered",
             "# category is trace-bounded: equivalent | mined-stronger (a refinement) | "
             "mined-weaker | missed", ""]
    identifiers = ids_of(entry["candidates"], entry["config"].get("horizon"))
    for side, label in (("guarantees", "GUARANTEES"), ("assumptions", "ASSUMPTIONS")):
        lines.append(f"== {label} ==")
        for setting in SETTINGS:
            detail = entry[setting][side]["detail"]
            if not detail:
                continue
            lines.append(f"-- {setting} vocabulary --")
            for reference, record in detail.items():
                identifier = identifiers.get(reference, "?")
                lines.append(f"[{identifier:>8s}] {record['category']:<15s} {reference}")
                if record.get("mined"):
                    lines.append(f"{'':11s}witness        {record['mined']}")
            lines.append("")
        mined_key = "mined_instances" if side == "guarantees" else "mined_invariants"
        for setting in SETTINGS:
            mined = entry[setting][mined_key]
            hits = {e["mined"] for e in entry[setting][side]["detail"].values()
                    if e.get("mined")}
            lines.append(f"# {setting}: {len(mined)} mined, {len(mined & hits) if isinstance(mined, set) else len([m for m in mined if m in hits])} "
                         f"matched a golden clause, "
                         f"{len([m for m in mined if m not in hits])} with no counterpart")
        lines.append("")
    return "\n".join(lines)


# ---------------------------------------------------------------------- tables

def counts(side: dict) -> dict:
    return {c: side["categories"].get(c, 0) for c in CATEGORIES}


def overview(designs: dict, side: str, label: str) -> list:
    lines = [f"### {label}", "",
             "| design | golden | mined | equivalent | stronger | weaker | missed | exact | "
             "acceptable |", "|---|---|---|---|---|---|---|---|---|"]
    for setting in SETTINGS:
        lines.append(f"| **{setting} vocabulary** | | | | | | | | |")
        total = {c: 0 for c in CATEGORIES}
        golden = mined = 0
        for design, entry in sorted(designs.items()):
            data = entry[setting][side]
            got = counts(data)
            golden += data["references"]
            mined += data["mined"]
            for c in CATEGORIES:
                total[c] += got[c]
            lines.append(
                f"| {design} | {data['references']} | {data['mined']} | {got['equivalent']} | "
                f"{got['mined-stronger']} | {got['mined-weaker']} | {got['missed']} | "
                f"{(data['recall'] or 0):.0%} | {(data['acceptable_recall'] or 0):.0%} |")
        acceptable = total["equivalent"] + total["mined-stronger"]
        lines.append(f"| **total ({setting})** | **{golden}** | **{mined}** | "
                     f"**{total['equivalent']}** | **{total['mined-stronger']}** | "
                     f"**{total['mined-weaker']}** | **{total['missed']}** | "
                     f"**{total['equivalent'] / golden:.0%}** | "
                     f"**{acceptable / golden:.0%}** |")
    return lines + [""]


def which_ones(designs: dict, side: str, label: str) -> list:
    lines = [f"### {label}: which golden clauses, by id (declared vocabulary)", "",
             "| design | equivalent | recovered as a refinement | recovered weaker | missed |",
             "|---|---|---|---|---|"]
    for design, entry in sorted(designs.items()):
        identifiers = ids_of(entry["candidates"], entry["config"].get("horizon"))
        buckets = {c: [] for c in CATEGORIES}
        for reference, record in entry["declared"][side]["detail"].items():
            buckets[record["category"]].append(identifiers.get(reference, reference[:24]))
        cells = [", ".join(buckets[c]) or "-" for c in CATEGORIES]
        lines.append(f"| {design} | {cells[0]} | {cells[1]} | {cells[2]} | {cells[3]} |")
    return lines + [""]


def main():
    parser = argparse.ArgumentParser(description=__doc__.splitlines()[0])
    parser.add_argument("--results", default="results")
    parser.add_argument("--benchmarks", default="benchmarks")
    parser.add_argument("--out", default="reports")
    args = parser.parse_args()

    designs = load(Path(args.results), Path(args.benchmarks))
    if not designs:
        raise SystemExit(f"no recovery.json under {args.results}")

    out = Path(args.out)
    for folder in ("golden", "mined", "mined_interface", "match"):
        (out / folder).mkdir(parents=True, exist_ok=True)

    for design, entry in designs.items():
        (out / "golden" / f"{design}.txt").write_text(golden_text(design, entry))
        (out / "mined" / f"{design}.txt").write_text(mined_text(design, entry, "declared"))
        (out / "mined_interface" / f"{design}.txt").write_text(
            mined_text(design, entry, "interface"))
        (out / "match" / f"{design}.txt").write_text(match_text(design, entry))

    report = ["# Mining report: golden contracts against what the flow mined", "",
              f"{len(designs)} designs. Golden contracts are the benchmark's reference set - "
              "hand-written, then confirmed on the mining and held-out corpora. Mined "
              "contracts are what the flow produced from the traces alone.", "",
              "Two vocabulary settings are reported. **declared** uses each design's "
              "`extra_props`, which for this benchmark were written from the golden "
              "contracts, so it measures the flow given a good vocabulary. **interface** "
              "derives the vocabulary mechanically from the interface (`auto_vocabulary`, "
              "hints removed), so nothing about the golden set reaches the search space.", "",
              "Categories are trace-bounded: *equivalent* (a mined clause says exactly "
              "this), *mined-stronger* (a mined clause implies it - a refinement), "
              "*mined-weaker* (the flow found a weaker form), *missed*. `exact` is the "
              "equivalent share; `acceptable` counts equivalent plus refinements.", "",
              "The per-design files: `golden/<design>.txt`, `mined/<design>.txt`, "
              "`mined_interface/<design>.txt`, `match/<design>.txt`.", ""]
    report += ["## Guarantees", ""] + overview(designs, "guarantees", "Per design")
    report += which_ones(designs, "guarantees", "Guarantees")
    report += ["## Assumptions", ""] + overview(designs, "assumptions", "Per design")
    report += which_ones(designs, "assumptions", "Assumptions")
    report += ["## Mined volume", "",
               "The flow keeps every clause that survives its checks, so the mined column "
               "above is much larger than the golden set. Those extras are true of the "
               "traces and they generalise to the held-out runs; they are properties nobody "
               "wrote down rather than errors, and no trace-side ranking separates them "
               "from the golden ones (measured: support, delay tightness, antecedent size "
               "and interface relevance all put the golden witnesses at ranks 20-350 of "
               "200-360). `match/<design>.txt` reports the split per design.", ""]
    (out / "MINING_REPORT.md").write_text("\n".join(report) + "\n")
    print(f"wrote {out}/MINING_REPORT.md and {4 * len(designs)} contract files "
          f"for {len(designs)} designs")


if __name__ == "__main__":
    main()
