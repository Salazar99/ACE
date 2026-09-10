# ace

Implementation of the DATE2027 methodology: output-guided behavioral decomposition for
assume-guarantee contract mining from black-box IP traces.

This package is the flow itself and depends on nothing else in the repository: the FDL26
designs are used only as a source of RTL for the trace benchmark. The FDL26 flow itself is
unchanged under `legacy/fdl26/`, so the two can still be compared.

## The five steps

| Plan step | Module | What it does |
|---|---|---|
| 1. Output-event labeling | `ace/labeling.py` | Evaluates declared output predicates directly on the original traces. One linear scan; no IP encapsulation, no forced signals, no re-simulation. Replaces fault injection and `DU_gen.py`. |
| 2. Trigger selection | `ace/triggers.py` | Scores candidate input-side predicates by ATCT/AFCT of `G(a \|-> ##[1:H] e)` and selects greedily by **smoothed recall** `(ATCT+1)/(ATCT+AFCT+2)`, counting a match at its onset and requiring it to beat the base event rate at the same support. Precision and F1 are not reported: the miner discards false positives, which pins precision at 1.0. Replaces the `atct-afct` volume sort. |
| 3. Boundary-preserving episodes | `ace/episodes.py` | Clips `[t-h_pre, t+h_post]` windows out of the anchor's own run, merges them only inside that run, and writes one CSV per episode. Every sample is an original sample, so nothing needs re-simulating. Replaces zero-padding. |
| 4. Contract mining and assembly | `ace/mining.py` | Feeds the episodes to the backends, fences assumptions to environment signals and guarantees to observable outputs, and assembles `C_r = (A_r, G_r)` with provenance. Temporal environment assumptions are mined, not just propositional invariants. |
| 5. Semantic validation and minimization | `ace/validation.py` | Held-out violation rates, equivalence grouping with a canonical representative, subsumption removal, and reference-contract matching (`equivalent` / `mined-stronger` / `mined-weaker` / `missed`). |

Support modules: `ace/formula.py` (finite-trace evaluation), `ace/traces.py` (corpus I/O),
`ace/backends.py` (HARM and friends), `ace/templates.py` (in-process template
instantiator, used when HARM is not installed), `ace/__main__.py` (the flow and CLI).

