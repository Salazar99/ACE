# ACE architecture

How the flow in `ace/` works, module by module. `README.md` is the index and the headline
numbers, `ace/README.md` records *why* each design decision was taken, `benchmarks/CONTRACTS.md`
fixes the contract shape, `RECOVERY.md` narrates the results. This file is the mechanism:
what each step computes, what the evaluator actually means, what lands on disk.

Line references are ranges (`module.py:L-L`), so a small edit above them does not silently
invalidate the pointer. Everything is Python 3.10+ standard library; `ace/` imports nothing
outside itself and the stdlib.

---

## 1. What the framework is

A black-box assume-guarantee contract miner.

**In:** a set of CSV simulation traces of one IP, plus a JSON config naming the interface
(`inputs`, `outputs`), the output events to decompose on, and a response horizon.

**Out:** one contract `(A, G)` per behavioural region.

* **A** is a conjunction of *invariants* — propositional predicates over environment-facing
  signals only, no temporal operator (`rst == 0`, `in >= 0`, `op_b_i >= 1`).
* **G** is a conjunction of *whole* `G(antecedent -> consequent)` instances.
* A guarantee is claimed **only at the samples where every invariant of its A holds**, and
  nothing from A is ever folded into a guarantee's antecedent. A sample where an invariant
  fails is outside the contract's domain, not a violation.

The IP is never instrumented, encapsulated, forced or re-simulated. Every step reads the
original traces, which is why the flow records no IP simulation time at all: there is none.

**Region** is the unit of decomposition: one declared output event, the input-side triggers
selected to explain it, and the episodes clipped around them. One config event produces at
most one region; an event that never occurs, or one that no candidate trigger explains, is
recorded as skipped rather than silently dropped.

---

## 2. Data model — `ace/traces.py`

One CSV file is one execution. Runs are **never** concatenated and temporal evaluation never
crosses a run boundary: the hidden state at the start of one run is not the successor of the
state at the end of another (`traces.py:1-6`).

| symbol | line | what it is |
|---|---|---|
| `signal_name(column)` | `25-29` | strips C/SystemVerilog type words from a header cell — `'unsigned long int x'` → `'x'`, because `vcd2csv` emits typed columns |
| `Run(name, header, rows, path)` | `45-58` | `rows[t][signal]` is the value at sample `t`; `header` keeps the *original typed* columns so a miner gets them back verbatim |
| `load_run(path, hold_values=True)` | `61-88` | one CSV → one `Run` |
| `Corpus(runs, source)` | `91-116` | `.samples`, `.signals()`, `.positions()`, `.subsample(fraction, seed)` |
| `load_corpus(patterns, base)` | `130-142` | glob → `Corpus`, with interface consistency enforced |
| `write_rows(rows, header, path)` | `145-156` | re-emits with the original header |

Three details that matter downstream:

* **Value holding** (`traces.py:61-88`). A blank cell in a VCD-derived CSV means "unchanged".
  `load_run` carries the last known value forward. Cells *before* a signal's first value stay
  `None` on purpose, so a formula reading one raises a clear error instead of silently seeing
  zero.
* **Whole-run subsampling** (`traces.py:110-116`). `--budget 0.25` keeps a random quarter of
  the *runs*, never a slice of one — slicing would invent a trace boundary. Raises outside
  `(0, 1]`.
* **Path expansion** (`traces.py:119-127`). `expandvars` then `expanduser`, then relative
  patterns resolve against the **config's** directory, so `$ACEROOT` works and a config can be
  moved without rewriting its globs.

---

## 3. The evaluator — `ace/formula.py`

The load-bearing module. Every other step — labeling, trigger scoring, region checking,
subsumption, held-out validation, reference matching — decides truth here, so all of them
agree by construction. Nothing is ever read back from an external miner's own metrics.

### 3.1 Grammar

```
formula     := 'G' '(' implication ')' | implication
implication := sere [ ('|->' | '|=>' | '->') sere ]
disj        := conj ('||' conj)*
conj        := delayed ('&&' delayed)*
delayed     := DELAY unary | unary (DELAY unary)*
DELAY       := '##' NUM | '##' '[' NUM ':' NUM ']'
unary       := '!' unary | 'X' unary | '(' implication ')' | comparison
comparison  := bitwise [ ('<'|'<='|'>'|'>='|'=='|'!=') bitwise ]
bitwise     := shift (('&'|'|'|'^') shift)*
shift       := arith (('<<'|'>>') arith)*
arith       := term (('+'|'-') term)*
term        := factor (('*'|'/') factor)*
factor      := NUM | SIGNAL | '(' arith ')' | '-' factor
```
(`formula.py:5-18`.) Recursive-descent parser at `formula.py:336-480`; `parse()` is
`lru_cache`d at 4096 entries (`formula.py:527-541`).

**Not supported:** `U`, `F`, `R`, `S`, unbounded repetition, nested `G`, `$past` / `$rose` /
`$fell` / `$stable`, `inside {..}`, bit selects. Two consequences worth stating plainly:
HARM's `G5` template `G({..#1&..} |-> P0)` cannot be instantiated in process
(`templates.py:88-110` returns `None` for it), and any reference behaviour needing a past
operator is out of grammar by construction — `benchmarks/CONTRACTS.md:623-649` lists which
ones.

`X` is recognised as a name token (`formula.py:404-415`), so **`X` is a reserved signal name**.

### 3.2 Match-set semantics

`Node.ends(run, t)` returns **the set of sample indices where a match starting at `t` ends**,
empty for no match (`formula.py:153-168`). `holds()` is just `bool(ends())`. This is the
central choice, and it is what the old `filter.py` did not do (it kept a single match end).

