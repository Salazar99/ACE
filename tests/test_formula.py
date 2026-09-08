"""Finite-trace semantics: delays, vacuity, run boundaries, arithmetic."""
import sys
from pathlib import Path

sys.path.insert(0, str(Path(__file__).resolve().parents[1]))

from ace.formula import FormulaError, parse, strip_braces, tokenize
from ace.traces import Run

ROWS = [{"start": 1, "done": 0, "inp": 5, "out": 2},
        {"start": 0, "done": 0, "inp": 5, "out": 2},
        {"start": 0, "done": 1, "inp": 5, "out": 2},
        {"start": 0, "done": 0, "inp": 5, "out": 2}]
RUN = Run("t", ["bool start", "bool done", "int inp", "int out"], ROWS)


def check(cases):
    for text, t, want in cases:
        got = parse(text).holds(RUN, t)
        assert got == want, f"{text!r} at t={t}: got {got}, want {want}"


def test_propositional():
    check([("start == 1", 0, True), ("start == 1", 1, False),
           ("start", 0, True), ("!start", 0, False), ("!start", 1, True),
           ("start && inp >= 0", 0, True), ("start && done", 0, False),
           ("start || done", 0, True), ("start || done", 1, False),
           ("true", 0, True), ("false", 0, False),
           ("inp != 5", 0, False), ("inp == inp", 0, True)])


def test_arithmetic():
    check([("inp + 1 > inp", 0, True), ("inp - 5 == 0", 0, True),
           ("inp * 2 == 10", 0, True), ("inp / 5 == 1", 0, True),
           ("out * out <= inp", 0, True), ("-inp < 0", 0, True),
           ("(inp + inp) / 2 == inp", 0, True)])


def test_temporal():
    check([("X(done == 1)", 1, True), ("X(X(done == 1))", 0, True),
           ("##2 done == 1", 0, True), ("##1 done == 1", 0, False),
           ("start ##2 done", 0, True), ("start ##1 done", 0, False),
           ("start ##[1:3] done == 1", 0, True),
           ("start ##[3:4] done == 1", 0, False)])


def test_run_boundary():
    # a window that leaves the run does not match: nothing is satisfied off the end
    check([("##9 done", 0, False), ("X(X(X(X(done))))", 0, False),
           ("done ##1 done", 2, False)])
    assert parse("G(done == 1 |-> ##1 done == 0)").holds(RUN, 2) is True
    assert parse("G(done == 1 |-> ##2 done == 0)").holds(RUN, 2) is False, \
        "consequent falling off the run must not count as satisfied"


def test_implication_and_vacuity():
    f = parse("G(start == 1 |-> ##2 done == 1)")
    assert f.holds(RUN, 0) and f.support(RUN, 0)
    assert f.holds(RUN, 1) and not f.support(RUN, 1), "no antecedent match is vacuous"
    assert f.ends(RUN, 0) == [2], f.ends(RUN, 0)
    assert parse("G(start |=> ##1 done)").holds(RUN, 0)
    assert not parse("G(start |=> done)").holds(RUN, 0)
    assert parse("start -> inp >= 0").holds(RUN, 0)


def test_every_antecedent_match_counts():
    rows = [{"a": 1, "b": 0}, {"a": 1, "b": 1}, {"a": 0, "b": 0}, {"a": 0, "b": 1}]
    run = Run("m", ["bool a", "bool b"], rows)
    # a matches at t=0 with ends {0}; b must hold within [1:2]: it does at t=1
    assert parse("G(a |-> ##[1:2] b)").holds(run, 0)
    # both delays are checked, not just the first that works
    assert not parse("G(a |-> ##[2:3] b && ##[2:3] a)").holds(run, 0)


def test_shapes_and_errors():
    assert parse(strip_braces("G({start} |-> {##2 done})")).holds(RUN, 0)
    assert sorted(parse("G(start |-> ##[1:3] done)").signals()) == ["done", "start"]
    assert parse("G(start |-> done)").is_implication()
    assert not parse("start").is_implication()
    assert len(tokenize("a::b >= 1")) == 3
    assert parse("a::b >= 1").signals() == frozenset({"a::b"}), "scoped names survive"
    for bad in ("", "start &&", "start ##[3:1] done", "start ##"):
        try:
            parse(bad).holds(RUN, 0)
        except FormulaError:
            continue
        raise AssertionError(f"{bad!r} should not parse")
    try:
        parse("missing == 1").holds(RUN, 0)
    except FormulaError as exc:
        assert "missing" in str(exc)
    else:
        raise AssertionError("unknown signal must raise")


if __name__ == "__main__":
    for name, fn in sorted(globals().items()):
        if name.startswith("test_"):
            fn()
            print(f"ok  {name}")
    print("test_formula: all passed")
