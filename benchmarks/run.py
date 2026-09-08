#!/usr/bin/env python3
"""Build, simulate and validate the ACE trace benchmark.

    python3 benchmarks/run.py                                         # everything
    python3 benchmarks/run.py --design sqrt
    python3 benchmarks/run.py --validate-only                         # re-check contracts

Steps per design:

1. build      verilator --binary on the design's RTL plus the benchmark testbench
2. simulate   one run per seed; mining seeds and held-out seeds are disjoint
3. validate   every candidate A/G contract in <design>/candidates.json is evaluated on the
              mining corpus with the tool's own evaluator (ace.formula). A candidate is
              CONFIRMED when it has support and no violation, and the confirmed set is
              written into <design>/config.json as the reference contracts.

Nothing here mines anything: the benchmark's job is to produce traces and a reference set
that the flow can be measured against.
"""
from __future__ import annotations

import argparse
import json
import shutil
import subprocess
import sys
from pathlib import Path

BENCH = Path(__file__).resolve().parent
ROOT = BENCH.parent
sys.path.insert(0, str(ROOT))

# mine_*: corpus for mining and for validating the reference contracts
# holdout_*: independent runs, same nominal environment, for the tool's Step 5
# stress_*: the environment breaks the contracts' assumptions (operations aborted, reset
#           asserted mid-operation). Not part of the reference-contract corpus; use them to
#           test how a mined contract behaves when its assumption is violated.
MINE_SEEDS = (1, 2, 3, 4, 5)
HOLDOUT_SEEDS = (101, 102, 103)
STRESS_SEEDS = (201, 202)

# rtl:       paths relative to the ACE FDL26_tests tree, in compile order
# local_rtl: paths relative to this design's own folder, for the designs added here rather
#            than taken from FDL26. Those folders are self-contained - RTL, testbench,
#            generate.sh - and `./generate.sh` in one of them produces its ten traces with
#            nothing but verilator, independently of this script.
DESIGNS = {
    "comparator_3bit": {
        "rtl": ["comparator_3bit/rtl/verified_comparator_3bit.v"],
        "cycles": 400,
    },
    "adder_8bit": {
        "rtl": ["adder_8bit/rtl/verified_adder_8bit.v"],
        "cycles": 500,
    },
    "ibex_csr": {
        "rtl": ["ibex_csr/rtl/ibex_csr.sv"],
        "cycles": 500,
    },
    "accumulator": {
        "rtl": ["accumulator/tb/accuintf.sv", "accumulator/rtl/verified_accu.sv"],
        "cycles": 800,
    },
    "multi_16bit": {
        "rtl": ["multi_16bit/rtl/verified_multi_16bit.v"],
        "cycles": 1000,
    },
    "sqrt": {
        "rtl": ["sqrt/tb/sqrtintf.sv", "sqrt/rtl/sqrt_calculator.sv"],
        "cycles": 1000,
    },
    "ibex_alu": {
        "rtl": ["ibex_alu/rtl/ibex_pkg.sv", "ibex_alu/rtl/ibex_alu.sv"],
        "cycles": 1200,
    },
    "ibex_multdiv_fast": {
        "rtl": ["ibex_alu/rtl/ibex_pkg.sv",
                "ibex_multdiv_fast/rtl/ibex_multdiv_fast.sv"],
        "cycles": 1500,
    },
    # protocol blocks added for this benchmark: request/grant arbitration, a queue with
    # flags, and a bus slave with wait states. Their RTL lives in their own folder.
    "arbiter4": {
        "local_rtl": ["rtl/arbiter4.sv"],
        "cycles": 1000,
    },
    "fifo_sync": {
        "local_rtl": ["rtl/fifo_sync.sv"],
        "cycles": 1200,
    },
    "apb_slave": {
        "local_rtl": ["rtl/apb_slave.sv"],
        "cycles": 1200,
    },
}


# Where the eight FDL26 designs keep their RTL. The old flow now lives under
# legacy/fdl26/, so both layouts are accepted and the repository itself is the default:
# nothing has to be passed on the command line inside a checkout.
FDL26_CANDIDATES = ("legacy/fdl26/FDL26/FDL26_tests", "FDL26/FDL26_tests")


