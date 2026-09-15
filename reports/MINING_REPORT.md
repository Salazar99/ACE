# Mining report: golden contracts against what the flow mined

11 designs. Golden contracts are the benchmark's reference set - hand-written, then confirmed on the mining and held-out corpora. Mined contracts are what the flow produced from the traces alone.

One vocabulary setting is reported: **declared**, each design's `extra_props` - written from the golden contracts, so this measures the flow given a good vocabulary - together with the propositions `ace/vocabulary.py` reads off each region. The mechanical interface-only family is a question about the miner, not about the decomposition, and is not reported.

Categories are trace-bounded: *equivalent* (a mined clause says exactly this), *mined-stronger* (a mined clause implies it - a refinement), *mined-weaker* (the flow found a weaker form), *missed*. `exact` is the equivalent share; `acceptable` counts equivalent plus refinements.

The per-design files: `golden/<design>.txt`, `mined/<design>.txt`, `match/<design>.txt`.

## Guarantees

### Per design

| design | golden | mined | equivalent | stronger | weaker | missed | exact | acceptable |
|---|---|---|---|---|---|---|---|---|
| **declared vocabulary** | | | | | | | | |
| accumulator | 5 | 159 | 1 | 2 | 1 | 1 | 20% | 60% |
| adder_8bit | 7 | 81 | 5 | 2 | 0 | 0 | 71% | 100% |
| apb_slave | 18 | 1934 | 11 | 6 | 0 | 1 | 61% | 94% |
| arbiter4 | 18 | 1136 | 7 | 2 | 7 | 2 | 39% | 50% |
| comparator_3bit | 8 | 28 | 6 | 2 | 0 | 0 | 75% | 100% |
| fifo_sync | 18 | 1358 | 10 | 2 | 4 | 2 | 56% | 67% |
| ibex_alu | 18 | 752 | 6 | 7 | 4 | 1 | 33% | 72% |
| ibex_csr | 4 | 229 | 1 | 3 | 0 | 0 | 25% | 100% |
| ibex_multdiv_fast | 13 | 4491 | 5 | 4 | 0 | 4 | 38% | 69% |
| multi_16bit | 8 | 1981 | 3 | 5 | 0 | 0 | 38% | 100% |
| sqrt | 13 | 1893 | 2 | 9 | 0 | 2 | 15% | 85% |
| **total (declared)** | **130** | **14042** | **57** | **44** | **16** | **13** | **44%** | **78%** |

### Guarantees: which golden clauses, by id (declared vocabulary)

| design | equivalent | recovered as a refinement | recovered weaker | missed |
|---|---|---|---|---|
| accumulator | ACC5 | ACC1, ACC2 | ACC3 | ACC4 |
| adder_8bit | ADD1, ADD2, ADD3, ADD4, ADD7 | ADD5, ADD6 | - | - |
| apb_slave | APB1, APB3, APB6, APB7, APB9, APB10, APB11, APB12, APB13, APB17, APB18 | APB2, APB4, APB5, APB8, APB14, APB15 | - | APB16 |
| arbiter4 | ARB3, ARB5, ARB6, ARB7, ARB8, ARB9, ARB10 | ARB1, ARB2 | ARB4, ARB11, ARB12, ARB15, ARB16, ARB17, ARB18 | ARB13, ARB14 |
| comparator_3bit | CMP1, CMP2, CMP3, CMP4, CMP5, CMP6 | CMP7, CMP8 | - | - |
| fifo_sync | FIFO1, FIFO2, FIFO3, FIFO4, FIFO5, FIFO6, FIFO7, FIFO8, FIFO9, FIFO15 | FIFO12, FIFO18 | FIFO11, FIFO13, FIFO14, FIFO19 | FIFO16, FIFO17 |
| ibex_alu | ALU3, ALU4, ALU5, ALU6, ALU16, ALU17 | ALU7, ALU11, ALU12, ALU13, ALU14, ALU15, ALU18 | ALU1, ALU2, ALU8, ALU9 | ALU10 |
| ibex_csr | CSR4 | CSR1, CSR2, CSR3 | - | - |
| ibex_multdiv_fast | MD2, MD3, MD8, MD9, MD12 | MD1, MD6, MD7, MD13 | - | MD4, MD5, MD10, MD11 |
| multi_16bit | MUL3, MUL5, MUL10 | MUL1, MUL2, MUL6, MUL7, MUL8 | - | - |
| sqrt | SQ4, SQ10 | SQ1, SQ2, SQ3, SQ5, SQ7, SQ8, SQ9, SQ11, SQ13 | - | SQ6, SQ12 |

## Assumptions

### Per design

| design | golden | mined | equivalent | stronger | weaker | missed | exact | acceptable |
|---|---|---|---|---|---|---|---|---|
| **declared vocabulary** | | | | | | | | |
| accumulator | 3 | 11 | 2 | 0 | 1 | 0 | 67% | 67% |
| adder_8bit | 2 | 7 | 1 | 1 | 0 | 0 | 50% | 100% |
| apb_slave | 4 | 22 | 2 | 0 | 2 | 0 | 50% | 50% |
| arbiter4 | 2 | 20 | 0 | 2 | 0 | 0 | 0% | 100% |
| comparator_3bit | 1 | 5 | 0 | 1 | 0 | 0 | 0% | 100% |
| fifo_sync | 2 | 17 | 2 | 0 | 0 | 0 | 100% | 100% |
| ibex_alu | 2 | 11 | 1 | 0 | 1 | 0 | 50% | 50% |
| ibex_csr | 2 | 13 | 2 | 0 | 0 | 0 | 100% | 100% |
| ibex_multdiv_fast | 4 | 20 | 0 | 3 | 1 | 0 | 0% | 75% |
| multi_16bit | 3 | 14 | 1 | 2 | 0 | 0 | 33% | 100% |
| sqrt | 3 | 13 | 0 | 2 | 1 | 0 | 0% | 67% |
| **total (declared)** | **28** | **153** | **11** | **11** | **6** | **0** | **39%** | **79%** |

### Assumptions: which golden clauses, by id (declared vocabulary)

| design | equivalent | recovered as a refinement | recovered weaker | missed |
|---|---|---|---|---|
| accumulator | A1, A3 | - | A2 | - |
| adder_8bit | A2 | A1 | - | - |
| apb_slave | A1, A4 | - | A2, A3 | - |
| arbiter4 | - | A1, A2 | - | - |
| comparator_3bit | - | A1 | - | - |
| fifo_sync | A1, A2 | - | - | - |
| ibex_alu | A1 | - | A2 | - |
| ibex_csr | A1, A2 | - | - | - |
| ibex_multdiv_fast | - | A1, A3, A4 | A2 | - |
| multi_16bit | A2 | A1, A3 | - | - |
| sqrt | - | A1, A2 | A3 | - |

## Mined volume

The flow keeps every clause that survives its checks, so the mined column above is much larger than the golden set. Those extras are true of the traces and they generalise to the held-out runs; they are properties nobody wrote down rather than errors, and no trace-side ranking separates them from the golden ones (measured: support, delay tightness, antecedent size and interface relevance all put the golden witnesses at ranks 20-350 of 200-360). `match/<design>.txt` reports the split per design.

