"""The pieces that make reference recovery measurable, and the traps they were built around.

Each test below corresponds to a defect that produced a plausible-looking but wrong number:
a bounded-response clause credited with recovering an unrelated contract, a status flag
counted as an event 2189 times, a trigger rejected for matching too often.
"""
import sys
from pathlib import Path

sys.path.insert(0, str(Path(__file__).resolve().parents[1]))

from ace import labeling, mining, triggers, validation
from ace.traces import Corpus, Run

REQ_ACK = ["req", "ack", "busy", "mode"]


def corpus_of(*runs) -> Corpus:
    return Corpus(runs=list(runs))


def handshake(length=120, latency=3, period=6):
    """req every `period` cycles, ack `latency` later, busy high in between.

    `mode` alternates between operations, so a clause conditioned on it covers half of them:
    that is what makes it a strictly weaker statement than the unconditioned one.
    """
    rows = []
    for t in range(length):
        phase = t % period
        rows.append({"req": int(phase == 0), "ack": int(phase == latency),
                     "busy": int(0 < phase <= latency),
                     "mode": (t // period) % 2})
    return Run("handshake", REQ_ACK, rows)


def test_tighten_windows_offers_the_fixed_latency():
    """HARM fills the window slot from its grammar, so `G(req |-> ##[1:5] ack)` is what comes
    back for a design that answers at a fixed offset. `mining._tighten_windows` offers the
    fixed reading alongside it and `reduce_subsumed` keeps the stronger one."""
    corpus = corpus_of(handshake())
    window = "G((req == 1) |-> ##[1:5] (ack == 1))"
    offered = mining._tighten_windows(corpus, [window])
    assert "G((req == 1) |-> ##3 (ack == 1))" in offered, offered
    kept, dropped = validation.reduce_subsumed(corpus, offered)
    assert "G((req == 1) |-> ##3 (ack == 1))" in kept
    assert window not in kept, "the fixed latency is stronger"
    assert any("subsumed" in d["why"] for d in dropped)


def test_vacuity_does_not_make_every_clause_equivalent():
    """Two violation-free implications hold at every position, so comparing them by
    satisfaction alone reports every pair as equivalent."""
    corpus = corpus_of(handshake())
    real = "G((req == 1) |-> ##3 (ack == 1))"
    unrelated = "G((ack == 0) |-> (ack <= busy))"
    assert validation.evaluate(corpus, real)["violations"] == 0
    assert validation.evaluate(corpus, unrelated)["violations"] == 0
    assert validation.classify(corpus, unrelated, real) == "incomparable"
    assert validation.classify(corpus, real, real) == "equivalent"


def test_fixed_and_windowed_delays_compare_in_one_direction_only():
    corpus = corpus_of(handshake())
    fixed = "G((req == 1) |-> ##3 (ack == 1))"
    window = "G((req == 1) |-> ##[1:5] (ack == 1))"
    same_cycle = "G((busy == 1) |-> (ack <= 1))"
    assert validation.implies(corpus, fixed, window)
    assert not validation.implies(corpus, window, fixed)
    # a different fixed offset is incomparable, not weaker
    assert not validation.implies(corpus, same_cycle, "G((busy == 1) |=> (ack <= 1))")


def test_stronger_antecedent_is_the_weaker_clause():
    corpus = corpus_of(handshake())
    general = "G((req == 1) |-> ##3 (ack == 1))"
    special = "G((req == 1) && (mode == 1) |-> ##3 (ack == 1))"
    assert validation.implies(corpus, general, special)
    assert not validation.implies(corpus, special, general)


def test_a_level_flag_is_labelled_by_its_transitions():
    """`busy == 1` is true for three samples of every six; its rising edge happens once."""
    corpus = corpus_of(handshake())
    from ace.__main__ import onset_event
    level = labeling.label(corpus, "busy == 1")
    onset = labeling.label(corpus, onset_event("busy == 1"))
    assert level.count == 60 and onset.count == 20, (level.count, onset.count)
    # the occurrence is the sample where the flag is high, which is where trigger scoring
    # reads its explained occurrences from
    assert all(corpus.runs[k].rows[t]["busy"] == 1 for k, t in onset.occurrences)


def test_a_trigger_may_match_most_samples_and_still_be_explanatory():
    """An enable held high for the whole operation matches almost every sample. Rejecting
    on the match rate loses it; scoring its onsets keeps it."""
    rows = []
    for t in range(240):
        phase = t % 40
        rows.append({"en": int(phase < 36), "done": int(phase == 35), "idle": int(phase >= 36)})
    corpus = corpus_of(Run("slow", ["en", "done", "idle"], rows))
    selection = triggers.select(corpus, ["en == 1", "idle == 1", "en <= 1"],
                                "done == 1", horizon=40)
    assert selection.selected == ["en == 1"], selection.report(6)
    assert "en <= 1" in selection.rejected                 # true everywhere: no support
    stats = selection.stats["en == 1"]
    assert stats.matches == 5, stats.report()   # one onset per operation, last one truncated


def test_undefined_arithmetic_makes_a_proposition_false_not_fatal():
    """A vocabulary derived from the interface contains propositions that are undefined on
    some samples - `out == (a << b)` with a negative b, `out == a / b` with b zero. The
    proposition must not hold there; it must not abort the run either."""
    rows = [{"a": -1, "b": -1, "out": 0}, {"a": 4, "b": 1, "out": 8}]
    corpus = corpus_of(Run("signed", ["a", "b", "out"], rows))
    result = validation.evaluate(corpus, "out == (a << b)")
    assert result["support"] == 2 and result["violations"] == 1, result
    assert validation.evaluate(corpus, "out == a / b")["support"] == 2


def test_domain_trivial_keeps_real_implications():
    corpus = corpus_of(handshake())
    assert mining.domain_trivial(corpus, "G((req == 1) |-> ##3 (ack == 1))") is None
    # consequent true everywhere: the antecedent selects nothing
    assert mining.domain_trivial(corpus, "G((req == 1) |-> (ack <= 1))")
    # antecedent true everywhere: not a conditional statement at all
    assert mining.domain_trivial(corpus, "G((req <= 1) |-> ##[1:5] (ack == 1))")
    # an assumption that holds everywhere is the assumption, not a triviality
    assert mining.domain_trivial(corpus, "req <= 1", consequent=False) is None
    assert mining.domain_trivial(corpus, "req <= 1")


def main():
    for name, fn in sorted(globals().items()):
        if name.startswith("test_") and callable(fn):
            fn()
            print(f"  {name}: ok")
    print("test_recovery: all passed")


if __name__ == "__main__":
    main()
