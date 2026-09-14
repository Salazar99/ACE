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
| accumulator | 5 | 60 | 2 | 0 | 0 | 3 | 40% | 40% |
| adder_8bit | 7 | 6 | 4 | 1 | 0 | 2 | 57% | 71% |
| apb_slave | 18 | 151 | 4 | 5 | 0 | 9 | 22% | 50% |
| arbiter4 | 18 | 75 | 8 | 2 | 0 | 8 | 44% | 56% |
| comparator_3bit | 8 | 10 | 6 | 2 | 0 | 0 | 75% | 100% |
| fifo_sync | 18 | 205 | 9 | 2 | 0 | 7 | 50% | 61% |
| ibex_alu | 18 | 105 | 6 | 3 | 1 | 8 | 33% | 50% |
| ibex_csr | 4 | 51 | 1 | 3 | 0 | 0 | 25% | 100% |
| ibex_multdiv_fast | 13 | 916 | 5 | 1 | 1 | 6 | 38% | 46% |
| multi_16bit | 8 | 237 | 4 | 3 | 0 | 1 | 50% | 88% |
| sqrt | 13 | 798 | 4 | 5 | 0 | 4 | 31% | 69% |
| **total (declared)** | **130** | **2614** | **53** | **27** | **2** | **48** | **41%** | **62%** |
| **interface vocabulary** | | | | | | | | |
| accumulator | 5 | 559 | 0 | 0 | 1 | 4 | 0% | 0% |
| adder_8bit | 7 | 190 | 2 | 0 | 0 | 5 | 29% | 29% |
| apb_slave | 18 | 770 | 1 | 0 | 0 | 17 | 6% | 6% |
| arbiter4 | 18 | 358 | 4 | 0 | 2 | 12 | 22% | 22% |
| comparator_3bit | 8 | 67 | 5 | 1 | 2 | 0 | 62% | 75% |
| fifo_sync | 18 | 2765 | 4 | 0 | 1 | 13 | 22% | 22% |
| ibex_alu | 18 | 362 | 0 | 2 | 1 | 15 | 0% | 11% |
| ibex_csr | 4 | 758 | 1 | 3 | 0 | 0 | 25% | 100% |
| ibex_multdiv_fast | 13 | 4531 | 0 | 2 | 0 | 11 | 0% | 15% |
| multi_16bit | 8 | 3215 | 2 | 2 | 0 | 4 | 25% | 50% |
| sqrt | 13 | 8008 | 4 | 4 | 0 | 5 | 31% | 62% |
| **total (interface)** | **130** | **21583** | **23** | **14** | **7** | **86** | **18%** | **28%** |

### Guarantees: which golden clauses, by id (declared vocabulary)

| design | equivalent | recovered as a refinement | recovered weaker | missed |
|---|---|---|---|---|
| accumulator | ACC1, ACC2 | - | - | ACC3, ACC4, ACC5 |
| adder_8bit | ADD1, ADD2, ADD3, ADD4 | ADD6 | - | ADD5, ADD7 |
| apb_slave | APB1, APB3, APB6, APB11 | APB2, APB4, APB5, APB8, APB15 | - | APB7, APB9, APB10, APB12, APB13, APB14, APB16, APB17, APB18 |
| arbiter4 | ARB3, ARB4, ARB5, ARB6, ARB7, ARB8, ARB9, ARB10 | ARB1, ARB2 | - | ARB11, ARB12, ARB13, ARB14, ARB15, ARB16, ARB17, ARB18 |
| comparator_3bit | CMP1, CMP2, CMP3, CMP4, CMP5, CMP6 | CMP7, CMP8 | - | - |
| fifo_sync | FIFO1, FIFO2, FIFO3, FIFO4, FIFO5, FIFO6, FIFO7, FIFO8, FIFO9 | FIFO12, FIFO18 | - | FIFO11, FIFO13, FIFO14, FIFO15, FIFO16, FIFO17, FIFO19 |
| ibex_alu | ALU3, ALU4, ALU5, ALU6, ALU16, ALU17 | ALU11, ALU13, ALU14 | ALU8 | ALU1, ALU2, ALU7, ALU9, ALU10, ALU12, ALU15, ALU18 |
| ibex_csr | CSR1 | CSR2, CSR3, CSR4 | - | - |
| ibex_multdiv_fast | MD1, MD7, MD8, MD9, MD13 | MD6 | MD12 | MD2, MD3, MD4, MD5, MD10, MD11 |
| multi_16bit | MUL2, MUL3, MUL5, MUL10 | MUL1, MUL6, MUL7 | - | MUL8 |
| sqrt | SQ1, SQ2, SQ3, SQ10 | SQ5, SQ7, SQ8, SQ11, SQ13 | - | SQ4, SQ6, SQ9, SQ12 |