| node | line | `ends(run, t)` |
|---|---|---|
| `Compare` | `171-194` | `[t]` when the comparison holds |
| `Truth` | `197-211` | `[t]` when the value is not `0`/`False` |
| `Not` | `214-226` | `[] if inner matched else [t]` — negation re-anchors the end at `t` |
| `And` | `228-241` | **intersection** of the two end sets: both sides must end at the same sample |
| `Or` | `244-256` | union |
| `Next` | `259-270` | `inner.ends(run, t+1)`, empty at the last sample |
| `Delay(lo, hi, right, left)` | `273-302` | for each end `e` of `left`, union of `right.ends(run, e+d)` for `d in [lo, hi]` — **the delay is counted from the END of the left match** |
| `Implication` | `305-331` | see below |

```python
def ends(self, run, t):                        # formula.py:311-324
    starts = self.antecedent.ends(run, t)
    if not starts:
        return [t]                             # vacuously satisfied; support() tells them apart
    out = set()
    for e in starts:
        u = e + 1 if self.kind == "|=>" else e
        if not 0 <= u < len(run):
            return []
        m = self.consequent.ends(run, u)
        if not m:
            return []                          # every antecedent match must be followed (SVA)
        out.update(m)
    return sorted(out)
```

Three consequences to hold on to:

1. **Vacuous implies holds.** A non-firing implication returns `[t]`. Vacuity is separated only
   by `support()` (§3.3) — never by the truth value.
2. **Every antecedent match must be answered**, not the first that happens to work.
   `tests/test_recovery.py:66-72` pins this.
3. **`->` is `|->`.** The `u = e + 1 if kind == "|=>"` branch means bare `->` falls through to
   overlapping-implication semantics (`formula.py:317`). The token is accepted for
   compatibility; it adds no distinct meaning.

`And`'s end-intersection has a non-obvious practical effect: a two-cycle edge predicate cannot
be `&&`-ed with a same-sample predicate, because their end positions never coincide. The
in-process instantiator groups antecedent propositions by depth precisely to avoid spending
budget on conjunctions that are empty by construction (`templates.py:304-311`).

### 3.3 Two-valued truth, three-valued counting

The truth function is **two-valued**. `holds()` returns `bool`, and an operand with no usable
value collapses to *false*, not to a third value.

* `Undefined(ValueError)` (`formula.py:61-64`) — this operand has no value here: division by
  zero, negative shift, non-integer bitwise operand. Caught locally in `Compare.ends`
  (`formula.py:181-190`) and `Truth.ends` (`formula.py:197-207`); **the proposition simply does
  not hold at that sample**. Before this, `result_o == (a << b)` aborted a whole run on the
  first negative shift. `tests/test_recovery.py:136-145` pins it.
* `FormulaError(ValueError)` (`formula.py:67-68`) — the *clause* is wrong: bad grammar, unknown
  signal, signal with no value yet. Propagates; callers treat it as "not evaluable" and drop
  the candidate with a reason.

The **counting** layer is three-valued, via two predicates orthogonal to truth:

```python
def evaluable(self, run, t):    # formula.py:500-507
    return t + self.depth() < len(run)

def support(self, run, t):      # formula.py:509-517
    if not self.evaluable(run, t):        return False
    if isinstance(self.body, Implication): return bool(self.body.antecedent.ends(run, t))
    return True
```

So every position falls into exactly one bucket:

| `support` | `holds` | bucket |
|---|---|---|
| true | true | **satisfied** |
| true | false | **violated** |
| false | — | **vacuous or undecidable — never counted either way** |

`depth()` is how many samples past the start a match can reach; it decides evaluability, never
truth. This is why a bounded-response clause is not reported as violated in the last `H`
samples of an episode: the run stops before the clause could be decided. `ATCT`/`AFCT`,
`violation_rate`, subsumption and the held-out check are all well defined *because* of this
split — every one of them counts only supported positions.

`Formula.globally` is recorded by `parse()` but never consulted. `G` is realised by callers
iterating `for t in range(len(run))` (e.g. `validation.evaluate`, `validation.py:22-40`).

`strip_braces` (`formula.py:553-555`) normalises HARM's `{...}` sequence syntax to parentheses.

---

## 4. The five steps

### Step 1 — output-event labeling (`ace/labeling.py`, 61 lines)

Replaces fault injection and `DU_gen.py`. An output event is a user-declared observable
predicate; occurrences are found by **one linear scan** of the original traces.

```python
def label(corpus, event):                              # labeling.py:41-54
    clause = formula.parse(event)
    hits = [(k, end) for k, run in enumerate(corpus.runs)
            for t in range(len(run)) for end in clause.ends(run, t)]
    return EventLabels(event, sorted(set(hits)), corpus.samples)
```

`E_e(T) = {(k, t) | tau_k, t |=f e}`, **recorded at the sample where the match ENDS**
(`labeling.py:44-50`). This convention is load-bearing: Step 2 reads its explained occurrences
off the same `Formula.ends` positions, so the two sets are joinable. Record the *start* of a
multi-sample event instead — a rising edge `(!(done == 1)) ##1 (done == 1)` — and the two sets
become disjoint, every candidate looks as if it explained nothing, and the region is empty.

`EventLabels` (`labeling.py:15-38`) carries `count`, `density`, `per_run()`, and a `report()`
dict that lands verbatim in `contracts.json` under `region["labels"]`.
`occurrences_of(corpus, expression)` (`labeling.py:57-61`) is the same scan, reused for trigger
anchor positions and by `mining.holdout_region`.

The label depends only on the observed output value. Nothing about fault propagation or logic
cones is claimed. Complexity: O(runs × samples × cost(`ends`)).

**Event onsets.** A level flag is a bad event. `done` held high between requests is true at 44%
of sqrt samples; every position then has a `done` within the horizon, no trigger can beat that
base rate, and the whole response family is skipped for want of a candidate. Setting
`event_onsets: true` wraps each declared event as `(!(e)) ##1 (e)` (`__main__.py:50-61`),
turning 2189 sqrt "occurrences" into 247 completions. Signals that are already pulses are
unaffected — for them every high sample is a rising edge.

### Step 2 — trigger selection (`ace/triggers.py`, 232 lines)

Replaces the FDL26 `atct-afct` volume sort. For a candidate input-side predicate `a`, the
candidate assertion is `G(a |-> ##[1:H] e)` (`triggers.py:27-28`).

