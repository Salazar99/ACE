"""The ACE flow, wired end to end.

    export ACEROOT=/path/to/ACE          # only needed by configs that read ACE traces
    python3 -m ace configs/sqrt.json --out results/sqrt

Per-stage wall-clock times are recorded for every run. Simulation time is absent by
construction: the flow never re-simulates the IP.
"""
from __future__ import annotations

import argparse
import json
import re
import sys
import time
from contextlib import contextmanager
from pathlib import Path

from . import (backends, episodes as episodes_mod, labeling, mining, templates,
               traces, triggers)

REQUIRED = ("name", "traces", "inputs", "outputs", "events", "horizon", "h_pre", "h_post")


class Timers(dict):
    @contextmanager
    def stage(self, name):
        start = time.perf_counter()
        yield
        self[name] = round(time.perf_counter() - start, 4)


def load_config(path) -> dict:
    cfg = json.loads(Path(path).read_text())
    missing = [k for k in REQUIRED if k not in cfg]
    if missing:
        raise SystemExit(f"config {path} is missing: {', '.join(missing)}")
    return cfg


# --------------------------------------------------------------- trigger candidates

def antecedent_text(assertion: str) -> str:
    """'G({a} |-> {##1 b})' -> 'a'."""
    body = re.sub(r"^\s*G\s*\((.*)\)\s*$", r"\1", assertion.strip(), flags=re.DOTALL)
    parts = re.split(r"\|->|\|=>|(?<![|>=])->", body, maxsplit=1)
    return parts[0].replace("{", "").replace("}", "").strip() if len(parts) == 2 else None


def onset_event(event: str) -> str:
    """The rising edge of an output event: `(!(done == 1)) ##1 (done == 1)`.

    A status flag that stays asserted is not an event. The square root holds `done` high
    between requests, so `done == 1` is true at 44% of samples and every position has a
    `done` within the horizon: no trigger can beat that base rate, and the whole
    done-response family of contracts was skipped for want of a candidate. Labelling the
    transition instead of the level turns 2189 "occurrences" into 247 completions and makes
    the request predicate explanatory again. Signals that are already pulses (a one-cycle
    `valid_out`) are unaffected: every high sample is a rising edge.
    """
    return f"(!({event})) ##1 ({event})"


def mine_candidates(corpus, event, cfg, workdir) -> tuple:
    """Enumerate candidate triggers with HARM, using the event as the consequent.
    Falls back to predicates read off the observed input values when HARM is absent."""
    templates = []
    for template in backends.GRAMMARS[cfg.get("grammar", "G3")]:
        slots = sorted(set(re.findall(r"P\d+", template)))
        if slots:
            templates.append(template.replace(slots[-1], f"({event})"))
    rows = [row for run in corpus.runs for row in run.rows]
    booleans, numerics = backends.classify_signals(rows, cfg["inputs"])
    conf = backends.write_conf(
        backends.harm_conf(templates, booleans, numerics, cfg["horizon"], loc="a,dt"),
        Path(workdir) / "trigger_conf.xml")
    try:
        # the traces live in one directory, so HARM mines them all in a single call with
        # each run kept separate
        mined = backends.harm(Path(corpus.runs[0].path).parent, conf,
                              Path(workdir) / "trigger_harm", reset=cfg.get("reset"),
                              max_ass=cfg.get("max_ass"), min_frank=cfg.get("min_frank"))
        found = sorted({a for a in (antecedent_text(m) for m in mined) if a})
        if found:
            return found, "harm"
    except backends.BackendMissing:
        pass
    return (observed_predicates(corpus, list(cfg["inputs"])),
            "observed values and interface relations (harm unavailable)")


def observed_predicates(corpus, signals, max_candidates: int = 60) -> list:
    """Trigger vocabulary when no miner is installed, derived from the traces and the
    interface: equalities against the values a signal actually takes, its observed bounds,
    the orderings between pairs of inputs, and pairwise conjunctions of all of those.

    The pair orderings matter as much as the value predicates and neither a value-clustering
    miner nor a bounds-only vocabulary produces them: what explains a comparator asserting
    `A_greater` is `A > B`, and no predicate over A alone comes close. An earlier version
    offered bounds and small-domain equalities only, and every combinational design in the
    benchmark was skipped for want of a candidate that discriminates its event.
    """
    rows = [row for run in corpus.runs for row in run.rows]
    atoms = templates.predicates(rows, signals)
    for i, a in enumerate(signals):
        for b in signals[i + 1:]:
            atoms += [f"{a} > {b}", f"{a} == {b}", f"{a} < {b}"]

    out = list(atoms)
    for i, a in enumerate(atoms):
        for b in atoms[i + 1:]:
            if len(out) >= max_candidates:
                return out
            if a.split()[0] != b.split()[0]:   # same signal twice is either trivial or empty
                out.append(f"{a} && {b}")
    return out


