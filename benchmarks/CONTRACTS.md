# Reference assume-guarantee contracts

A contract is a pair `(A, G)`:

* **A is a conjunction of invariants** - `A1 && A2 && ...` - each a propositional
  predicate over the environment with no temporal operator (`rst_n == 1`,
  `in >= 0`, `op_b_i >= 1`). These are the objects an invariant detector produces.
* **G is a conjunction of formulas** - `G1 && G2 && ...` - each one a whole
  `G(antecedent -> consequent)` instance of a HARM template, which is exactly what
  the temporal backend emits.

A guarantee is claimed only at the samples where every invariant in its contract's A
holds. Nothing from A is folded into a guarantee's antecedent: a sample where an
invariant fails is a sample outside the contract's domain, where nothing is claimed.
A mined clause and a reference clause are therefore directly comparable, on both
sides - invariant against invariant, template instance against template instance.

The guarantee's own antecedent is the stimulus that triggers the response (`start == 1`,
`div_en_i == 1 && op_b_i == 0`). The assumptions are the obligations the environment
must respect for the response to be owed at all (hold the request until it completes,
do not reset mid-operation, release the enable one cycle after the handshake).

Guarantee shapes follow what HARM's templates can produce:

* antecedent of at most two declared propositions joined by `&&` - a conjunction
  counts as ONE proposition when declared as one, which HARM's proposition grammar
  allows - or a two-cycle rising-edge sequence for the G5 decision-tree shape. `fifo_sync`
  and `apb_slave` raise the limit to three (`max_antecedent_props: 3` in their configs),
  and a handful of their contracts conjoin four, which no setting reaches;
* consequent of exactly one proposition;
* delay of same-cycle, `|=>`, or `##[1:H]` with H the configured horizon;
* every compound proposition listed in `props`, which `run.py` writes into the
  config's `extra_props` - HARM's clustering only generates comparisons against
  constants, so `yout == ain * bin` is mined only if it is declared.

The honoured rate of an invariant is the share of samples where the environment stays
inside the contract's domain - not a defect rate. A low rate simply means a narrow
domain: `in < 0` on the square root holds at 0.9% of samples, because rejected
requests are rare, and that is the environment its error-path guarantees are about.

One section per design: what the block does, how it behaves at its interface, and the
A -> G contracts the benchmark traces are expected to support. Every contract is stated
as an assumption on the environment and a guarantee on the component, in the grammar the
tool evaluates, and every one has been checked against the generated traces with the
tool's own evaluator (`benchmarks/run.py`, which writes `reference_check.json` next to
the traces).

`support` counts the positions where the guarantee's antecedent matches, the clause is
decidable, and the contract's assumptions hold;
`stress` is the same count on the traces where the environment deliberately breaks the
assumption (aborted operations, reset mid-flight). A contract with lower support on the
stress corpus is one whose assumption is doing real work.

**Kinds.** `reset` - behaviour under reset. `protocol` - a bounded response to a
request. `result` - a value relation, sampled where the completion flag says the result
is there. The three protocol designs add kinds of their own: `safety`, `liveness`,
`encoding`, `priority` and `fairness` on the arbiter, `flag`, `bound`, `occupancy` and
`data` on the queue, `error`, `latency` and `data` on the APB slave. The kind is a label
for the reader, not something the tool consumes.

## comparator_3bit

3-bit magnitude comparator, purely combinational (the clk port is unused).

*Interface.* inputs A, B (3 bit); outputs A_greater, A_equal, A_less.

*Behaviour.*

- The three outputs are a one-hot encoding of the comparison of A and B.
- No state, no protocol: every row of the trace is an independent observation.

*Notes.*

- Because the design is combinational, the reference contracts relate signals within one row and the benchmark's sampling convention does not matter for them.

*Contracts.* 8 of 8 guarantees confirmed on 5 runs / 2000 samples.

*Assumptions - the invariants that make up A.*

| id | invariant | holds at | samples |
|---|---|---|---|
| A1 | `A <= 7 && B <= 7` | 100.0% | 2000 |

- **A1** the environment drives 3-bit operands.

*Guarantees - each one a whole template instance.*

| id | kind | template | guarantee | A | support (mine / held-out / stress) | status |
|---|---|---|---|---|---|---|
| CMP1 | result | G1 | `G((A > B) |-> (A_greater == 1))` | A1 | 869 / 531 / 333 | confirmed |
| CMP2 | result | G1 | `G((A == B) |-> (A_equal == 1))` | A1 | 235 / 140 / 115 | confirmed |
| CMP3 | result | G1 | `G((A < B) |-> (A_less == 1))` | A1 | 896 / 529 / 352 | confirmed |
| CMP4 | result | G1 | `G((A >= B) |-> (A_less == 0))` | A1 | 1104 / 671 / 448 | confirmed |
| CMP5 | result | G1 | `G((A <= B) |-> (A_greater == 0))` | A1 | 1131 / 669 / 467 | confirmed |
| CMP6 | result | G1 | `G((A > B) |-> (A_equal == 0))` | A1 | 869 / 531 / 333 | confirmed |
| CMP7 | result | G1 | `G((B == 0) |-> (A_less == 0))` | A1 | 250 / 142 / 91 | confirmed |
| CMP8 | result | G4 | `G((A == 7 && B == 0) |-> (A_greater == 1))` | A1 | 24 / 21 / 10 | confirmed |

- **CMP1** strictly greater raises the flag.
- **CMP2** equal operands raise the flag.
- **CMP3** strictly smaller raises the flag.
- **CMP4** the less flag is necessary.
- **CMP5** the greater flag is necessary.
- **CMP6** greater and equal are exclusive.
- **CMP7** no 3-bit value is below zero.
- **CMP8** extreme operand pair, a directed corner of the sweep.

*Propositions this design's contracts need declared* (they end up in `config.json` under `extra_props`):

- `A > B` (`loc="a,dt"`)
- `A_greater == 1` (`loc="c"`)
- `A == B` (`loc="a,dt"`)
- `A_equal == 1` (`loc="c"`)
- `A < B` (`loc="a,dt"`)
- `A_less == 1` (`loc="c"`)
- `A >= B` (`loc="a,dt"`)
- `A_less == 0` (`loc="c"`)
- `A <= B` (`loc="a,dt"`)
- `A_greater == 0` (`loc="c"`)
- `A_equal == 0` (`loc="c"`)

*Not producible by any template:*

- **CMP-ONEHOT** `(none)` -> `A_greater + A_equal + A_less == 1`. unconditioned invariant: every HARM template produces an implication, so there is no antecedent to put it under. The flow's propositional path can state it as a bare clause, but the temporal backend cannot mine it.

## adder_8bit

8-bit ripple-carry adder built from eight full adders, combinational.

*Interface.* inputs a, b (8 bit), cin; outputs sum (8 bit), cout.

*Behaviour.*

- sum is the low 8 bits of a + b + cin; cout is the carry out of bit 7.

*Notes.*

- The wrap boundary is the only interesting corner, so the stimulus drives operand pairs whose sum lands near 255 far more often than uniform random operands would.

*Contracts.* 7 of 7 guarantees confirmed on 5 runs / 2500 samples.

*Assumptions - the invariants that make up A.*

| id | invariant | holds at | samples |
|---|---|---|---|
| A1 | `a <= 255 && b <= 255` | 100.0% | 2500 |
| A2 | `cin <= 1` | 100.0% | 2500 |

- **A1** the environment drives 8-bit operands.
- **A2** the carry in is a single bit.

*Guarantees - each one a whole template instance.*

| id | kind | template | guarantee | A | support (mine / held-out / stress) | status |
|---|---|---|---|---|---|---|
| ADD1 | result | G1 | `G((a + b + cin <= 255) |-> (sum == a + b + cin))` | A1, A2 | 1183 / 729 / 495 | confirmed |
| ADD2 | result | G1 | `G((a + b + cin <= 255) |-> (cout == 0))` | A1, A2 | 1183 / 729 / 495 | confirmed |
| ADD3 | result | G1 | `G((a + b + cin >= 256) |-> (cout == 1))` | A1, A2 | 1317 / 771 / 505 | confirmed |
| ADD4 | result | G1 | `G((a + b + cin >= 256) |-> (sum == a + b + cin - 256))` | A1, A2 | 1317 / 771 / 505 | confirmed |
| ADD5 | result | G4 | `G((a == 0 && b == 0) |-> (sum == cin))` | A1, A2 | 13 / 7 / 5 | confirmed |
| ADD6 | result | G4 | `G((a <= 127 && b <= 127) |-> (cout == 0))` | A1, A2 | 943 / 585 / 384 | confirmed |
| ADD7 | result | G4 | `G((b == 0 && cin == 0) |-> (sum == a))` | A1, A2 | 43 / 18 / 21 | confirmed |

- **ADD1** without overflow the sum is exact.
- **ADD2** without overflow no carry leaves the adder.
- **ADD3** on overflow the carry is raised.
- **ADD4** on overflow the sum is the low 8 bits.
- **ADD5** with both operands zero the sum is the carry in.
- **ADD6** two 7-bit operands plus a carry cannot overflow 8 bits.
- **ADD7** adding zero is the identity.

*Propositions this design's contracts need declared* (they end up in `config.json` under `extra_props`):