**Scoring** (`triggers.py:56-91`):

```python
for k, run in enumerate(corpus.runs):
    for t in range(len(run)):
        if guard is not None and t and guard.holds(run, t - 1): continue  # not an onset
        if not clause.support(run, t):                          continue  # vacuous/undecidable
        hits = clause.ends(run, t)
        if hits: atct += 1; explained.update((k, u) for u in hits); anchors.append((k, t))
        else:    afct += 1; misses.append((k, t))
```

* **ATCT** = trigger matched and the event followed inside the horizon. **AFCT** = matched, no
  follow-up. Vacuous positions are neither.
* `explained` holds the **consequent's** end positions — i.e. event occurrences, directly
  comparable with Step 1's output.
* Only ATCT positions become `anchors`: a match with no response is evidence against the
  trigger, not a region to mine (`triggers.py:87-88`).
* **Onset counting** (`onsets=True`, default). A match counts only where the trigger was false
  at the previous sample. Without it, a request held high for a whole operation contributes one
  match per held cycle and support is inflated by the response latency — on the Ibex divider
  (36-cycle operations, enable held throughout) every candidate scored exactly the base rate and
  the design produced no region at all. `tests/test_recovery.py:120-134` pins it: an enable held
  36 of 40 cycles has support **5** onsets, not 216 samples.

**The score is smoothed recall**, not precision or F1:

```
R = (ATCT + 1) / (ATCT + AFCT + 2)                    triggers.py:42-43
```

The temporal miner discards candidates with false positives, so precision is pinned at 1.0 and
F1 is a restatement of recall (`triggers.py:11-18`). The `+1/+2` penalises thin support and
keeps the number comparable across traces of different length, which the old volume score could
not do. HARM can compute the same expression natively as a `<sort>`
(`backends.SMOOTHED_RECALL`), so no patched miner is needed.

**The null model.** `base_rate` (`triggers.py:128-136`) scores the tautology `1 == 1` with
onsets off: what a predicate that says nothing achieves. `expected_recall(base, support)` =
`(base*support + 1)/(support + 2)` (`triggers.py:139-148`) smooths that baseline *the same way*
as the candidate. Without it, `+1/+2` pulls a perfect six-match candidate down to 0.875 and a
dense event rejects exactly the tight triggers it should keep.

**Selection** — `select()` (`triggers.py:151-232`), Algorithm 1. Phase 1 filters, in order,
each writing a human-readable reason into `Selection.rejected`:

| # | condition | reason recorded |
|---|---|---|
| 1 | `formula.FormulaError` | `not evaluable: {exc}` |
| 2 | `support == 0` | `never matched in the corpus` |
| 3 | `support < max(2, min_support_frac * |E|)` | `N matches is below F …: too little support to explain the event` |
| 4 | `smoothed_recall < expected_recall(base, support) + min_lift` | `does not discriminate the event` |
| 5 | `smoothed_recall < min_recall` | plain threshold |

Filter 3 separates "explains the event" from "was true when it happened": a predicate that is
simply true has exactly one onset per run and smoothed recall on five matches looks excellent.
Filter 4 replaced an earlier match-*rate* cap (reject anything true at more than 50% of samples)
that threw away real triggers such as a held enable.

Phase 2 is a greedy coverage loop (`triggers.py:204-227`):

```
value(a) = coverage_gain(a) + (smoothed_recall(a) - expected_recall(base, support(a)))
                            - redundancy_weight * max_jaccard(a, already_selected)
```

picking the argmax above `min_gain`, subtracting its explained set, until nothing is left or
`max_triggers` is reached. Note the implementation uses **lift**, not raw recall as the
docstring at `triggers.py:158` says — with a dense event a candidate scoring 0.64 explains
nothing. Coverage still drives the loop, which is what brings complementary triggers out
together (a multiplier enable and a divider enable each explaining their half of `valid_o`).

Phase 3 annotates every pool member that was neither selected nor rejected with
`marginal coverage gain below threshold`, so **nothing is dropped silently**.

Selection is deliberately **not a partition**: two triggers explaining the same occurrences can
both survive, and occurrences nothing explains are reported as `unassigned` rather than forced
into a spurious region.

Defaults: `min_recall` 0.5, `min_gain` 0.05, `redundancy_weight` 0.5, `max_triggers` 8,
`min_lift` 0.0, `min_trigger_support` 0.1, `trigger_onsets` true.

**Where candidates come from.** `cfg["trigger_candidates"]` if declared. Otherwise
`mine_candidates` (`__main__.py:64-89`) runs HARM over the whole trace directory with the event
pinned into the last proposition slot of each template, and takes the deduplicated antecedents
of what comes back. With no HARM installed, `observed_predicates` (`__main__.py:92-116`) builds
observed-value atoms and bounds via `templates.predicates`, **plus** the three orderings
`a > b`, `a == b`, `a < b` for every input pair, plus pairwise conjunctions, capped at 60. The
pair orderings are not optional: what explains a comparator asserting `A_greater` is `A > B`,
and a bounds-only vocabulary made every combinational design in the benchmark skip.

### Step 3 — boundary-preserving episodes (`ace/episodes.py`, 117 lines)

Replaces zero-padding and the re-simulation it forced.

```python
for k, t in sorted(set(anchors)):                       # episodes.py:37-50
    lo = max(0, t - h_pre); hi = min(len(corpus.runs[k]) - 1, t + h_post)
    w = windows.setdefault(k, [])
    if w and lo <= w[-1][1] + 1: w[-1][1] = max(w[-1][1], hi)   # touching or overlapping
    else:                        w.append([lo, hi])
```

Clip `[t-h_pre, t+h_post]`, clip again at the run's endpoints, merge only with windows that
touch **inside the same run** (the per-run dict makes cross-run merging impossible). `Episode`
is a frozen `(run, lo, hi)` with `hi` inclusive.

