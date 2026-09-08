# ACE trace benchmark

Eleven RTL blocks - eight from `legacy/fdl26/FDL26/FDL26_tests` and three protocol blocks written for
this benchmark - each with a testbench that drives it through a planned set of scenarios and
writes one CSV row per cycle, plus a set of reference assume-guarantee contracts that the
traces are checked against.

The point of the benchmark is not coverage of the RTL. It is to produce traces from which A/G
contracts can be recovered: every design's stimulus is built so that its interesting behaviours
occur many times, so that the events that anchor decomposition are separable from each other,
and so that the environment conditions the contracts assume are actually met.

    python3 benchmarks/run.py                              # build, simulate, validate
    python3 benchmarks/run.py --design sqrt
    python3 benchmarks/run.py --validate-only              # re-check contracts only

    benchmarks/arbiter4/generate.sh                        # one design, on its own
    CYCLES=4000 benchmarks/fifo_sync/generate.sh /tmp/out

The three protocol designs keep their RTL in their own folder and carry their own
`generate.sh`, so each is a standalone trace generator: verilator plus that one folder is
enough to produce its ten traces, with no dependency on this script.

Requires verilator (5.x) on PATH for the simulate step; `--validate-only` needs nothing but
Python. The testbenches are plain SystemVerilog with no verilator-specific constructs, so
QuestaSim (`vlog`/`vsim`) works too - the plusargs are `+seed`, `+cycles`, `+scenario` and
`+out`.

## What comes out

    benchmarks/traces/<design>/mine_seed00N.csv        5 runs, nominal environment
    benchmarks/traces/<design>/holdout_seed10N.csv     3 runs, nominal, independent seeds
    benchmarks/traces/<design>/stress_seed20N.csv      2 runs, environment breaks the rules
    benchmarks/traces/<design>/reference_check.json    every contract, checked
    benchmarks/traces/summary.json                     one line per design
    benchmarks/<design>/config.json                    ready-to-run ACE config
    benchmarks/CONTRACTS.md                            the contracts, with the analysis

`mine_*` is the corpus to mine and the corpus the reference contracts are validated on.
`holdout_*` is an independent set of runs from the same environment, for the tool's held-out
validation step. `stress_*` is the same design driven by an environment that violates the
contracts' assumptions - operations aborted half way, reset asserted mid-flight - and is
deliberately NOT part of the reference corpus. A well-formed contract is vacuous on those
traces rather than violated, because its assumption excludes them; that is visible as a drop in
support in `reference_check.json`.

The generated traces ship as `benchmarks/traces.zip` (extract it in place: it unpacks to
`benchmarks/traces/<design>/`). Re-running `run.py` regenerates them and overwrites whatever
is there.

## Trace format

The CSV header carries the C types that `vcd2csv` emits, so these traces are drop-in
replacements for the FDL26 flow's:

    bool rst,bool start,int in,int out,bool error,bool done

Only the observable interface is written. No internal register, no state variable, no
composition wiring (the Ibex multiplier's external adder and intermediate-value register are
not in its trace), and no clock column - one row is one cycle.

**Sampling convention.** Stimulus is applied 1 ns after the active clock edge, and the row is
sampled late in the cycle (just before the next active edge). A row therefore holds the inputs
that were applied for that cycle together with the outputs the design produced from the
*previous* row's inputs, so `##1` always means "one cycle later". This matters: driving at the
edge itself leaves the pairing to the simulator's scheduling of blocking assignments against
the clocked blocks, and the first version of this benchmark did exactly that - a write to the
Ibex CSR appeared in the same row as the write request, which silently invalidates every
input-to-output contract. `sqrt` samples before the negative edge, because that is its active
edge; every other design samples before the positive edge.

## The designs

| design | kind | what the traces exercise | guarantees |
|---|---|---|---|
| comparator_3bit | combinational | exhaustive sweep of all 64 operand pairs, then random | 8 |
| adder_8bit | combinational | corners, then operands biased to land on the carry boundary | 7 |
| ibex_csr | 1-cycle register | writes, back-to-back writes, idle gaps, resets | 6 |
| accumulator | 4-sample datapath, valid/valid | continuous and sparse streaming, single samples, resets | 6 |
| multi_16bit | 17-cycle multiplier | full operations, idle resets, operand corners | 9 |
| sqrt | 12-cycle iterative, error path | valid and rejected requests, back-to-back, bit-31 corner | 13 |
| ibex_alu | combinational, 18 operations | per-operation corners, 16-bit and 32-bit operand regimes | 18 |
| ibex_multdiv_fast | multi-cycle handshake | MULL/MULH/DIV/REM, divide by zero, request spacing | 13 |
| arbiter4 | 4-requester round-robin, registered grants | every requester alone, contention of every width, one requester asking continuously | 18 |
| fifo_sync | depth-8 queue, first-word-fall-through | fill to full, drain to empty, simultaneous read/write, single element | 19 |
| apb_slave | APB3 register file, one slow register | every register written and read back, wait states, unmapped addresses, back-to-back transfers | 18 |