- `a + b + cin <= 255` (`loc="a,dt"`)
- `sum == a + b + cin` (`loc="c"`)
- `a + b + cin >= 256` (`loc="a,dt"`)
- `sum == a + b + cin - 256` (`loc="c"`)
- `sum == cin` (`loc="c"`)
- `sum == a` (`loc="c"`)

## ibex_csr

Ibex control/status register primitive, 32 bit, instantiated with ShadowCopy = 0.

*Interface.* inputs rst_ni, wr_en_i, wr_data_i; outputs rd_data_o, rd_error_o.

*Behaviour.*

- A write is captured on the clock edge and appears on the read port in the next cycle.
- Asynchronous active-low reset drives the register to its reset value (0 here).
- With ShadowCopy disabled rd_error_o is tied low; the shadow-copy comparison is not instantiated.

*Notes.*

- 'The register holds its value when wr_en_i is low' is NOT expressible in the tool's grammar: it relates the register to its own earlier value, and the grammar has no past operator. CSR7 states the reachable part of it (the value after reset).
- wr_data_i is kept inside 24 bits so every written value is exactly representable when the trace is read back as a number.

*Contracts.* 6 of 6 guarantees confirmed on 5 runs / 2500 samples.

*Assumptions - the invariants that make up A.*

| id | invariant | holds at | samples |
|---|---|---|---|
| A1 | `rst_n == 1` | 93.6% | 2500 |
| A2 | `wr_data_i <= 16777215` | 100.0% | 2500 |

- **A1** the environment holds reset deasserted.
- **A2** the environment writes values inside 24 bits.

*Guarantees - each one a whole template instance.*

| id | kind | template | guarantee | A | support (mine / held-out / stress) | status |
|---|---|---|---|---|---|---|
| CSR1 | reset | G1 | `G((rst_n == 0) |-> (rd_data_o == 0))` | - | 159 / 71 / 62 | confirmed |
| CSR2 | protocol | G2 | `G((wr_en_i == 1 && wr_data_i == 0) |=> (rd_data_o == 0))` | A1, A2 | 5 / 3 / 2 | confirmed |
| CSR3 | protocol | G2 | `G((wr_en_i == 1 && wr_data_i == 16777215) |=> (rd_data_o == 16777215))` | A1, A2 | 10 / 6 / 4 | confirmed |
| CSR4 | protocol | G2 | `G((wr_en_i == 1 && wr_data_i == 1) |=> (rd_data_o == 1))` | A1, A2 | 5 / 3 / 2 | confirmed |
| CSR5 | result | G1 | `G((rst_n == 1) |-> (rd_error_o == 0))` | A1 | 2341 / 1429 / 938 | confirmed |
| CSR6 | protocol | G2 | `G((wr_en_i == 1) |=> (rd_data_o <= 16777215))` | A1, A2 | 988 / 561 / 446 | confirmed |

- **CSR1** asynchronous reset drives the register to its reset value in the same cycle.
- **CSR2** a write of zero is visible on the read port one cycle later.
- **CSR3** a write of all-ones is visible one cycle later.
- **CSR4** a write of one is visible one cycle later.
- **CSR5** with ShadowCopy disabled the error output is tied low.
- **CSR6** the read port never leaves the range the environment writes.

*Propositions this design's contracts need declared* (they end up in `config.json` under `extra_props`):

- `rd_data_o == 16777215` (`loc="c"`)
- `rd_data_o <= 16777215` (`loc="c"`)

*Not producible by any template:*

- **CSR-PAST** `wr_en_i == 1` -> `rd_data_o == $past(wr_data_i)`. HARM's proposition grammar has $past/$stable/$rose/$fell, so HARM CAN mine this. The flow's own evaluator cannot parse it, so it cannot be validated or matched here. Adding $past to ace/formula.py would make the general write-through contract minable instead of the three value-specific ones (CSR2-CSR4).
- **CSR-HOLD** `wr_en_i == 0` -> `$stable(rd_data_o)`. same reason: needs $stable in the flow's evaluator.
- **CSR7** `A: ` -> `G(rst_n == 0 |=> rd_data_o == 0)`. the guarantee is owed only if the environment issues no write in the cycle reset is released. That is an obligation over the NEXT sample, and an assumption made of invariants cannot constrain the future: an invariant restricts the sample it is evaluated at. CSR1 covers the same-cycle part of the reset behaviour.

## accumulator

Four-sample accumulator behind a valid/valid interface.

*Interface.* inputs rst_n, valid_in, data_in (8 bit); outputs valid_out, data_out (10 bit).

*Behaviour.*

- ready_add = !valid_out | valid_in, so the design accumulates on EVERY cycle in which valid_out is low, whether or not valid_in is asserted. valid_in is only required in the cycle right after a pulse.
- valid_out is a one-cycle pulse, raised when the internal 2-bit counter reaches 3, and the counter restarts at the same edge.
- Asynchronous active-low reset clears the accumulator, the counter and the flag.

*Notes.*

- The quirk in the first bullet is the most interesting thing in this design and the stimulus targets it directly: bursts with valid_in held high, bursts with valid_in alternating, and long gaps.
- The pulse phase is set by the counter, not by the number of accepted samples, so no contract can place the pulse at a fixed offset from a sample. ACC6 and ACC7 are bounded-response contracts instead.
- data_in is held constant for a whole burst so that input/output value relations are expressible without a past operator.

*Contracts.* 6 of 6 guarantees confirmed on 5 runs / 4000 samples.

*Assumptions - the invariants that make up A.*

| id | invariant | holds at | samples |
|---|---|---|---|
| A1 | `rst_n == 1` | 96.1% | 4000 |
| A2 | `valid_in == 1` | 62.4% | 4000 |
| A3 | `data_in <= 255` | 100.0% | 4000 |

- **A1** the environment holds reset deasserted.
- **A2** the environment keeps offering samples. The design only advances its counter while valid_out is low, so a sample offered and then withdrawn stalls the accumulation: the bounded-response guarantees are owed only under a continuous stream.
- **A3** samples are 8 bits wide.

*Guarantees - each one a whole template instance.*

| id | kind | template | guarantee | A | support (mine / held-out / stress) | status |
|---|---|---|---|---|---|---|
| ACC1 | reset | G1 | `G((rst_n == 0) |-> (valid_out == 0))` | - | 155 / 81 / 86 | confirmed |
| ACC2 | reset | G1 | `G((rst_n == 0) |-> (data_out == 0))` | - | 155 / 81 / 86 | confirmed |
| ACC3 | protocol | G2 | `G((valid_out == 1) |=> (valid_out == 0))` | A1 | 831 / 509 / 313 | confirmed |
| ACC4 | protocol | G4 | `G((valid_out == 1 && valid_in == 0) |=> (valid_out == 0))` | A1 | 253 / 160 / 97 | confirmed |
| ACC5 | result | G4 | `G((valid_out == 1 && valid_in == 1) |=> (data_out <= 255))` | A1, A3 | 578 / 349 / 216 | confirmed |
| ACC6 | result | G1 | `G((rst_n == 1) |-> (data_out <= 1020))` | A1 | 3845 / 2319 / 1514 | confirmed |

- **ACC1** asynchronous reset clears the valid flag in the same cycle.
- **ACC2** asynchronous reset clears the accumulator in the same cycle.
- **ACC3** valid_out is a one-cycle pulse: the counter restarts as soon as it fires.
- **ACC4** after a pulse the design needs valid_in to make progress (ready_add = !valid_out | valid_in).
- **ACC5** the sample accepted right after a pulse starts a new accumulation, so the total is one sample wide.
- **ACC6** four 8-bit samples cannot exceed the width of the output register.

*Propositions this design's contracts need declared* (they end up in `config.json` under `extra_props`):

- `data_out <= 255` (`loc="c"`)
- `data_out <= 1020` (`loc="c"`)

*Not producible by any template:*

- **ACC-RESETDISJ** `valid_in == 1` -> `##[1:4] valid_out == 1 || ##[1:4] rst_n == 0`. a disjunctive consequent is not produced by any template; the earlier version of ACC7 needed it because a reset inside the window discharges the obligation. If the nominal traces keep resets outside the window this is unnecessary.
- **ACC7** `A: rst_n == 1, valid_in == 1` -> `G((valid_out == 0 && valid_in == 1) |-> ##[1:H] valid_out == 1)`. a bounded-response guarantee whose window can lose the assumption. The invariants rst_n == 1 and valid_in == 1 hold at the sample the guarantee fires on, but the environment may drop either one inside the five-cycle window, and the accumulator then stalls. Constraining the whole window needs a temporal assumption, which is not an invariant.
- **ACC8** `A: rst_n == 1, valid_in == 1` -> `G(valid_in == 1 |-> ##[1:H] valid_out == 1)`. same as ACC7, without the valid_out == 0 precondition.

## multi_16bit

16x16 shift-add multiplier, 17-cycle operation.

*Interface.* inputs rst_n, start, ain, bin (16 bit); outputs yout (32 bit), done.

*Behaviour.*

- start must be held for the whole operation: the shift counter advances while start is high and is cleared when it is low.
- done pulses for exactly one cycle, 17 cycles after the request (raised at count 16, cleared at 17).
- The product register is never cleared except by reset.

*Notes.*

