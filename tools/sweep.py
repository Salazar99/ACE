#!/usr/bin/env python3
"""Run the flow over a grid of configurations and record what each point recovered and cost.

    python3 tools/sweep.py benchmarks/sqrt/config.json --budgets 0.1,0.5,1.0 --seeds 10
    python3 tools/sweep.py benchmarks/*/config.json --grammars G1,G2,G3,G4,G5 --jobs 1

Every axis of the grid is something the flow already accepts - `run_flow(budget=, seed=,
overrides=)` - so a sweep point is the same run as `tools/score_recovery.py` makes, with a
different argument. Scoring is that tool's own `score`, for the same reason: a sweep point
and the committed `results/` numbers have to be comparable, which they are not if the sweep
counts clauses its own way.

One JSON line per point in `--out`. Points already in the file are skipped, so a killed
sweep resumes by being run again.

    --jobs defaults to 1. The record carries per-stage wall clock and peak RSS, and eight
    concurrent HARM processes make both meaningless. Raise it only for a sweep whose numbers
    are recall, not cost.
"""
from __future__ import annotations

import argparse
import json
import resource
import signal
import subprocess
import sys
import time
from collections import defaultdict
from multiprocessing import Pool
from pathlib import Path

ROOT = Path(__file__).resolve().parents[1]
sys.path.insert(0, str(ROOT))
sys.path.insert(0, str(Path(__file__).resolve().parent))

from ace import formula
from ace import traces as ace_traces
from ace import validation
from ace.__main__ import run_flow
from score_recovery import SETTINGS, conjunction, mined_clauses, score

AXES = ("design", "setting", "grammar", "budget", "seed")


def key(record) -> tuple:
    return tuple(record[axis] for axis in AXES)


def distinct(corpus, clauses) -> int:
    """How many semantically different guarantees were mined, on the observed corpus.

    `validation.minimize` is the flow's own equivalence grouping, but it compares each clause
    against every class canonical, and a grammar that mines four thousand clauses turns that
    into hours of mutual-implication checks. Equivalence has cheap necessary conditions that
    `validation.implies` already enforces: two equivalent implications hold the same support
    and the same delay set, and two equivalent invariants hold at the same positions. So
    clauses are bucketed on those first - one mask computation each, all of them cached on
    the corpus and reused by the comparison - and `minimize` is only asked about the clauses
    that could possibly be equivalent. The answer is the same; the pairs are not.
    """
    buckets = defaultdict(list)
    for clause in clauses:
        try:
            parsed = formula.parse(clause)
        except formula.FormulaError:
            continue
        if parsed.is_implication():
            masks = validation._cached(corpus, clause, "support")
            buckets[(tuple(masks), validation._delays(clause))].append(clause)
        else:
            buckets[(tuple(validation._cached(corpus, clause)),)].append(clause)
    return sum(len(validation.minimize(corpus, group)["kept"])
               for group in buckets.values())


class PointTimeout(TimeoutError):
    pass


def deadline(seconds: int):
    """Give the calling process `seconds` of wall clock, then raise.

    A point can run long in two different places and only one of them was ever bounded.
    `backends._run` caps HARM itself, but the expensive half of a large grammar is the flow's
    OWN filtering afterwards - subsumption is quadratic in the mined set, and
    `ibex_multdiv_fast` under G4 hands it 9650 clauses. Left alone that point does not fail,
    it simply never returns, and the sweep stops with it. The previous grammar sweep recorded
    those two points by killing them and writing the record by hand.

    The pool gives every point its own process (`maxtasksperchild=1`) and runs it on that
    process's main thread, which is what makes SIGALRM the right tool and not a trick: it
    interrupts whatever the point is doing, including a pure-Python loop that no subprocess
    timeout can see.
    """
    def fire(_signum, _frame):
        raise PointTimeout(f"did not complete in {seconds}s")

    if seconds:
        signal.signal(signal.SIGALRM, fire)
        signal.alarm(seconds)


def run_point(point) -> dict:
    """One grid point, in its own process. Returns the record to append."""
    deadline(int(point.get("timeout") or 0))
    try:
        return _run_point(point)
    finally:
        signal.alarm(0)