`h_pre`/`h_post` are **not padding**: a temporal miner cannot deduce cause and effect from one
isolated sample. `h_pre` exposes the setup conditions before the trigger, `h_post` the
obligations after the event.

Anchors are two sets unioned (`episodes.py:53-59`): the **explained event occurrences** and the
**ATCT positions of every selected trigger**. That is why an episode contains both stimulus and
response.

**Proposition 1 (episode provenance)** — every emitted sample is an original sample — is
checked directly, not asserted: `provenance_ok` (`episodes.py:81-83`) is
`all(0 <= e.lo <= e.hi < len(corpus.runs[e.run]))`, and its result rides into
`contracts.json` and the rendered report.

`as_corpus` (`episodes.py:62-74`) re-exports each episode as **its own `Run`**, named
`source[lo:hi]`, sharing the header and path. This is what makes an episode boundary real: a
delay reaching past the end of an episode does not match, instead of silently reading the
neighbouring samples of the original run.

`write_region` (`episodes.py:86-117`) is the first on-disk artifact:

* `mode="split"` (**default**) — one CSV per episode, `episode_00000.csv`, … Nothing can relate
  samples across a boundary. HARM consumes this with `--csv-dir`.
* `mode="concat"` — a single `region.csv`. One miner call instead of hundreds, but a temporal
  miner can then relate samples across an episode seam. Use only when the horizon is small
  relative to `h_pre + h_post`.
* `episodes.json` alongside, with `mode`, counts, `provenance_ok` and every window.

### Step 4 — mining and assembly (`ace/mining.py`, 754 lines)

A region yields `C_r = (A_r, G_r)`. **A selected trigger is not copied into `A_r`** — a trigger
conjunct over environment signals is only *proposed*, and enters only by passing the same checks
as any other candidate.

`Clause` (`mining.py:25-40`) carries `text`, `kind` (`propositional` | `temporal` |
`trigger-derived`), `role`, `backend` (`in-process` | `harm` | `selection` | `refinement`),
`scope`, `region`, `global_support`, `region_specific`, `held_out`, `kept`.
`Contract` (`mining.py:42-61`) carries the two clause lists plus `triggers`, `provenance`,
`metrics`, `dropped` and the validation report.

**Four candidate sources** (`mining.py:465-527`):

1. **Episode-scope invariants** — `propositional_invariants(rows, inputs + outputs)`
   (`mining.py:66-112`): per signal a constant or a `>= min` / `<= max` bound; pairwise
   `a == b` / `a <= b` where it holds everywhere, capped at 64 pairs. Pairs involving a constant
   signal are skipped — a relation against a signal that never changes is a bound in disguise.
2. **Anchor-scope invariants** (`mining.py:473-490`) — the same, computed over the ATCT anchor
   rows only, then wrapped as `G(<guard> |-> (<invariant>))` where the guard is the trigger's
   conjuncts **minus** any conjunct constraining the same signals. That avoids the tautology
   `G(in >= 0 |-> in >= 0)` and yields `G(start == 1 |-> in >= 0)`.
3. **Trigger-derived assumptions** (`mining.py:495-507`) — each trigger conjunct whose signals
   are a subset of `inputs`.
4. **Temporal** (`mining.py:509-527`) — `_mine_temporal` on the region (§5).
   **Assumption-side temporal mining is off by default** (`temporal_assumptions`): A is a
   conjunction of invariants, so a mined `op_a_i == 100 |-> ##40 operator_i == 2` cannot enter
   it — and on the benchmark that family was **310 of 325** assumption-side clauses.

**Declared vocabulary.** `interface_vocabulary(inputs, outputs)` (`mining.py:138-197`) emits
four families per output: orderings/equality against every input; arithmetic over input pairs
and triples (`o == a + b`, `o == a + b + c - 256`); bitwise and shifts; output-on-the-left forms
(`o * b <= a`, `o * 2 + 1 >= a`) that specify a division or shift without naming it. Size is
`|O| * (3|I| + 12·|I|(|I|-1)/2 + C(|I|,3))`, truncated at `limit=150` in emission order so the
cheapest families survive whole. This family exists because **clustering only ever generates
comparisons against constants** — a proposition relating two signals is mined only if declared
(`backends.py:120-124`). Nothing in it reads the reference contracts, so a mined clause matching
one is evidence, not bookkeeping.

**Domain-triviality** (`mining.py:220-266`) returns the *reason* a clause says nothing, computed
on the **full corpus**, memoised. Three cases: a non-implication true everywhere; an implication
whose antecedent holds at every position (not conditional); an implication whose consequent
holds at every position (the antecedent selects nothing).

The asymmetry is the point. Guarantees are checked with `consequent=True`, **assumptions with
`consequent=False`** (`mining.py:556-557`), which runs only the antecedent case — because an
environment restriction that holds everywhere *is* the assumption (`rst_n == 1`), and dropping
it leaves A empty. An earlier version dropped any always-holding clause and thereby rejected
exactly the well-formed guarantees; `tests/test_recovery.py:147-166` pins the fix.

**The filter loop** (`mining.py:530-579`), in order, every rejection appended to
`contract.dropped` with a `why`:

| # | check | drop reason |
|---|---|---|
| 1 | text already seen | `duplicate` |
| 2 | `formula.parse` raises | `not evaluable: {exc}` |
| 3 | assumption signals ⊄ `inputs` | `assumption must constrain only environment signals` |
| 4 | guarantee signals ∩ `outputs` = ∅ | `guarantee must constrain an observable output` |
| 5 | `domain_trivial` | `domain-trivial: {reason}` |
| 6 | vacuous on the region | `vacuous on the region` |
| 7 | region violations > 0 | `violated on N of M region positions` |

Survivors get `global_support` on the full corpus and `region_specific = bool(global violations)`
— a clause that holds on the region but is violated somewhere in the full corpus is
region-specific; one that holds everywhere is not.

Note there is **no partial-confidence acceptance anywhere in the flow**. A clause with any
region violation is dropped outright, or routed to refinement. The only smoothed score in the
codebase is Step 2's trigger recall.