- Because the product register is not cleared, a second operation without an intervening reset accumulates on top of the first. Every operation in the benchmark is therefore preceded by a reset, which is what makes MUL4 (yout == ain * bin) true. This is a property of the RTL, not a convenience of the benchmark.
- Each operation is preceded by a reset - the obligation A-MUL-HOLD-START cannot express it, because it looks backwards in time, and the benchmark environment satisfies it by construction. Resets that are NOT followed by an operation are also generated, otherwise every reset in the trace would be followed by a completion and 'rst_n == 0' would look like a perfect explanation of the done event.
- MUL9 states that no pulse can appear while start is low. It holds on these traces, but note the RTL raises done from the counter value alone, so dropping start in the exact cycle the counter reads 16 is a corner the benchmark does not reach.

*Contracts.* 9 of 9 guarantees confirmed on 5 runs / 5000 samples.

*Assumptions - the invariants that make up A.*

| id | invariant | holds at | samples |
|---|---|---|---|
| A1 | `rst_n == 1` | 92.7% | 5000 |
| A2 | `start == 1` | 63.1% | 5000 |
| A3 | `ain <= 65535 && bin <= 65535` | 100.0% | 5000 |

- **A1** the environment holds reset deasserted.
- **A2** the environment holds the request asserted. The shift counter only advances while start is high, so an operation that loses start never completes.
- **A3** the environment drives 16-bit operands.

*Guarantees - each one a whole template instance.*

| id | kind | template | guarantee | A | support (mine / held-out / stress) | status |
|---|---|---|---|---|---|---|
| MUL1 | reset | G1 | `G((rst_n == 0) |-> (done == 0))` | - | 363 / 219 / 160 | confirmed |
| MUL2 | reset | G1 | `G((rst_n == 0) |-> (yout == 0))` | - | 363 / 219 / 160 | confirmed |
| MUL3 | protocol | G2 | `G((done == 1) |=> (done == 0))` | A1 | 157 / 96 / 58 | confirmed |
| MUL5 | result | G1 | `G((done == 1) |-> (yout == ain * bin))` | A1, A3 | 157 / 96 / 58 | confirmed |
| MUL6 | result | G4 | `G((done == 1 && ain == 0) |-> (yout == 0))` | A1 | 10 / 6 / 4 | confirmed |
| MUL7 | result | G4 | `G((done == 1 && bin == 0) |-> (yout == 0))` | A1 | 10 / 6 / 4 | confirmed |
| MUL8 | result | G4 | `G((done == 1 && ain == 1) |-> (yout == bin))` | A1 | 10 / 6 / 4 | confirmed |
| MUL9 | result | G1 | `G((done == 1) |-> (yout <= 4294836225))` | A1, A3 | 157 / 96 / 58 | confirmed |
| MUL10 | protocol | G2 | `G((start == 0) |=> (done == 0))` | A1 | 1481 / 858 / 724 | confirmed |

- **MUL1** reset clears the done flag.
- **MUL2** reset clears the product register.
- **MUL3** done is a one-cycle pulse (raised at count 16, cleared at 17).
- **MUL5** at the pulse the product register holds the product of the held operands.
- **MUL6** zero multiplicand.
- **MUL7** zero multiplier.
- **MUL8** unit multiplicand is the identity.
- **MUL9** the product of two 16-bit operands cannot exceed 65535 squared.
- **MUL10** with start low the counter is held at zero, so no pulse can be produced.

*Propositions this design's contracts need declared* (they end up in `config.json` under `extra_props`):

- `yout == ain * bin` (`loc="c"`)
- `yout == bin` (`loc="c"`)
- `yout <= 4294836225` (`loc="c"`)

*Not producible by any template:*

- **MUL-EARLY** `(start == 0) ##1 (start == 1) ##1 ... x17` -> `done == 0`. 'done is not raised early' needs a 17-cycle sequence antecedent. HARM's decision-tree template builds multi-cycle antecedents, but not to that depth, and the exact-latency form is outside every fixed template.
- **MUL4** `A: rst_n == 1, start == 1` -> `G(rst_n == 1 |-> ##[1:H] done == 1)`. a bounded-response guarantee whose window can lose the assumption. Both invariants hold at the sample the guarantee fires on, but start drops when the operation ends, so the 20-cycle window runs into idle samples and no pulse arrives. Constraining the window needs a temporal assumption; an invariant only restricts the sample it is evaluated at.

## sqrt

Newton-Raphson integer square root, negative-edge clocked, 10 iterations.

*Interface.* inputs rst, start, in (signed 33 bit); outputs out (33 bit), error, done.

*Behaviour.*

- A request latches the operand; done rises 12 cycles later and stays high until the next request.
- An operand with bit 31 set short-circuits in one cycle to error = 1, done = 1, out = 0.
- Asynchronous reset clears the result and both flags.

*Notes.*

- The design tests bit 31 of a 33-bit signed operand, not its sign. Every strictly negative value has bit 31 set, but so does every positive value at or above 2^31, and those are rejected too. SQ3 states this explicitly; it is a property of the RTL that the documented interface does not have.
- The design drives its own input port back to zero after latching the operand, so a black-box observer cannot see the operand at the time the result appears. A contract of the form out == sqrt(operand) is therefore NOT minable from these traces. The value contracts (SQ5-SQ8) constrain the operand to a range in the assumption and state the corresponding result range in the guarantee, which is expressible.
- Ten iterations from an initial guess of 1 do not converge for large operands: the result for 2147483647 comes out as 2097492 rather than 46340. SQ8 is bounded to operands below 1000 for that reason, and the non-convergence is why the benchmark should not be given a sqrt-exactness reference contract.
- done is a level, not a pulse: it stays high until the next request. That inflates the occurrence count of the 'done == 1' event (about a third of all samples) and makes the extracted regions large. 'error == 1' behaves the same way.

*Contracts.* 13 of 13 guarantees confirmed on 5 runs / 5000 samples.

*Assumptions - the invariants that make up A.*

| id | invariant | holds at | samples |
|---|---|---|---|
| A1 | `rst == 0` | 99.3% | 5000 |
| A2 | `in >= 0` | 99.1% | 5000 |
| A3 | `in < 0` | 0.9% | 5000 |

- **A1** the environment holds reset deasserted.
- **A2** the environment supplies a non-negative operand. This is the documented assumption of the square root IP; the guarantees for the rejected path are claimed under A3 instead.
- **A3** the complementary environment, used by the error-path guarantees.

*Guarantees - each one a whole template instance.*

| id | kind | template | guarantee | A | support (mine / held-out / stress) | status |
|---|---|---|---|---|---|---|
| SQ1 | reset | G1 | `G((rst == 1) |-> (done == 0))` | - | 33 / 12 / 24 | confirmed |
| SQ2 | reset | G1 | `G((rst == 1) |-> (error == 0))` | - | 33 / 12 / 24 | confirmed |
| SQ3 | reset | G1 | `G((rst == 1) |-> (out == 0))` | - | 33 / 12 / 24 | confirmed |
| SQ4 | protocol | G4 | `G((start == 1 && in < 0) |=> (error == 1))` | A3 | 46 / 33 / 19 | confirmed |
| SQ5 | protocol | G4 | `G((start == 1 && in < 0) |=> (done == 1))` | A3 | 46 / 33 / 19 | confirmed |
| SQ6 | protocol | G4 | `G((start == 1 && in >= 2147483648) |=> (error == 1))` | A1 | 35 / 25 / 18 | confirmed |
| SQ7 | protocol | G4 | `G((start == 1 && in >= 0) |-> (##[1:24] done == 1))` | A1, A2 | 280 / 169 / 121 | confirmed |
| SQ8 | protocol | G4 | `G((start == 1 && in >= 0) |-> (##[1:24] error == 0))` | A1, A2 | 280 / 169 / 121 | confirmed |
| SQ9 | protocol | G4 | `G((start == 1 && in < 0) |-> (##[1:3] out == 0))` | A1, A3 | 46 / 33 / 19 | confirmed |
| SQ10 | protocol | G2 | `G((rst == 1) |=> (done == 0))` | - | 33 / 12 / 24 | confirmed |
| SQ11 | result | G4 | `G((start == 1 && in == 0) |-> ##[1:24] (done == 1 && out == 0))` | A1, A2 | 5 / 3 / 2 | confirmed |
| SQ12 | result | G4 | `G((start == 1 && in >= 4 && in <= 8) |-> ##[1:24] (done == 1 && out == 2))` | A1, A2 | 5 / 3 / 2 | confirmed |
| SQ13 | result | G4 | `G((start == 1 && in >= 1 && in <= 1000) |-> ##[1:24] (done == 1 && out <= 32))` | A1, A2 | 36 / 22 / 16 | confirmed |

- **SQ1** reset clears the done flag.
- **SQ2** reset clears the error flag.
- **SQ3** reset clears the result.
- **SQ4** a negative request is rejected in one cycle.
- **SQ5** a rejected request also raises done.
- **SQ6** the design tests bit 31, not the sign of the 33-bit operand, so a positive operand at or above 2^31 is rejected as well.
- **SQ7** a valid request completes within the horizon (12 cycles nominally). Holds on the nominal traces, where no request is restarted or reset mid-flight.
- **SQ8** a valid request does not raise the error flag.
- **SQ9** a rejected request never produces a result value.
- **SQ10** leaving reset leaves the design idle.
- **SQ11** square root of zero. The operand range is in the guarantee's antecedent; the quiet window is an assumption, which is what makes the result cycle well defined.
- **SQ12** integer square root of 4..8 is 2.
- **SQ13** for operands up to 1000 the ten Newton iterations have settled, so the result is bounded by 32.

