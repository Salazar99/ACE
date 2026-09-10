#!/usr/bin/env python3
"""Turn the scorer's output into a per-contract report: every reference clause, what came
back for it, and why nothing did when nothing did.

    python3 tools/score_recovery.py benchmarks/*/config.json --out results
    python3 tools/report_recovery.py results --out CONTRACT_RECOVERY.md

One row per reference clause per design, so the report is a checklist rather than a score:
the categories are the tool's own (`equivalent`, `mined-stronger`, `mined-weaker`, `missed`)
and the witness column is the mined clause that carried the match, verbatim.

The same run also writes `results/recovery_tables.md` (`--tables`): the same material as one
row per design, over every `recovery.json` in the results tree.
"""
from __future__ import annotations

import argparse
import json
import re
import sys
from pathlib import Path

ROOT = Path(__file__).resolve().parents[1]
sys.path.insert(0, str(ROOT))

from ace import traces as ace_traces
from ace import validation

MARK = {"equivalent": "=", "mined-stronger": "<", "mined-weaker": ">", "missed": "-"}
SETTINGS = ("declared", "interface")


def cause(reference: str, corpus=None) -> str:
    """Why the flow cannot reach a reference clause: first its shape, then its content.

    The shape reasons are properties of the template family. The content reason needs the
    traces: a consequent that is never contradicted anywhere in the corpus makes the whole
    clause a signal domain restated, which the flow drops on purpose - `rd_error_o == 0`
    cannot be mined from a stimulus that never provokes a CSR error. Calling that a
    vocabulary problem would send the reader to fix the wrong thing.
    """
    body = re.sub(r"^\s*G\s*\((.*)\)\s*$", r"\1", reference.strip(), flags=re.DOTALL)
    parts = re.split(r"\|->|\|=>", body, maxsplit=1)
    antecedent, consequent = parts[0], parts[1] if len(parts) > 1 else ""
    if "##" in antecedent:
        return "sequence antecedent"
    if "&&" in consequent:
        return "compound consequent"
    if antecedent.count("&&") >= 2:
        return "3+ proposition antecedent"
    if corpus is None:
        return "vocabulary or region"
    window = re.match(r"^##\[(\d+):(\d+)\]", validation._strip_parens(consequent))
    try:
        predicate = validation._consequent(reference)
        result = validation.evaluate(corpus, predicate)
        if result["support"] and not result["violations"]:
            return "unfalsifiable consequent"
        if window:
            # An output that fires often enough to appear in every window makes the
            # unconditioned instance true, so no antecedent discriminates and the
            # conditioned reference is never even proposed.
            unconditioned = validation.evaluate(
                corpus, f"##[{window.group(1)}:{window.group(2)}] ({predicate})")
            if unconditioned["support"] and not unconditioned["violations"]:
                return "dense output in the window"
    except Exception:                                      # noqa: BLE001 - shape fallback
        pass
    return "vocabulary or region"


def load(root: Path) -> dict:
    out = {}
    for setting in SETTINGS:
        for path in sorted((root / setting).glob("*/recovery.json")):
            out.setdefault(path.parent.name, {})[setting] = json.loads(path.read_text())
    return out


def witnesses(detail) -> set:
    return {e["mined"] for e in detail.values() if e.get("mined")}


def expected_table(design, settings, key, corpus) -> list:
    """Every expected clause of one design against what came back for it."""
    detail = settings["declared"][key]["detail"]
    other = settings["interface"][key]["detail"]
    if not detail:
        return ["_no reference clauses of this kind._", ""]
    lines = ["| expected | declared | interface | mined witness, or why nothing matched |",
             "|---|---|---|---|"]
    for reference, entry in detail.items():
        got = entry.get("mined")
        last = (f"`{got}`" if got else
                (cause(reference, corpus) if key == "guarantees" else "nothing comparable"))
        lines.append(f"| `{reference}` | {MARK[entry['category']]} {entry['category']} | "
                     f"{MARK[other.get(reference, {}).get('category', 'missed')]} | {last} |")
    return lines + [""]