**Post-processing**, in order:

* `reduce_subsumed` per role (§4, Step 5).
* `generalize` (`mining.py:293-346`, default on) collapses clauses identical except for the
  value of *one* antecedent equality conjunct into an interval `sig >= min && sig <= max`, then
  **re-verifies the proposal against the region corpus** — an interval with zero support or any
  violation is discarded, so generalization never weakens the set. Up to 3 rounds, one collapsed
  dimension per round.
* `reduce_subsumed` again, because generalization can equalise strength.
* `refine` (default on).

**Refinement** (`mining.py:644-700`) is the conceptual step, not a cleanup. A contract's A is not
a summary of the region — it is the environment restriction *chosen so that G holds*. The Ibex
divider's `valid_o` region contains reset samples and divide-by-zero requests, so its invariants
are loose (`div_en_i <= 1`) while the contract wants `rst_n == 1` and `op_b_i >= 1`. So:

1. candidates = input predicates that **have violations** on the region — i.e. real
   restrictions, not invariants — ranked by descending support;
2. for each guard, re-check every rejected guarantee with `evaluate_under(region, clause, [guard])`;
3. a guard that unlocks at least `min_unlocked` (1) guarantees enters A with
   `backend="refinement"`, `scope="refined"`, and each unlocked guarantee is added back with
   `scope = "under <guard>"`.

Each restored guarantee is also recorded in `dropped` as ``restored under the assumption `g` `` —
an audit trail, not an actual drop. On the divider this took the A side from 0 to 3 of 4.
Caps: `max_refinements` 4, `max_refinement_candidates` 8.

**Trace consistency — Equation (4)** (`mining.py:725-754`):

```python
for t in every position of every region run:
    if not all(a.holds(...) for a in assumptions): continue
    owed = [g for g in guarantees if g.support(...)]
    if not owed: continue
    checked += 1
    violations += not all(g.holds(...) for g in owed)
```

Reported as `{"positions", "violations", "rate", "method": "trace-bounded"}`. This is empirical
agreement on the observed corpus, explicitly **not** implementation-level soundness `M |= A ⇒ G`.

### Step 5 — validation and minimization (`ace/validation.py`, 406 lines)

Three questions that are never conflated (`validation.py:1-12`): is the contract consistent with
the episodes it came from; does it generalise to unseen executions; does it capture a documented
reference behaviour. `TRACE_BOUNDED = "trace-bounded"` is stamped on **every** report dict.

**Scoring.** `evaluate(corpus, clause)` (`validation.py:22-40`) →
`{clause, support, violations, violation_rate, vacuous, method}`, counting only supported
positions. `evaluate_under(corpus, clause, guards)` (`validation.py:43-68`) is the same but
counts a position only where every guard holds, tallying the rest as `excluded`. This is what a
contract *means*: `(A, G)` claims `G` only where `A` does. Critically the temporal evaluation
still sees the whole run — only the *counted* positions are restricted, so a response window may
legitimately reach across a sample A excludes.

**`implies`** (`validation.py:80-135`) is the comparison core, and the reason it is not a
one-liner is worth stating: after the region check every surviving clause holds at *every*
position (satisfied where it fires, vacuous elsewhere), so comparing by satisfaction alone makes
every pair mutually equivalent — which is how a bounded-response clause about a start signal got
credited with recovering a multiplier's product contract.

* Mixed arity is **incomparable** — an implication is never compared with a bare predicate.
* Both non-implications: hold-mask containment, with a syntactic fallback when both are
  unfalsifiable on the corpus.
* Both implications, three conjunctive conditions:
  1. **fires at least wherever the right one fires** — support-mask containment;
  2. **responds at least as tightly** — `_delays(left) ⊆ _delays(right)` (`validation.py:263-283`).
     Containment is sound in one direction only: a fixed offset implies the same consequent
     required *somewhere* in a window containing it, never the reverse, and two distinct fixed
     offsets are incomparable;
  3. **carries at least as strong a consequent**, compared as predicates **over the whole
     corpus**, not only where the right-hand clause fires. Restricting to the firing samples
     made `valid_o == 0 |-> valid_o <= op_a_i` come out as a refinement of a 40-cycle divider
     response property.

`_covers_predicate` (`validation.py:143-169`) is the syntactic fallback: conjunct-set
containment. Needed because the corpus contains no valuation separating `ain >= 0` from
`ain <= 65535 && bin <= 65535`, so mask containment would report them mutually implied and a
range invariant would be credited with recovering any environment bound.

`_strip_parens` (`validation.py:249-260`) exists because `G(a |-> (##[1:40] b))` was otherwise
read as a same-cycle implication over a formula-valued consequent — every reference clause
written that way was being compared against something it never meant.

**Mask caching** (`validation.py:172-180`, `216-246`) memoises one bit-per-position mask per
clause on the corpus object, turning a pairwise sweep over `k` clauses from `k²` evaluations
into `k` evaluations plus `k²` integer operations. With `##[1:20]` clauses this was the flow's
hot spot.

**`reduce_subsumed`** (`validation.py:296-340`) is the version used inside `mine`. Sort strongest
first — non-implications, then tighter delay sets, then higher support, then shorter text — and
drop anything a survivor implies. Two clauses are `comparable` only with the **same arity and,
for implications, identical consequent text** (`validation.py:316-329`): letting compound
consequents subsume plain ones cost sqrt every one of its six exactly-recovered guarantees,
because `G(A' |-> C1 && C2)` implies `G(A' |-> C1)` yet a narrower `A'` loses the broader
obligation.

**`classify`** (`validation.py:183-193`) → `equivalent` | `mined-stronger` | `mined-weaker` |
`incomparable`. **`minimize`** (`validation.py:196-213`) builds equivalence classes, keeps the
shortest text per class, and records the refinement pairs among survivors so they are not
double-counted. **`match`** (`validation.py:343-365`) picks per reference the best hit in the
order `equivalent > mined-stronger > mined-weaker`, else `missed`, and reports
`equivalent_recall` and `acceptable_recall = (equivalent + stronger) / references`.
`mined-weaker` is reported but **not** counted as acceptable.

