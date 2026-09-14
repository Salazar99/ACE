"""Step 2: explanatory trigger mining and selection, scored by smoothed recall.

For a candidate input-side predicate a and an output event e, the candidate assertion is

    G( a |-> ##[1:H] e )

and the statistic that selects it is the smoothed recall

    R = (ATCT + 1) / (ATCT + AFCT + 2)

over the EVENT OCCURRENCES: ATCT is the number of occurrences of e that a explains, AFCT the
number it leaves unexplained, so ATCT + AFCT = |E| and R is a smoothed TP/(TP+FN). The +1/+2
smoothing penalises candidates with little statistical support and keeps the number
comparable across traces of different length, which the old ATCT-AFCT volume score could not.

Two names collide here and the collision is worth stating once. HARM's contingency table is
over SAMPLES, and there `afct` means antecedent-false -> consequent-true. That is the same
cell as the AFCT above (an occurrence the trigger did not predict), which is why the sort
expression handed to HARM is the same formula. Its `atcf` - the trigger fired and the event
did not follow - is the precision cell, which has no counterpart in an occurrence-indexed
population: every occurrence of e has the consequent true by definition. Both readings are
recorded per candidate in `cells`, so nothing is lost.

Recall alone would rank a predicate that fires constantly first, since firing everywhere
explains everything. `expected_recall` is what stops it: a candidate is compared against what
a predicate firing as often as it does would explain by chance.
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
    occurrences: int                              # |E|, the population R is measured over
    explained: set = field(default_factory=set)   # event occurrences covered
    anchors: list = field(default_factory=list)   # firings the event followed
    misses: list = field(default_factory=list)    # firings it did not
    cells: dict = field(default_factory=dict)     # the per-sample table, HARM's names

    @property
    def atct(self) -> int:
        """Occurrences of e that this candidate explains - TP."""
        return len(self.explained)

    @property
    def afct(self) -> int:
        """Occurrences of e left unexplained - FN."""
        return max(0, self.occurrences - self.atct)

    @property
    def smoothed_recall(self) -> float:
        return (self.atct + 1) / (self.atct + self.afct + 2)

    @property
    def matches(self) -> int:
        """Onset-guarded positions where the candidate fires.

        Not `atct + afct`, which is now |E| and identical for every candidate of one event.
        This is the statistical support: how much evidence the candidate rests on.
        """
        return len(self.anchors) + len(self.misses)

    @property
    def precision(self) -> float:
        """Share of firings the event followed. Reported, not filtered on."""
        return len(self.anchors) / self.matches if self.matches else 0.0

    def report(self) -> dict:
        return {"trigger": self.trigger, "assertion": self.assertion,
                "atct": self.atct, "afct": self.afct, "matches": self.matches,
                "smoothed_recall": round(self.smoothed_recall, 6),
                "precision": round(self.precision, 6),
                "explained_occurrences": len(self.explained),
                "sample_cells": self.cells}


def reachable_events(corpus, event: str, horizon: int) -> list:
    """Per run, per sample, the ends of `##[1:H] e` starting there - the occurrences of e a
    trigger firing at that sample would explain.

    Depends only on (event, horizon), not on the candidate, so it is computed once and
    memoised on the corpus: a sweep over sixty candidates would otherwise evaluate the same
    delayed consequent sixty times at every sample.
    """
    cache = corpus.__dict__.setdefault("_reach_cache", {})
    key = (event, horizon)
    if key not in cache:
        consequent = formula.parse(f"##[1:{horizon}] ({event})")
        cache[key] = [[tuple(consequent.ends(run, t)) for t in range(len(run))]
                      for run in corpus.runs]
    return cache[key]


def score(corpus, trigger: str, event: str, horizon: int,
          onsets: bool = True, occurrences=None) -> TriggerStats:
    """Evaluate one candidate over the corpus.

    The explained occurrences are read off the consequent's match positions, so they are
    event occurrences, not trigger positions, and ATCT/AFCT are counts over those.

    `onsets` counts a match only where the trigger was false at the previous sample. A
    request signal held high for the whole operation otherwise contributes one match per
    cycle it is held, which inflates its support by the response latency and makes it
    indistinguishable from a predicate that is simply true most of the time: on the Ibex
    divider (36-cycle operations, enable held throughout) every candidate scored the base
    rate and the design produced no region at all. Counting onsets also puts the episode
    anchors at the start of each operation instead of spreading them over its whole
    duration.

    `cells` records the per-sample contingency table in HARM's names alongside, plus the
    positions the onset guard suppressed, which belong to no cell and would otherwise be
    invisible. Nothing selects on it; it is there so any metric can be recomputed from the
    artifact without rerunning the flow.
    """
    if occurrences is None:
        from .labeling import label
        occurrences = label(corpus, event).occurrences
    total = len(set(occurrences))

    text = candidate_assertion(trigger, event, horizon)
    clause = formula.parse(text)
    guard = formula.parse(trigger) if onsets else None
    reach = reachable_events(corpus, event, horizon)
    cells = {"atct": 0, "atcf": 0, "afct": 0, "afcf": 0, "suppressed": 0}
    explained, anchors, misses = set(), [], []
    for k, run in enumerate(corpus.runs):
        ends = reach[k]
        for t in range(len(run)):
            if guard is not None and t and guard.holds(run, t - 1):
                cells["suppressed"] += 1       # still inside the same match, not an onset
                continue
            if not clause.support(run, t):
                cells["afct" if ends[t] else "afcf"] += 1
                continue
            # the implication is asked for the consequent, not `ends[t]`: it starts the
            # delay at the END of the antecedent match, which differs for an edge predicate
            hits = clause.ends(run, t)
            if hits:
                cells["atct"] += 1
                explained.update((k, u) for u in hits)
                # only an occurrence the event actually followed anchors a region: a match
                # with no response is evidence against the trigger, not a region to mine
                anchors.append((k, t))
            else:
                cells["atcf"] += 1
                misses.append((k, t))
    return TriggerStats(trigger, text, total, explained, anchors, misses, cells)


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
    """The share of positions from which the event follows within the horizon.

    The probability that a predicate saying nothing, firing at an arbitrary position,
    happens to be followed by the event. With a dense event it is close to 1 and no trigger
    can add much - which is a fact about the event, not a defect in the candidate.
    """
    reach = reachable_events(corpus, event, horizon)
    positions = sum(len(run) for run in reach)
    return sum(1 for run in reach for ends in run if ends) / positions if positions else 0.0


def expected_recall(base: float, matches: int, total: int) -> float:
    """Smoothed recall a null predicate firing this often would be expected to score.

    This is what keeps recall honest. Recall on its own is maximised by firing constantly:
    a predicate that matches at every second sample explains every occurrence of the event
    without predicting any of them. Such a predicate has `matches` in the thousands, so its
    expected explained count saturates at `total` and its lift falls to zero, while a trigger
    that fires once per operation has a small expectation and a large one.

    The count is capped at `total` because a predicate cannot explain an occurrence twice.
    Smoothing the baseline the same +1/+2 way as the candidate removes the bias smoothing
    itself introduces at low support.
    """
    return (min(base * matches, total) + 1) / (total + 2)


def select(corpus, candidates, event: str, horizon: int, occurrences=None,
           min_recall: float = 0.2, min_gain: float = 0.05,
           redundancy_weight: float = 0.5, max_triggers: int = 8,
           min_lift: float = 0.0, min_support_frac: float = 0.1,
           onsets: bool = True) -> Selection:
    """Algorithm 1. Greedy, coverage-oriented, explicitly not requiring a partition.

    score(a) = coverage_gain(a) + lift(a) - lambda * redundancy(a)

    where lift(a) = smoothed_recall(a) - expected_recall(base, matches(a), |E|): recall alone
    is maximised by a predicate that fires constantly, and the lift is what sees through it.
    `min_gain` thresholds this combined score, not the gain term alone.

    `min_recall` is deliberately low. It asks what ONE trigger explains, and a region with
    two complementary triggers - a multiplier enable and a divider enable, each accounting
    for its own half of `valid_o` - has no single candidate above a half.

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
            s = score(corpus, trigger, event, horizon, onsets, occurrences)
        except formula.FormulaError as exc:
            rejected[trigger] = f"not evaluable: {exc}"
            continue
        stats[trigger] = s
        floor = max(2, int(min_support_frac * len(total)))
        if s.matches == 0:
            rejected[trigger] = "never matched in the corpus"
        elif s.matches < floor:
            # A predicate that is simply true has exactly one onset per run, and whatever it
            # happens to explain from there looks like a result. Requiring a share of the
            # event count separates "explains the event" from "was true when it happened".
            rejected[trigger] = (f"{s.matches} matches is below {floor} "
                                 f"({min_support_frac:.0%} of {len(total)} occurrences): "
                                 f"too little support to explain the event")
        elif s.smoothed_recall < expected_recall(base, s.matches, len(total)) + min_lift:
            # A predicate that fires often explains occurrences by arriving shortly before
            # them, not by predicting them. Recall alone cannot see this; the comparison
            # against what its own match count would explain by chance can.
            rejected[trigger] = (
                f"smoothed recall {s.smoothed_recall:.3f} does not beat the "
                f"{expected_recall(base, s.matches, len(total)):.3f} a null predicate with "
                f"{s.matches} matches would score (base rate {base:.3f}): it does not "
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
            # lift, not raw recall: recall counts what a candidate explains, and a predicate
            # that fires constantly explains everything. Marginal coverage still drives the
            # loop, which is what makes complementary triggers come out together - a
            # multiplier enable and a divider enable each explain their own half of
            # `valid_o` - while keeping candidates that merely re-explain covered
            # occurrences out.
            value = (gain + (s.smoothed_recall - expected_recall(base, s.matches, len(total)))
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
