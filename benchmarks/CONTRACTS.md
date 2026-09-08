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
  allows - or a two-cycle rising-edge sequence for the G5 decision-tree shape;
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
is there.

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

80 minable contracts, all confirmed on the mining corpus and on the independent
held-out corpus, plus 13 recorded as out of grammar. The full clause text of each
contract, exactly as the tool parses it, is in `<design>/config.json` under
`references`, and the propositions they need are under `extra_props`.

By template family: G1 30, G2 8, G4 37, G5 5.

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
released). The bounded-response guarantees that DO hold here - SQ7, SQ8, MD2-MD5,
MD10, MD11, ACC6 - hold because the nominal environment respects window obligations
that A cannot state; the stress corpus, where it does not, is where they break. That
gap between what A can say and what the guarantees actually need is worth a sentence
in the paper.