def _num(value):
    return int(value) if float(value).is_integer() else value


# ------------------------------------------------------------------------- the flow

def run_flow(config_path, out_dir, budget=None, seed=0, episode_mode=None,
             overrides=None) -> dict:
    cfg = load_config(config_path)
    base = Path(config_path).parent
    if overrides:
        # trace paths are resolved against the config's directory, so a variant of a run
        # (a different vocabulary, say) is expressed as an override rather than a copied file
        cfg.update(overrides)
    if episode_mode:
        cfg["episode_mode"] = episode_mode
    out = Path(out_dir)
    work = out / "work"
    work.mkdir(parents=True, exist_ok=True)
    timers = Timers()

    with timers.stage("load"):
        corpus = traces.load_corpus(cfg["traces"], base)
        if budget:
            corpus = corpus.subsample(budget, seed)
        holdout = (traces.load_corpus(cfg["holdout"], base)
                   if cfg.get("holdout") else None)

    # An episode shorter than the horizon cannot decide a bounded-response clause: the
    # window leaves the episode, and boundary-preserving extraction makes those positions
    # vacuous rather than violated. Every `##[1:H]` guarantee is then unreachable by
    # construction, which is worth saying out loud rather than discovering as a zero.
    if int(cfg["h_post"]) < int(cfg["horizon"]):
        print(f"warning: h_post={cfg['h_post']} < horizon={cfg['horizon']}: bounded-response "
              f"clauses cannot be decided inside an episode", file=sys.stderr)

    unknown = [s for s in cfg["inputs"] + cfg["outputs"] if s not in corpus.signals()]
    if unknown:
        raise SystemExit(f"signals not in the traces: {unknown}\n"
                         f"available: {corpus.signals()}")

    results = {"benchmark": cfg["name"], "overrides": overrides or {},
               "episode_covers_horizon": int(cfg["h_post"]) >= int(cfg["horizon"]), "ace_version": __import__("ace").__version__,
               "runs": len(corpus.runs), "samples": corpus.samples,
               "trace_budget": budget, "seed": seed,
               "temporal_backend": backends.temporal_backend(),
               "regions": []}

    for raw_event in cfg["events"]:
        event = (onset_event(raw_event) if cfg.get("event_onsets", False) else raw_event)
        slug = re.sub(r"\W+", "_", raw_event).strip("_")
        region_dir = work / f"region_{slug}"

        with timers.stage(f"1_label:{event}"):
            labels = labeling.label(corpus, event)
        if labels.count == 0:
            results["regions"].append({"event": event, "skipped": "event never occurs",
                                       "labels": labels.report()})
            continue

        with timers.stage(f"2_triggers:{event}"):
            candidates = cfg.get("trigger_candidates")
            source = "config"
            if not candidates:
                candidates, source = mine_candidates(corpus, event, cfg, region_dir)
            selection = triggers.select(
                corpus, candidates, event, int(cfg["horizon"]), labels.occurrences,
                cfg.get("min_recall", 0.5), cfg.get("min_gain", 0.05),
                cfg.get("redundancy_weight", 0.5), cfg.get("max_triggers", 8),
                cfg.get("min_lift", 0.0), cfg.get("min_trigger_support", 0.1),
                cfg.get("trigger_onsets", True))

        if not selection.selected:
            results["regions"].append({
                "event": event, "skipped": "no candidate passed selection",
                "labels": labels.report(), "candidate_source": source,
                "triggers": selection.report(labels.count)})
            continue

        with timers.stage(f"3_episodes:{event}"):
            anchors = episodes_mod.anchors(labels.occurrences, selection)
            eps = episodes_mod.extract(corpus, anchors, int(cfg["h_pre"]),
                                       int(cfg["h_post"]))
            written = episodes_mod.write_region(corpus, eps, region_dir,
                                               cfg.get("episode_mode", "split"))

        with timers.stage(f"4_mine:{event}"):
            contract = mining.mine(corpus, {"episodes": eps, "write": written},
                                   selection, cfg, region_dir, holdout)

        record = contract.to_dict()
        record["labels"] = labels.report()
        record["candidate_source"] = source
        record["trigger_selection"] = selection.report(labels.count)
        results["regions"].append(record)

    results["timers_s"] = dict(timers)
    (out / "contracts.json").write_text(json.dumps(results, indent=2, default=str))
    (out / "report.md").write_text(render_report(results))
    return results