**`validate`** (`validation.py:384-406`): with no holdout, everything is trivially kept and a
note says so. With one, clauses that are non-vacuous *and* violation-free on the held-out region
are minimized, and reference matching runs on **that** minimized kept set — never on the mining
corpus. Every clause gets `held_out` and `kept` written back.

---

## 5. Backends — `ace/backends.py` and `ace/templates.py`

None of this is a contribution of the flow, and **metrics are never read back from a backend**
(`backends.py:1-24`). The flow scores everything with its own evaluator so that labeling,
selection and held-out validation agree by construction.

### HARM (`ace/backends.py`, 240 lines)

`GRAMMARS` (`backends.py:43-59`), `H` = horizon, `P0/P1/...` = proposition slots:

| key | adds |
|---|---|
| `G1` | `G(P0 \|-> P1)` |
| `G2` | `G(P0 \|=> P1)` |
| `G3` | `G(P0 \|-> ##[1:H] P1)` — **the default** |
| `G4` | `G(P0 && P1 \|-> ##[1:H] P2)` |
| `G5` | `G({..#1&..} \|-> P0)` — not expressible in process |

`harm_conf` (`backends.py:111-144`) writes the XML: one `<prop exp=... loc=.../>` per boolean,
one `<numeric clustering="K,10Max,0.01WCSS,><,==" .../>` per bitvector, the templates with `H`
substituted, and a `<sort>` carrying smoothed recall. `loc` is a placement hint — `a` antecedent,
`c` consequent, `dt` decision tree. **Declaring a bitvector as `<prop>` is the most likely cause
of an empty mining run** (`backends.py:10-11`); `classify_signals` (`backends.py:154-160`) makes
the call from the observed value set.

`harm` (`backends.py:165-199`) invokes the binary: **a directory argument becomes `--csv-dir`, a
file becomes `--csv`**. The directory form is what a split region uses — every episode is mined
as its own trace, so no mined property can relate samples across an episode boundary. Output is
read back from `<dump_to>/<context>_ass.txt`.

Installation discovery: `harm_bin()` checks `$HARM_BIN` then `PATH`; `temporal_backend()`
returns `"harm"` or **`"in-process-templates"`**, and that string is written into
`contract.provenance` and the top-level results. `tools/check_harm.py` reports whether an
installation is usable (exit 0 usable, 4 binary works but vocabulary does not);
`tools/install_harm.sh` builds one.

`invgen` (`backends.py:220-227`) needs `$ACEROOT`. `daikon` (`backends.py:230-234`) **always
raises `BackendMissing`** — it is a named alternative, not an implementation; propositional
invariants are always computed in process.

### The in-process instantiator (`ace/templates.py`, 393 lines)

The fallback when HARM is absent. It instantiates the *same* templates over the *same* declared
vocabulary. The enumeration is not a contribution; the bitmask pass exists to make it cheap, and
**it only proposes — `validation.evaluate` decides** (`templates.py:1-24`).

* **Vocabulary.** `predicates` (`templates.py:36-67`): `sig == v` for every distinct value when
  the domain is ≤ 24 wide, otherwise the top 6 by frequency, plus observed bounds and a sign
  split. The 24-wide threshold is not arbitrary — taking the top six of the Ibex ALU's 18-value
  operation selector made two thirds of its reference contracts unreachable.
  `edge_predicates` (`templates.py:70-85`) adds rising and falling edges for two-valued signals,
  as *vocabulary entries*, not as new templates.
* **Bitmasks** (`templates.py:113-142`). One integer per run per proposition, with a bit set at
  the sample where a match **ENDS** (`mask |= 1 << (t + depth)`). Working in start space instead
  proposed every edge clause one cycle early and every edge-with-value conjunction as
  satisfiable when the evaluator read it as empty.
* **Acceptance is strict** (`templates.py:165-173`): `if fires & ~reach: return 0` — any
  violation on a decidable position kills the instance. The only metric is `support`.
* `_tighten` (`templates.py:176-192`) turns `##[1:20]` into a fixed `##3` where the data supports
  it, and `_emit` publishes only the tightest such offset — sqrt otherwise offered `##12` and
  `##13` of the same clause and pushed out everything else.
* `_interleave` (`templates.py:195-213`) round-robins across consequent blocks before truncating,
  because a single global ranking let compound consequents delete sqrt's entire recovered set.
* `_compound_consequents` (`templates.py:255-275`) pairs a boolean flag with a value predicate on
  another signal — the handshake shape `valid_o == 1 && multdiv_result_o == op_a_i`.
* `instantiate` (`templates.py:278-367`) groups antecedent propositions **by depth** (mixed-depth
  conjunctions are empty under `And`), tries singles first and forms pairs only from
  propositions that failed alone for the same consequent and delay, and gives each depth group
  its own `max_per_consequent` budget so edge-triggered antecedents are not hidden behind
  same-cycle value predicates.
* `demo()` (`templates.py:370-389`) is the self-check: plant `req |=> ack`, assert it comes back
  and that no same-cycle response is mined.

**What differs from HARM:** no decision-tree slot (2- and 3-proposition antecedents play its
role), no `G5` structural template, no clustering (the value vocabulary comes from
`predicates`), and strict zero-violation acceptance rather than a ranked output.

---

## 6. Orchestration and artifacts — `ace/__main__.py`

```
python3 -m ace <config.json> --out <dir> [--budget F] [--seed N] [--episode-mode split|concat]
```

`REQUIRED = ("name", "traces", "inputs", "outputs", "events", "horizon", "h_pre", "h_post")`
(`__main__.py:22`); a missing key is a `SystemExit` naming all of them.

`run_flow` (`__main__.py:125-218`) also takes an `overrides` dict with no CLI flag — that is the
programmatic entry point `tools/score_recovery.py` uses to run the same config under a different
vocabulary setting without copying the file.

