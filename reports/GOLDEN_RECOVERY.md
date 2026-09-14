# Golden-contract recovery: what the flow gets back

How much of each design's hand-written reference contract the flow recovers from its traces alone, and where the rest goes. Produced with the **HARM backend** and the smoothed-recall trigger metric; `sqrt` includes the spaced traces added alongside its original ten.

Categories are trace-bounded, as `validation.classify` defines them: *equivalent* (a mined clause says exactly this), *mined-stronger* (a mined clause implies it — a refinement), *mined-weaker*, *incomparable*, *missed*. **exact** counts *equivalent*; **acceptable** counts *equivalent* plus *mined-stronger*.

Two vocabulary settings are reported. **declared** uses each design's `extra_props`, written from the golden contracts, so it measures the flow given a good vocabulary. **interface** derives the vocabulary mechanically (`auto_vocabulary`), so nothing about the golden set reaches the search space. **union** counts a reference as recovered if either setting recovers it.

## Guarantees

| design | refs | declared eq/acc | interface eq/acc | union eq/acc | regions |
|---|---|---|---|---|---|
| accumulator | 6 | 0 / 0 | 0 / 0 | **0 / 0** | none — skipped |
| adder_8bit | 7 | 4 / 5 | 4 / 5 | **4 / 5** | 1 |
| apb_slave | 18 | 1 / 1 | 3 / 9 | **3 / 9** | 2 |
| arbiter4 | 18 | 7 / 9 | 4 / 4 | **7 / 9** | 2 |
| comparator_3bit | 8 | 6 / 8 | 5 / 6 | **7 / 8** | 3 |
| fifo_sync | 19 | 4 / 4 | 11 / 14 | **11 / 14** | 2 |
| ibex_alu | 18 | 0 / 2 | 5 / 12 | **5 / 12** | 3 |
| ibex_csr | 6 | 1 / 6 | 1 / 6 | **1 / 6** | 2 |
| ibex_multdiv_fast | 13 | 3 / 6 | 1 / 3 | **4 / 7** | 1 |
| multi_16bit | 9 | 1 / 4 | 3 / 8 | **3 / 8** | 1 |
| sqrt | 13 | 0 / 4 | 1 / 6 | **1 / 9** | 2 |
| **total** | **135** | **27 / 49** | **38 / 73** | **46 / 87** | |

**34% exact, 64% acceptable.** Ten of eleven designs mine at least one region.

## Assumptions

| design | refs | union exact | union acceptable |
|---|---|---|---|
| accumulator | 3 | 0 | 0 |
| adder_8bit | 2 | 1 | 2 |
| apb_slave | 4 | 1 | 3 |
| arbiter4 | 2 | 0 | 0 |
| comparator_3bit | 1 | 0 | 1 |
| fifo_sync | 2 | 2 | 2 |
| ibex_alu | 2 | 1 | 1 |
| ibex_csr | 2 | 2 | 2 |
| ibex_multdiv_fast | 4 | 0 | 3 |
| multi_16bit | 3 | 1 | 3 |
| sqrt | 3 | 0 | 2 |
| **total** | **28** | **8** | **19** |

29% exact, 68% acceptable.

## The two vocabularies are complementary

27 exact from `declared` and 38 from `interface`, but 46 together: neither is a subset of the other. `arbiter4` does better with the hints (7 vs 4), `fifo_sync` and `ibex_alu` do much better without them (11 vs 4, 5 vs 0). A mechanically derived vocabulary is not the weaker setting — it is a different one, and on the designs whose contracts relate two interface signals it is the stronger.

## Where the 39 unrecovered guarantees fail

Each clause never recovered in either setting was evaluated with `validation.evaluate` against the **region corpora the run actually wrote** (`work/region_*/episode_*.csv`), so the verdict below is measured rather than argued.

| verdict | count |
|---|---|
| holds inside a mined region, never proposed | 33 |
| no region was formed for the event at all | 6 |

**The decomposition is not the bottleneck.** For 33 of 39, the episodes the flow extracted do contain the samples on which the golden clause holds; what failed is candidate enumeration. They group by shape:

- **sequence antecedents** — `G(((mult_en_i == 0) ##1 (mult_en_i == 1)) |-> ##[1:40] valid_o == 1)`. All six `ibex_multdiv_fast` misses need an antecedent that spans two samples.
- **counting predicates over flags** — `req0 + req1 + req2 + req3 == 1`, five of the nine `arbiter4` misses. Declared in `extra_props` and still not reaching a mined clause.
- **signal-to-signal consequents** — `prdata == pwdata` (apb_slave), `result_o == operand_a_i` (ibex_alu), `yout == bin` (multi_16bit).
- **responses at one fixed offset** — `##2` and `##4` in apb_slave, where the mined form is the window.