*Propositions this design's contracts need declared* (they end up in `config.json` under `extra_props`):

- `in < 0` (`loc="a,dt"`)
- `in >= 2147483648` (`loc="a,dt"`)
- `in >= 0` (`loc="a,dt"`)
- `done == 1 && out == 0` (`loc="c"`)
- `in >= 4 && in <= 8` (`loc="a,dt"`)
- `done == 1 && out == 2` (`loc="c"`)
- `in >= 1 && in <= 1000` (`loc="a,dt"`)
- `done == 1 && out <= 32` (`loc="c"`)

*Not producible by any template:*

- **SQ-VALUE** `start == 1 && in >= 4 && in <= 8 ##1 (quiet x11)` -> `out == 2`. the design drives its own input port back to zero after latching, so the operand is invisible when the result appears. Pinning the result therefore needs both an operand range in the assumption AND a quiet-window sequence to fix the sampling cycle, and neither the range-plus-sequence antecedent nor the exact-latency form is in any template. This is the concrete case for the paper's 'mined guarantee weaker than the reference' classification.
- **SQ-EXACT** `start == 1` -> `out * out <= in && (out + 1) * (out + 1) > in`. same operand-invisibility problem, plus ten Newton iterations do not converge for large operands, so the exactness contract is not even true of the RTL.

## ibex_alu

Ibex RV32 ALU with the bit-manipulation extensions present (RV32B = RV32BFull), combinational.

*Interface.* inputs operator_i, operand_a_i, operand_b_i (plus multi-cycle ports tied off); outputs result_o, comparison_result_o, is_equal_result_o.

*Behaviour.*

- Only the RV32I core operations are driven, so the operator vocabulary in the trace stays small: ADD=0 SUB=1 XOR=2 OR=3 AND=4 SRA=8 SRL=9 SLL=10 LT=25 LTU=26 GE=27 GEU=28 EQ=29 NE=30 MIN=31 MINU=32 MAX=33 MAXU=34.
- The comparison outputs are produced by the comparison path, which is only meaningful while a comparison operation is selected.

*Notes.*

- operator_i is written to the trace as its integer encoding from ibex_pkg::alu_op_e, so contracts refer to operations by number.
- Contracts on arithmetic need a no-wrap assumption, because the tool's grammar computes over integers while the RTL wraps at 32 bits. Half of the random stimulus uses 16-bit operands, where a + b and a << 1 cannot wrap.
- ALU14 originally claimed is_equal_result_o == 1 whenever the operands are equal. It failed on 70 of 360 positions, which is correct behaviour: the claim only holds while a comparison operation is selected, and the contract now says so.

*Contracts.* 18 of 18 guarantees confirmed on 5 runs / 6000 samples.

*Assumptions - the invariants that make up A.*

| id | invariant | holds at | samples |
|---|---|---|---|
| A1 | `operator_i <= 34` | 100.0% | 6000 |
| A2 | `operand_a_i + operand_b_i <= 4294967295` | 97.0% | 6000 |

- **A1** the environment selects one of the RV32I operations the trace covers.
- **A2** the environment supplies operands whose sum does not wrap 32 bits. The tool computes over integers while the RTL wraps, so the arithmetic guarantees are owed only in this regime.

*Guarantees - each one a whole template instance.*

| id | kind | template | guarantee | A | support (mine / held-out / stress) | status |
|---|---|---|---|---|---|---|
| ALU1 | result | G4 | `G((operator_i == 0 && operand_a_i + operand_b_i <= 4294967295) |-> (result_o == operand_a_i + operand_b_i))` | A1, A2 | 323 / 184 / 128 | confirmed |
| ALU2 | result | G4 | `G((operator_i == 1 && operand_a_i >= operand_b_i) |-> (result_o == operand_a_i - operand_b_i))` | A1 | 247 / 126 / 111 | confirmed |
| ALU3 | result | G1 | `G((operator_i == 4) |-> (result_o <= operand_a_i))` | A1 | 347 / 194 / 125 | confirmed |
| ALU4 | result | G1 | `G((operator_i == 4) |-> (result_o <= operand_b_i))` | A1 | 347 / 194 / 125 | confirmed |
| ALU5 | result | G1 | `G((operator_i == 3) |-> (result_o >= operand_a_i))` | A1 | 354 / 198 / 126 | confirmed |
| ALU6 | result | G1 | `G((operator_i == 3) |-> (result_o >= operand_b_i))` | A1 | 354 / 198 / 126 | confirmed |
| ALU7 | result | G4 | `G((operator_i == 2 && operand_b_i == 0) |-> (result_o == operand_a_i))` | A1 | 18 / 14 / 7 | confirmed |
| ALU8 | result | G4 | `G((operator_i == 10 && operand_b_i == 1 && operand_a_i <= 2147483647) |-> (result_o == operand_a_i * 2))` | A1 | 17 / 9 / 6 | confirmed |
| ALU9 | result | G4 | `G((operator_i == 9 && operand_b_i == 1) |-> (result_o * 2 <= operand_a_i))` | A1 | 19 / 11 / 8 | confirmed |
| ALU10 | result | G4 | `G((operator_i == 9 && operand_b_i == 1) |-> (result_o * 2 + 1 >= operand_a_i))` | A1 | 19 / 11 / 8 | confirmed |
| ALU11 | result | G4 | `G((operator_i == 26 && operand_a_i < operand_b_i) |-> (comparison_result_o == 1))` | A1 | 73 / 40 / 19 | confirmed |
| ALU12 | result | G4 | `G((operator_i == 26 && operand_a_i >= operand_b_i) |-> (comparison_result_o == 0))` | A1 | 258 / 143 / 103 | confirmed |
| ALU13 | result | G4 | `G((operator_i == 29 && operand_a_i == operand_b_i) |-> (comparison_result_o == 1))` | A1 | 20 / 12 / 8 | confirmed |
| ALU14 | result | G4 | `G((operator_i == 29 && operand_a_i == operand_b_i) |-> (is_equal_result_o == 1))` | A1 | 20 / 12 / 8 | confirmed |
| ALU15 | result | G4 | `G((operator_i == 30 && operand_a_i == operand_b_i) |-> (comparison_result_o == 0))` | A1 | 20 / 12 / 8 | confirmed |
| ALU16 | result | G1 | `G((operator_i == 32) |-> (result_o <= operand_a_i))` | A1 | 329 / 221 / 131 | confirmed |
| ALU17 | result | G1 | `G((operator_i == 34) |-> (result_o >= operand_a_i))` | A1 | 353 / 211 / 149 | confirmed |
| ALU18 | result | G4 | `G((operator_i == 0 && operand_b_i == 0) |-> (result_o == operand_a_i))` | A1 | 21 / 12 / 8 | confirmed |

- **ALU1** ADD without a 32-bit wrap is exact.
- **ALU2** SUB without borrow is exact.
- **ALU3** AND cannot exceed the first operand.
- **ALU4** AND cannot exceed the second operand.
- **ALU5** OR is at least the first operand.
- **ALU6** OR is at least the second operand.
- **ALU7** XOR with zero is the identity.
- **ALU8** a left shift by one doubles, absent a wrap. The two-condition antecedent is one declared proposition, which HARM's proposition grammar allows.
- **ALU9** a logical right shift by one is a floored halving (lower bound).
- **ALU10** a logical right shift by one is a floored halving (upper bound).
- **ALU11** unsigned less-than holds.
- **ALU12** unsigned less-than fails.
- **ALU13** equality of identical operands.
- **ALU14** the equality output agrees while a comparison operation is selected.
- **ALU15** inequality of identical operands fails.
- **ALU16** unsigned minimum is a lower bound.
- **ALU17** unsigned maximum is an upper bound.
- **ALU18** adding zero is the identity.

*Propositions this design's contracts need declared* (they end up in `config.json` under `extra_props`):

- `operand_a_i + operand_b_i <= 4294967295` (`loc="a,dt"`)
- `result_o == operand_a_i + operand_b_i` (`loc="c"`)
- `operand_a_i >= operand_b_i` (`loc="a,dt"`)
- `result_o == operand_a_i - operand_b_i` (`loc="c"`)
- `result_o <= operand_a_i` (`loc="c"`)
- `result_o <= operand_b_i` (`loc="c"`)
- `result_o >= operand_a_i` (`loc="c"`)
- `result_o >= operand_b_i` (`loc="c"`)
- `result_o == operand_a_i` (`loc="c"`)
- `operand_b_i == 1 && operand_a_i <= 2147483647` (`loc="a,dt"`)
- `result_o == operand_a_i * 2` (`loc="c"`)
- `result_o * 2 <= operand_a_i` (`loc="c"`)
- `result_o * 2 + 1 >= operand_a_i` (`loc="c"`)
- `operand_a_i < operand_b_i` (`loc="a,dt"`)
- `operand_a_i == operand_b_i` (`loc="a,dt"`)