**Two guards before any mining:**

* `h_post < horizon` prints a stderr warning and sets `results["episode_covers_horizon"] = False`
  (`__main__.py:147-153`). An episode shorter than the horizon cannot decide a bounded-response
  clause; boundary-preserving extraction makes those positions vacuous rather than violated, so
  **every `##[1:H]` guarantee is unreachable by construction** — worth saying out loud rather
  than discovering as a zero.
* Any signal in `inputs + outputs` not present in the corpus is a `SystemExit` listing both the
  unknown names and the available ones (`__main__.py:155-158`).

Then, per declared event: label → select → episodes → mine (validation runs inside it). An event
that never occurs is recorded `skipped: "event never occurs"`; one no candidate explains,
`skipped: "no candidate passed selection"`. Per-stage wall-clock times are always recorded
(`load`, `1_label:<e>`, `2_triggers:<e>`, `3_episodes:<e>`, `4_mine:<e>`).

**On disk:**

```
<out>/contracts.json                          every clause with provenance, region support,
                                              global support, held-out result, kept flag,
                                              plus every dropped candidate and its reason
<out>/report.md                               rendered summary (render_report, __main__.py:221-269)
<out>/work/region_<slug>/
        episode_00000.csv ...                 split mode: one CSV per episode
        region.csv                            concat mode
        episodes.json                         mode, counts, provenance_ok, every window
        trigger_conf.xml, trigger_harm/       only when HARM is present
        guarantee_conf.xml, guarantee_harm/
```

One asymmetry to be aware of when reading `contracts.json`: a skipped region records the
selection under the key `triggers`, a successful one under `trigger_selection`
(`__main__.py:191-213`).

---

## 7. Three trace sets, never interchanged

| set | what it is | used for |
|---|---|---|
| **full corpus** | every mining trace, whole runs | `domain_trivial`, `global_support`, `region_specific`, trigger scoring, event labeling |
| **region corpus** | `episodes.as_corpus` — one run per episode | region evaluation, subsumption, generalization verification, refinement, `trace_consistency` |
| **held-out region corpus** | `mining.holdout_region` — the holdout re-decomposed with the *same* event and the *same* selected triggers | `validate`, minimization, reference matching |

The third one is the subtle one (`mining.py:703-722`). Checking region clauses against *whole*
held-out runs would count every out-of-region sample as a violation and reject exactly the
region-specific clauses the flow exists to find. So the holdout is decomposed the same way the
mining corpus was, and only then scored.

Run-locality is enforced three separate times: `traces` never concatenates runs,
`episodes.extract` merges only within a run, and `as_corpus` re-exports each episode as its own
run so clause evaluation cannot read across a seam.

---

## 8. Configuration reference

`ace/config_template.json` is a self-documenting template (every value is its own description).
This is the complete list of keys the code actually reads.

| key | default | read at |
|---|---|---|
| `name` | required | `__main__.py:160` |
| `traces` | required | `__main__.py:141` (globs relative to the config; `$VAR` expanded) |
| `holdout` | `[]` | `__main__.py:143-145`; empty skips Step 5's held-out half |
| `inputs`, `outputs` | required | trigger/assumption and event/guarantee vocabularies |
| `events` | required | the per-region loop, `__main__.py:167` |
| `horizon` | required | `H` in `G(trigger \|-> ##[1:H] event)` |
| `h_pre`, `h_post` | required | `episodes.extract` |
| `grammar` | `"G3"` | `backends.GRAMMARS`, `mining.py:447` |
| `episode_mode` | `"split"` | `episodes.write_region`; CLI `--episode-mode` overrides |
| `event_onsets` | `false` | `__main__.py:168` — label transitions instead of levels |
| `trigger_candidates` | mined | `__main__.py:180-183` |
| `min_recall` | `0.5` | `triggers.select` |
| `min_gain` | `0.05` | greedy loop threshold |
| `redundancy_weight` | `0.5` | λ in the selection score |
| `max_triggers` | `8` | selection cap |
| `min_lift` | `0.0` | lift over `expected_recall` |
| `min_trigger_support` | `0.1` | share of event occurrences a trigger must match |
| `trigger_onsets` | `true` | count matches at onsets only |
| `edge_props` | `true` | `templates.edge_predicates` |
| `compound_consequents` | `true` | flag-and-value conjunctions in the consequent slot |
| `max_antecedent_props` | `2` | 3 is available but cubic in the vocabulary |
| `min_instance_support` | `0.002` | share of region samples; floored at 3 (`mining.py:401-404`) |
| `max_instances` | `800` | `templates.instantiate` cap |
| `max_per_consequent` | `12` | per antecedent-depth group |
| `extra_props` | `[]` | declared vocabulary: `{exp, loc, stage}`; `loc` ∈ `a`/`c`/`dt` |
| `auto_vocabulary` | `false` | switch on `mining.interface_vocabulary` |
| `vocabulary_arity` | `3` | three-way sums in the arithmetic family (`mining.py:202-217`) |
| `vocabulary_bitwise` | `true` | bitwise and shift family |
| `vocabulary_output_arithmetic` | `true` | output-on-the-left family |
| `max_vocabulary` | `150` | truncation cap, applied in emission order |
| `generalize` | `true` | interval collapsing |
| `refine_assumptions` | `true` | guard search |
| `max_refinements` | `4` | guards admitted to A |
| `max_refinement_candidates` | `8` | guards tried |
| `min_unlocked` | `1` | guarantees a guard must restore to earn its place |
| `temporal_assumptions` | `false` | mine temporal clauses on the A side |
| `references` | `[]` | reference guarantees for Step 5 matching |
| `reference_assumptions` | `[]` | reference invariants, scored by `tools/score_recovery.py` |
| `reset`, `max_ass`, `min_frank` | — | HARM `--reset` / `--max-ass` / `--min-frank` |
| `numeric_clustering` | `K,10Max,0.01WCSS,><,==` | HARM `<numeric clustering=...>` |

