# Can the DATE2027 flow extract the reference contracts?

> **Scope of this document.** The analysis below is the eight-design measurement (80
> reference guarantees, 20 assumptions) and the diagnosis of every miss on it. The
> benchmark has since grown to eleven designs - `arbiter4`, `fifo_sync` and `apb_slave`
> added 55 guarantees and 8 assumptions - and the current totals are 64 of 135 exactly and
> 105 of 135 up to refinement (47% / 78%) with the declared vocabulary, 35 / 72 (26% / 53%)
> with the interface vocabulary. `reports/MINING_REPORT.md` has those tables per design and
> per clause id, and `CONTRACT_RECOVERY.md` is regenerated for all eleven. What the three
> protocol designs add to the picture: arbiter4 is the best design in the benchmark (83%
> exact), apb_slave the worst (17%), and the two bracket the same limit - how many
> propositions an antecedent may conjoin.

Short answer: yes for the two clause families the plan actually names — propositional
invariants and `G(antecedent -> consequent)` template instances — and the numbers are now
measured rather than argued. With each design's declared proposition vocabulary the flow
recovers **37 of 80 reference guarantees exactly and 67 of 80 up to refinement (84%)**, and
relates **all 20 reference assumptions** (5 exactly, 8 as refinements, 7 as weaker bounds,
none missed). With the vocabulary derived mechanically from the interface instead, and no
hand-written hints at all, it still recovers **22 exactly and 49 up to refinement (61%)**.
Twelve reference guarantees remain unrecovered, each for a named reason, and three of those
are a stimulus gap rather than a tool limit. Nothing here needed a change to the
methodology: every fix was a defect in the implementation of a step the plan already
specifies, or a modelling decision the plan leaves to the config.

    python3 tools/score_recovery.py benchmarks/*/config.json --out results
    python3 tools/report_recovery.py results --out CONTRACT_RECOVERY.md
    python3 -m pytest tests -q && python3 tests/test_flow.py

`CONTRACT_RECOVERY.md` is the per-contract checklist: every reference clause of every
design, what came back for it, and the cause when nothing did.

## Measurement

`tools/score_recovery.py` runs the flow on each design and classifies every reference clause
against the mined output with the tool's own trace-bounded comparison: *equivalent* (a mined
clause says exactly this), *mined-stronger* (a mined clause implies it — a refinement),
*mined-weaker* (it implies a mined clause — the miner got a weaker form), *missed*.
Assumptions are scored against the mined clauses with no antecedent, guarantees against the
mined template instances, because the two sides come from different families and fail for
different reasons.

Two vocabulary settings are scored, and the gap between them is the honest part of the
result:

* **declared** — the design's `extra_props`. For these benchmarks those hints were written
  from the reference contracts, so this setting measures the flow given a good vocabulary.
* **interface** — `auto_vocabulary`: every output against every input and every arithmetic
  pair of inputs, derived from the interface alone, `extra_props` removed. Nothing about the
  references reaches the search space.

### Guarantees

Declared vocabulary, one row per design; the interface-only column is the same measurement
with `auto_vocabulary` and no hand-written hints.

| design | regions | refs | equivalent | stronger | weaker | missed | exact | acceptable | mined | interface acceptable |
|---|---|---|---|---|---|---|---|---|---|---|
| comparator_3bit | 2 | 8 | 6 | 2 | 0 | 0 | 75% | 100% | 47 | 88% |
| multi_16bit | 1 | 9 | 5 | 4 | 0 | 0 | 56% | 100% | 199 | 89% |
| sqrt | 1 | 13 | 6 | 6 | 0 | 1 | 46% | 92% | 219 | 54% |
| ibex_multdiv_fast | 1 | 13 | 5 | 6 | 0 | 2 | 38% | 85% | 368 | 23% |
| accumulator | 1 | 6 | 3 | 2 | 0 | 1 | 50% | 83% | 120 | 67% |
| ibex_alu | 2 | 18 | 7 | 6 | 0 | 5 | 39% | 72% | 303 | 56% |
| adder_8bit | 1 | 7 | 4 | 1 | 1 | 1 | 57% | 71% | 26 | 71% |
| ibex_csr | 2 | 6 | 1 | 3 | 0 | 2 | 17% | 67% | 24 | 83% |
| **total (declared)** | | **80** | **37** | **30** | **1** | **12** | **46%** | **84%** | | |
| **total (interface)** | | **80** | **22** | **27** | **2** | **29** | **28%** | **61%** | | |

### Assumptions

20 reference assumptions: 5 exact, 8 recovered as refinements, 7 as a weaker form, none
missed (declared vocabulary; the interface setting reaches 6 exact and 16 up to refinement).
Scoring the A side needs one thing the G side does not: since a contract's A is a
conjunction, a reference assumption written as `A <= 7 && B <= 7` is compared against the
conjunction of the mined invariants as well as against each one, and a conjunction that
contains the reference's conjuncts counts as a refinement.

Getting past 45% on this side needed a change of principle rather than another pass. A
contract's A is not a summary of the region — it is the environment restriction *chosen so
that G holds*. The region the flow decomposes is wider than a contract's domain: the Ibex
divider's `valid_o` region contains reset samples and divide-by-zero requests, so the
invariants of that region are loose bounds (`div_en_i <= 1`) while the contract wants
`rst_n == 1` and `op_b_i >= 1` — neither of which is true of the region, so no invariant
pass over it, or over the whole corpus, can produce them.

`mining.refine` therefore treats each candidate restriction as a **guard**: a guarantee that
was violated on the region is re-checked at the samples where the guard holds
(`validation.evaluate_under`, the semantics the benchmark validates references with), and a
guard that turns rejected guarantees into clean ones enters A together with them. On the
divider that recovers three of four reference assumptions as refinements where the previous
run recovered none, and it is what raised the A side from 45% to 65%.

The 7 remaining weaker forms are the original phenomenon: a region bound (`data_in <= 255`,
`in <= 4000000000`) where the reference names a tighter environment restriction that the
guard search did not need in order to make its guarantees hold.

## Why the misses happen

Twelve missed guarantees under the declared vocabulary, and every one has a named cause:

| cause | count | what it needs |
|---|---|---|
| vocabulary or region | 5 | a term the declared family still misses (a signed comparison, an operand-conditioned shift), or a region the flow never enters |
| unfalsifiable consequent — `rd_error_o == 0`, `data_out <= 1020` | 3 | a stimulus that contradicts the consequent somewhere. The consequent holds at every sample of the corpus, so the clause is a signal domain restated and the flow drops it on purpose. A benchmark gap (no CSR error is ever provoked), not a tool limit — and the one remaining item on the improvement list |
| sequence antecedent with a 4-proposition guard — `((div_en_i == 0) ##1 (rst_n == 1 && div_en_i == 1 && operator_i == 2 && op_b_i == 0)) \|-> ...` | 2 | an edge conjoined with three value predicates. Edges are now vocabulary entries and plain sequence antecedents are recovered exactly; these two need the edge *and* a three-deep decision tree at once |
| compound consequent | 1 | a conjunction of three obligations in the consequent slot (pairs are supported) |
| 3+ proposition antecedent — `operator_i == 10 && operand_b_i == 1 && operand_a_i <= 2^31` | 1 | `max_antecedent_props: 3`, which exists but is off by default: it is cubic in the vocabulary |

The families that dominated this table before are gone: all five plain sequence antecedents
now come back exactly, as do both single compound consequents, because a rising edge is a
vocabulary entry (`(!(x == 1)) ##1 (x == 1)`) rather than a template, and the consequent slot
takes a flag-and-value conjunction.

`CONTRACT_RECOVERY.md` lists these one clause at a time, with the cause per clause. One
further limit is visible in the table rather than in the miss counts: **region coverage** —
a reference clause about a region the flow never enters is unreachable, so more events per
design, or a residual region for the unexplained samples, would raise the ceiling.

## The interface-only column

Recall falls from 84% to 61% when the vocabulary is derived mechanically instead of written
by hand. That number is the real measure of how much a hint-based miner depends on its
hints, and extending the family is what moved it: it was 34% when the family stopped at
pairwise `+ - *` and orderings.

Four families, in the order the vocabulary emits them, each added because a measurement
demanded it:

* orderings and equality of every output against every input;
* arithmetic: `+ - *` of two inputs, and a sum of three (`sum == a + b + cin` — the 8-bit
  adder went from 0% to 71% acceptable on that alone);
* bitwise and shift: `& | ^ << >>` of two inputs, which is what an ALU's operations are
  (`ibex_alu` interface-only: 6% → 56% acceptable). The clause language itself had to learn
  these operators, with a precedence level below comparison;
* output-side arithmetic: the output on the left (`result_o * 2 <= operand_a_i`,
  `multdiv_result_o * op_b_i <= op_a_i`), which is how a shift or a division is specified
  without naming the operation.

The size is `|O| * (3|I| + 12|I|(|I|-1)/2 + C(|I|,3))` and grows fast: 94 propositions for
the adder, 141 for the ALU, 446 for the six-input divider. Every member becomes its own
consequent group with its own instance budget, so run time grows with it, and
`max_vocabulary` (150) truncates the family in emission order — the cheapest families stay
whole. The recall-versus-vocabulary-size curve this exposes is the RQ4 measurement.

## Defects fixed to get here

The first honest run of this measurement produced garbage in both directions — 100%
"acceptable" recall on designs where nothing useful was mined, and zero regions on five of
eight designs. Eight things were wrong in ways the earlier validate-the-references-by-hand
experiments could not expose, in every step from labelling to matching. Each fix now has a
test in `tests/test_recovery.py`.

1. **Trigger selection rejected the real triggers.** A cap on how many samples a candidate
   may match (50%) threw away every enable held high for the duration of an operation. It is
   replaced by a lift test against the base rate — the share of positions the event follows
   anyway — smoothed at the candidate's own support, so a dense event no longer rejects a
   tight trigger and a predicate that is simply true no longer passes on five matches.
2. **Trigger matches were counted at every held sample.** An enable held for a 36-cycle
   division contributed 36 matches, which inflated its support by the response latency and
   made it indistinguishable from noise; the Ibex divider produced no region at all. Matches
   are now counted at onsets (the trigger was false at the previous sample), which also puts
   episode anchors at the start of each operation.
3. **The region-specificity filter dropped every true global implication.** Any clause that
   held over the whole corpus was rejected as domain-trivial — which is exactly what a
   well-formed guarantee does. Triviality is now decided on the clause's parts: its
   antecedent holding everywhere makes it unconditional, its consequent holding everywhere
   makes it a signal domain restated. Assumptions are exempt from the second test, since an
   environment restriction that holds everywhere *is* the assumption.
4. **Subsumption collapsed the guarantee set.** Trace-bounded implication between two
   violation-free implications is trivially true in both directions (both hold at every
   position, vacuously where the antecedent does not fire), so one bounded-response clause
   swallowed all 40 guarantees of a region. Implications are now compared on where they fire,
   how tightly they respond, and their consequents as predicates.
5. **Reference matching credited unrelated clauses.** The same vacuity made
   `G(valid_o == 0 |-> valid_o <= op_a_i)` count as a refinement of a 40-cycle response
   contract, and a clause about `start` count as recovering the multiplier's product. Fixed
   with the same comparison; the numbers in this document are what remained.
6. **Comparison read the wrong clause.** A consequent written `|-> (##[1:40] valid_o == 1)`
   hid its delay behind the bracket, so every reference contract in that style was compared
   as a same-cycle implication over a formula-valued consequent. Redundant parentheses are
   now stripped before the delay and the consequent are read — worth one line of code and
   two reference clauses.
7. **The instance budget was spent on delay variants.** Offering every fixed offset that
   answers inside a window (`##12` and `##13` of the same clause) filled the per-consequent
   budget with restatements of one antecedent and pushed out every other antecedent for that
   consequent. Only the tightest fixed latency is offered alongside the window form; the
   square root gained a reference clause and lost 56 mined ones.
8. **Modelling and vocabulary.** A status flag held between operations is not an event
   (`done` was true at 44% of the square root's samples, so nothing could discriminate it):
   `event_onsets` labels its transitions. Occurrences are recorded where a match *ends*, so
   multi-sample events line up with the positions trigger scoring explains. An episode
   shorter than the horizon cannot decide a bounded-response clause, so `h_post >= horizon`
   is now checked and warned about. A signal with few distinct values gets an equality for
   every one of them — taking the six most frequent values of an 18-operation opcode made
   two thirds of the ALU's contracts unreachable.

## Second round: the four improvement packages

The numbers above are after a second round of work aimed at recall and precision. What each
package changed, measured on the benchmark:

**Shapes (edge propositions, compound consequents, three-proposition antecedents).** A
rising edge is a vocabulary entry, not a new template: the clause language already evaluates
`(!(x == 1)) ##1 (x == 1)`, so declaring edges for two-valued signals recovers the divider's
five sequence-antecedent contracts. The consequent slot takes a flag-and-value conjunction
(`valid_o == 1 && multdiv_result_o == op_a_i`), and `max_antecedent_props: 3` extends the
existing pair pruning one level. Divider: 3 exact / 7 acceptable → 5 / 11.

This package also exposed three defects in the instantiator that nothing else could have
found: it measured delays from the antecedent's START while the evaluator measures from its
END (every edge-triggered clause was proposed a cycle early), it proposed conjunctions of
propositions with different depths, which `formula.And` reads as empty (a rising edge cannot
be conjoined with a same-sample predicate at all), and it shared one per-consequent budget
across antecedent depths, so value predicates that fire on every cycle of an operation
crowded out every edge-triggered response. There is now a test asserting that every clause
the bitmask pass proposes is non-vacuous and violation-free under the evaluator - the two
must agree, or the budget is spent on clauses that are dropped again.

**Vocabulary.** Described above: the interface-only recall went from 34% to 61%.

**Precision.** The mined guarantee set is 3-25x the reference set, and the honest finding is
that **no trace-side signal separates the two**. Measured, not assumed:

* Ranking by support, by delay tightness, by antecedent size, or by interface relevance
  (control signal in the antecedent, data path in the consequent, penalty for a
  co-occurrence value equality) puts the reference-matching clauses at ranks 20-350 of
  200-360. recall@25 is 1-5 of 10-13 witnesses under every ranking tried. A reported top-k
  would lose recall rather than gain precision.
* Filtering by the stress corpus removes 7-40% of the extras and costs up to 3 of 13
  witnesses; filtering by "does not generalise to the held-out corpus" removes up to 35% and
  costs up to 3. Both are unsound in principle for guarantees, since a guarantee legitimately
  fails when the environment violates the assumption.
* None of the extras is implied by a reference contract (0 of 129, 0 of 216, 0 of 72). They
  are not weak consequences to fold away: they are true, they generalise to independent
  runs, they survive stress, and nobody wrote them down.

What did work is removing clauses that never belonged: **temporal environment clauses are no
longer mined into A** (`temporal_assumptions`, off by default), because a contract's A is a
conjunction of invariants - and that family was 310 of 325 assumption-side clauses on the
divider, every one of them a true fact about the stimulus generator. Together with interval
generalisation of value-equality families (`mining.generalize`, verified on the episodes so
it never weakens anything) that halved the clause counts and the run time at unchanged
recall.

The remaining gap is a ranking problem that needs a criterion from outside the traces -
mutation-based importance, which costs simulation, or engineer triage of a ranked list.
`CONTRACT_RECOVERY.md` reports the extras per design so the size of the problem is visible
instead of hidden behind a recall percentage.

**Assumptions.** `mining.refine`, described above: 45% → 65% acceptable.

Two additions were needed rather than fixes:

* **`ace/templates.py`** — an in-process template instantiator. HARM enumerates its
  templates over a declared vocabulary and keeps what the trace supports; that enumeration
  is not a contribution of the flow, so the flow can do it itself and stay measurable on a
  machine with no miner installed. Propositions are propositional, so each is a bitmask over
  a run's samples and every template becomes a shift and a mask. It only proposes:
  `validation.evaluate` with the tool's own semantics decides. It also tightens a window
  instance into a fixed-latency one where the data allows (`##[1:5]` to `##3`), which is
  what a latency contract is written with.
* **`mining.interface_vocabulary`** — the mechanical proposition family described above.

## Reproducing

`results/<setting>/<design>/recovery.json` holds every reference clause with its category
and the mined witness; `results/recovery_summary.json` aggregates them with the miss causes;
`CONTRACT_RECOVERY.md` is the same material as a per-clause report.
The flow runs in 10-40 s per design on the mining corpus with no external miner. With HARM
installed (`HARM_BIN`, verified by `tools/check_harm.py`) the temporal backend switches to
it and the rest of the flow is unchanged — the instantiator and HARM consume the same
configuration, so the comparison between them is a direct RQ.