*Not producible by any template:*

- **ALU-EQ-ALL** `operand_a_i == operand_b_i` -> `is_equal_result_o == 1`. true only while a comparison operation is selected, so it needs the operator range in the antecedent as well; kept as ALU14 with the operator pinned instead.

## ibex_multdiv_fast

Ibex fast multiplier and long divider (RV32M = RV32MFast).

*Interface.* inputs rst_ni, mult_en_i, div_en_i, mult_sel_i, div_sel_i, operator_i, signed_mode_i, op_a_i, op_b_i; outputs multdiv_result_o, valid_o. MULL=0 MULH=1 DIV=2 REM=3.

*Behaviour.*

- Measured latencies from the request: MULL 2 cycles, MULH 3, DIV and REM 36, and 1 cycle when the divisor is zero.
- valid_o is a one-cycle pulse. Division by zero returns all-ones and remainder by zero returns the numerator, as RISC-V specifies.
- Only unsigned operations are driven (signed_mode_i = 0).

*Notes.*

- The DUT is not self-contained: it needs an external adder on its ALU operand outputs and an external register for its intermediate values. Both are wired in the testbench as ibex_ex_block does, and neither appears in the trace - they are internal to the composition, not part of the observable interface.
- The enable must be released exactly one cycle after the handshake. The FSM state register only advances while the operation is enabled, so dropping the enable during the valid cycle freezes the FSM in its finish state and valid_o stays asserted for ever; holding the enable one cycle longer makes the FSM leave idle again and re-run the operation. Getting this wrong smears one operation's result over everything that follows, and it is the single most important thing to know when driving this block.
- The bounded-response contracts are anchored on the RISING edge of the enable. Any cycle in which the enable is high would otherwise match, including the last cycle of a completed operation, whose result has already been delivered.

*Contracts.* 13 of 13 guarantees confirmed on 5 runs / 7500 samples.

*Assumptions - the invariants that make up A.*

| id | invariant | holds at | samples |
|---|---|---|---|
| A1 | `rst_n == 1` | 99.8% | 7500 |
| A2 | `op_b_i >= 1` | 96.4% | 7500 |
| A3 | `op_b_i == 0` | 3.6% | 7500 |
| A4 | `op_a_i * op_b_i <= 4294967295` | 97.3% | 7500 |

- **A1** the environment holds reset deasserted.
- **A2** the environment supplies a non-zero divisor; the divide-by-zero guarantees are claimed under A3 instead.
- **A3** the divide-by-zero environment.
- **A4** the environment supplies operands whose product fits in 32 bits.

*Guarantees - each one a whole template instance.*

| id | kind | template | guarantee | A | support (mine / held-out / stress) | status |
|---|---|---|---|---|---|---|
| MD1 | reset | G1 | `G((rst_n == 0) |-> (valid_o == 0))` | - | 15 / 9 / 10 | confirmed |
| MD2 | protocol | G5 | `G(((mult_en_i == 0) ##1 (mult_en_i == 1)) |-> (##[1:40] valid_o == 1))` | A1 | 140 / 104 / 58 | confirmed |
| MD3 | protocol | G5 | `G(((div_en_i == 0) ##1 (div_en_i == 1)) |-> (##[1:40] valid_o == 1))` | A1, A2 | 142 / 82 / 66 | confirmed |
| MD4 | protocol | G5 | `G(((div_en_i == 0) ##1 (rst_n == 1 && div_en_i == 1 && operator_i == 2 && op_b_i == 0)) |-> (##[1:40] (valid_o == 1 &...` | A1, A3 | 1 / 2 / 5 | confirmed |
| MD5 | protocol | G5 | `G(((div_en_i == 0) ##1 (rst_n == 1 && div_en_i == 1 && operator_i == 3 && op_b_i == 0)) |-> (##[1:40] (valid_o == 1 &...` | A1, A3 | 6 / 6 / 8 | confirmed |
| MD6 | result | G4 | `G((valid_o == 1 && mult_en_i == 1 && operator_i == 0) |-> (multdiv_result_o == op_a_i * op_b_i))` | A1, A4 | 123 / 87 / 43 | confirmed |
| MD7 | result | G4 | `G((valid_o == 1 && div_en_i == 1 && operator_i == 2 && op_b_i >= 1) |-> (multdiv_result_o * op_b_i <= op_a_i))` | A1, A2 | 98 / 55 / 44 | confirmed |
| MD8 | result | G4 | `G((valid_o == 1 && div_en_i == 1 && operator_i == 2 && op_b_i >= 1) |-> (multdiv_result_o * op_b_i + op_b_i > op_a_i))` | A1, A2 | 98 / 55 / 44 | confirmed |
| MD9 | result | G4 | `G((valid_o == 1 && div_en_i == 1 && operator_i == 3 && op_b_i >= 1) |-> (multdiv_result_o < op_b_i))` | A1 | 32 / 16 / 7 | confirmed |
| MD10 | protocol | G4 | `G((mult_en_i == 1 && op_b_i == 0) |-> (##[1:40] (valid_o == 1 && multdiv_result_o == 0)))` | A1 | 15 / 9 / 6 | confirmed |
| MD11 | protocol | G5 | `G(((div_en_i == 0) ##1 (rst_n == 1 && div_en_i == 1 && operator_i == 2 && op_a_i == 0 && op_b_i >= 1)) |-> (##[1:40] ...` | A1, A2 | 5 / 3 / 2 | confirmed |
| MD12 | result | G4 | `G((mult_en_i == 0 && div_en_i == 0) |-> (valid_o == 0))` | A1 | 2103 / 1403 / 862 | confirmed |
| MD13 | result | G4 | `G((valid_o == 1 && mult_en_i == 1 && op_a_i == 0) |-> (multdiv_result_o == 0))` | A1 | 10 / 6 / 4 | confirmed |

- **MD1** asynchronous reset withdraws the valid handshake.
- **MD2** a multiplication request completes. The two-cycle antecedent is a rising edge, which is the shape HARM's decision-tree template builds; any cycle with the enable high would also match the last cycle of a finished operation.
- **MD3** a division request completes within the long divider's latency.
- **MD4** RISC-V defines division by zero as all-ones. Anchored on the rising edge of the enable, like MD2 and MD3.
- **MD5** RISC-V defines remainder by zero as the numerator. The three-condition antecedent is one declared proposition. Anchored on the rising edge of the enable, like MD2 and MD3.
- **MD6** at the handshake the low multiplication result is the product.
- **MD7** the quotient never exceeds the numerator when multiplied back.
- **MD8** and one more divisor overshoots it: together the two bound the quotient exactly.
- **MD9** a remainder is strictly below the divisor.
- **MD10** multiplication by zero.
- **MD11** zero divided by a non-zero divisor. Anchored on the rising edge of the enable, like MD2 and MD3.
- **MD12** with neither enable asserted the unit does not signal a result.
- **MD13** a zero operand annihilates the product.

*Propositions this design's contracts need declared* (they end up in `config.json` under `extra_props`):

- `valid_o == 1 && multdiv_result_o == 4294967295` (`loc="c"`)
- `rst_n == 1 && div_en_i == 1 && operator_i == 2 && op_b_i == 0` (`loc="a,dt"`)
- `valid_o == 1 && multdiv_result_o == op_a_i` (`loc="c"`)
- `rst_n == 1 && div_en_i == 1 && operator_i == 3 && op_b_i == 0` (`loc="a,dt"`)
- `valid_o == 1 && mult_en_i == 1 && operator_i == 0` (`loc="a,dt"`)
- `multdiv_result_o == op_a_i * op_b_i` (`loc="c"`)
- `valid_o == 1 && div_en_i == 1 && operator_i == 2 && op_b_i >= 1` (`loc="a,dt"`)
- `multdiv_result_o * op_b_i <= op_a_i` (`loc="c"`)
- `multdiv_result_o * op_b_i + op_b_i > op_a_i` (`loc="c"`)
- `valid_o == 1 && div_en_i == 1 && operator_i == 3 && op_b_i >= 1` (`loc="a,dt"`)
- `multdiv_result_o < op_b_i` (`loc="c"`)
- `valid_o == 1 && multdiv_result_o == 0` (`loc="c"`)
- `rst_n == 1 && div_en_i == 1 && operator_i == 2 && op_a_i == 0 && op_b_i >= 1` (`loc="a,dt"`)
- `valid_o == 1 && mult_en_i == 1 && op_a_i == 0` (`loc="a,dt"`)

*Not producible by any template:*

- **MD-EXACT-LATENCY** `(mult_en_i == 0) ##1 (mult_en_i == 1)` -> `##2 valid_o == 1`. the exact latency (MULL 2, MULH 3, DIV 36, divide-by-zero 1) is not a template shape: every template with a delay uses a window. The windows in MD2-MD5 are the minable approximation.

## arbiter4

Four-requester round-robin arbiter, one grant per cycle, registered grants.

*Interface.* inputs rst_n, req0, req1, req2, req3; outputs gnt0, gnt1, gnt2, gnt3,
gnt_valid, gnt_id (2 bit).

*Behaviour.*

- The winner is the first requester at or after the priority pointer, wrapping. After
  granting requester i the pointer moves to i+1, so a held request cannot be starved.
