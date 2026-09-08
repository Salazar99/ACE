# Mining report: golden contracts against what the flow mined

11 designs. Golden contracts are the benchmark's reference set - hand-written, then confirmed on the mining and held-out corpora. Mined contracts are what the flow produced from the traces alone.

Two vocabulary settings are reported. **declared** uses each design's `extra_props`, which for this benchmark were written from the golden contracts, so it measures the flow given a good vocabulary. **interface** derives the vocabulary mechanically from the interface (`auto_vocabulary`, hints removed), so nothing about the golden set reaches the search space.

Categories are trace-bounded: *equivalent* (a mined clause says exactly this), *mined-stronger* (a mined clause implies it - a refinement), *mined-weaker* (the flow found a weaker form), *missed*. `exact` is the equivalent share; `acceptable` counts equivalent plus refinements.

The per-design files: `golden/<design>.txt`, `mined/<design>.txt`, `mined_interface/<design>.txt`, `match/<design>.txt`.

## Guarantees

### Per design

| design | golden | mined | equivalent | stronger | weaker | missed | exact | acceptable |
|---|---|---|---|---|---|---|---|---|
| **declared vocabulary** | | | | | | | | |
| accumulator | 6 | 120 | 3 | 2 | 0 | 1 | 50% | 83% |
| adder_8bit | 7 | 26 | 4 | 1 | 1 | 1 | 57% | 71% |
| apb_slave | 18 | 243 | 3 | 6 | 4 | 5 | 17% | 50% |
| arbiter4 | 18 | 384 | 15 | 2 | 1 | 0 | 83% | 94% |
| comparator_3bit | 8 | 47 | 6 | 2 | 0 | 0 | 75% | 100% |
| fifo_sync | 19 | 159 | 9 | 3 | 4 | 3 | 47% | 63% |
| ibex_alu | 18 | 303 | 7 | 6 | 0 | 5 | 39% | 72% |
| ibex_csr | 6 | 24 | 1 | 3 | 0 | 2 | 17% | 67% |
| ibex_multdiv_fast | 13 | 368 | 5 | 6 | 0 | 2 | 38% | 85% |
| multi_16bit | 9 | 199 | 5 | 4 | 0 | 0 | 56% | 100% |
| sqrt | 13 | 219 | 6 | 6 | 0 | 1 | 46% | 92% |
| **total (declared)** | **135** | **2092** | **64** | **41** | **10** | **20** | **47%** | **78%** |
| **interface vocabulary** | | | | | | | | |
| accumulator | 6 | 509 | 2 | 2 | 0 | 2 | 33% | 67% |
| adder_8bit | 7 | 304 | 4 | 1 | 1 | 1 | 57% | 71% |
| apb_slave | 18 | 861 | 3 | 6 | 3 | 6 | 17% | 50% |
| arbiter4 | 18 | 856 | 4 | 1 | 5 | 8 | 22% | 28% |
| comparator_3bit | 8 | 307 | 6 | 1 | 1 | 0 | 75% | 88% |
| fifo_sync | 19 | 489 | 6 | 3 | 3 | 7 | 32% | 47% |
| ibex_alu | 18 | 542 | 1 | 9 | 0 | 8 | 6% | 56% |
| ibex_csr | 6 | 865 | 1 | 4 | 0 | 1 | 17% | 83% |
| ibex_multdiv_fast | 13 | 551 | 1 | 2 | 0 | 10 | 8% | 23% |
| multi_16bit | 9 | 456 | 3 | 5 | 0 | 1 | 33% | 89% |
| sqrt | 13 | 561 | 4 | 3 | 0 | 6 | 31% | 54% |
| **total (interface)** | **135** | **6301** | **35** | **37** | **13** | **50** | **26%** | **53%** |

### Guarantees: which golden clauses, by id (declared vocabulary)

| design | equivalent | recovered as a refinement | recovered weaker | missed |
|---|---|---|---|---|
| accumulator | ACC2, ACC3, ACC5 | ACC1, ACC4 | - | ACC6 |
| adder_8bit | ADD1, ADD2, ADD3, ADD4 | ADD6 | ADD7 | ADD5 |
| apb_slave | APB6, APB11, APB13 | APB1, APB2, APB4, APB5, APB8, APB15 | APB3, APB7, APB9, APB10 | APB12, APB14, APB16, APB17, APB18 |
| arbiter4 | ARB3, ARB4, ARB5, ARB6, ARB7, ARB8, ARB9, ARB10, ARB12, ARB13, ARB14, ARB15, ARB16, ARB17, ARB18 | ARB1, ARB2 | ARB11 | - |
| comparator_3bit | CMP1, CMP2, CMP3, CMP4, CMP5, CMP6 | CMP7, CMP8 | - | - |
| fifo_sync | FIFO3, FIFO4, FIFO5, FIFO6, FIFO7, FIFO11, FIFO13, FIFO15, FIFO19 | FIFO12, FIFO17, FIFO18 | FIFO1, FIFO2, FIFO8, FIFO9 | FIFO10, FIFO14, FIFO16 |
| ibex_alu | ALU2, ALU4, ALU5, ALU6, ALU7, ALU12, ALU17 | ALU1, ALU11, ALU13, ALU14, ALU15, ALU18 | - | ALU3, ALU8, ALU9, ALU10, ALU16 |
| ibex_csr | CSR1 | CSR2, CSR3, CSR4 | - | CSR5, CSR6 |
| ibex_multdiv_fast | MD2, MD3, MD8, MD9, MD12 | MD1, MD6, MD7, MD10, MD11, MD13 | - | MD4, MD5 |
| multi_16bit | MUL2, MUL3, MUL5, MUL8, MUL10 | MUL1, MUL6, MUL7, MUL9 | - | - |
| sqrt | SQ1, SQ3, SQ4, SQ5, SQ6, SQ10 | SQ2, SQ7, SQ8, SQ9, SQ12, SQ13 | - | SQ11 |