def find_fdl26_tests(ace_root=None):
    root = Path(ace_root) if ace_root else ROOT
    for relative in FDL26_CANDIDATES:
        if (root / relative).is_dir():
            return root / relative
    raise SystemExit(f"FDL26 designs not found under {root} "
                     f"(looked in {', '.join(FDL26_CANDIDATES)}); pass --ace-root")


def sh(command, cwd=None):
    result = subprocess.run(command, shell=True, cwd=cwd, capture_output=True, text=True)
    if result.returncode != 0:
        raise SystemExit(f"failed: {command}\n{result.stdout[-3000:]}\n{result.stderr[-3000:]}")
    return result.stdout


def build(design, ace_tests, build_dir):
    spec = DESIGNS[design]
    rtl = [str(ace_tests / p) for p in spec.get("rtl", ())]
    rtl += [str(BENCH / design / p) for p in spec.get("local_rtl", ())]
    missing = [p for p in rtl if not Path(p).exists()]
    if missing:
        raise SystemExit(f"{design}: RTL not found: {missing}")
    tb = BENCH / design / f"tb_{design}.sv"
    obj = build_dir / f"obj_{design}"
    obj.mkdir(parents=True, exist_ok=True)   # verilator does not create parent directories
    sh(f'verilator --binary --timing -j 0 -Wno-fatal -Wno-WIDTHTRUNC -Wno-WIDTHEXPAND '
       f'-Wno-TIMESCALEMOD --top-module tb_{design} '
       f'-Mdir "{obj}" -o sim {" ".join(chr(34) + p + chr(34) for p in rtl)} "{tb}"')
    return obj / "sim"


def simulate(design, sim, out_dir):
    out_dir.mkdir(parents=True, exist_ok=True)
    cycles = DESIGNS[design]["cycles"]
    written = []
    for tag, seeds, scenario in (("mine", MINE_SEEDS, "nominal"),
                                 ("holdout", HOLDOUT_SEEDS, "nominal"),
                                 ("stress", STRESS_SEEDS, "stress")):
        for seed in seeds:
            csv = out_dir / f"{tag}_seed{seed:03d}.csv"
            sh(f'"{sim}" +seed={seed} +cycles={cycles} +scenario={scenario} '
               f'+out="{csv}"')
            written.append(csv)
    return written


def evaluate_under(corpus, guarantee, invariants, horizon):
    """Check a guarantee at the samples where every assumption invariant holds.

    A contract is (A, G): A is a conjunction of INVARIANTS - propositional predicates over
    the environment, no temporal operator - and G is a conjunction of whole
    G(antecedent -> consequent) properties, one per template instance, exactly the objects
    the temporal backend emits. Nothing from A is folded into a guarantee's antecedent: a
    sample where an invariant fails is a sample where the environment left the contract's
    domain, so nothing is claimed there.
    """
    from ace import formula

    clause = formula.parse(guarantee.replace("H", horizon))
    guards = [formula.parse(inv) for inv in invariants]

    support = violations = excluded = 0
    for run in corpus.runs:
        for t in range(len(run)):
            if not all(g.holds(run, t) for g in guards):
                excluded += 1
                continue
            if not clause.support(run, t):
                continue
            support += 1
            if not clause.holds(run, t):
                violations += 1
    return {"support": support, "violations": violations,
            "excluded_by_assumptions": excluded}


def write_contracts(design, results, assumptions):
    """Write <design>/reference_contracts.txt: the contracts and nothing else.

    Guarantees are grouped by the set of invariants they are claimed under, so each block
    is one contract: A is the conjunction of those invariants, G the conjunction of the
    whole G(antecedent -> consequent) formulas owed under it.
    """
    groups = {}
    for r in results:
        if r["status"] != "confirmed":
            continue
        groups.setdefault(tuple(r.get("assumption_ids", [])), []).append(r["resolved"])

    lines = []
    for index, (ids, clauses) in enumerate(sorted(groups.items()), start=1):
        invariants = " && ".join(assumptions[i]["invariant"] for i in ids) or "true"
        lines.append(f"CONTRACT {design}.{index}")
        lines.append(f"A: {invariants}")
        for i, clause in enumerate(clauses):
            lines.append(f"{'G:' if i == 0 else '  '} {clause}")
        lines.append("")
    (BENCH / design / "reference_contracts.txt").write_text("\n".join(lines))