- Grants are registered: the decision made from the requests of cycle k appears at the
  outputs of cycle k+1. Every response contract is therefore a `|=>` property rather than
  a combinational one.
- Synchronous active-low reset clears the pointer, the grant lines, the index and the flag.

*Notes.*

- The interface is deliberately flat - one bit per requester - because the trace format is
  one column per signal. That is what makes mutual exclusion expressible:
  `gnt0 + gnt1 + gnt2 + gnt3 == 1` is a sum over the grant bits, declared as one proposition.
- Bounded fairness (ARB15-ARB18) is the one contract family here that depends on an
  environment obligation no invariant can state: hold the request until it is granted. Four
  is the exact bound - the same contracts at `##[1:3]` fail. They hold with full support on
  the nominal corpus and are violated on the stress corpus, where a requester withdraws
  mid-wait, and that contrast is why they are in the set.
- A2 holds at half the samples because half the stimulus is idle, which is what keeps ARB5
  (no spurious grant) separable from the liveness contract.

*Contracts.* 18 of 18 guarantees confirmed on 5 runs / 5000 samples.

*Assumptions - the invariants that make up A.*

| id | invariant | holds at | samples |
|---|---|---|---|
| A1 | `rst_n == 1` | 96.6% | 5000 |
| A2 | `req0 + req1 + req2 + req3 >= 1` | 50.8% | 5000 |

- **A1** the environment holds reset deasserted while it arbitrates.
- **A2** at least one requester is asking. The grant-liveness guarantee is about that
  environment; when nobody asks the arbiter must stay quiet, which is a separate contract
  with no assumption.

*Guarantees - each one a whole template instance.*

| id | kind | template | guarantee | A | support (mine / held-out / stress) | status |
|---|---|---|---|---|---|---|
| ARB1 | reset | G2 | `G((rst_n == 0) |=> (gnt_valid == 0))` | - | 167 / 111 / 131 | confirmed |
| ARB2 | reset | G2 | `G((rst_n == 0) |=> (gnt_id == 0))` | - | 167 / 111 / 131 | confirmed |
| ARB3 | safety | G1 | `G((gnt_valid == 1) |-> (gnt0 + gnt1 + gnt2 + gnt3 == 1))` | - | 2540 / 1483 / 1080 | confirmed |
| ARB4 | safety | G1 | `G((gnt_valid == 0) |-> (gnt0 + gnt1 + gnt2 + gnt3 == 0))` | - | 2460 / 1517 / 920 | confirmed |
| ARB5 | safety | G2 | `G((req0 + req1 + req2 + req3 == 0) |=> (gnt_valid == 0))` | - | 2455 / 1514 / 918 | confirmed |
| ARB6 | liveness | G4 | `G((rst_n == 1 && req0 + req1 + req2 + req3 >= 1) |=> (gnt_valid == 1))` | A1, A2 | 2540 / 1483 / 1080 | confirmed |
| ARB7 | encoding | G1 | `G((gnt0 == 1) |-> (gnt_id == 0))` | - | 641 / 406 / 295 | confirmed |
| ARB8 | encoding | G1 | `G((gnt1 == 1) |-> (gnt_id == 1))` | - | 630 / 314 / 280 | confirmed |
| ARB9 | encoding | G1 | `G((gnt2 == 1) |-> (gnt_id == 2))` | - | 618 / 377 / 275 | confirmed |
| ARB10 | encoding | G1 | `G((gnt3 == 1) |-> (gnt_id == 3))` | - | 651 / 386 / 230 | confirmed |
| ARB11 | priority | G4 | `G((req0 + req1 + req2 + req3 == 1 && req0 == 1) |=> (gnt0 == 1))` | A1 | 240 / 175 / 76 | confirmed |
| ARB12 | priority | G4 | `G((req0 + req1 + req2 + req3 == 1 && req1 == 1) |=> (gnt1 == 1))` | A1 | 231 / 111 / 76 | confirmed |
| ARB13 | priority | G4 | `G((req0 + req1 + req2 + req3 == 1 && req2 == 1) |=> (gnt2 == 1))` | A1 | 258 / 168 / 80 | confirmed |
| ARB14 | priority | G4 | `G((req0 + req1 + req2 + req3 == 1 && req3 == 1) |=> (gnt3 == 1))` | A1 | 268 / 177 / 49 | confirmed |
| ARB15 | fairness | G4 | `G((req0 == 1 && gnt0 == 0) |-> ##[1:4] (gnt0 == 1))` | A1 | 723 / 438 / 684 | confirmed |
| ARB16 | fairness | G4 | `G((req1 == 1 && gnt1 == 0) |-> ##[1:4] (gnt1 == 1))` | A1 | 797 / 370 / 722 | confirmed |
| ARB17 | fairness | G4 | `G((req2 == 1 && gnt2 == 0) |-> ##[1:4] (gnt2 == 1))` | A1 | 787 / 453 / 703 | confirmed |
| ARB18 | fairness | G4 | `G((req3 == 1 && gnt3 == 0) |-> ##[1:4] (gnt3 == 1))` | A1 | 777 / 448 / 679 | confirmed |

- **ARB1** reset clears the grant register.
- **ARB2** reset returns the granted index to zero.
- **ARB3** mutual exclusion: a valid grant is a grant to exactly one requester. The
  canonical arbiter property, expressible only because the grant bits can be summed.
- **ARB4** no grant line is raised without the validity flag.
- **ARB5** no spurious grant: with nobody asking, the next cycle carries no grant.
- **ARB6** grant liveness at one-cycle granularity: any request is answered in the next
  cycle, because the arbiter is never idle while someone asks.
- **ARB7-ARB10** the index agrees with the grant lines.
- **ARB11-ARB14** a sole requester is served immediately, whatever the rotation pointer is.
- **ARB15-ARB18** bounded fairness: a request that has not just been served is served
  within four cycles, because priority rotates past whoever was served. These are the four
  clauses that break on the stress corpus (170, 193, 162 and 220 violations there, none on
  the nominal or held-out corpora).

*Propositions this design's contracts need declared* (they end up in `config.json` under `extra_props`):

- `gnt0 + gnt1 + gnt2 + gnt3 == 1` (`loc="c"`)
- `gnt0 + gnt1 + gnt2 + gnt3 == 0` (`loc="c"`)
- `req0 + req1 + req2 + req3 == 0` (`loc="a,dt"`)
- `req0 + req1 + req2 + req3 >= 1` (`loc="a,dt"`)
- `req0 + req1 + req2 + req3 == 1` (`loc="a,dt"`)

*Not producible by any template:*

