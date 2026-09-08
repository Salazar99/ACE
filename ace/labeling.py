"""Step 1: output-event labeling.

Replaces fault injection. An output event is a user-declared observable predicate; its
occurrence set is found by one linear scan of the original traces, with no IP encapsulation,
no forced signals and no re-simulation. The label is determined entirely by the observed
output value, so nothing about fault propagation or internal logic cones is claimed.
"""
from __future__ import annotations

from dataclasses import dataclass

from . import formula


@dataclass
class EventLabels:
    event: str
    occurrences: list          # [(run index, sample index)]
    samples: int

    @property
    def count(self) -> int:
        return len(self.occurrences)

    @property
    def density(self) -> float:
        return self.count / self.samples if self.samples else 0.0

    def per_run(self) -> dict:
        out = {}
        for k, _ in self.occurrences:
            out[k] = out.get(k, 0) + 1
        return out

    def report(self) -> dict:
        return {"event": self.event, "occurrences": self.count,
                "samples": self.samples, "density": round(self.density, 6),
                "runs_with_occurrences": len(self.per_run())}


def label(corpus, event: str) -> EventLabels:
    """E_e(T) = {(k, t) | tau_k, t |=f e}, recorded at the sample where the match ENDS.

    For a single-sample predicate that is the sample itself. For a multi-sample event - the
    rising edge `(!(done == 1)) ##1 (done == 1)` - the occurrence is the sample where `done`
    is high, not the one before it. Trigger scoring reads its explained occurrences off the
    same end positions (`Formula.ends`), so recording the start instead makes the two sets
    disjoint and every candidate look as if it explained nothing: the first version of the
    edge-labelled square root skipped both of its events that way.
    """
    clause = formula.parse(event)
    hits = [(k, end) for k, run in enumerate(corpus.runs)
            for t in range(len(run)) for end in clause.ends(run, t)]
    return EventLabels(event, sorted(set(hits)), corpus.samples)


def occurrences_of(corpus, expression: str) -> list:
    """Match positions of any expression, used for trigger anchors as well as events."""
    clause = formula.parse(expression)
    return sorted({(k, end) for k, run in enumerate(corpus.runs)
                   for t in range(len(run)) for end in clause.ends(run, t)})