A contract is a pair `(A, G)`:

* **A is a conjunction of invariants** — `A1 && A2 && ...` — each a propositional predicate
  over the environment with no temporal operator (`rst_n == 1`, `in >= 0`, `op_b_i >= 1`).
  These are the objects an invariant detector produces.
* **G is a conjunction of formulas** — `G1 && G2 && ...` — each one a whole
  `G(antecedent -> consequent)` instance of a HARM template, which is what the temporal
  backend emits.

A guarantee is checked only at the samples where every invariant in its contract's A holds.
Nothing from A is folded into a guarantee's antecedent, so a mined clause and a reference
clause are directly comparable on both sides.

135 guarantees, all confirmed on the mining corpus and on the held-out corpus, under 28
invariants; 23 further properties are recorded as out of grammar. Guarantee shapes follow what
HARM's templates produce (antecedent of at most two declared propositions, single-proposition
consequent, delay of `|=>` or `##[1:H]`), and the compound propositions they need are written
into each `config.json` under `extra_props` — HARM's clustering only generates comparisons
against constants, so `yout == ain * bin` is mined only if declared.

An invariant's "holds at" rate is the share of samples inside the contract's domain, not a
defect rate: `in < 0` on the square root holds at 0.9% of samples because rejected requests
are rare, and that is the environment its error-path guarantees are about.
`benchmarks/CONTRACTS.md` has the analysis, both tables per design, and the out-of-grammar
list with the two limits behind it — what the templates cannot express, and what an invariant
assumption cannot say about the future.

## Adding a design

1. Write `benchmarks/<design>/tb_<design>.sv`: read `+seed`, `+cycles`, `+scenario`, `+out`;
   drive directed corners first and seeded random after; keep the `#1` drive delay and the
   late sample point; write only the observable interface.
2. Add it to `DESIGNS` in `run.py` with its RTL files in compile order.
3. Write `benchmarks/<design>/config.json` (see `../ace/configs/_template.json` for the
   fields) and `benchmarks/<design>/candidates.json` with the proposed A -> G contracts.
4. Run `run.py`. Contracts that come back `violated` or `vacuous` are the interesting ones:
   either the clause is wrong, or the stimulus never creates the situation, or the design does
   something you did not expect. All three happened while writing this benchmark, and the
   reasons are recorded in CONTRACTS.md.

## Reproducibility

The stimulus uses a hand-rolled LCG seeded from `+seed` rather than `$random`, so a run is
reproducible across simulators. `data_ind_timing_i` is left at 0 for the Ibex divider, so its
latency is data dependent (36 cycles for a real division, 1 for a divide by zero).

## The three protocol designs

The eight FDL26 blocks are datapath and register logic: their contracts are about values and
latencies. These three were added because the property shapes a protocol block needs were
missing entirely from the benchmark, and each one is self-contained - `rtl/`, testbench,
`generate.sh`, `config.json`, `candidates.json`, `reference_contracts.txt` in its own folder.

**arbiter4** - four requesters, round-robin, one grant per cycle, registered. Contributes
mutual exclusion (`gnt_valid |-> gnt0 + gnt1 + gnt2 + gnt3 == 1`, expressible only because
the grant lines can be summed), grant liveness, no spurious grant, index encoding, and
*bounded fairness*: a request that has not just been served is served within four cycles.
Four is the exact bound - three fails - and that contract is the benchmark's clearest case of
a guarantee that depends on an environment obligation no invariant can state (hold the
request until granted), so it breaks on the stress corpus while every safety contract
survives. Round-robin order itself needs `$past` and is recorded as out of grammar.

**fifo_sync** - depth 8, width 8, first-word-fall-through, self-protecting. Contributes flag
correctness in both directions, occupancy bounds, the no-overflow and no-underflow *effects*
(`full && !rd_en |=> full`), the increment relation pinned at individual occupancies, and
one data-integrity contract (`empty && wr_en |=> dout == din`) that holds because the
environment keeps `din` for one more cycle. First-in-first-out order over an unbounded
window, and the general `count == $past(count) + 1`, are out of grammar. The queue's
self-protection contracts are true and in grammar but have zero support on the nominal
corpus, because a well-behaved master never writes into a full queue - the same benchmark
gap as the CSR error flag.

**apb_slave** - APB3, four registers, one with two wait states, error response outside the
map. Contributes the protocol responses (`psel == 0 |=> pready == 0`), the error family, and
the latency family keyed on the *setup* phase (`psel && !penable && paddr <= 2 |-> ##2
pready`, `##4` for the slow register), which is what turns a wait-state behaviour into a
fixed-delay contract: keyed on the access phase instead the delay depends on how long the
master has been waiting. Register read-back becomes expressible only because the environment
drives `pwdata` with the value it last wrote to that address; request stability (`$stable`)
and the master's setup-then-access obligation are out of grammar, and the latter is the
sharpest example in the benchmark of an environment obligation that a conjunction of
invariants cannot express.