- **ARB-ROTATION** `A: rst_n == 1` -> `$past(gnt_id) == i |-> the next grant goes to the first requester at or after i+1`. round-robin order is a relation between consecutive grants, so it needs a past operator over the granted index. The evaluator has no `$past` (HARM's proposition grammar does), and the rotation pointer is not an observable output.
- **ARB-NO-CONSECUTIVE** `A: rst_n == 1 && two requesters asking` -> `no requester is granted twice in a row while another is asking`. same past-operator problem: the property compares a grant against the previous grant. It is the fairness property an engineer would write, and the bounded-window form (ARB15-ARB18) is what the template family can express instead.
- **ARB-STARVATION** `A: rst_n == 1 && req_i held until granted` -> `F(gnt_i == 1)`. unbounded liveness is not a finite-trace property and no template in the family is unbounded. The four-cycle window is the finite-trace surrogate, and it is only true because the rotation makes the bound exist.
- **ARB-HOLD** `A: rst_n == 1` -> `G(gnt_i == 1 |-> $past(req_i) == 1)`. a grant answers the PREVIOUS cycle's request, and the requester drops its request as soon as it is served, so 'a grant only goes to someone asking' is false in the same-sample form and needs `$past`. ARB5 is the in-grammar statement of the same idea: with nobody asking, nobody is granted.

## fifo_sync

Synchronous queue, depth 8, width 8, first-word-fall-through, self-protecting.

*Interface.* inputs rst_n, wr_en, rd_en, din (8 bit); outputs dout (8 bit), full, empty,
count (4 bit).

*Behaviour.*

- `count` is the occupancy; `full` is `count == 8` and `empty` is `count == 0`, both
  combinational, so the flags and the count are always consistent within a row.
- First-word-fall-through: `dout` is a combinational read of the entry at the read pointer,
  so the value written into an empty queue is visible at the output on the next cycle.
- The queue protects itself: a write while full is ignored, a read while empty is ignored.
- Synchronous active-low reset empties the queue.

*Notes.*

- Self-protection is a guarantee of the design, not an obligation on the environment, so
  the stress corpus can break the protocol without breaking the queue. The interesting
  contracts are therefore about the flags and the occupancy rather than about data loss.
- FIFO10 is an unconditioned clause, `G(count <= 8)`, recorded under G1: the propositional
  half of the contract language rather than an implication. It is the one reference
  guarantee in the benchmark with no antecedent.
- FIFO16 pins the increment relation at a single occupancy because the general form needs a
  past operator, and FIFO18 conjoins four propositions in its antecedent. Both mark where
  the template family runs out; the config sets `max_antecedent_props: 3`, which reaches
  the first family and not the second.
- FIFO19 is the data-integrity contract, and it holds only because the environment keeps
  `din` for one more cycle - an obligation no invariant can state, so it breaks on the
  stress corpus where `din` changes every cycle.

*Contracts.* 19 of 19 guarantees confirmed on 5 runs / 6000 samples.

*Assumptions - the invariants that make up A.*

| id | invariant | holds at | samples |
|---|---|---|---|
| A1 | `rst_n == 1` | 93.7% | 6000 |
| A2 | `din <= 255` | 100.0% | 6000 |

- **A1** the environment holds reset deasserted. Every occupancy contract needs it: reset
  empties the queue, so 'while full and not reading, the queue stays full' is false across
  a reset and true under this assumption.
- **A2** the environment supplies an 8-bit payload. Trivially true of the port width, and
  it is the assumption the data-integrity contract is stated under.

*Guarantees - each one a whole template instance.*

| id | kind | template | guarantee | A | support (mine / held-out / stress) | status |
|---|---|---|---|---|---|---|
| FIFO1 | reset | G2 | `G((rst_n == 0) |=> (count == 0))` | - | 377 / 201 / 61 | confirmed |
| FIFO2 | reset | G2 | `G((rst_n == 0) |=> (empty == 1))` | - | 377 / 201 / 61 | confirmed |
| FIFO3 | reset | G2 | `G((rst_n == 0) |=> (full == 0))` | - | 377 / 201 / 61 | confirmed |
| FIFO4 | flag | G1 | `G((count == 0) |-> (empty == 1))` | - | 2263 / 1171 / 682 | confirmed |
| FIFO5 | flag | G1 | `G((empty == 1) |-> (count == 0))` | - | 2263 / 1171 / 682 | confirmed |
| FIFO6 | flag | G1 | `G((count == 8) |-> (full == 1))` | - | 182 / 165 / 530 | confirmed |
| FIFO7 | flag | G1 | `G((full == 1) |-> (count == 8))` | - | 182 / 165 / 530 | confirmed |
| FIFO8 | flag | G1 | `G((count >= 1) |-> (empty == 0))` | - | 3737 / 2429 / 1718 | confirmed |
| FIFO9 | flag | G1 | `G((count <= 7) |-> (full == 0))` | - | 5818 / 3435 / 1870 | confirmed |
| FIFO10 | bound | G1 | `G(count <= 8)` | - | 6000 / 3600 / 2400 | confirmed |
| FIFO11 | occupancy | G4 | `G((empty == 1 && wr_en == 1) |=> (count == 1))` | A1 | 242 / 131 / 119 | confirmed |
| FIFO12 | occupancy | G4 | `G((empty == 1 && wr_en == 1) |=> (empty == 0))` | A1 | 242 / 131 / 119 | confirmed |
| FIFO13 | occupancy | G4 | `G((empty == 1 && wr_en == 0) |=> (empty == 1))` | A1 | 1771 / 916 / 562 | confirmed |
| FIFO14 | occupancy | G4 | `G((full == 1 && rd_en == 0) |=> (full == 1))` | A1 | 143 / 131 / 456 | confirmed |
| FIFO15 | occupancy | G4 | `G((count == 7 && wr_en == 1 && rd_en == 0) |=> (full == 1))` | A1 | 39 / 34 / 84 | confirmed |
| FIFO16 | occupancy | G4 | `G((count == 4 && wr_en == 1 && rd_en == 0) |=> (count == 5))` | A1 | 79 / 62 / 48 | confirmed |
| FIFO17 | occupancy | G4 | `G((count == 1 && rd_en == 1 && wr_en == 0) |=> (empty == 1))` | A1 | 110 / 51 / 79 | confirmed |
| FIFO18 | occupancy | G4 | `G((wr_en == 1 && rd_en == 1 && full == 0 && empty == 0) |=> (count >= 1))` | A1 | 147 / 85 / 325 | confirmed |
| FIFO19 | data | G4 | `G((empty == 1 && wr_en == 1) |=> (dout == din))` | A1, A2 | 242 / 131 / 119 | confirmed |

- **FIFO1-FIFO3** reset empties the queue and sets the flags to match.
- **FIFO4-FIFO7** flag correctness in both directions: the flag is raised exactly at the
  occupancy that defines it.
- **FIFO8** a non-empty queue does not report empty.
- **FIFO9** a queue below capacity does not report full.
- **FIFO10** the occupancy never exceeds the depth.
- **FIFO11** a write into an empty queue leaves exactly one entry, whatever rd_en does (a
  read while empty is ignored).
- **FIFO12** the empty flag drops after a write into an empty queue.
- **FIFO13** no underflow effect: without a write the queue stays empty, so a read while
  empty cannot make the occupancy negative.
- **FIFO14** no overflow effect: without a read the queue stays full, so a write while full
  cannot grow the occupancy past the depth.
- **FIFO15** the last write fills the queue.
- **FIFO16** a write with no read increments the occupancy, stated at one occupancy because
  the general form needs a past operator.
- **FIFO17** the last read empties the queue.
- **FIFO18** a simultaneous read and write leaves the queue non-empty: the occupancy does
  not move. Four propositions in the antecedent, so it is out of reach of a two-slot
  decision tree and in reach of a three-slot one.
- **FIFO19** data integrity, first-word-fall-through: the value written into an empty queue
  appears at the output on the next cycle. 92 violations on the stress corpus, none on the
  nominal or held-out ones.

*Propositions this design's contracts need declared* (they end up in `config.json` under `extra_props`):

- `dout == din` (`loc="c"`)

*Not producible by any template:*

- **FIFO-ORDER** `A: rst_n == 1 && the environment respects the flags` -> `the k-th value read equals the k-th value written`. first-in-first-out order relates a read to a write that happened an unbounded number of cycles earlier. No template reaches back that far and no past operator exists in the evaluator; FIFO19 is the one-entry case, which is the deepest form the language can state.
- **FIFO-INCREMENT** `A: rst_n == 1` -> `G(wr_en && !rd_en && !full |=> count == $past(count) + 1)`. the general occupancy relation needs `$past`. FIFO15-FIFO17 pin it at individual occupancies instead, which is what a value-equality vocabulary can express.
- **FIFO-PROTECTION** `A: none` -> `G(full && wr_en && !rd_en |=> count == 8)` and `G(empty && rd_en && !wr_en |=> count == 0)`. these are true of the RTL and expressible in the grammar, but the nominal environment never writes into a full queue or reads an empty one, so they have zero support on the mining corpus and cannot be confirmed there. They hold with support on the STRESS corpus, which is the one place the reference set is deliberately not validated - a benchmark gap of exactly the kind the CSR error flag has.

## apb_slave

APB3 register file: four 8-bit registers, one of them slow, and an error response for
addresses outside the map.

*Interface.* inputs presetn, psel, penable, pwrite, paddr (3 bit), pwdata (8 bit); outputs
prdata (8 bit), pready, pslverr.

*Behaviour.*

- Addresses 0..2 are fast registers: the access phase completes in the cycle after it is
  entered. Address 3 is the slow register: two wait states. Addresses 4..7 are unmapped and
  are answered immediately with pslverr raised.
- The responses are registered, so an access phase entered in cycle k is answered in cycle
  k+1, or k+3 for the slow register.
- Synchronous active-low reset clears the response, the error flag, the read data register
  and the register file.

*Notes.*

- Keying the latency contracts on the SETUP phase (`psel && !penable`) rather than the
  access phase is what turns a wait-state behaviour into a fixed-delay contract: the access
  phase is held until pready, so from its last cycle the delay is one and from its first it
  is the full latency, while the setup phase occurs exactly once per transfer.
- A combinational pready would make all of these same-cycle relations and hide the
  wait-state behaviour that makes the design worth including.
- The slave never stalls a fast access and never raises an error inside the map, so every
  remaining protocol obligation belongs to the environment - psel before penable, and the
  request held stable until pready. Neither is an invariant; both are out of grammar.
- Register read-back (APB17, APB18) is expressible only because the environment drives
  pwdata with the value it last wrote to that address. A4 states the width half of that
  obligation, which is all an invariant can say, and the value half is why those two break
  on the stress corpus.
- APB16 conjoins four propositions, and APB12-APB14 and APB17-APB18 conjoin three; the
  config sets `max_antecedent_props: 3` for that reason.

*Contracts.* 18 of 18 guarantees confirmed on 5 runs / 6000 samples.

*Assumptions - the invariants that make up A.*

| id | invariant | holds at | samples |
|---|---|---|---|
| A1 | `presetn == 1` | 97.5% | 6000 |
| A2 | `paddr <= 3` | 97.0% | 6000 |
| A3 | `paddr >= 4` | 3.0% | 6000 |
| A4 | `pwdata <= 255` | 100.0% | 6000 |

- **A1** the environment holds reset deasserted while it drives transfers.
- **A2** the environment addresses the register map. The error-response contracts are
  claimed under the complementary assumption instead.
- **A3** the complementary environment: an address outside the map, which is what the error
  contracts are about.
- **A4** the environment supplies an 8-bit payload, and on a read it drives pwdata with the
  value it last wrote to that address. Only the width half of that is statable as an
  invariant, which is exactly why the read-back contracts break on the stress corpus.

*Guarantees - each one a whole template instance.*

| id | kind | template | guarantee | A | support (mine / held-out / stress) | status |
|---|---|---|---|---|---|---|
| APB1 | reset | G2 | `G((presetn == 0) |=> (pready == 0))` | - | 147 / 92 / 138 | confirmed |
| APB2 | reset | G2 | `G((presetn == 0) |=> (pslverr == 0))` | - | 147 / 92 / 138 | confirmed |
| APB3 | reset | G2 | `G((presetn == 0) |=> (prdata == 0))` | - | 147 / 92 / 138 | confirmed |
| APB4 | protocol | G2 | `G((psel == 0) |=> (pready == 0))` | - | 2469 / 1567 / 943 | confirmed |
| APB5 | protocol | G2 | `G((psel == 0) |=> (pslverr == 0))` | - | 2469 / 1567 / 943 | confirmed |
| APB6 | protocol | G2 | `G((penable == 0) |=> (pready == 0))` | - | 3374 / 2079 / 1368 | confirmed |
| APB7 | protocol | G4 | `G((psel == 1 && penable == 1 && paddr <= 2) |=> (pready == 1))` | A1, A2 | 902 / 476 / 435 | confirmed |
| APB8 | protocol | G4 | `G((psel == 1 && penable == 1 && paddr <= 3) |=> (pslverr == 0))` | A1, A2 | 2531 / 1466 / 732 | confirmed |
| APB9 | error | G4 | `G((psel == 1 && penable == 1 && paddr >= 4) |=> (pslverr == 1))` | A1, A3 | 90 / 52 / 162 | confirmed |
| APB10 | error | G4 | `G((psel == 1 && penable == 1 && paddr >= 4) |=> (pready == 1))` | A1, A3 | 90 / 52 / 162 | confirmed |
| APB11 | error | G1 | `G((pslverr == 1) |-> (pready == 1))` | - | 90 / 52 / 162 | confirmed |
| APB12 | latency | G4 | `G((psel == 1 && penable == 0 && paddr <= 2) |-> ##2 (pready == 1))` | A1, A2 | 451 / 238 / 304 | confirmed |
| APB13 | latency | G4 | `G((psel == 1 && penable == 0 && paddr == 3) |-> ##4 (pready == 1))` | A1, A2 | 407 / 247 / 251 | confirmed |
| APB14 | latency | G4 | `G((psel == 1 && penable == 0 && paddr >= 4) |-> ##2 (pslverr == 1))` | A1, A3 | 45 / 26 / 6 | confirmed |
| APB15 | latency | G4 | `G((psel == 1 && penable == 0 && paddr == 3) |=> (pready == 0))` | A1, A2 | 409 / 248 / 251 | confirmed |
| APB16 | latency | G4 | `G((psel == 1 && penable == 1 && paddr == 3 && pready == 0) |-> ##[1:3] (pready == 1))` | A1, A2 | 1221 / 741 / 284 | confirmed |
| APB17 | data | G4 | `G((psel == 1 && penable == 0 && pwrite == 0 && paddr <= 2) |-> ##2 (prdata == pwdata))` | A1, A2, A4 | 172 / 90 / 292 | confirmed |
| APB18 | data | G4 | `G((psel == 1 && penable == 0 && pwrite == 0 && paddr == 3) |-> ##4 (prdata == pwdata))` | A1, A2, A4 | 170 / 119 / 107 | confirmed |

- **APB1-APB3** reset clears the response, the error flag and the read data register.
- **APB4** an unselected slave does not respond.
- **APB5** an unselected slave raises no error.
- **APB6** no response outside an access phase: pready is only ever raised in answer to
  `psel && penable`.
- **APB7** a fast register never stalls: the access phase is answered in the next cycle.
- **APB8** no error response inside the register map.
- **APB9** an access outside the map is answered with an error.
- **APB10** an error response completes immediately: the slave never stalls a bad address.
- **APB11** an error is only signalled together with the completion of the transfer, which
  is the APB rule.
- **APB12** a transfer that starts on a fast register completes two cycles later, counted
  from the setup phase.
- **APB13** the slow register's two wait states make the latency four cycles from the setup
  phase. Its exact-latency form is only expressible because the environment holds the
  request until pready.
- **APB14** an unmapped transfer reports its error two cycles after it starts.
- **APB15** the slow register does stall: the cycle after the setup phase carries no
  response.
- **APB16** a stalled access on the slow register completes within three cycles. Four
  propositions in the antecedent - the fourth excludes the cycle in which the transfer has
  already completed.
- **APB17** the register reads back the value that was written to it. Read-back is a
  relation between two transactions an unbounded number of cycles apart; it becomes a
  fixed-delay contract only because the environment drives pwdata with the value it
  expects.
- **APB18** the same read-back contract on the slow register, at its own latency.
- APB12, APB13, APB16, APB17 and APB18 are the clauses that break on the stress corpus (72,
  186, 192, 24 and 91 violations there, none on the nominal or held-out corpora): every one
  of them depends on request stability, which is out of grammar.

*Propositions this design's contracts need declared* (they end up in `config.json` under `extra_props`):

- `prdata == pwdata` (`loc="c"`)

*Not producible by any template:*

- **APB-READBACK** `A: presetn == 1 && the environment respects the protocol` -> `a read of address a returns the value of the last write to a`. the write and the read are separate transactions an unbounded number of cycles apart, so the property needs either a past operator over an unbounded window or a model of the register file. APB17 and APB18 are the finite-trace surrogate, bought by making the environment carry the expected value on pwdata.
- **APB-SETUP-ACCESS** `A: none` -> `G(psel && !penable |=> psel && penable)`. this is an obligation on the MASTER, not on the slave, so it belongs in A rather than G - and A is a conjunction of invariants, which cannot say 'the next cycle'. It is the clearest instance in the benchmark of an environment obligation that the contract shape cannot express: the flow can mine it as a temporal environment clause, but not as an assumption.
- **APB-STABLE** `A: none` -> `G(psel && penable && !pready |=> paddr and pwdata unchanged)`. request stability needs `$stable` (or `$past` on every request signal), which the evaluator does not have. Every latency and data contract here depends on it, which is why they all break on the stress corpus.

## What the grammar can and cannot say

The reference contracts are written in the clause language the tool evaluates
(`ace/formula.py`), so that they can be compared with mined clauses directly:

    comparisons and arithmetic   a + b <= 255, out * out <= in, operator_i == 26
    boolean operators            &&, ||, !
    bounded delays               ##1 x, ##[1:40] x, and sequences a ##1 b ##1 c
    next                         X(x)
    implication                  A |-> G, A |=> G   (inside G(...))

Three consequences shaped the contract list:

* **No past operator.** A clause cannot relate a signal to its own earlier value, so
  "the register holds its value", "the operand is stable" and "out == sqrt(operand
  latched 12 cycles ago)" are not expressible. Where the value relation matters, either
  the environment holds the value (the stimulus does this deliberately) or the
  assumption pins the input to a range and the guarantee states the corresponding
  output range.