def render_report(results) -> str:
    lines = [f"# ACE contracts: {results['benchmark']}", "",
             f"- traces: {results['runs']} runs, {results['samples']} samples",
             f"- temporal backend: {results['temporal_backend']}",
             f"- trace budget: {results['trace_budget'] or 'full corpus'} "
             f"(seed {results['seed']})", ""]
    for region in results["regions"]:
        lines.append(f"## Event `{region['event']}`")
        if region.get("skipped"):
            lines += [f"skipped: {region['skipped']}", ""]
            continue
        labels, prov = region["labels"], region["provenance"]
        lines += [f"- occurrences: {labels['occurrences']} "
                  f"({labels['density']:.4f} of samples)",
                  f"- triggers ({region['candidate_source']}):"]
        for t in region["triggers"]:
            lines.append(f"    - `{t['trigger']}` "
                         f"R={t['smoothed_recall']:.3f} "
                         f"ATCT={t['atct']} AFCT={t['afct']} "
                         f"explains {t['explained_occurrences']}")
        sel = region["trigger_selection"]
        lines += [f"- coverage {sel['coverage']:.3f}, overlap {sel['overlap']:.3f}, "
                  f"unassigned {sel['unassigned']:.3f}",
                  f"- episodes: {prov['episodes']} "
                  f"({prov['episode_samples']} samples, mode {prov['episode_mode']}, "
                  f"provenance {'ok' if prov['episode_provenance_ok'] else 'BROKEN'})",
                  "", "### Assumptions"]
        lines += [f"- `{c['text']}` ({c['kind']})" for c in region["assumptions"]] or ["- none"]
        lines += ["", "### Guarantees"]
        lines += [f"- `{c['text']}` ({c['kind']})" for c in region["guarantees"]] or ["- none"]
        consistency = region["metrics"]["trace_consistent"]
        lines += ["", f"- trace consistency: {consistency['violations']} violations over "
                      f"{consistency['positions']} positions",
                  f"- dropped candidates: {region['metrics']['dropped']}"]
        v = region.get("validation") or {}
        if v.get("held_out_units"):
            kept = v["minimization"]["kept"]
            lines += [f"- held-out: {v['held_out_units']} episodes of the same region, "
                      f"{len(kept)} clauses generalise and survive minimization"]
            if v.get("reference_match"):
                m = v["reference_match"]
                lines.append(f"- reference match: equivalent "
                             f"{m['equivalent_recall']}, acceptable {m['acceptable_recall']}")
        else:
            lines.append(f"- held-out: {v.get('note', 'not run')}")
        lines.append("")
    lines += ["## Stage times (s)", ""]
    lines += [f"- {k}: {v}" for k, v in results["timers_s"].items()]
    return "\n".join(lines) + "\n"


def main(argv=None):
    parser = argparse.ArgumentParser(prog="python3 -m ace",
                                     description="ACE output-guided contract mining")
    parser.add_argument("config", help="benchmark config JSON")
    parser.add_argument("--out", default="results", help="output directory")
    parser.add_argument("--budget", type=float,
                        help="keep this fraction of whole runs (e.g. 0.25)")
    parser.add_argument("--seed", type=int, default=0)
    parser.add_argument("--episode-mode", choices=("split", "concat"),
                        help="override the config's episode writing mode")
    args = parser.parse_args(argv)

    try:
        results = run_flow(args.config, args.out, args.budget, args.seed, args.episode_mode)
    except (FileNotFoundError, ValueError) as exc:
        raise SystemExit(f"{type(exc).__name__}: {exc}")
    print(f"{Path(args.out) / 'contracts.json'}")
    print(f"{Path(args.out) / 'report.md'}")
    for region in results["regions"]:
        if region.get("skipped"):
            print(f"  {region['event']}: skipped ({region['skipped']})")
        else:
            print(f"  {region['event']}: {region['metrics']['assumptions']} assumptions, "
                  f"{region['metrics']['guarantees']} guarantees, "
                  f"{region['provenance']['episodes']} episodes")
    return 0


if __name__ == "__main__":
    sys.exit(main())