def validate(design, traces_dir):
    """Check the reference contracts of one design against its traces.

    Two things are checked, separately:

    1. every environment assumption, on its own, over the whole corpus - the benchmark
       environment is supposed to satisfy the assumptions it declares;
    2. every guarantee, at the positions where its contract's assumptions hold.
    """
    from ace import traces as ace_traces
    from ace import validation

    candidates = json.loads((BENCH / design / "candidates.json").read_text())
    config = json.loads((BENCH / design / "config.json").read_text())
    horizon = str(config["horizon"])
    corpus = ace_traces.load_corpus(["mine_*.csv"], traces_dir)
    holdout = ace_traces.load_corpus(["holdout_*.csv"], traces_dir)
    stress = ace_traces.load_corpus(["stress_*.csv"], traces_dir)

    assumptions = {a["id"]: a for a in candidates.get("assumptions", [])}
    assumption_results = []
    for a in assumptions.values():
        clause = a["invariant"]
        mine = validation.evaluate(corpus, clause)
        hard = validation.evaluate(stress, clause)
        # An assumption is a FILTER, not a claim about the design: positions where it
        # fails are positions where the environment broke its side, and the guarantee is
        # simply not checked there. What matters is that the corpus exercises it at all,
        # and how often the environment honours it.
        held = mine["support"] - mine["violations"]
        assumption_results.append({
            **a, "resolved": clause,
            "positions_checked": mine["support"], "positions_honoured": held,
            "honoured_rate": round(held / mine["support"], 4) if mine["support"] else None,
            "stress_positions_checked": hard["support"],
            "stress_positions_honoured": hard["support"] - hard["violations"],
            "status": ("exercised" if held else
                       "never holds" if mine["support"] else "never applies")})
        # for an invariant, "positions_checked" is every sample and "positions_honoured"
        # is the size of the environment subset the contract is about

    results = []
    for candidate in candidates["contracts"]:
        used = [assumptions[i]["invariant"] for i in candidate.get("assumption_ids", [])]
        mine = evaluate_under(corpus, candidate["guarantee"], used, horizon)
        held = evaluate_under(holdout, candidate["guarantee"], used, horizon)
        # On the stress corpus the environment breaks its assumptions, so the guarantee is
        # checked there WITHOUT the guards: that is what a contract used outside its
        # assumptions looks like.
        hard = evaluate_under(stress, candidate["guarantee"], [], horizon)
        results.append({**candidate,
                        "resolved": candidate["guarantee"].replace("H", horizon),
                        "support": mine["support"], "violations": mine["violations"],
                        "excluded_by_assumptions": mine["excluded_by_assumptions"],
                        "holdout_support": held["support"],
                        "holdout_violations": held["violations"],
                        "stress_support": hard["support"],
                        "stress_violations": hard["violations"],
                        "status": ("confirmed" if mine["support"] and not mine["violations"]
                                   else "vacuous" if not mine["support"]
                                   else "violated")})

    out_of_grammar = [{**e, "minable": False}
                      for e in candidates.get("out_of_grammar", [])]

    confirmed = [r["resolved"] for r in results
                 if r["status"] == "confirmed" and not r["holdout_violations"]]

    props, seen = [], set()
    for r in results:
        for prop in r.get("props", []):
            key = (prop["exp"], prop.get("loc"), prop.get("stage"))
            if key not in seen:
                seen.add(key)
                props.append(prop)

    config_path = BENCH / design / "config.json"
    config["references"] = confirmed
    config["reference_assumptions"] = [a["resolved"] for a in assumption_results
                                       if a["status"] == "exercised"]
    config["extra_props"] = props
    config_path.write_text(json.dumps(config, indent=1) + "\n")

    write_contracts(design, results, assumptions)

    (traces_dir / "reference_check.json").write_text(json.dumps(
        {"design": design, "runs": len(corpus.runs), "samples": corpus.samples,
         "assumptions": assumption_results, "contracts": results,
         "out_of_grammar": out_of_grammar}, indent=1) + "\n")
    return results, corpus, assumption_results


