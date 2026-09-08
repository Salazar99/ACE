"""Step 2: explanatory trigger mining and selection, scored by smoothed recall.

For a candidate input-side predicate a and an output event e, the candidate assertion is

    G( a |-> ##[1:H] e )

ATCT counts the positions where a matches and the event follows inside the horizon; AFCT
counts the positions where a matches and it does not. Vacuous positions (a does not match)
are never counted.

Selection uses smoothed recall

    R = (ATCT + 1) / (ATCT + AFCT + 2)

and not precision or F1: the temporal miner discards candidates with false positives, which
pins precision at 1.0 and makes F1 a restatement of recall. The +1/+2 smoothing penalises
candidates with little statistical support and keeps the number comparable across traces of
different length, which the old ATCT-AFCT volume score could not do.
"""
from __future__ import annotations

from dataclasses import dataclass, field

from . import formula


def candidate_assertion(trigger: str, event: str, horizon: int) -> str:
    return f"G(({trigger}) |-> ##[1:{horizon}] ({event}))"


@dataclass
class TriggerStats:
    trigger: str
    assertion: str
    atct: int
    afct: int
    explained: set = field(default_factory=set)   # event occurrences covered
    anchors: list = field(default_factory=list)   # matches that the event followed (ATCT)
    misses: list = field(default_factory=list)    # matches that it did not (AFCT)

    @property
    def smoothed_recall(self) -> float:
        return (self.atct + 1) / (self.atct + self.afct + 2)

    @property
    def support(self) -> int:
        return self.atct + self.afct

    def report(self) -> dict:
        return {"trigger": self.trigger, "assertion": self.assertion,
                "atct": self.atct, "afct": self.afct, "support": self.support,
                "smoothed_recall": round(self.smoothed_recall, 6),
                "explained_occurrences": len(self.explained)}


def score(corpus, trigger: str, event: str, horizon: int,
          onsets: bool = True) -> TriggerStats:
    """Evaluate one candidate over the corpus. The explained occurrences are read off the
    consequent's match positions, so they are event occurrences, not trigger positions.

    `onsets` counts a match only where the trigger was false at the previous sample. A
    request signal held high for the whole operation otherwise contributes one match per
    cycle it is held, which inflates its support by the response latency and makes it
    indistinguishable from a predicate that is simply true most of the time: on the Ibex
    divider (36-cycle operations, enable held throughout) every candidate scored the base
    rate and the design produced no region at all. Counting onsets also puts the episode
    anchors at the start of each operation instead of spreading them over its whole
    duration.
    """
    text = candidate_assertion(trigger, event, horizon)
    clause = formula.parse(text)
    guard = formula.parse(trigger) if onsets else None
    atct = afct = 0
    explained, anchors, misses = set(), [], []
    for k, run in enumerate(corpus.runs):
        for t in range(len(run)):
            if guard is not None and t and guard.holds(run, t - 1):
                continue                       # still inside the same match, not an onset
            if not clause.support(run, t):
                continue
            hits = clause.ends(run, t)
            if hits:
                atct += 1
                explained.update((k, u) for u in hits)
                # only an occurrence the event actually followed anchors a region: a match
                # with no response is evidence against the trigger, not a region to mine
                anchors.append((k, t))
            else:
                afct += 1
                misses.append((k, t))
    return TriggerStats(trigger, text, atct, afct, explained, anchors, misses)


def jaccard(a: set, b: set) -> float:
    return len(a & b) / len(a | b) if (a or b) else 0.0


@dataclass
class Selection:
    event: str
    selected: list                     # triggers, in the order they were picked
    stats: dict                        # trigger -> TriggerStats (all scored candidates)
    unassigned: list                   # event occurrences no selected trigger explains
    rejected: dict = field(default_factory=dict)   # trigger -> why it was not considered

    @property
    def explained(self) -> set:
        out = set()
        for trigger in self.selected:
            out |= self.stats[trigger].explained
        return out

    def coverage(self, total: int) -> float:
        return len(self.explained) / total if total else 0.0

    def report(self, total: int) -> dict:
        explained = [self.stats[s].explained for s in self.selected]
        multiple = {o for o in self.explained if sum(o in e for e in explained) > 1}
        return {"event": self.event,
                "selected": [self.stats[s].report() for s in self.selected],
                "coverage": round(self.coverage(total), 6),
                "overlap": round(len(multiple) / total, 6) if total else 0.0,
                "unassigned": round(len(self.unassigned) / total, 6) if total else 0.0,
                "unassigned_occurrences": len(self.unassigned),
                "rejected": self.rejected}