## Assumptions

### Per design

| design | golden | mined | equivalent | stronger | weaker | missed | exact | acceptable |
|---|---|---|---|---|---|---|---|---|
| **declared vocabulary** | | | | | | | | |
| accumulator | 3 | 12 | 1 | 1 | 1 | 0 | 33% | 67% |
| adder_8bit | 2 | 7 | 1 | 1 | 0 | 0 | 50% | 100% |
| apb_slave | 4 | 23 | 1 | 2 | 1 | 0 | 25% | 75% |
| arbiter4 | 2 | 18 | 0 | 2 | 0 | 0 | 0% | 100% |
| comparator_3bit | 1 | 5 | 0 | 1 | 0 | 0 | 0% | 100% |
| fifo_sync | 2 | 14 | 1 | 1 | 0 | 0 | 50% | 100% |
| ibex_alu | 2 | 11 | 1 | 1 | 0 | 0 | 50% | 100% |
| ibex_csr | 2 | 10 | 2 | 0 | 0 | 0 | 100% | 100% |
| ibex_multdiv_fast | 4 | 18 | 0 | 3 | 1 | 0 | 0% | 75% |
| multi_16bit | 3 | 11 | 0 | 1 | 2 | 0 | 0% | 33% |
| sqrt | 3 | 7 | 0 | 0 | 3 | 0 | 0% | 0% |
| **total (declared)** | **28** | **136** | **7** | **13** | **8** | **0** | **25%** | **71%** |
| **interface vocabulary** | | | | | | | | |
| accumulator | 3 | 12 | 2 | 1 | 0 | 0 | 67% | 100% |
| adder_8bit | 2 | 7 | 1 | 1 | 0 | 0 | 50% | 100% |
| apb_slave | 4 | 23 | 1 | 2 | 1 | 0 | 25% | 75% |
| arbiter4 | 2 | 18 | 0 | 2 | 0 | 0 | 0% | 100% |
| comparator_3bit | 1 | 5 | 0 | 1 | 0 | 0 | 0% | 100% |
| fifo_sync | 2 | 15 | 1 | 1 | 0 | 0 | 50% | 100% |
| ibex_alu | 2 | 11 | 1 | 1 | 0 | 0 | 50% | 100% |
| ibex_csr | 2 | 15 | 2 | 0 | 0 | 0 | 100% | 100% |
| ibex_multdiv_fast | 4 | 18 | 0 | 3 | 1 | 0 | 0% | 75% |
| multi_16bit | 3 | 11 | 0 | 1 | 2 | 0 | 0% | 33% |
| sqrt | 3 | 9 | 0 | 2 | 1 | 0 | 0% | 67% |
| **total (interface)** | **28** | **144** | **8** | **15** | **5** | **0** | **29%** | **82%** |

### Assumptions: which golden clauses, by id (declared vocabulary)

| design | equivalent | recovered as a refinement | recovered weaker | missed |
|---|---|---|---|---|
| accumulator | A3 | A1 | A2 | - |
| adder_8bit | A2 | A1 | - | - |
| apb_slave | A4 | A1, A2 | A3 | - |
| arbiter4 | - | A1, A2 | - | - |
| comparator_3bit | - | A1 | - | - |
| fifo_sync | A2 | A1 | - | - |
| ibex_alu | A1 | A2 | - | - |
| ibex_csr | A1, A2 | - | - | - |
| ibex_multdiv_fast | - | A1, A3, A4 | A2 | - |
| multi_16bit | - | A3 | A1, A2 | - |
| sqrt | - | - | A1, A2, A3 | - |

## Mined volume

The flow keeps every clause that survives its checks, so the mined column above is much larger than the golden set. Those extras are true of the traces and they generalise to the held-out runs; they are properties nobody wrote down rather than errors, and no trace-side ranking separates them from the golden ones (measured: support, delay tightness, antecedent size and interface relevance all put the golden witnesses at ranks 20-350 of 200-360). `match/<design>.txt` reports the split per design.