def main():
    parser = argparse.ArgumentParser(description=__doc__.splitlines()[0])
    parser.add_argument("--ace-root", help="repository holding the FDL26 RTL "
                        "(default: this repository)")
    parser.add_argument("--design", default="all")
    parser.add_argument("--out", default=str(BENCH / "traces"))
    parser.add_argument("--build-dir", default=str(BENCH / "build"))
    parser.add_argument("--validate-only", action="store_true")
    args = parser.parse_args()

    designs = list(DESIGNS) if args.design == "all" else [args.design]
    for design in designs:
        if design not in DESIGNS:
            raise SystemExit(f"unknown design {design}; have: {', '.join(DESIGNS)}")

    if args.design == "all":
        # A copy of this benchmark may carry only some of the designs - the drop-in bundle
        # ships the three protocol blocks alone - so a folder that is not there is skipped
        # rather than fatal. Naming a missing design explicitly is still an error.
        present = [d for d in designs if (BENCH / d / "candidates.json").exists()]
        missing = [d for d in designs if d not in present]
        if missing:
            print(f"skipping {len(missing)} design(s) not present here: "
                  f"{', '.join(missing)}")
        designs = present
    elif not (BENCH / args.design / "candidates.json").exists():
        raise SystemExit(f"{args.design}: no candidates.json in {BENCH / args.design}")

    if not args.validate_only:
        if not shutil.which("verilator"):
            raise SystemExit("verilator is not on PATH (the RTL has to be simulated to "
                             "produce traces; --validate-only re-checks existing traces)")
        ace_tests = find_fdl26_tests(args.ace_root)

    summary = []
    for design in designs:
        traces_dir = Path(args.out) / design
        if not args.validate_only:
            print(f"[{design}] building")
            sim = build(design, ace_tests, Path(args.build_dir))
            print(f"[{design}] simulating {len(MINE_SEEDS)} + {len(HOLDOUT_SEEDS)} runs")
            simulate(design, sim, traces_dir)
        results, corpus, assumption_results = validate(design, traces_dir)
        confirmed = sum(1 for r in results if r["status"] == "confirmed")
        bad_assumptions = [a["id"] for a in assumption_results
                           if a["status"] != "exercised"]
        print(f"[{design}] {len(corpus.runs)} runs, {corpus.samples} samples, "
              f"{confirmed}/{len(results)} guarantees confirmed, "
              f"{len(assumption_results) - len(bad_assumptions)}/"
              f"{len(assumption_results)} assumptions exercised")
        if bad_assumptions:
            print(f"    assumptions never exercised: {', '.join(bad_assumptions)}")
        for a in assumption_results:
            if a["honoured_rate"] is not None and a["honoured_rate"] < 1.0:
                print(f"    {a['id']}: environment honours it at "
                      f"{a['honoured_rate']:.1%} of the positions it applies to")
        holdout_bad = [r["id"] for r in results if r["holdout_violations"]]
        if holdout_bad:
            print(f"    held-out violations: {', '.join(holdout_bad)}")
        stressed = sum(1 for r in results if r["stress_violations"])
        print(f"    {stressed}/{len(results)} contracts are violated on the stress corpus")
        for r in results:
            if r["status"] != "confirmed":
                print(f"    {r['status']:9s} {r['id']}: support={r['support']} "
                      f"violations={r['violations']}")
        summary.append({"design": design, "runs": len(corpus.runs),
                        "samples": corpus.samples, "contracts": len(results),
                        "confirmed": confirmed,
                        "assumptions": len(assumption_results)})

    (Path(args.out) / "summary.json").write_text(json.dumps(summary, indent=1) + "\n")
    print(f"\nwrote {Path(args.out) / 'summary.json'}")


if __name__ == "__main__":
    main()
