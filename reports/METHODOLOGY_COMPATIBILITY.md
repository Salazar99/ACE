# Methodology compatibility: the DATE2027 plan against `ace/`

The transition plan describes five implementation steps and a rewrite of the methodology section. This report states, step by step, what the code does and where it departs from the plan. Scope is the methodology only; the research-question execution plan is not covered here.

All five steps exist and run. Two departures remain: two named backends (Daikon, SMT) are slots rather than implementations, and temporal assumption mining is available but off by default for a measured reason. Step 2 previously computed a different statistic from the one the plan specifies and now implements it as written. Nothing in the flow contradicts the plan's intent.

| Step | Plan asks for | Implementation | Verdict |
|---|---|---|---|
| 1. Output-event labeling | scanner over observable predicates, replaces fault injection | `ace/labeling.py` | implemented |
| 2. Trigger selection, smoothed metric | greedy loop, `(ATCT+1)/(ATCT+AFCT+2)` | `ace/triggers.py` | implemented |
| 3. Boundary-preserving episodes | clip `[t-h_pre, t+h_post]`, no re-simulation | `ace/episodes.py` | implemented |
| 4. Mining and assembly | episodes to Daikon **and** HARM; enable temporal assumptions | `ace/mining.py`, `ace/backends.py` | partial |
| 5. Validation and minimization | held-out check; SMT/model-checker equivalence | `ace/validation.py` | partial |
| Paper: methodology section | restructure, narrative shift, finite traces, sqrt example | `reports/METHODOLOGY.tex` | written |

## Step 1 — output-event labeling

