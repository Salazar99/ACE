"""Step 3: boundary-preserving episode extraction.

Replaces zero-padding and the re-simulation it required. For every anchor occurrence (k, t)
a contiguous window [t - h_pre, t + h_post] is clipped out of run k, clipped again at that
run's endpoints, and merged with other windows only when they touch inside the same run.

Every emitted sample is an original sample, so no synthetic hardware state is created and
no output needs repairing: this is Proposition 1 (episode provenance), and `provenance_ok`
checks it directly.

h_pre and h_post are not padding. A temporal miner cannot deduce cause and effect from a
single isolated sample: h_pre exposes the setup conditions before the trigger fires and
h_post exposes the component's obligations after the event.
"""
from __future__ import annotations

import json
from dataclasses import dataclass
from pathlib import Path

from . import traces


@dataclass(frozen=True)
class Episode:
    run: int
    lo: int
    hi: int   # inclusive

    def __len__(self):
        return self.hi - self.lo + 1

    def positions(self):
        return range(self.lo, self.hi + 1)


def extract(corpus, anchors, h_pre: int, h_post: int) -> list:
    """Windows around anchors, clipped at run bounds, merged only within a run."""
    if h_pre < 0 or h_post < 0:
        raise ValueError("h_pre and h_post must be non-negative")
    windows = {}
    for k, t in sorted(set(anchors)):
        lo = max(0, t - h_pre)
        hi = min(len(corpus.runs[k]) - 1, t + h_post)
        w = windows.setdefault(k, [])
        if w and lo <= w[-1][1] + 1:
            w[-1][1] = max(w[-1][1], hi)
        else:
            w.append([lo, hi])
    return [Episode(k, lo, hi) for k in sorted(windows) for lo, hi in windows[k]]


def anchors(event_occurrences, selection) -> set:
    """Anchors are the explained event occurrences plus the positions of the selected
    triggers, so a region contains both the stimulus and the response."""
    out = set(o for o in event_occurrences if o in selection.explained)
    for trigger in selection.selected:
        out |= set(selection.stats[trigger].anchors)
    return out


def as_corpus(corpus, episodes):
    """View a region as a corpus of one run per episode.

    Evaluating clauses against this corpus is what makes episode boundaries real: a delay
    that would reach past the end of an episode simply does not match, instead of silently
    reading the neighbouring samples of the original run.
    """
    runs = []
    for e in episodes:
        source = corpus.runs[e.run]
        runs.append(traces.Run(f"{source.name}[{e.lo}:{e.hi}]", source.header,
                               source.rows[e.lo:e.hi + 1], source.path))
    return traces.Corpus(runs, [str(corpus.runs[e.run].path) for e in episodes])


def rows_of(corpus, episodes) -> list:
    return [corpus.runs[e.run].rows[t] for e in episodes for t in e.positions()]


def provenance_ok(corpus, episodes) -> bool:
    """Proposition 1: every episode is a contiguous subsequence of exactly one run."""
    return all(0 <= e.lo <= e.hi < len(corpus.runs[e.run]) for e in episodes)


def write_region(corpus, episodes, out_dir, mode: str = "split") -> dict:
    """Write a region as miner-ready CSVs.

    mode="split"  one CSV per episode. Nothing can relate samples across a boundary, which
                  is what the finite-trace setting requires. Default.
    mode="concat" one CSV for the region. Faster (one miner call), but a temporal miner can
                  relate samples across an episode seam. Use it only when the horizon is
                  small relative to h_pre + h_post.
    """
    out_dir = Path(out_dir)
    out_dir.mkdir(parents=True, exist_ok=True)
    header = corpus.runs[0].header

    if mode == "concat":
        paths = [traces.write_rows(rows_of(corpus, episodes), header, out_dir / "region.csv")]
    elif mode == "split":
        paths = [traces.write_rows(rows_of(corpus, [e]), header,
                                   out_dir / f"episode_{i:05d}.csv")
                 for i, e in enumerate(episodes)]
    else:
        raise ValueError(f"unknown episode mode {mode!r}")

    manifest = {"mode": mode, "episodes": len(episodes),
                "samples": sum(len(e) for e in episodes),
                "provenance_ok": provenance_ok(corpus, episodes),
                "windows": [{"csv": Path(p).name, "run": corpus.runs[e.run].name,
                             "lo": e.lo, "hi": e.hi}
                            for e, p in zip(episodes, paths)] if mode == "split" else
                           [{"run": corpus.runs[e.run].name, "lo": e.lo, "hi": e.hi}
                            for e in episodes]}
    (out_dir / "episodes.json").write_text(json.dumps(manifest, indent=1))
    return {"paths": [str(p) for p in paths], "manifest": manifest}