**The six that have no region** are all of `accumulator`. Its `valid_out` event has 832 occurrences and a base rate of **0.912** at `horizon: 5` — 91% of positions have the event inside the window — so `valid_in == 1`, the true enable, scores a smoothed recall of 0.382 against a null model of 0.481 and is rejected for not discriminating the event. Every candidate fails the same way and the region is reported skipped. This is the failure mode `sqrt` had before its spaced traces were added: a horizon much wider than the real response latency. See the open decision on a per-event horizon in [METHODOLOGY_COMPATIBILITY.md](METHODOLOGY_COMPATIBILITY.md).

### The full list

**accumulator** (no region)
```
G((rst_n == 0) |-> (valid_out == 0))
G((rst_n == 0) |-> (data_out == 0))
G((rst_n == 1) |-> (data_out <= 1020))
G((valid_out == 1) |=> (valid_out == 0))
G((valid_out == 1 && valid_in == 0) |=> (valid_out == 0))
G((valid_out == 1 && valid_in == 1) |=> (data_out <= 255))
```

**adder_8bit** `G((a == 0 && b == 0) |-> (sum == cin))`

**apb_slave**
```
G((psel == 1 && penable == 1 && paddr <= 3) |=> (pslverr == 0))
G((psel == 1 && penable == 0 && paddr <= 2) |-> ##2 (pready == 1))
G((psel == 1 && penable == 0 && paddr >= 4) |-> ##2 (pslverr == 1))
G((psel == 1 && penable == 1 && paddr == 3 && pready == 0) |-> ##[1:3] (pready == 1))
G((psel == 1 && penable == 0 && pwrite == 0 && paddr <= 2) |-> ##2 (prdata == pwdata))
G((psel == 1 && penable == 0 && pwrite == 0 && paddr == 3) |-> ##4 (prdata == pwdata))
```

**arbiter4**
```
G((gnt_valid == 0) |-> (gnt0 + gnt1 + gnt2 + gnt3 == 0))
G((req0 + req1 + req2 + req3 == 1 && reqN == 1) |=> (gntN == 1))      for N = 0..3
G((reqN == 1 && gntN == 0) |-> ##[1:4] (gntN == 1))                   for N = 0..3
```

**fifo_sync**
```
G(count <= 8)
G((count == 4 && wr_en == 1 && rd_en == 0) |=> (count == 5))
G((count == 1 && rd_en == 1 && wr_en == 0) |=> (empty == 1))
```

**ibex_alu**
```
G((operator_i == 2 && operand_b_i == 0) |-> (result_o == operand_a_i))
G((operator_i == 9 && operand_b_i == 1) |-> (result_o * 2 <= operand_a_i))
G((operator_i == 9 && operand_b_i == 1) |-> (result_o * 2 + 1 >= operand_a_i))
```

**ibex_multdiv_fast** — all six have an `a ##1 b` antecedent
```
G(((mult_en_i == 0) ##1 (mult_en_i == 1)) |-> (##[1:40] valid_o == 1))
G(((div_en_i  == 0) ##1 (div_en_i  == 1)) |-> (##[1:40] valid_o == 1))
G(((div_en_i == 0) ##1 (rst_n == 1 && div_en_i == 1 && operator_i == 2 && op_b_i == 0)) |-> ...)
G(((div_en_i == 0) ##1 (rst_n == 1 && div_en_i == 1 && operator_i == 3 && op_b_i == 0)) |-> ...)
G(((div_en_i == 0) ##1 (rst_n == 1 && div_en_i == 1 && operator_i == 2 && op_a_i == 0 && op_b_i >= 1)) |-> ...)
G((mult_en_i == 1 && op_b_i == 0) |-> (##[1:40] (valid_o == 1 && multdiv_result_o == 0)))
```

**multi_16bit** `G((done == 1 && ain == 1) |-> (yout == bin))`

**sqrt**
```
G((start == 1 && in >= 2147483648) |=> (error == 1))
G((start == 1 && in >= 0) |-> (##[1:24] error == 0))
G((rst == 1) |=> (done == 0))
G((start == 1 && in >= 4 && in <= 8) |-> ##[1:24] (done == 1 && out == 2))
```

## Two caveats

`sqrt`'s figures include the spaced traces, so they are not comparable with any earlier `sqrt` number in this repository.

`G((start == 1 && in >= 0) |-> ##[1:24] error == 0)` is true of the corpus only because a rejected request is followed by a recovery request inside the horizon. Its assumption `in >= 0` includes the bit-31 operands the design rejects — which is what the companion reference `G((start == 1 && in >= 2147483648) |=> (error == 1))` states. The reference set, not the flow, is weak here.

## Reproducing

    python3 tools/score_recovery.py benchmarks/*/config.json --out <dir>

Roughly half an hour with HARM installed. Each `<dir>/<setting>/<design>/recovery.json`
carries `guarantees.detail` and `assumptions.detail`, one category per reference, which is
what every number above is counted from.
