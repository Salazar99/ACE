#!/usr/bin/env python3
"""Score what the flow recovers against a design's reference contracts.

    python3 tools/score_recovery.py benchmarks/sqrt/config.json --out results
    python3 tools/score_recovery.py benchmarks/*/config.json           # all designs

Runs the flow, then classifies every reference clause against what came out, on the mining
corpus, with the tool's own semantics:

    equivalent      a mined clause says exactly this
    mined-stronger  a mined clause implies this one (acceptable: it is a refinement)
    mined-weaker    this one implies a mined clause (the miner got a weaker version)
    missed          nothing mined relates to it

Both sides of the contract are scored, split by shape rather than by backend: a reference
assumption is an invariant with no antecedent, so it is compared against the mined clauses
of that shape, and a reference guarantee is a whole template instance, so it is compared
against the mined instances.

Two vocabulary settings are scored, because the vocabulary is what a hint-based miner can
express and the difference between the two is the honest part of the result:

    declared    the design's `extra_props` - hand-written hints, and for these benchmarks
                they were written from the reference contracts, so recall under this setting
                measures the flow, not the vocabulary
    interface   `auto_vocabulary`: every output against every input and every arithmetic
                pair of inputs, derived from the interface alone with `extra_props` removed,
                so nothing about the references leaks into the search space
"""
from __future__ import annotations

import argparse
import json
import sys
from pathlib import Path

ROOT = Path(__file__).resolve().parents[1]
sys.path.insert(0, str(ROOT))

from ace import formula, mining
from ace import traces as ace_traces
from ace import validation
from ace.__main__ import run_flow

SETTINGS = {"declared": {},
            "interface": {"auto_vocabulary": True, "extra_props": []}}


def mined_clauses(results) -> tuple:
    """Split the flow's output the way a contract is written: (invariants of A, instances of G).

    By role first, then by shape. Bucketing on shape alone put the flow's temporal
    environment clauses into the guarantee bucket, where they were compared against
    guarantee references and counted as mined guarantees - hundreds of input-only clauses
    inflating the denominator of every precision statement.
    """
    invariants, instances = [], []
    for region in results["regions"]:
        if region.get("skipped"):
            continue
        for clause in region["assumptions"]:
            try:
                if not formula.parse(clause["text"]).is_implication():
                    invariants.append(clause["text"])
            except formula.FormulaError:
                continue
        for clause in region["guarantees"]:
            try:
                if formula.parse(clause["text"]).is_implication():
                    instances.append(clause["text"])
            except formula.FormulaError:
                continue
    return sorted(set(invariants)), sorted(set(instances))


def conjunction(invariants) -> list:
    """The mined invariant side as one clause, alongside the individual ones.

    A contract's A is a conjunction `A1 && A2 && ...`, so a reference assumption written as
    `A <= 7 && B <= 7` has to be compared against the conjunction of what was mined, not
    against its members one at a time - otherwise a design whose two bounds both came back
    is scored as having missed the assumption that is exactly their conjunction.
    """
    return ([" && ".join(invariants)] if len(invariants) > 1 else [])


def score(corpus, references, mined) -> dict:
    if not references:
        return {"references": 0, "mined": len(mined), "recall": None,
                "acceptable_recall": None, "categories": {}, "detail": {}}
    report = validation.match(corpus, mined, references)
    counts = {}
    for entry in report["per_reference"].values():
        counts[entry["category"]] = counts.get(entry["category"], 0) + 1
    return {"references": len(references), "mined": len(mined),
            "recall": report["equivalent_recall"],
            "acceptable_recall": report["acceptable_recall"],
            "categories": counts,
            "detail": report["per_reference"]}


def vocabulary_size(cfg) -> dict:
    return {"interface_family": len(mining.interface_vocabulary(list(cfg["inputs"]),
                                                                list(cfg["outputs"]))),
            "declared": len(cfg.get("extra_props", []))}


def run_setting(config_path, cfg, corpus, out, setting) -> dict:
    results = run_flow(config_path, out, overrides=SETTINGS[setting])
    invariants, instances = mined_clauses(results)
    side = {"backend": results["temporal_backend"],
            "regions": sum(1 for r in results["regions"] if not r.get("skipped")),
            "skipped": [r["event"] for r in results["regions"] if r.get("skipped")],
            "mined_invariants": invariants, "mined_instances": instances,
            "assumptions": score(corpus, cfg.get("reference_assumptions", []),
                                 invariants + conjunction(invariants)),
            "guarantees": score(corpus, cfg.get("references", []), instances)}
    (out / "recovery.json").write_text(json.dumps(side, indent=1) + "\n")
    return side


def main():
    parser = argparse.ArgumentParser(description=__doc__.splitlines()[0])
    parser.add_argument("configs", nargs="+")
    parser.add_argument("--out", default="results")
    parser.add_argument("--setting", choices=(*SETTINGS, "both"), default="both")
    args = parser.parse_args()

    settings = list(SETTINGS) if args.setting == "both" else [args.setting]
    summary = []
    for config_path in args.configs:
        config_path = Path(config_path)
        cfg = json.loads(config_path.read_text())
        corpus = ace_traces.load_corpus(cfg["traces"], config_path.parent)
        row = {"design": cfg["name"], "vocabulary": vocabulary_size(cfg)}

        for setting in settings:
            out = Path(args.out) / setting / cfg["name"]
            out.mkdir(parents=True, exist_ok=True)
            side = run_setting(config_path, cfg, corpus, out, setting)
            row[setting] = {k: side[k] for k in ("backend", "regions")}
            for label in ("assumptions", "guarantees"):
                row[setting][label] = {k: side[label][k] for k in
                                       ("references", "mined", "recall",
                                        "acceptable_recall", "categories")}
            print(f"[{cfg['name']}/{setting}] {side['regions']} regions, backend "
                  f"{side['backend']}")
            for label, short in (("assumptions", "A"), ("guarantees", "G")):
                s = side[label]
                if not s["references"]:
                    print(f"    {short}: no references")
                    continue
                print(f"    {short}: {s['references']} refs, {s['mined']} mined, "
                      f"equivalent {s['recall']:.0%}, acceptable "
                      f"{s['acceptable_recall']:.0%}, {s['categories']}")
        summary.append(row)

    Path(args.out).mkdir(parents=True, exist_ok=True)
    (Path(args.out) / "recovery_summary.json").write_text(json.dumps(summary, indent=1) + "\n")
    print(f"\nwrote {Path(args.out) / 'recovery_summary.json'}")


if __name__ == "__main__":
    main()
