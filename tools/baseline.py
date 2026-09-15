#!/usr/bin/env python3
"""Mine each design directly, with no decomposition, as the baseline for RQ1.

    python3 tools/baseline.py benchmarks/*/config.json --out results/sweeps/baseline.jsonl

Same miner, same grammar, same vocabulary, same horizon, same scorer as the decomposed run -
the only difference is what HARM is pointed at. `ace/__main__.corpus_traces` already writes
the full mining corpus as HARM-ready CSVs (it is what trigger enumeration reads), and
`mining._mine_temporal` is the flow's own guarantee-mining call, so the baseline is the
decomposed flow with Steps 1-3 removed rather than a second implementation of Step 4.

Run boundaries still hold: the corpus is passed as a directory, one CSV per run, so nothing
mined relates samples across executions. What is gone is the episode boundary.

Output is one JSON line per design, in the shape `tools/sweep.py` writes, so RQ1 and the
decomposed points can be read from one place.
"""
from __future__ import annotations

import argparse
import json
import resource
import signal
import subprocess
import sys
import time
from multiprocessing import Pool
from pathlib import Path

ROOT = Path(__file__).resolve().parents[1]
sys.path.insert(0, str(ROOT))
sys.path.insert(0, str(Path(__file__).resolve().parent))

from ace import backends, formula, mining
from ace import traces as ace_traces
from ace.__main__ import corpus_traces
from score_recovery import SETTINGS, conjunction, score
from sweep import PointTimeout, deadline, distinct


def split_by_shape(clauses, inputs, outputs) -> tuple:
    """Bucket raw mined clauses the way a contract is written.

    The decomposed flow labels each clause with a role and `score_recovery.mined_clauses`
    buckets on that label. Direct mining produces no labels, so the same split is made on
    the two things the label was derived from: an invariant is a clause with no implication
    that constrains only the environment, a guarantee instance is an implication that
    constrains an observable output.
    """
    invariants, instances = [], []
    for text in clauses:
        try:
            parsed = formula.parse(text)
        except formula.FormulaError:
            continue
        signals = parsed.signals()
        if parsed.is_implication():
            if signals & set(outputs):
                instances.append(text)
        elif signals <= set(inputs):
            invariants.append(text)
    return sorted(set(invariants)), sorted(set(instances))


def run_design(point) -> dict:
    """One design, in its own process, under the same wall-clock budget a sweep point gets.

    Undecomposed mining hands the filtering the clauses of the whole corpus rather than of a
    region, so it is the side of RQ1 more likely to run long, not less.
    """
    deadline(int(point.get("timeout") or 0))
    try:
        return _run_design(point)
    finally:
        signal.alarm(0)


def _run_design(point) -> dict:
    config_path = Path(point["config"])
    cfg = json.loads(config_path.read_text())
    cfg.update(SETTINGS[point["setting"]])
    work = Path(point["out_dir"])
    work.mkdir(parents=True, exist_ok=True)
    record = {"design": cfg["name"], "setting": point["setting"], "mode": "baseline",
              "grammar": cfg.get("grammar", "G3"), "budget": None, "seed": 0}

    start = time.perf_counter()
    corpus = ace_traces.load_corpus(cfg["traces"], config_path.parent)
    rows = [row for run in corpus.runs for row in run.rows]
    inputs, outputs = list(cfg["inputs"]), list(cfg["outputs"])
    try:
        mined, backend = mining._mine_temporal(
            corpus_traces(corpus, work / "full_traces"), rows, inputs + outputs,
            record["grammar"], int(cfg["horizon"]), work, "guarantee",
            cfg.get("reset"), cfg, corpus.runs)
    except subprocess.TimeoutExpired:
        return {**record, "wall_s": round(time.perf_counter() - start, 3),
                "timed_out": True, "failed": "harm timeout"}
    except PointTimeout as exc:
        return {**record, "wall_s": round(time.perf_counter() - start, 3),
                "timed_out": True, "failed": f"stopped: {exc}"}
    except Exception as exc:                                    # noqa: BLE001
        return {**record, "wall_s": round(time.perf_counter() - start, 3),
                "timed_out": False,
                "failed": f"{type(exc).__name__}: {backends.last_message(exc)}"[:400]}
    mine_s = round(time.perf_counter() - start, 3)
    peak_kb = max(resource.getrusage(resource.RUSAGE_CHILDREN).ru_maxrss,
                  resource.getrusage(resource.RUSAGE_SELF).ru_maxrss)

    invariants, instances = split_by_shape(mined, inputs, outputs)
    # The A side of a contract is a conjunction of propositional invariants, and HARM mines
    # implications - so a baseline given only HARM recovers no assumption at all, and would
    # lose the comparison for a reason that has nothing to do with decomposition. The flow
    # gets its invariants from `mining.propositional_invariants` over the region; the baseline
    # is given the same miner over the whole corpus, which is the undecomposed counterpart.
    invariants = sorted(set(invariants) | {
        text for text in mining.propositional_invariants(rows, inputs + outputs)
        if formula.parse(text).signals() <= set(inputs)})
    return {**record,
            "runs": len(corpus.runs), "samples": sum(len(r) for r in corpus.runs),
            "regions": 0, "skipped": [],
            "guarantees": score(corpus, cfg.get("references", []), instances),
            "assumptions": score(corpus, cfg.get("reference_assumptions", []),
                                 invariants + conjunction(invariants)),
            "distinct_guarantees": distinct(corpus, instances),
            "episodes": 0, "episode_samples": sum(len(r) for r in corpus.runs),
            "timers_s": {"4_mine": mine_s}, "wall_s": mine_s, "peak_rss_kb": peak_kb,
            "temporal_backend": backend, "timed_out": False, "failed": None}


def main():
    parser = argparse.ArgumentParser(description=__doc__.splitlines()[0])
    parser.add_argument("configs", nargs="+")
    parser.add_argument("--out", default="results/sweeps/baseline.jsonl")
    parser.add_argument("--setting", choices=SETTINGS, default="declared")
    parser.add_argument("--jobs", type=int, default=1)
    parser.add_argument("--work", default=None)
    parser.add_argument("--timeout", type=int, default=1800,
                        help="wall-clock budget per design in seconds; 0 disables it")
    args = parser.parse_args()

    out = Path(args.out)
    out.parent.mkdir(parents=True, exist_ok=True)
    work = Path(args.work) if args.work else out.with_suffix(".work")
    done = set()
    if out.exists():
        done = {(json.loads(l)["design"], json.loads(l)["setting"])
                for l in out.read_text().splitlines() if l.strip()}

    points = []
    for config in args.configs:
        name = json.loads(Path(config).read_text())["name"]
        if (name, args.setting) in done:
            continue
        points.append({"config": str(config), "setting": args.setting,
                       "timeout": args.timeout,
                       "out_dir": str(work / args.setting / name)})
    print(f"{len(points)} designs to mine undecomposed, jobs={args.jobs}")

    with out.open("a") as sink:
        with Pool(args.jobs, maxtasksperchild=1) as pool:
            for record in pool.imap_unordered(run_design, points):
                sink.write(json.dumps(record) + "\n")
                sink.flush()
                note = (record["failed"] if record.get("failed") else
                        f"{record['guarantees']['mined']} mined "
                        f"({record['distinct_guarantees']} distinct), "
                        f"{record['guarantees']['acceptable_recall']:.0%} acceptable, "
                        f"{record['wall_s']}s")
                print(f"[{record['design']}] {note}")
    return 0


if __name__ == "__main__":
    sys.exit(main())
