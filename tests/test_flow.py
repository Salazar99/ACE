"""End-to-end: Steps 1-5 on a synthetic square-root IP, with no miner installed.

The IP mirrors the running example: a valid non-negative request raises `done` two cycles
after `start`, a negative request raises `error` instead.
"""
import json
import math
import random
import shutil
import sys
import tempfile
from pathlib import Path

sys.path.insert(0, str(Path(__file__).resolve().parents[1]))

from ace import episodes as episodes_mod
from ace import traces
from ace.__main__ import run_flow

HEADER = "bool rst,bool start,int in,int out,bool error,bool done"


def synth_run(seed, length=120):
    rng = random.Random(seed)
    rows = [{"rst": 0, "start": 0, "in": 0, "out": 0, "error": 0, "done": 0}
            for _ in range(length)]
    t = 2
    while t < length - 4:
        if rng.random() < 0.45:
            value = rng.randint(-40, 120)
            rows[t]["start"] = 1
            rows[t]["in"] = value
            for u in range(t, min(length, t + 3)):
                rows[u]["in"] = value
            if value >= 0:
                rows[t + 2]["done"] = 1
                rows[t + 2]["out"] = int(math.isqrt(value))
            else:
                rows[t + 2]["error"] = 1
            t += 12
        else:
            t += 1
    return rows


def write_corpus(directory, seeds):
    directory.mkdir(parents=True, exist_ok=True)
    names = [c.split()[-1] for c in HEADER.split(",")]
    for seed in seeds:
        lines = [HEADER]
        for row in synth_run(seed):
            lines.append(",".join(str(row[n]) for n in names))
        (directory / f"sqrt_{seed}.csv").write_text("\n".join(lines) + "\n")
    return directory


def build_config(root):
    write_corpus(root / "traces", [1, 2, 3, 4])
    write_corpus(root / "holdout", [91, 92])
    cfg = {
        "name": "synthetic_sqrt",
        "traces": ["traces/*.csv"],
        "holdout": ["holdout/*.csv"],
        "inputs": ["start", "in", "rst"],
        "outputs": ["out", "error", "done"],
        "events": ["done == 1", "error == 1"],
        "horizon": 4,
        "h_pre": 2,
        "h_post": 4,
        "grammar": "G3",
        "episode_mode": "split",
        "min_recall": 0.5,
        "references": ["G(start == 1 && in >= 0 |-> ##2 done == 1)"],
    }
    path = root / "synthetic_sqrt.json"
    path.write_text(json.dumps(cfg, indent=1))
    return path


def main():
    assert shutil.which("harm") is None or True  # the flow must work either way
    root = Path(tempfile.mkdtemp(prefix="ace_flow_"))
    try:
        config = build_config(root)
        results = run_flow(config, root / "out")

        assert (root / "out" / "contracts.json").exists()
        assert (root / "out" / "report.md").exists()
        assert results["runs"] == 4 and results["samples"] == 480

        done = next(r for r in results["regions"] if r["event"] == "done == 1")
        assert done.get("skipped") is None, done
        assert done["labels"]["occurrences"] > 5, done["labels"]

        # Step 2: the selected trigger must actually explain the event - every occurrence,
        # with no unanswered match. Which text it picks is not asserted: on these traces
        # `in > rst` and `start == 1 && in >= 0` explain exactly the same occurrences (a
        # request is the only time `in` is non-zero), so demanding the phrasing a human
        # would have written would be tuning the flow to the test.
        best = done["triggers"][0]
        assert best["smoothed_recall"] > 0.9, best
        assert best["afct"] == 0, "a negative request must not be explained by this trigger"
        assert done["trigger_selection"]["coverage"] > 0.9, done["trigger_selection"]

        # smoothed recall must equal its definition, not an F1 in disguise
        expected = (best["atct"] + 1) / (best["atct"] + best["afct"] + 2)
        assert abs(best["smoothed_recall"] - expected) < 1e-6

        # Step 3: episode provenance, and no window outside its own run
        prov = done["provenance"]
        assert prov["episode_provenance_ok"] and prov["episodes"] > 0
        manifest = json.loads((root / "out" / "work" /
                               "region_done_1" / "episodes.json").read_text())
        corpus = traces.load_corpus(["traces/*.csv"], root)
        by_name = {r.name: r for r in corpus.runs}
        for window in manifest["windows"]:
            run = by_name[window["run"]]
            assert 0 <= window["lo"] <= window["hi"] < len(run)
            emitted = traces.load_run(root / "out" / "work" / "region_done_1" /
                                      window["csv"])
            assert len(emitted) == window["hi"] - window["lo"] + 1
            for i, row in enumerate(emitted.rows):
                original = run.rows[window["lo"] + i]
                assert row == original, "episodes must contain original samples only"

        # Step 4: role fencing and trace consistency
        assumption_signals = set()
        for clause in done["assumptions"]:
            assumption_signals |= set(_signals(clause["text"]))
        assert assumption_signals <= {"start", "in", "rst"}, assumption_signals
        for clause in done["guarantees"]:
            assert set(_signals(clause["text"])) & {"out", "error", "done"}
        assert done["metrics"]["trace_consistent"]["violations"] == 0

        # the documented square-root assumption must come back out of the flow
        assumptions = [c["text"] for c in done["assumptions"]]
        assert "in >= 0" in assumptions, assumptions
        error_region = next(r for r in results["regions"] if r["event"] == "error == 1")
        assert any("in <=" in c["text"] or "in <" in c["text"]
                   for c in error_region["assumptions"]), error_region["assumptions"]

        # Step 5: held-out validation ran on the independent corpus
        validation = done["validation"]
        assert validation["held_out_units"] > 0, validation
        assert validation["method"] == "trace-bounded"

        # and the documented response contract must come back out, at its exact latency
        match = validation["reference_match"]["per_reference"][cfg_reference()]
        assert match["category"] == "equivalent", match
        assert "##2" in match["mined"], match

        error = error_region
        assert error.get("skipped") is None, error
        assert error["labels"]["occurrences"] > 0

        # separate events must not collapse into the same region
        assert done["provenance"]["triggers"] != error["provenance"]["triggers"] or \
            done["labels"]["occurrences"] != error["labels"]["occurrences"]

        # RQ-free sanity: a trace budget keeps whole runs
        small = run_flow(config, root / "out_small", budget=0.5, seed=7)
        assert small["runs"] == 2 and small["samples"] == 240

        print("test_flow: all passed")
    finally:
        shutil.rmtree(root, ignore_errors=True)


def cfg_reference():
    return "G(start == 1 && in >= 0 |-> ##2 done == 1)"


def _signals(text):
    from ace.formula import parse
    return parse(text).signals()


if __name__ == "__main__":
    main()
