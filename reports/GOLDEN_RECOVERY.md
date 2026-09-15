# Golden-contract recovery: what the flow gets back

How much of each design's hand-written reference contract the flow recovers from its traces alone, and where the rest goes. Produced with the **harm backend** and the smoothed-recall trigger metric; `accumulator` and `sqrt` include the spaced traces added alongside their original five.

Categories are trace-bounded, as `validation.classify` defines them: *equivalent* (a mined clause says exactly this), *mined-stronger* (a mined clause implies it — a refinement), *mined-weaker*, *incomparable*, *missed*. **exact** counts *equivalent*; **acceptable** counts *equivalent* plus *mined-stronger*.

One vocabulary setting is reported: **declared**, each design's `extra_props` — written from the golden contracts, so this measures the flow given a good vocabulary — together with the propositions `ace/vocabulary.py` reads off each region. The mechanically derived interface-only family is a question about the miner rather than about the decomposition, and is not reported.

## Guarantees

| design | refs | eq/acc | regions |
|---|---|---|---|
| accumulator | 5 | **1 / 3** | 1 |
| adder_8bit | 7 | **5 / 7** | 1 |
| apb_slave | 18 | **11 / 17** | 2 |
| arbiter4 | 18 | **7 / 9** | 2 |
| comparator_3bit | 8 | **6 / 8** | 3 |
| fifo_sync | 18 | **10 / 12** | 2 |
| ibex_alu | 18 | **6 / 13** | 3 |
| ibex_csr | 4 | **1 / 4** | 2 |
| ibex_multdiv_fast | 13 | **5 / 9** | 1 |
| multi_16bit | 8 | **3 / 8** | 1 |
| sqrt | 13 | **2 / 11** | 2 |
| **total** | **130** | **57 / 101** |  |

**44% exact, 78% acceptable.** 11 of 11 designs mine at least one region.

## Assumptions

| design | refs | union exact | union acceptable |
|---|---|---|---|
| accumulator | 3 | 2 | 2 |
| adder_8bit | 2 | 1 | 2 |
| apb_slave | 4 | 2 | 2 |
| arbiter4 | 2 | 0 | 2 |
| comparator_3bit | 1 | 0 | 1 |
| fifo_sync | 2 | 2 | 2 |
| ibex_alu | 2 | 1 | 1 |
| ibex_csr | 2 | 2 | 2 |
| ibex_multdiv_fast | 4 | 0 | 3 |
| multi_16bit | 3 | 1 | 3 |
| sqrt | 3 | 0 | 2 |
| **total** | **28** | **11** | **22** |

39% exact, 79% acceptable.

## Where the 29 unrecovered guarantees fail

Each clause that was never recovered was evaluated with `validation.evaluate` against the **region corpora the run actually wrote** (`work/region_*/episode_*.csv`), so the verdict below is measured rather than argued.

| verdict | count |
|---|---|
| holds inside a mined region, never proposed | 28 |
| holds in no mined region: the episodes miss the behaviour | 1 |

**The decomposition is not the bottleneck.** For 28 of 29, the episodes the flow extracted do contain the samples on which the golden clause holds; what failed is candidate enumeration.

### The full list

**accumulator**
```
G((valid_out == 1) |=> (valid_out == 0))
G((valid_out == 1 && valid_in == 0) |=> (valid_out == 0))
```

**apb_slave**
```
G((psel == 1 && penable == 1 && paddr == 3 && pready == 0) |-> ##[1:3] (pready == 1))
```

**arbiter4**
```
G((gnt_valid == 0) |-> (gnt0 + gnt1 + gnt2 + gnt3 == 0))
G((req0 + req1 + req2 + req3 == 1 && req0 == 1) |=> (gnt0 == 1))
G((req0 + req1 + req2 + req3 == 1 && req1 == 1) |=> (gnt1 == 1))
G((req0 + req1 + req2 + req3 == 1 && req2 == 1) |=> (gnt2 == 1))
G((req0 + req1 + req2 + req3 == 1 && req3 == 1) |=> (gnt3 == 1))
G((req0 == 1 && gnt0 == 0) |-> ##[1:4] (gnt0 == 1))
G((req1 == 1 && gnt1 == 0) |-> ##[1:4] (gnt1 == 1))
G((req2 == 1 && gnt2 == 0) |-> ##[1:4] (gnt2 == 1))
G((req3 == 1 && gnt3 == 0) |-> ##[1:4] (gnt3 == 1))
```

**fifo_sync**
```
G((empty == 1 && wr_en == 1) |=> (count == 1))
G((empty == 1 && wr_en == 0) |=> (empty == 1))
G((full == 1 && rd_en == 0) |=> (full == 1))
G((count == 4 && wr_en == 1 && rd_en == 0) |=> (count == 5))
G((count == 1 && rd_en == 1 && wr_en == 0) |=> (empty == 1))
G((empty == 1 && wr_en == 1) |=> (dout == din))
```

**ibex_alu**
```
G((operator_i == 0 && operand_a_i + operand_b_i <= 4294967295) |-> (result_o == operand_a_i + operand_b_i))
G((operator_i == 1 && operand_a_i >= operand_b_i) |-> (result_o == operand_a_i - operand_b_i))
G((operator_i == 10 && operand_b_i == 1 && operand_a_i <= 2147483647) |-> (result_o == operand_a_i * 2))
G((operator_i == 9 && operand_b_i == 1) |-> (result_o * 2 <= operand_a_i))
G((operator_i == 9 && operand_b_i == 1) |-> (result_o * 2 + 1 >= operand_a_i))
```

**ibex_multdiv_fast**
```
G(((div_en_i == 0) ##1 (rst_n == 1 && div_en_i == 1 && operator_i == 2 && op_b_i == 0)) |-> (##[1:40] (valid_o == 1 && multdiv_result_o == 4294967295)))
G(((div_en_i == 0) ##1 (rst_n == 1 && div_en_i == 1 && operator_i == 3 && op_b_i == 0)) |-> (##[1:40] (valid_o == 1 && multdiv_result_o == op_a_i)))
G((mult_en_i == 1 && op_b_i == 0) |-> (##[1:40] (valid_o == 1 && multdiv_result_o == 0)))
G(((div_en_i == 0) ##1 (rst_n == 1 && div_en_i == 1 && operator_i == 2 && op_a_i == 0 && op_b_i >= 1)) |-> (##[1:40] (valid_o == 1 && multdiv_result_o == 0)))
```

**sqrt**
```
G((start == 1 && in >= 2147483648) |=> (error == 1))
G((start == 1 && in >= 4 && in <= 8) |-> ##[1:24] (done == 1 && out == 2))
```

## Reproducing

    python3 tools/score_recovery.py benchmarks/*/config.json --out results
    python3 tools/report_golden_recovery.py --results results

Roughly half an hour with HARM installed. Each `results/<setting>/<design>/recovery.json`
carries `guarantees.detail` and `assumptions.detail`, one category per reference, which is
what every number above is counted from.