`labeling.label` ([labeling.py:41-54](../ace/labeling.py#L41-L54)) evaluates each declared predicate in one linear scan of the original traces. The IP is never instrumented, encapsulated, forced or re-simulated, so the simulation cost the plan set out to remove is absent by construction, not merely reduced. Occurrences are recorded where the match *ends*, which is what makes them joinable with trigger scoring.

Addition not in the plan: `event_onsets` rewrites a declared event as its rising edge ([__main__.py:50-61](../ace/__main__.py#L50-L61)). A held-high flag is true at a large share of samples and no trigger can beat that base rate; on the square root this turns 2189 high samples into 247 completions.

## Step 2 — the trigger metric

`(ATCT+1)/(ATCT+AFCT+2)` over the event occurrences: `ATCT` is what a candidate explains, `AFCT` what it leaves unexplained ([triggers.py:50-62](../ace/triggers.py#L50-L62)). Selection is greedy on marginal coverage plus lift, with a Jaccard redundancy penalty.

**This was not what the code computed until recently.** The `afct` field counted trigger firings the event did *not* follow, making the statistic a precision under a field named `smoothed_recall`. The two readings collide because they come from different tables:

| name | HARM's per-sample table | ACE's occurrence counts |
|---|---|---|
| `atct` | antecedent true → consequent true | occurrences explained (TP) |
| `afct` | antecedent **false** → consequent true — the **false negative** | occurrences unexplained (FN) |
| `atcf` | antecedent true → consequent false — the **false positive** | no counterpart |
| `afcf` | neither — the true negative | no counterpart |

The last two have no analogue once the population is the occurrence set `E`, because every member of `E` has the consequent true by construction. Both readings are now recorded per candidate: `atct`/`afct` are the occurrence counts the score uses, and `sample_cells` carries all four sample cells plus the positions the onset guard suppressed. **This is the thing to check when quoting HARM's table in the paper** — the same identifier names the FN cell there and the FP cell in the old code.

Worked example, sqrt mining corpus, 5000 samples, 247 `done` onsets, `H = 24`:

| candidate | atct | atcf | afct | afcf |
|---|---|---|---|---|
| `start == 1` | 321 | 11 | 4390 | 278 |
| `in >= 0` | 4667 | 286 | 44 | 3 |

Read per-sample, the plan's formula scores the real trigger **6.8%** and the near-tautology **99%**, which is why the occurrence-based reading is the one implemented. `afcf` is real but never used: it is the true-negative cell, excluded by both precision and recall, and it shrinks toward zero as `H·|E|` approaches the trace length. It enters only through the base rate, whose denominator is every sample.

Three mechanisms the plan does not mention, each built around a recorded failure ([triggers.py:256-276](../ace/triggers.py#L256-L276)):

- **onset counting** — a match counts only where the trigger was false at the previous sample, otherwise a held enable inflates its match count by the response latency;
- **base-rate lift** — a candidate must beat what a predicate firing as often would explain by chance. Not optional: recall alone is maximised by firing constantly;
- **support floor** — a fraction of the event count, which separates "explains the event" from "was true when it happened".

`min_gain` thresholds the *combined* score `gain + lift − λ·redundancy`, not the gain term alone, and `min_recall` defaults to **0.2** — it asks what one trigger explains, and a two-trigger region has no candidate above a half.

The metric change moved four regions from skipped to mined (`comparator_3bit A_equal`, `fifo_sync full`, `ibex_alu is_equal_result_o` and `result_o`) and lost one. `sqrt`'s error region is the loss: the error answers in exactly **1** cycle while the config declares `horizon: 24` for `done`'s iterative latency, so within a 24-cycle window every predicate precedes every error by coincidence and none beats the null model. The trigger it used to select, `in == 2147483647`, fired five times and explained a tenth of the events. A per-event horizon would recover it; the config has one horizon per design.

## Step 3 — episode extraction

`episodes.extract` ([episodes.py:37-50](../ace/episodes.py#L37-L50)) clips `[t-h_pre, t+h_post]` from the anchor's own run, clips again at the run endpoints, and merges only windows that touch inside the same run. Zero-padding and the re-simulation it forced are gone. Provenance is checked at run time, not asserted, and the result is written into the region manifest ([episodes.py:81-83](../ace/episodes.py#L81-L83)).

The plan's justification for `h_pre` / `h_post` is reproduced verbatim in the module docstring. One detail beyond the plan: anchors are the explained event occurrences **and** the selected triggers' matched positions, so an episode holds stimulus and response.

## Step 4 — mining and assembly

Episodes reach HARM as the plan asks, one CSV per episode so nothing can relate samples across a boundary. This path only became usable in the current revision: before it, HARM aborted the whole run on `adder_8bit` and `arbiter4`, and every result under `results/` was produced by the in-process instantiator.

Two departures:

- **Daikon is not a backend.** `backends.daikon` raises unconditionally ([backends.py:262-266](../ace/backends.py#L262-L266)). Propositional invariants are computed in process over the episode samples by `mining.propositional_invariants`. The family the plan wanted from Daikon is produced; the tool named is not used.
- **Temporal assumption mining is opt-in, not enabled.** It is implemented and reachable through `temporal_assumptions: true` ([mining.py:573](../ace/mining.py#L573)), and off by default because A is a conjunction of invariants: a mined `op_a_i == 100 |-> ##40 operator_i == 2` cannot enter it, and on the benchmark that family was 310 of 325 assumption-side clauses — all true of the stimulus generator, none of them assumptions. Enabling it by default would need the contract shape to change first.

## Step 5 — validation and minimization

The held-out check is implemented as described, and more strictly than the plan states: the holdout is decomposed with the *same* event and the *same* selected triggers before any clause is scored ([mining.py:758-777](../ace/mining.py#L758-L777)), because checking region clauses against whole held-out runs would count every out-of-region sample as a violation. Equivalence grouping with a canonical representative and subsumption removal are in `validation.minimize` and `validation.reduce_subsumed`.

**No SMT or model checker.** `validation.implies` decides implication over the observed traces, and every report carries `method="trace-bounded"` so no result is presented as proof. The module names the swap point: replacing `implies` is enough, the rest is untouched ([validation.py:10-11](../ace/validation.py#L10-L11)).

## The paper section

`reports/METHODOLOGY.tex` covers the plan's rewrite: the three subsections replacing fault simulation, trace filtering and re-simulation; the shift from logic-cone isolation to observational correlation; the finite-trace restriction, which the code enforces three separate times; and the square-root example rewritten around output events rather than a stuck-at fault on `done`.

The written section now states the metric as the plan does: `ATCT`/`AFCT` as occurrence counts, the statistic as a recall, precision reported but not selected on, and the null model as what a predicate firing as often would explain by chance. The plan's own justification — that miners yield near-zero false positives so precision and F1 are unhelpful — is not reproduced. It is true of a miner's own output, since an assertion that holds has no counterexample, but it does not transfer: ACE re-scores arbitrary candidate predicates with its own evaluator, where the false-positive cell is nonzero by design (`start == 1` on sqrt: 281 of 324 firings unanswered). The section argues instead that recall is the right statistic because the question is how much of the event a trigger accounts for.

## Open decisions

1. Whether `horizon` becomes per-event. One design can hold two events with latencies an order of magnitude apart, and the null model is only as discriminating as the horizon is tight — this is what costs `sqrt` its error region.
2. Whether Daikon is implemented as a backend or described as a slot the flow does not depend on.
3. Whether `temporal_assumptions` becomes the default, which requires deciding what a temporal environment clause is inside an A that is defined as a conjunction of invariants.
4. Whether an SMT backend is integrated before submission, or the trace-bounded scope is stated as a limitation.