def _run_point(point) -> dict:
    config_path = Path(point["config"])
    cfg = json.loads(config_path.read_text())
    overrides = dict(SETTINGS[point["setting"]])
    if point["grammar"]:
        overrides["grammar"] = point["grammar"]

    record = {axis: point[axis] for axis in AXES}
    start = time.perf_counter()
    try:
        results = run_flow(config_path, Path(point["out_dir"]), budget=point["budget"],
                           seed=point["seed"], overrides=overrides)
    except subprocess.TimeoutExpired:
        # a timeout is a measurement, not a crash: RQ5 asks for the rate of them
        return {**record, "wall_s": round(time.perf_counter() - start, 3),
                "timed_out": True, "failed": "harm timeout"}
    except PointTimeout as exc:
        return {**record, "wall_s": round(time.perf_counter() - start, 3),
                "timed_out": True, "failed": f"stopped: {exc}"}
    except Exception as exc:                                    # noqa: BLE001
        return {**record, "wall_s": round(time.perf_counter() - start, 3),
                "timed_out": False, "failed": f"{type(exc).__name__}: {exc}"[:400]}
    wall = round(time.perf_counter() - start, 3)

    # HARM is this process's only child and `backends._run` waits on it, so RUSAGE_CHILDREN
    # is the peak RSS of the largest miner invocation of this point. The pool gives every
    # point a fresh process (maxtasksperchild=1), so nothing else is counted.
    peak_kb = max(resource.getrusage(resource.RUSAGE_CHILDREN).ru_maxrss,
                  resource.getrusage(resource.RUSAGE_SELF).ru_maxrss)

    # Scored on the FULL mining corpus, not the subsampled one: entailment decided on fewer
    # traces is a second reason for a category to move, and RQ3 is about what was mined from
    # a budget, not about what a shorter corpus can still tell apart.
    corpus = ace_traces.load_corpus(cfg["traces"], config_path.parent)
    invariants, instances = mined_clauses(results)
    guarantees = score(corpus, cfg.get("references", []), instances)
    assumptions = score(corpus, cfg.get("reference_assumptions", []),
                        invariants + conjunction(invariants))
    return {**record,
            "runs": results["runs"], "samples": results["samples"],
            "regions": sum(1 for r in results["regions"] if not r.get("skipped")),
            "skipped": [r["event"] for r in results["regions"] if r.get("skipped")],
            "guarantees": guarantees, "assumptions": assumptions,
            "distinct_guarantees": distinct(corpus, instances),
            "episodes": sum(r["provenance"]["episodes"] for r in results["regions"]
                            if not r.get("skipped")),
            "episode_samples": sum(r["provenance"]["episode_samples"]
                                   for r in results["regions"] if not r.get("skipped")),
            "timers_s": results["timers_s"], "wall_s": wall, "peak_rss_kb": peak_kb,
            "timed_out": False, "failed": None}


def grid(configs, settings, grammars, budgets, seeds, work, timeout=0) -> list:
    points = []
    for config in configs:
        name = json.loads(Path(config).read_text())["name"]
        for setting in settings:
            for grammar in grammars:
                for budget in budgets:
                    for seed in range(seeds):
                        tag = f"{grammar or 'cfg'}_b{budget or 1.0}_s{seed}"
                        points.append({"config": str(config), "design": name,
                                       "setting": setting, "grammar": grammar,
                                       "budget": budget, "seed": seed, "timeout": timeout,
                                       "out_dir": str(Path(work) / setting / name / tag)})
    return points


def main():
    parser = argparse.ArgumentParser(description=__doc__.splitlines()[0])
    parser.add_argument("configs", nargs="+")
    parser.add_argument("--out", default="results/sweeps/sweep.jsonl")
    parser.add_argument("--setting", choices=(*SETTINGS, "both"), default="declared")
    parser.add_argument("--grammars", default="", help="G1,G2,... ; empty keeps the config's")
    parser.add_argument("--budgets", default="", help="0.1,0.5,1.0 ; empty is the full corpus")
    parser.add_argument("--seeds", type=int, default=1)
    parser.add_argument("--jobs", type=int, default=1)
    parser.add_argument("--work", default=None, help="where run outputs go (default <out>.work)")
    parser.add_argument("--timeout", type=int, default=1800,
                        help="wall-clock budget per point in seconds; the point is recorded "
                             "as stopped rather than hanging the sweep. 0 disables it.")
    args = parser.parse_args()

    out = Path(args.out)
    out.parent.mkdir(parents=True, exist_ok=True)
    work = Path(args.work) if args.work else out.with_suffix(".work")

    points = grid(args.configs,
                  list(SETTINGS) if args.setting == "both" else [args.setting],
                  [g.strip() for g in args.grammars.split(",") if g.strip()] or [None],
                  [float(b) for b in args.budgets.split(",") if b.strip()] or [None],
                  args.seeds, work, args.timeout)

    done = set()
    if out.exists():
        done = {key(json.loads(line)) for line in out.read_text().splitlines() if line.strip()}
    todo = [p for p in points if key(p) not in done]
    print(f"{len(points)} points, {len(points) - len(todo)} already in {out}, "
          f"{len(todo)} to run, jobs={args.jobs}")

    with out.open("a") as sink:
        with Pool(args.jobs, maxtasksperchild=1) as pool:
            for record in pool.imap_unordered(run_point, todo):
                sink.write(json.dumps(record) + "\n")
                sink.flush()
                note = (record["failed"] if record.get("failed") else
                        f"G {record['guarantees']['acceptable_recall']:.0%} acceptable, "
                        f"{record['guarantees']['mined']} mined, {record['wall_s']}s")
                print(f"[{record['design']}/{record['setting']}/{record['grammar']}"
                      f"/b{record['budget']}/s{record['seed']}] {note}")
    return 0


if __name__ == "__main__":
    sys.exit(main())
