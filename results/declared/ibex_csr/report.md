# ACE2 contracts: ibex_csr

- traces: 5 runs, 2500 samples
- temporal backend: in-process-templates
- trace budget: full corpus (seed 0)

## Event `rd_data_o == 0`
- occurrences: 341 (0.1364 of samples)
- triggers (observed values and interface relations (harm unavailable)):
    - `rst_n == 0 && wr_en_i == 0` R=0.976 ATCT=39 AFCT=0 explains 78
    - `rst_n < wr_en_i` R=0.525 ATCT=30 AFCT=27 explains 30
    - `rst_n == 0 && wr_en_i < wr_data_i` R=0.699 ATCT=64 AFCT=27 explains 98
    - `rst_n == 0` R=0.714 ATCT=69 AFCT=27 explains 108
- coverage 0.317, overlap 0.317, unassigned 0.683
- episodes: 63 (435 samples, mode split, provenance ok)

### Assumptions
- `rst_n >= 0` (propositional)
- `rst_n <= 1` (propositional)
- `wr_en_i >= 0` (propositional)
- `wr_en_i <= 1` (propositional)
- `wr_data_i >= 0` (propositional)
- `wr_data_i <= 65475` (propositional)
- `wr_en_i <= wr_data_i` (propositional)
- `G(rst_n < wr_en_i |-> (wr_data_i >= 1473))` (propositional)
- `G(rst_n < wr_en_i |-> (wr_data_i <= 62521))` (propositional)
- `G(rst_n == 0 |-> (wr_en_i >= 0))` (propositional)
- `G(rst_n == 0 |-> (wr_en_i <= 1))` (propositional)
- `G(rst_n == 0 |-> (wr_data_i <= 65475))` (propositional)
- `G(rst_n == 0 |-> (wr_en_i <= wr_data_i))` (propositional)
- `G(rst_n == 0 |-> (wr_data_i >= 0))` (propositional)

### Guarantees
- `rd_data_o <= 65475` (propositional)
- `G(rst_n == 0 |-> (rd_data_o == 0))` (propositional)
- `G((rst_n == 0) && (wr_en_i == 0) |=> (rd_data_o == 0))` (temporal)
- `G(((rst_n == 1) ##1 (!(rst_n == 1))) |-> (rd_data_o == 0))` (temporal)
- `G(((rst_n == 1) ##1 (!(rst_n == 1))) |=> (rd_data_o == 0))` (temporal)
- `G((wr_data_i == 0) |-> (rd_data_o == 0))` (temporal)
- `G((wr_data_i == 23130) |-> ##2 (rd_data_o == 0))` (temporal)
- `G((wr_data_i == 0) |=> (rd_data_o == 0))` (temporal)
- `G((wr_data_i == 31519) |-> ##2 (rd_data_o == 0))` (temporal)
- `G((wr_en_i == 0) && (wr_data_i == 31519) |=> (rd_data_o == 0))` (temporal)
- `G((wr_data_i == 13193) |-> ##2 (rd_data_o == 0))` (temporal)
- `G((wr_en_i == 0) && (wr_data_i == 13193) |=> (rd_data_o == 0))` (temporal)
- `G(((wr_en_i == 1) ##1 (!(wr_en_i == 1))) |-> ##2 (rd_data_o == 0))` (temporal)
- `G((wr_data_i == 21571) |-> ##2 (rd_data_o == 0))` (temporal)
- `G((wr_en_i == 0) |-> ##[1:2] (rd_data_o == 0))` (temporal)

- trace consistency: 0 violations over 435 positions
- dropped candidates: 40
- held-out: 40 episodes of the same region, 16 clauses generalise and survive minimization
- reference match: equivalent 0.16666666666666666, acceptable 0.3333333333333333

## Event `rd_data_o >= 8388608`
- occurrences: 20 (0.0080 of samples)
- triggers (observed values and interface relations (harm unavailable)):
    - `rst_n < wr_data_i` R=0.857 ATCT=5 AFCT=0 explains 10
    - `rst_n == 1 && wr_data_i == 16777215` R=0.857 ATCT=5 AFCT=0 explains 10
    - `wr_data_i == 16777215` R=0.857 ATCT=5 AFCT=0 explains 10
    - `rst_n == 1 && wr_en_i == wr_data_i` R=0.500 ATCT=5 AFCT=5 explains 5
- coverage 0.500, overlap 0.500, unassigned 0.500
- episodes: 5 (40 samples, mode split, provenance ok)

### Assumptions
- `rst_n == 1` (propositional)
- `wr_en_i >= 0` (propositional)
- `wr_en_i <= 1` (propositional)
- `wr_data_i >= 0` (propositional)
- `wr_data_i <= 16777215` (propositional)
- `G(wr_data_i == 16777215 |-> (rst_n == 1))` (propositional)
- `G(wr_en_i == wr_data_i |-> (rst_n == 1))` (propositional)

### Guarantees
- `G((wr_data_i == 16777215) |=> (rd_data_o == 16777215))` (temporal)
- `G(((wr_en_i == 1) ##1 (!(wr_en_i == 1))) |-> ##2 (rd_data_o == 16777215))` (temporal)
- `G((rd_data_o == 0) |-> ##2 (rd_data_o == 16777215))` (temporal)
- `G((rd_data_o == 1) |-> ##2 (rd_data_o == 0))` (temporal)
- `G((wr_data_i == 0) |=> (rd_data_o == 0))` (temporal)
- `G((wr_en_i == 0) && (wr_data_i == 16777215) |-> (rd_data_o == 16777215))` (temporal)
- `G((wr_data_i == 1) |-> (rd_data_o == 1))` (temporal)
- `G((wr_data_i == 1) |=> (rd_data_o == 1))` (temporal)
- `G((wr_data_i == 42405) |-> (rd_data_o == 16777215))` (temporal)
- `G((wr_en_i == 0) && (wr_data_i == 0) |-> (rd_data_o == 0))` (temporal)
- `G((wr_en_i == 1) && (wr_data_i == 0) |-> (rd_data_o == 1))` (temporal)

- trace consistency: 0 violations over 40 positions
- dropped candidates: 39
- held-out: 3 episodes of the same region, 12 clauses generalise and survive minimization
- reference match: equivalent 0.0, acceptable 0.5

## Stage times (s)

- load: 0.0119
- 1_label:rd_data_o == 0: 0.002
- 2_triggers:rd_data_o == 0: 0.3519
- 3_episodes:rd_data_o == 0: 0.0096
- 4_mine:rd_data_o == 0: 0.4469
- 1_label:rd_data_o >= 8388608: 0.0017
- 2_triggers:rd_data_o >= 8388608: 0.3474
- 3_episodes:rd_data_o >= 8388608: 0.001
- 4_mine:rd_data_o >= 8388608: 0.2666