## Assumptions

### Per design

| design | golden | mined | equivalent | stronger | weaker | missed | exact | acceptable |
|---|---|---|---|---|---|---|---|---|
| **declared vocabulary** | | | | | | | | |
| accumulator | 3 | 10 | 1 | 0 | 2 | 0 | 33% | 33% |
| adder_8bit | 2 | 7 | 1 | 1 | 0 | 0 | 50% | 100% |
| apb_slave | 4 | 21 | 1 | 1 | 2 | 0 | 25% | 50% |
| arbiter4 | 2 | 20 | 0 | 2 | 0 | 0 | 0% | 100% |
| comparator_3bit | 1 | 5 | 0 | 1 | 0 | 0 | 0% | 100% |
| fifo_sync | 2 | 16 | 2 | 0 | 0 | 0 | 100% | 100% |
| ibex_alu | 2 | 10 | 1 | 0 | 1 | 0 | 50% | 50% |
| ibex_csr | 2 | 12 | 2 | 0 | 0 | 0 | 100% | 100% |
| ibex_multdiv_fast | 4 | 20 | 0 | 3 | 1 | 0 | 0% | 75% |
| multi_16bit | 3 | 14 | 1 | 2 | 0 | 0 | 33% | 100% |
| sqrt | 3 | 10 | 0 | 0 | 3 | 0 | 0% | 0% |
| **total (declared)** | **28** | **145** | **9** | **10** | **9** | **0** | **32%** | **68%** |
| **interface vocabulary** | | | | | | | | |
| accumulator | 3 | 11 | 2 | 0 | 1 | 0 | 67% | 67% |
| adder_8bit | 2 | 7 | 1 | 1 | 0 | 0 | 50% | 100% |
| apb_slave | 4 | 22 | 2 | 0 | 2 | 0 | 50% | 50% |
| arbiter4 | 2 | 19 | 0 | 0 | 2 | 0 | 0% | 0% |
| comparator_3bit | 1 | 5 | 0 | 1 | 0 | 0 | 0% | 100% |
| fifo_sync | 2 | 16 | 2 | 0 | 0 | 0 | 100% | 100% |
| ibex_alu | 2 | 10 | 1 | 0 | 1 | 0 | 50% | 50% |
| ibex_csr | 2 | 12 | 2 | 0 | 0 | 0 | 100% | 100% |
| ibex_multdiv_fast | 4 | 20 | 0 | 3 | 1 | 0 | 0% | 75% |
| multi_16bit | 3 | 14 | 1 | 2 | 0 | 0 | 33% | 100% |
| sqrt | 3 | 11 | 0 | 1 | 2 | 0 | 0% | 33% |
| **total (interface)** | **28** | **147** | **11** | **8** | **9** | **0** | **39%** | **68%** |

### Assumptions: which golden clauses, by id (declared vocabulary)

| design | equivalent | recovered as a refinement | recovered weaker | missed |
|---|---|---|---|---|
| accumulator | A3 | - | A1, A2 | - |
| adder_8bit | A2 | A1 | - | - |
| apb_slave | A4 | A1 | A2, A3 | - |
| arbiter4 | - | A1, A2 | - | - |
| comparator_3bit | - | A1 | - | - |
| fifo_sync | A1, A2 | - | - | - |
| ibex_alu | A1 | - | A2 | - |
| ibex_csr | A1, A2 | - | - | - |
| ibex_multdiv_fast | - | A1, A3, A4 | A2 | - |
| multi_16bit | A2 | A1, A3 | - | - |
| sqrt | - | - | A1, A2, A3 | - |

## Mined volume

The flow keeps every clause that survives its checks, so the mined column above is much larger than the golden set. Those extras are true of the traces and they generalise to the held-out runs; they are properties nobody wrote down rather than errors, and no trace-side ranking separates them from the golden ones (measured: support, delay tightness, antecedent size and interface relevance all put the golden witnesses at ranks 20-350 of 200-360). `match/<design>.txt` reports the split per design.

