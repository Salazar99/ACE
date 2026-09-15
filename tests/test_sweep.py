"""The sweep drivers reproduce the flow they wrap.

A grid driver that scores its points a little differently from `tools/score_recovery.py`
produces a results table that cannot be compared against `results/` - and the difference is
invisible, because both numbers look reasonable. So the check is an identity: one sweep point
at the committed settings has to come back with the committed numbers.

Needs HARM, like everything else that mines.
"""
import json
import subprocess
import sys
import tempfile
from pathlib import Path

ROOT = Path(__file__).resolve().parents[1]
sys.path.insert(0, str(ROOT))
sys.path.insert(0, str(ROOT / "tools"))

from ace import backends

DESIGN = "comparator_3bit"      # 1.6 s to mine, and every category is exercised on it


def committed() -> dict:
    summary = json.loads((ROOT / "results/recovery_summary.json").read_text())
    return next(row for row in summary if row["design"] == DESIGN)["declared"]


def test_sweep_point_matches_committed_run():
    from sweep import run_point
    with tempfile.TemporaryDirectory() as tmp:
        record = run_point({"config": str(ROOT / "benchmarks" / DESIGN / "config.json"),
                            "design": DESIGN, "setting": "declared", "grammar": None,
                            "budget": None, "seed": 0, "out_dir": tmp})
    assert record["failed"] is None, record["failed"]
    want = committed()
    for side in ("guarantees", "assumptions"):
        for field in ("references", "mined", "recall", "acceptable_recall", "categories"):
            assert record[side][field] == want[side][field], \
                f"{side}.{field}: sweep {record[side][field]} != committed {want[side][field]}"
    assert record["regions"] == want["regions"]
    assert record["peak_rss_kb"] > 0 and record["wall_s"] > 0


def test_baseline_mines_the_undecomposed_corpus():
    """The baseline has to be the same miner on whole traces, not an empty run that scores 0.

    It is pointed at one CSV per run, so a mined clause may span a whole execution but not
    two of them - the finite-trace setting the decomposed flow also keeps.
    """
    from baseline import run_design
    with tempfile.TemporaryDirectory() as tmp:
        record = run_design({"config": str(ROOT / "benchmarks" / DESIGN / "config.json"),
                             "setting": "declared", "out_dir": tmp})
        assert record["failed"] is None, record["failed"]
        written = sorted(Path(tmp, "full_traces").glob("*.csv"))
    assert record["regions"] == 0                       # no decomposition happened
    assert len(written) == record["runs"] > 1           # one CSV per run, boundaries kept
    assert record["guarantees"]["mined"] > 0            # HARM ran and said something
    assert record["distinct_guarantees"] <= record["guarantees"]["mined"]


def test_a_point_that_runs_long_is_recorded_rather_than_hanging():
    """The deadline has to interrupt pure Python, not only a subprocess.

    `backends._run` already caps HARM. What was unbounded is the flow's own filtering
    afterwards, which is quadratic in the mined set: under `G4` the divider hands it 9650
    clauses and the point never returns, taking the whole sweep with it. The previous grammar
    sweep recorded those points by killing them and writing the JSON by hand.
    """
    import signal
    import time as _time

    from sweep import PointTimeout, deadline

    deadline(1)
    try:
        start = _time.perf_counter()
        while _time.perf_counter() - start < 5:         # a loop no subprocess timeout sees
            pass
    except PointTimeout as exc:
        assert "1s" in str(exc), exc
    else:
        raise AssertionError("the deadline did not fire")
    finally:
        signal.alarm(0)

    deadline(0)                                          # 0 disables it
    signal.alarm(0)


def main():
    if not backends.harm_bin():
        raise SystemExit("test_sweep: HARM not found; see tools/install_harm.sh")
    for name, fn in sorted(globals().items()):
        if name.startswith("test_") and callable(fn):
            fn()
            print(f"  {name}: ok")
    print("test_sweep: all passed")


if __name__ == "__main__":
    main()