## Run it

    python3 tests/test_formula.py          # semantics of the evaluator
    python3 tests/test_recovery.py         # selection, comparison and instantiation traps
    python3 tests/test_flow.py             # Steps 1-5 end to end, no external tools

    python3 benchmarks/run.py --validate-only          # re-check the reference contracts
    python3 -m ace benchmarks/sqrt/config.json --out results/declared/sqrt
    python3 -m ace benchmarks/sqrt/config.json --out r --episode-mode concat
    python3 -m ace benchmarks/sqrt/config.json --out r --budget 0.25 --seed 7

    python3 tools/score_recovery.py benchmarks/*/config.json --out results
    python3 tools/report_bundle.py --results results --out reports

Outputs are `contracts.json` (full detail: every clause with its provenance, region support,
held-out result, and every dropped candidate with the reason it was dropped) and `report.md`
(readable summary). Stage wall-clock times are recorded on every run; IP simulation time is
absent by construction.

Requirements: Python 3.10+ and the standard library. HARM is optional: without it,
`ace/templates.py` instantiates the same templates over the same declared vocabulary in
process, and trigger candidates come from predicates read off the observed values plus the
orderings between pairs of inputs. The flow is complete either way; what a real miner adds
is its own vocabulary construction and ranking, which is a comparison rather than a
dependency.

`ace/config_template.json` documents every configuration field; each design's real
configuration is `benchmarks/<design>/config.json`.

## What one run produces

`python3 -m ace benchmarks/sqrt/config.json` decomposes the sqrt traces by output event and
reports one contract per behavioral region, for example:

    Event done == 1    trigger `start == 1`, `in >= 0`      12 episodes
                       A: in >= 0 && rst == 0
                       G: G((start == 1) |-> ##[1:24] (done == 1))
                          G((start == 1 && in >= 4 && in <= 8) |-> ##[1:24] (out == 2))

    Event error == 1   trigger `in < 0`                      9 episodes
                       A: in < 0
                       G: G((start == 1) |=> (error == 1)), G((start == 1) |=> (done == 1))

which is `A_sqrt: in >= 0` from the paper together with the bounded-response contract,
separated from the negative-request region.

## How much of a documented contract set comes back

Measured on the eleven-design benchmark, 135 reference guarantees and 28 reference
assumptions (`reports/MINING_REPORT.md` has the per-design tables and the clause ids):

| vocabulary | golden | mined | equivalent | refinement | weaker | missed | exact | acceptable |
|---|---|---|---|---|---|---|---|---|
| declared (`extra_props`) | 135 | 2092 | 64 | 41 | 10 | 20 | 47% | 78% |
| interface (`auto_vocabulary`) | 135 | 6301 | 35 | 37 | 13 | 50 | 26% | 53% |

Assumptions: nothing missed in either setting, 71% acceptable declared and 82% interface.
The gap between the two rows is the price of a hint-based miner stated as a number. The best
design is arbiter4 (15 of 18 exactly, 94% acceptable), the worst apb_slave (17% / 50%: its
latency and read-back clauses need three- and four-proposition antecedents).

`RECOVERY.md` explains every miss by name, and `CONTRACT_RECOVERY.md` gives the per-design
expected-against-mined comparison with a diagnosed cause for each missing clause.

## Design decisions worth knowing

**Its own evaluator.** `formula.py` parses and evaluates the clause language instead of
reusing the FDL26 evaluator (`legacy/fdl26/trace_filtering/filter.py`). That evaluator
substitutes placeholders by regex, keeps a single match end rather than a set, treats an implication as satisfied on the
first antecedent match, and raises on an arithmetic right-hand operand. Labeling, ATCT/AFCT
and the held-out check all depend on exactly those details.

**A match is a set of end positions.** `a |-> b` holds when *every* match of `a` is followed
by a match of `b`, and `support()` separates a vacuous position from a satisfied one, which
is what makes ATCT and AFCT well defined.

**Run-local by construction.** A window that would reach past the end of a run does not
match. An episode is exported as its own run (`episodes.as_corpus`), so clause evaluation on
a region cannot read the samples on the other side of an episode boundary either.

**Assumptions are not trigger copies.** A trigger conjunct over environment signals is
*proposed* as an assumption, then has to pass the same region, domain-triviality,
subsumption and held-out checks as any other candidate.

**Region-scoped held-out check.** The held-out corpus is decomposed with the same event and
triggers before its episodes are used. Checking region clauses against whole held-out runs
would count every sample outside the region as a violation and reject precisely the
region-specific clauses the flow exists to find.

**Everything dropped is explained.** `contracts.json` lists every rejected candidate with a
reason: vacuous, violated on N of M region positions, tautological or domain-trivial,
subsumed by a stronger clause, or wrong role for its vocabulary.

## Deliberate limits

- Implication is decided by bounded comparison over the observed traces, not by SMT or a
  model checker. Every report carries `method: "trace-bounded"`. An SMT backend replaces
  `validation.implies` and nothing else.
- `backends.daikon` is not implemented. The propositional family the flow needs (constants,
  ranges, relations) is computed in `mining.propositional_invariants` over the episode
  samples; ACE's `InvGen.py` instantiator is wired up as `backends.invgen` for comparison.
- Range invariants are read off observed extremes, so a bound is only as good as the corpus:
  `in >= 0` comes back when a zero-valued request was observed, otherwise a looser bound is
  reported and has to survive the held-out check.
- `GRAMMARS["G1"]`..`["G5"]` are template vocabularies for the temporal backend and have not
  been checked against a live HARM build. `ace/templates.py` instantiates every one of them
  except the `{..#1&..}` sequence placeholder, so a reference contract with a sequence in its
  antecedent is out of reach without HARM (or an explicit edge proposition).
- The instantiator conjoins at most two propositions in an antecedent, matching HARM's
  decision-tree slot, and keeps at most `max_per_consequent` (12) antecedents per consequent
  and delay. Both bounds are recall-relevant and measured in `RECOVERY.md`.
- Comparing two clauses is comparing two statements that both hold on the traces: for
  implications, `validation.implies` therefore ranks them by where they fire, how tightly
  they respond and their consequents as predicates, not by satisfaction - which is trivially
  mutual and made every guarantee look equivalent to every other.
- An episode shorter than the horizon cannot decide a bounded-response clause, so a config
  with `h_post < horizon` is warned about: its `##[1:H]` guarantees are unreachable.
- `event_onsets` labels an output event's transitions instead of its level. It is off by
  default and belongs on any design whose event is a status flag held between operations.
- `episode_mode="concat"` is one miner call for the whole region and lets a temporal miner
  relate samples across an episode seam. `split` is the default for that reason.

## Superseded (removed)

An earlier sketch of this flow lived in `ace2/` (`core.py`, `pipeline.py`, `semantics.py`,
`configs/`, `test_ace2.py`) - one module per layer. It is reimplemented here, one module per
flow step, and the sketch has been deleted: it is in the repository's git history if it is
ever needed.

## Using a local HARM installation

`ace/backends.py` drives HARM (https://github.com/SamueleGerminiani/harm) through its real
interface, checked against its source rather than guessed:

- `--csv-dir` for a region written one episode per CSV, so the miner reads every episode as
  a separate trace and no mined property can span an episode boundary. `--csv` for a single
  concatenated region.
- `<prop>` for boolean signals, `<numeric clustering="K,10Max,0.01WCSS,><,==">` for
  bitvectors. Declaring a bitvector as `<prop>` gives a useless vocabulary, which is the
  most likely reason for a mining run that returns nothing.
- `--reset <expr>` from the config's `reset` key; `--max-ass` and `--min-frank` from
  `max_ass` / `min_frank`; `--dump-to <dir>`, read back as `<context>_ass.txt`.
- `atct`, `afct` and `traceLength` are HARM's metric variables, so smoothed recall is a
  plain `<sort exp="(atct+1)/(atct+afct+2)"/>` - no patched miner.

Point the flow at an installation:

    export HARM_BIN=/path/to/harm/build/harm     # or just put `harm` on PATH
    export HARM_LIB=/path/to/harm/third_party/spot/lib   # only if not installed system-wide
    python3 tools/check_harm.py

`check_harm.py` generates traces in which a request/response property holds by construction,
runs HARM on them the same way the flow does (single trace and directory, boolean and
bitvector vocabulary), and reports whether the property comes back. Exit code 0 means the
backend is usable; 4 means the binary works but the configuration or vocabulary does not.

`tools/install_harm.sh [dir]` builds HARM from source on a Linux box or under WSL. It needs
network access to lrde.epita.fr (spot), github.com (antlr4) and jfrog.io (boost), so it
cannot run inside a sandbox with a restricted egress allowlist.

Without HARM the flow still runs end to end: `ace/templates.py` enumerates the same
templates over the same declared vocabulary (`temporal_backend` in the report reads
`in-process-templates` instead of `harm`), and trigger candidates fall back to predicates
read off the observed values plus the orderings between pairs of inputs. Everything the
instantiator proposes is re-checked by `validation.evaluate`, so the two backends are
directly comparable on the same benchmark.