def extra_table(design, settings, key, mined_key, limit=12) -> list:
    """The mined clauses no expected clause claimed - the other half of the comparison.

    These are not errors: a mined clause with no reference counterpart is either a true
    property nobody wrote down, or a stimulus artifact. They are what a precision figure
    would be computed from, so the report shows how many there are and a sample rather than
    hiding them behind a recall percentage. The full list is in `recovery.json`.
    """
    lines = []
    for setting in SETTINGS:
        mined = settings[setting][mined_key]
        extra = [m for m in mined if m not in witnesses(settings[setting][key]["detail"])]
        lines.append(f"- **{setting}**: {len(mined)} mined, {len(mined) - len(extra)} of "
                     f"them matched an expected clause, {len(extra)} with no counterpart"
                     + (" (sample, alphabetical):" if extra else "."))
        lines += [f"    - `{m}`" for m in extra[:limit]]
        if len(extra) > limit:
            lines.append(f"    - ... and {len(extra) - limit} more (all of them in "
                         f"`results/{setting}/{design}/recovery.json`)")
    return lines + [""]


def design_section(design, settings, corpus) -> list:
    d = settings["declared"]
    lines = [f"## {design}", "",
             f"{d['regions']} region(s), backend `{d['backend']}`, "
             f"{len(d['mined_invariants'])} invariants and {len(d['mined_instances'])} "
             f"template instances mined against "
             f"{d['assumptions']['references']} expected assumptions and "
             f"{d['guarantees']['references']} expected guarantees.", ""]
    if d["skipped"]:
        lines += ["Events with no region: " + ", ".join(f"`{e}`" for e in d["skipped"]), ""]
    lines += ["### Guarantees: expected vs mined", ""]
    lines += expected_table(design, settings, "guarantees", corpus)
    lines += ["**Mined guarantees with no expected counterpart**", ""]
    lines += extra_table(design, settings, "guarantees", "mined_instances")
    lines += ["### Assumptions: expected vs mined", ""]
    lines += expected_table(design, settings, "assumptions", corpus)
    lines += ["**Mined invariants with no expected counterpart**", ""]
    lines += extra_table(design, settings, "assumptions", "mined_invariants")
    return lines


def count(detail) -> dict:
    counts = {c: 0 for c in MARK}
    for entry in detail.values():
        counts[entry["category"]] += 1
    return counts


def totals(designs, key) -> list:
    lines = ["| setting | references | equivalent | stronger | weaker | missed | exact | "
             "acceptable |", "|---|---|---|---|---|---|---|---|"]
    for setting in SETTINGS:
        counts = {c: 0 for c in MARK}
        for settings in designs.values():
            for c, v in count(settings[setting][key]["detail"]).items():
                counts[c] += v
        n = sum(counts.values())
        lines.append(f"| {setting} | {n} | {counts['equivalent']} | "
                     f"{counts['mined-stronger']} | {counts['mined-weaker']} | "
                     f"{counts['missed']} | {counts['equivalent'] / n:.0%} | "
                     f"{(counts['equivalent'] + counts['mined-stronger']) / n:.0%} |")
    return lines + [""]


def misses(designs, corpora) -> list:
    lines = ["| design | reference clause | cause |", "|---|---|---|"]
    grouped = {}
    for design, settings in designs.items():
        for reference, entry in settings["declared"]["guarantees"]["detail"].items():
            if entry["category"] == "missed":
                why = cause(reference, corpora.get(design))
                lines.append(f"| {design} | `{reference}` | {why} |")
                grouped[why] = grouped.get(why, 0) + 1
    lines += ["", "totals: " + ", ".join(f"{k} {v}" for k, v in sorted(grouped.items())), ""]
    return lines