* **An assumption over a window has to be written as a sequence.** "The environment
  does not reset the design for the next 11 cycles" becomes
  `(...) ##1 (rst == 0 && start == 0) ##1 ...`. That is verbose but exact, and it is
  what makes the aborted-operation traces vacuous rather than violating.
* **A bounded-response guarantee cannot carry a window-wide assumption**, because the
  consequent is evaluated from the end of the antecedent's match. Where the obligation
  is discharged by a reset inside the window, the reset appears as a disjunct in the
  guarantee (accumulator ACC6, ACC7).

## Totals

135 minable contracts, all confirmed on the mining corpus and on the independent
held-out corpus, under 28 invariants, plus 23 recorded as out of grammar. The full clause
text of each contract, exactly as the tool parses it, is in `<design>/config.json` under
`references`, and the propositions they need are under `extra_props`.

By template family: G1 44, G2 20, G4 66, G5 5.

The out-of-grammar list is the honest measure of what this contract shape cannot
reach. Two separate limits:

**The templates.** Exact latencies (every delay template is a window), sequence
antecedents deeper than a rising edge, disjunctive consequents, and unconditioned
invariants stated temporally (a template always yields an implication). Plus
`$past`/`$stable`, which HARM's proposition grammar has and the flow's own evaluator
does not - adding them would replace the three value-specific CSR write-throughs with
one general clause.

**Invariants as assumptions.** An invariant restricts the sample it is evaluated at,
so A cannot constrain the future. Every bounded-response guarantee whose window may
lose its assumption is therefore unreachable: MUL4 (start drops when the operation
ends), ACC7 and ACC8 (the sample stream stops), CSR7 (a write in the cycle reset is
released), ARB-STARVATION and ARB-HOLD (the request is withdrawn before it is served),
FIFO-ORDER (the write it pairs a read with is unboundedly far back), APB-SETUP-ACCESS and
APB-STABLE (the master's own protocol obligations). The bounded-response guarantees that
DO hold here - SQ7, SQ8, MD2-MD5, MD10, MD11, ACC6, ARB15-ARB18, FIFO19, APB12, APB13,
APB16, APB17, APB18 - hold because the nominal environment respects window obligations
that A cannot state; the stress corpus, where it does not, is where they break, and
`reference_check.json` records exactly which ones do (all of the arbiter's fairness
clauses, the queue's no-overflow and data-integrity clauses, and the APB slave's whole
latency and read-back family). That gap between what A can say and what the guarantees actually need
is worth a sentence in the paper.