`event_onsets`, `extra_props`, `reference_assumptions` and `auto_vocabulary` are used by every
real benchmark config but are **not** described in `config_template.json`.

---

## 9. Data flow

```
config.json ──load_config──▶ cfg           (REQUIRED keys validated)
     │
     ├─ traces.load_corpus(cfg["traces"], base) ─▶ Corpus{Run{header, rows[t][sig], path}}
     │       └─ optional .subsample(budget, seed)          (whole runs only)
     └─ traces.load_corpus(cfg["holdout"])      ─▶ holdout Corpus | None

for each event e in cfg["events"]:
  [0]  event := onset_event(e) if cfg["event_onsets"]
  [1]  labeling.label ─────────▶ EventLabels{occurrences=[(run, t_end)], samples}
                                            └─ stop: "event never occurs"
  [2]  candidates := cfg["trigger_candidates"]
                   | HARM antecedents (mine_candidates)
                   | observed_predicates + pair orderings + pair conjunctions
       triggers.select ────────▶ Selection{selected, stats, unassigned, rejected}
         score → TriggerStats{atct, afct, explained, anchors, misses}
         filter → support / lift / recall        greedy → gain + lift − λ·jaccard
                                            └─ stop: "no candidate passed selection"
  [3]  episodes.anchors  = explained events ∪ trigger ATCT positions
       episodes.extract ──────▶ [Episode(run, lo, hi)]        merged within a run only
       episodes.write_region ─▶ DISK: episode_*.csv | region.csv, episodes.json
  [4]  mining.mine ──────────▶ Contract{assumptions, guarantees, provenance,
                                        metrics, dropped, validation}
         rows_of      → propositional invariants (episode + anchor scope)
         as_corpus    → region corpus, one run per episode
         _mine_temporal → HARM | templates.instantiate
         filter(7) → subsume → generalize → subsume → refine
         holdout_region → validation.validate  (evaluate, minimize, match)

results["timers_s"] = per-stage seconds
──▶ DISK: <out>/contracts.json, <out>/report.md
```

---

## 10. How the framework is exercised

Nothing below is part of the flow; all of it measures it.

* **`benchmarks/run.py`** builds each design with verilator, simulates ten traces per design
  (5 mining / 3 held-out / 2 stress, disjoint seed ranges), validates the hand-written
  `candidates.json` against them, and **writes back** into each `config.json` the confirmed
  clauses as `references`, the exercised invariants as `reference_assumptions`, and the union of
  declared propositions as `extra_props`. `--validate-only` re-checks all 135 golden contracts
  with no simulator. Guarantees are checked under their guards on mining and held-out traces and
  **without** them on stress traces — that is what a contract used outside its assumptions looks
  like.
* **`tools/score_recovery.py`** runs `run_flow` per design under two settings — `declared` (the
  `extra_props` hints) and `interface` (`auto_vocabulary: true`, hints removed) — classifies
  every reference clause, and writes `results/<setting>/<design>/recovery.json` plus
  `results/recovery_summary.json`.
* **`tools/report_bundle.py`** → `reports/{golden,mined,mined_interface,match}/<design>.txt` and
  `reports/MINING_REPORT.md`. **`tools/report_recovery.py`** → `CONTRACT_RECOVERY.md`, a per-clause
  checklist with a cause assigned to every miss.
* **`tests/`**, stdlib only, no external tools: `test_formula.py` (evaluator semantics — delays,
  vacuity, run boundaries, arithmetic), `test_flow.py` (steps 1–5 end to end on a synthetic IP,
  asserting episode provenance byte-for-byte and role fencing), `test_recovery.py` (one test per
  defect that once produced a plausible-but-wrong number).

Numbers live in `reports/MINING_REPORT.md`; they are not duplicated here.

---

## 11. Known limits

**Methodological.**

* Everything is **trace-bounded**: `method: "trace-bounded"` on every report dict means agreement
  on the observed corpus, not a proof. `trace_consistency` is empirical, not `M |= A ⇒ G`. The
  documented swap path is to replace `validation.implies` and leave the rest untouched.
* **The mined set is 3–25× the reference set, and no trace-side signal separates them.** Support,
  delay tightness, antecedent size and interface relevance all put the golden witnesses at ranks
  20–350 of 200–360. The extras are true of the traces and generalise to the held-out runs — they
  are properties nobody wrote down, not errors. This is the framework's open problem
  (`RECOVERY.md`).
* `max_antecedent_props: 3` exists but is off by default: it is cubic in the vocabulary.
* Region coverage is a ceiling — occurrences no trigger explains are reported as `unassigned`,
  and nothing is claimed about them.

**Implementation.**

* `backends.daikon` raises unconditionally; `backends.invgen` needs `$ACEROOT`. Propositional
  invariants are always in-process.
* `h_post < horizon` makes every `##[1:H]` guarantee unreachable. The flow warns; it does not
  correct the config.
* `GRAMMARS["G5"]` is unverified against a live HARM build, and its `{..#1&..}` sequence
  placeholder is not instantiable in process.
* `backends.harm_conf` substitutes the horizon with a bare `template.replace("H", ...)`
  (`backends.py:139`). Safe for the current `GRAMMARS`, wrong for any template mentioning e.g.
  `HREADY`.
* `mining._min_support`'s docstring says "at least two samples"; the code floors at 3
  (`mining.py:401-404`).
* `mining.refine`'s cap check is `if len(contract.assumptions) and limit <= 0`
  (`mining.py:678`), so a contract that has no assumptions yet admits one guard even under
  `max_refinements: 0`. Harmless at the default, but the cap is not what it says at zero.
* `triggers.select`'s docstring (`triggers.py:158`) states the score as
  `gain + smoothed_recall - λ·redundancy`; the code uses lift, `smoothed_recall -
  expected_recall`. The code is the intended behaviour — see the inline note at
  `triggers.py:217-219`.
* Dead branch at `tools/report_bundle.py:188` (`isinstance(mined, set)`; `mined` is always a list
  from JSON).

