"""The HARM integration: the parts of it the flow can check without the miner installed.

Every test here corresponds to a way the backend was broken with HARM on PATH - a config
that aborted the whole run, a window clause that came back weaker than the in-process one,
a substitution that would rewrite a signal name, a failure that took the run down with it.
The last test runs the real binary when there is one.
"""
import io
import sys
import tempfile
from contextlib import redirect_stderr
from pathlib import Path

sys.path.insert(0, str(Path(__file__).resolve().parents[1]))

from ace import backends, mining, traces
from ace.traces import Corpus, Run

HEADER = ["bool start", "int in", "bool done"]


def fixed_latency(length=90, period=6, latency=2) -> Run:
    """start every `period` cycles, done exactly `latency` later. `in` rises with each
    request so the vocabulary has something numeric in it."""
    rows = []
    for t in range(length):
        phase = t % period
        rows.append({"start": int(phase == 0), "in": (t // period) % 16,
                     "done": int(phase == latency)})
    return Run("fixed", HEADER, rows)


def variable_latency(length=90, period=6) -> Run:
    """done answers inside the window, but never at the same offset twice running, so no
    fixed delay is true of every request."""
    rows = [{"start": 0, "in": 0, "done": 0} for _ in range(length)]
    for i, t in enumerate(range(0, length - 5, period)):
        rows[t]["start"] = 1
        rows[t]["in"] = i % 16
        rows[t + 1 + (i % 3)]["done"] = 1
    return Run("variable", HEADER, rows)


def test_numeric_header_retypes_every_column():
    # HARM types each variable from the header and rejects a bool-typed column under an
    # arithmetic operator, which is what aborted adder_8bit and arbiter4
    assert traces.numeric_header(HEADER) == ["int start", "int in", "int done"]
    assert traces.numeric_header(["uint64_t data_out"]) == ["int data_out"]
    # names survive, which is all the rest of the flow reads back out of a header
    assert [traces.signal_name(c) for c in traces.numeric_header(HEADER)] == \
           [traces.signal_name(c) for c in HEADER]


def test_written_csv_keeps_values_under_the_retyped_header():
    run = fixed_latency()
    with tempfile.TemporaryDirectory(prefix="ace_harm_") as tmp:
        path = traces.write_rows(run.rows, traces.numeric_header(run.header),
                                 Path(tmp) / "run.csv")
        assert path.read_text().splitlines()[0] == "int start,int in,int done"
        again = traces.load_run(path)
        assert again.rows == run.rows, "retyping the header must not touch a value"


def test_tighten_windows_finds_the_fixed_latency():
    corpus = Corpus(runs=[fixed_latency()])
    window = "G((start == 1) |-> ##[1:4] (done == 1))"
    out = mining._tighten_windows(corpus, [window])
    assert window in out, "the window form must still be offered"
    assert "G((start == 1) |-> ##2 (done == 1))" in out, out
    # and only the delay that is actually always right
    assert len([c for c in out if "##1 " in c or "##3 " in c or "##4 " in c]) == 0, out


def test_tighten_windows_invents_nothing_when_the_latency_varies():
    corpus = Corpus(runs=[variable_latency()])
    window = "G((start == 1) |-> ##[1:4] (done == 1))"
    out = mining._tighten_windows(corpus, [window])
    assert out == [window], out


def test_horizon_substitution_leaves_signal_names_alone():
    conf = backends.harm_conf(["G(P0 |-> ##[1:H] P1)", "G(HREADY |-> P0)"], horizon=7)
    assert "##[1:7]" in conf
    assert "HREADY" in conf, "a bare replace of 'H' would have rewritten the signal name"


def test_a_harm_failure_falls_back_loudly():
    run = fixed_latency()
    corpus = Corpus(runs=[run])
    rows = list(run.rows)
    vocabulary = ["start", "in", "done"]

    def boom(*args, **kwargs):
        raise RuntimeError("command failed (1): harm ...\nMessage: Antlr parse error")

    if not backends.available("harm"):
        return                      # the fallback under test is the one from a failure
    original = backends.harm
    backends.harm = boom
    try:
        with tempfile.TemporaryDirectory(prefix="ace_harm_") as tmp:
            stderr = io.StringIO()
            with redirect_stderr(stderr):
                clauses, backend = mining._mine_temporal(
                    Path(tmp), rows, vocabulary, "G3", 4, tmp, "guarantee",
                    cfg={"outputs": ["done"]}, runs=corpus.runs)
    finally:
        backends.harm = original

    assert backend.startswith("in-process-templates"), backend
    assert "harm failed" in backend, backend
    assert "Antlr parse error" in backend, backend
    assert "warning:" in stderr.getvalue(), stderr.getvalue()
    assert clauses, "the run must still produce clauses when the miner fails"


def test_the_real_binary_accepts_a_flag_in_arithmetic():
    """The adder_8bit shape, end to end, when HARM is installed."""
    if not backends.available("harm"):
        print("    (skipped: HARM not installed)")
        return
    run = fixed_latency()
    with tempfile.TemporaryDirectory(prefix="ace_harm_") as tmp:
        tmp = Path(tmp)
        region = tmp / "region"
        region.mkdir()
        traces.write_rows(run.rows, traces.numeric_header(run.header),
                          region / "episode_00000.csv")
        conf = backends.write_conf(
            backends.harm_conf(backends.GRAMMARS["G3"], booleans=["start", "done"],
                               numerics=["in"], horizon=4,
                               extra_props=["in + start <= 16"]),
            tmp / "conf.xml")
        backends.harm(region, conf, tmp / "dump")     # must not raise
        assert any((tmp / "dump").iterdir()), "HARM ran but wrote nothing to its dump dir"


def main():
    for name, fn in sorted(globals().items()):
        if name.startswith("test_") and callable(fn):
            fn()
            print(f"  {name}: ok")
    print("test_harm: all passed")


if __name__ == "__main__":
    main()
