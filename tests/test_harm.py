"""The HARM integration: the backend the flow requires.

Every test here corresponds to a way the backend was broken with HARM on PATH - a config
that aborted the whole run, a window clause that came back weaker than the reference, a
substitution that would rewrite a signal name. Most of them are pure unit tests over the
configuration and the failure text; the last two need the binary, which is not optional.
"""
import sys
import tempfile
from pathlib import Path

sys.path.insert(0, str(Path(__file__).resolve().parents[1]))

from ace import backends, formula, mining, traces, validation, vocabulary
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


def test_interface_vocabulary_declares_no_shift():
    """A shift by a signal aborts the whole miner, not just the clause.

    HARM checks the shift amount against the left operand's declared width and calls
    `messageErrorIf`, which exits; every column the flow writes is retyped `int`, so any
    stimulus above 32 kills the run - and now that HARM is the only backend, it kills the
    run rather than costing seven regions quietly.
    """
    props = [p["exp"] for p in mining.interface_vocabulary(
        ["a", "b", "cin"], ["sum", "cout"], limit=0)]
    assert props, "the family must still emit something"
    assert not [p for p in props if "<<" in p or ">>" in p], (
        "shift propositions abort HARM; `{out} * 2 <= {a}` expresses the same thing")
    assert any("&" in p for p in props), "the rest of the bitwise family must survive"


def test_last_message_prefers_the_error_over_warnings():
    """HARM writes warnings to stdout and errors to stderr, both as `Message:`.

    The two are told apart only by a leading tab. Reset warnings are noisy enough to fill
    the whole character budget, which once hid the real cause of an abort.
    """
    failure = RuntimeError(
        "\tMessage: Reset 'presetn == 0' is not effective: subtrace of size 1 at time 146\n"
        "\tMessage: Reset 'presetn == 0' is not effective: subtrace of size 1 at time 157\n"
        "[ERROR] File: GenericExpression.cc at line 631\n"
        "Message: right side of left bit shift is greater than left side size, got:103\n")
    assert backends.last_message(failure) == (
        "Message: right side of left bit shift is greater than left side size, got:103")


def test_last_message_falls_back_to_warnings_when_there_is_no_error():
    failure = RuntimeError("\tMessage: Reset 'rst_n == 0' is not effective\n")
    assert "Reset 'rst_n == 0'" in backends.last_message(failure)


def test_a_harm_failure_takes_the_run_down():
    """No second backend, so a failed region is not quietly mined some other way.

    The clauses of a region mined by something else are not comparable with the rest of the
    run, and the warning that said so was only ever read when someone went looking. The
    failure now propagates out of `_mine_temporal` with HARM's own message attached.
    """
    run = fixed_latency()
    rows = list(run.rows)

    def boom(*args, **kwargs):
        raise RuntimeError("command failed (1): harm ...\nMessage: Antlr parse error")

    original = backends.harm
    backends.harm = boom
    try:
        with tempfile.TemporaryDirectory(prefix="ace_harm_") as tmp:
            try:
                mining._mine_temporal(Path(tmp), rows, ["start", "in", "done"], "G3", 4,
                                      tmp, "guarantee", cfg={"outputs": ["done"]},
                                      runs=[run])
            except RuntimeError as exc:
                assert "Antlr parse error" in str(exc), exc
            else:
                raise AssertionError("a HARM failure must not be swallowed")
    finally:
        backends.harm = original


def test_require_names_the_installation_it_wants():
    """The message a machine without HARM gets is the whole user experience of the gate."""
    original = backends.harm_bin
    backends.harm_bin = lambda: None
    try:
        try:
            backends.require()
        except backends.BackendMissing as exc:
            assert "HARM_BIN" in str(exc) and "install_harm.sh" in str(exc), exc
        else:
            raise AssertionError("require() must refuse when there is no binary")
    finally:
        backends.harm_bin = original
    assert backends.require(), "HARM is required to run these tests"


def test_the_real_binary_accepts_a_flag_in_arithmetic():
    """The adder_8bit shape, end to end, on the installed binary."""
    backends.require()
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


def test_a_declared_edge_survives_the_round_trip():
    """`$rose` out to HARM, the two-sample form back: the two must mean the same thing.

    HARM's proposition grammar (`proposition.g4`) has no `##`, so the form `formula.py`
    evaluates cannot be declared to it and the form it accepts cannot be parsed back. The
    flow declares `$rose(start)` and swaps `vocabulary.edge_props`'s second form in on
    read-back, which is only sound if the clause that comes back is still true of the trace
    under the flow's own evaluator - and it is the swap, not the miner, that decides whether
    a delay is measured from the rise or from the sample before it.
    """
    backends.require()
    run = fixed_latency()
    props = vocabulary.edge_props(run.rows, ["start", "in", "done"], ["in == 3"])
    rise = next(p for p in props if p["exp"] == "$rose(start)")
    assert rise["ace"] == "((!(start == 1)) ##1 (start == 1))", rise

    with tempfile.TemporaryDirectory(prefix="ace_harm_") as tmp:
        tmp = Path(tmp)
        region = tmp / "region"
        region.mkdir()
        traces.write_rows(run.rows, traces.numeric_header(run.header),
                          region / "episode_00000.csv")
        conf = backends.write_conf(
            backends.harm_conf(["G(P0 |-> ##[1:H] P1)"], booleans=["start", "done"],
                               numerics=["in"], horizon=4, extra_props=props),
            tmp / "conf.xml")
        mined = backends.harm(region, conf, tmp / "dump")

    raw = [formula.strip_braces(c) for c in mined]
    assert any("$rose(start)" in c for c in raw), raw
    readable = [mining._readable(c, props) for c in raw]
    assert not [c for c in readable if "$" in c], readable
    corpus = Corpus([run])
    for clause in readable:
        result = validation.evaluate(corpus, clause)     # parses, and still holds
        assert not result["violations"], (clause, result)
    assert any("(!(start == 1)) ##1 (start == 1 && in == 3)" in c for c in readable), (
        "the guard has to come back INSIDE the sequence, not beside it", readable)


def main():
    for name, fn in sorted(globals().items()):
        if name.startswith("test_") and callable(fn):
            fn()
            print(f"  {name}: ok")
    print("test_harm: all passed")


if __name__ == "__main__":
    main()