def per_design_tables(designs, corpora) -> list:
    """The same material as one row per design instead of one row per clause.

    Written from every `recovery.json` under the results tree, not from the designs of one
    scoring invocation, so the table always covers the whole benchmark even when
    `score_recovery.py` was last run on a subset.
    """
    lines = []
    for setting in SETTINGS:
        lines += [f"### {setting} vocabulary", "",
                  "| design | regions | G refs | equiv | stronger | weaker | missed | "
                  "recall | acceptable | mined G |",
                  "|---|---|---|---|---|---|---|---|---|---|"]
        grand = {c: 0 for c in MARK}
        for design, settings in designs.items():
            side = settings[setting]
            c = count(side["guarantees"]["detail"])
            n = sum(c.values())
            for k, v in c.items():
                grand[k] += v
            lines.append(
                f"| {design} | {side['regions']} | {n} | {c['equivalent']} | "
                f"{c['mined-stronger']} | {c['mined-weaker']} | {c['missed']} | "
                f"{c['equivalent'] / n:.0%} | "
                f"{(c['equivalent'] + c['mined-stronger']) / n:.0%} | "
                f"{len(side['mined_instances'])} |")
        n = sum(grand.values())
        lines += [f"| **total** | | **{n}** | **{grand['equivalent']}** | "
                  f"**{grand['mined-stronger']}** | **{grand['mined-weaker']}** | "
                  f"**{grand['missed']}** | **{grand['equivalent'] / n:.0%}** | "
                  f"**{(grand['equivalent'] + grand['mined-stronger']) / n:.0%}** | |", ""]

        lines += ["| design | A refs | equiv | stronger | weaker | missed | mined A |",
                  "|---|---|---|---|---|---|---|"]
        grand = {c: 0 for c in MARK}
        for design, settings in designs.items():
            side = settings[setting]
            c = count(side["assumptions"]["detail"])
            for k, v in c.items():
                grand[k] += v
            lines.append(
                f"| {design} | {sum(c.values())} | {c['equivalent']} | "
                f"{c['mined-stronger']} | {c['mined-weaker']} | {c['missed']} | "
                f"{len(side['mined_invariants'])} |")
        lines += [f"| **total** | **{sum(grand.values())}** | **{grand['equivalent']}** | "
                  f"**{grand['mined-stronger']}** | **{grand['mined-weaker']}** | "
                  f"**{grand['missed']}** | |", ""]

        grouped = {}
        for design, settings in designs.items():
            for reference, entry in settings[setting]["guarantees"]["detail"].items():
                if entry["category"] == "missed":
                    why = cause(reference, corpora.get(design))
                    grouped[why] = grouped.get(why, 0) + 1
        lines += ["misses by cause: "
                  + ", ".join(f"{k} {v}" for k, v in sorted(grouped.items())), ""]
    return lines


def main():
    parser = argparse.ArgumentParser(description=__doc__.splitlines()[0])
    parser.add_argument("results", nargs="?", default="results")
    parser.add_argument("--out", default="CONTRACT_RECOVERY.md")
    parser.add_argument("--tables", default="results/recovery_tables.md",
                        help="per-design summary tables, one row per design")
    parser.add_argument("--benchmarks", default="benchmarks",
                        help="where the configs live, to load the traces a diagnosis needs")
    args = parser.parse_args()

    designs = load(Path(args.results))
    if not designs:
        raise SystemExit(f"no recovery.json under {args.results}: run tools/score_recovery.py")

    lines = ["# Reference contracts: recovered and missed", "",
             "Generated by `tools/report_recovery.py` from `tools/score_recovery.py` output.",
             "Categories are trace-bounded (`method: trace-bounded` everywhere in this "
             "flow): `=` equivalent, `<` a mined clause implies the reference (a "
             "refinement), `>` the reference implies a mined clause (a weaker form came "
             "back), `-` nothing related came back. `declared` uses the design's "
             "`extra_props`; `interface` derives the vocabulary from the interface alone "
             "(`auto_vocabulary`, hints removed).", "",
             "## Totals", "", "**Guarantees**", ""]
    lines += totals(designs, "guarantees")
    lines += ["**Assumptions**", ""]
    lines += totals(designs, "assumptions")
    corpora = {}
    for design in designs:
        config = Path(args.benchmarks) / design / "config.json"
        if config.exists():
            cfg = json.loads(config.read_text())
            corpora[design] = ace_traces.load_corpus(cfg["traces"], config.parent)

    lines += ["## Missed guarantees (declared vocabulary)", ""]
    lines += misses(designs, corpora)
    lines += ["## Per design: expected against mined", ""]
    for design, settings in designs.items():
        lines += design_section(design, settings, corpora.get(design))
    Path(args.out).write_text("\n".join(lines) + "\n")
    print(f"wrote {args.out} ({len(designs)} designs)")

    Path(args.tables).write_text("\n".join(per_design_tables(designs, corpora)) + "\n")
    print(f"wrote {args.tables} ({len(designs)} designs)")


if __name__ == "__main__":
    main()