def base_rate(corpus, event: str, horizon: int) -> float:
    """The share of positions the event happens to follow within the horizon.

    This is what a predicate that says nothing achieves, so it is the null model a candidate
    has to beat. With a dense event it is close to 1 and no trigger can add much - which is
    a fact about the event, not a defect in the candidate.
    """
    s = score(corpus, "1 == 1", event, horizon, onsets=False)
    return s.atct / s.support if s.support else 0.0


def expected_recall(base: float, support: int) -> float:
    """Smoothed recall a null predicate with this many matches would be expected to score.

    Comparing a candidate against the unsmoothed base rate is not a fair test: the +1/+2
    smoothing pulls a candidate with six matches down to 0.875 however perfect it is, so a
    dense event rejects exactly the tight triggers it should keep. Smoothing the baseline the
    same way removes the bias, and a junk predicate with thousands of matches still lands on
    the base rate.
    """
    return (base * support + 1) / (support + 2)


def select(corpus, candidates, event: str, horizon: int, occurrences=None,
           min_recall: float = 0.5, min_gain: float = 0.05,
           redundancy_weight: float = 0.5, max_triggers: int = 8,
           min_lift: float = 0.0, min_support_frac: float = 0.1,
           onsets: bool = True) -> Selection:
    """Algorithm 1. Greedy, coverage-oriented, explicitly not requiring a partition.

    score(a) = coverage_gain(a) + smoothed_recall(a) - lambda * redundancy(a)

    Two triggers explaining the same occurrences are both kept only when neither is
    redundant enough for the penalty to sink it. Occurrences that no candidate explains are
    reported as unassigned instead of being forced into a spurious region.
    """
    if occurrences is None:
        from .labeling import label
        occurrences = label(corpus, event).occurrences
    total = set(occurrences)

    base = base_rate(corpus, event, horizon)
    stats, rejected = {}, {}
    for trigger in sorted(set(candidates)):
        try:
            s = score(corpus, trigger, event, horizon, onsets)
        except formula.FormulaError as exc:
            rejected[trigger] = f"not evaluable: {exc}"
            continue
        stats[trigger] = s
        floor = max(2, int(min_support_frac * len(total)))
        if s.support == 0:
            rejected[trigger] = "never matched in the corpus"
        elif s.support < floor:
            # A predicate that is simply true has exactly one onset per run, and smoothed
            # recall on five matches looks excellent. Requiring a share of the event count
            # is what separates "explains the event" from "was true when it happened".
            rejected[trigger] = (f"{s.support} matches is below {floor} "
                                 f"({min_support_frac:.0%} of {len(total)} occurrences): "
                                 f"too little support to explain the event")
        elif s.smoothed_recall < expected_recall(base, s.support) + min_lift:
            # A predicate that holds almost everywhere is followed by the event almost as
            # often as an arbitrary position is, so it scores well while explaining nothing.
            # Recall alone cannot see this, the comparison against the base rate can - the
            # share of positions the event happens to follow anyway. Rejecting on the match
            # rate instead (an earlier version capped it at 50% of samples) throws away real
            # triggers: an enable held high for a whole 36-cycle operation matches most
            # samples and still predicts the event.
            rejected[trigger] = (
                f"smoothed recall {s.smoothed_recall:.3f} does not beat the "
                f"{expected_recall(base, s.support):.3f} a null predicate with "
                f"{s.support} matches would score (base rate {base:.3f}): it does not "
                f"discriminate the event")
        elif s.smoothed_recall < min_recall:
            rejected[trigger] = f"smoothed recall {s.smoothed_recall:.3f} < {min_recall}"

    pool = [t for t in stats if t not in rejected]
    selected, uncovered = [], set(total)
    while uncovered and len(selected) < max_triggers:
        best, best_score = None, min_gain
        for trigger in pool:
            if trigger in selected:
                continue
            s = stats[trigger]
            gain = len(s.explained & uncovered) / max(1, len(total))
            redundancy = max((jaccard(s.explained, stats[p].explained) for p in selected),
                             default=0.0)
            # lift, not raw recall: with a dense event the base rate is already high, and a
            # candidate scoring 0.64 there explains nothing. Coverage still drives the loop,
            # which is what makes complementary triggers come out together - a multiplier
            # enable and a divider enable each explain their own half of `valid_o` - while
            # keeping candidates that merely re-explain covered occurrences out.
            value = (gain + (s.smoothed_recall - expected_recall(base, s.support))
                     - redundancy_weight * redundancy)
            if value > best_score:
                best, best_score = trigger, value
        if best is None:
            break
        selected.append(best)
        uncovered -= stats[best].explained

    for trigger in pool:
        if trigger not in selected and trigger not in rejected:
            rejected[trigger] = "marginal coverage gain below threshold"
    return Selection(event, selected, stats, sorted(uncovered), rejected)
