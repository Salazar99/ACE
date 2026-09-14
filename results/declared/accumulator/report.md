# ACE contracts: accumulator

- traces: 10 runs, 19000 samples
- temporal backend: harm
- trace budget: full corpus (seed 0)

## Event `valid_out == 1`
- occurrences: 1130 (0.0595 of samples)
- triggers (observed values and interface relations (harm found no antecedent)):
    - `rst_n == 1 && valid_in == 1` R=0.487 P=0.940 ATCT=550 AFCT=580 matches 671, explains 550
- coverage 0.487, overlap 0.000, unassigned 0.513
- episodes: 349 (5788 samples, mode split, provenance ok)

### Assumptions
- `rst_n >= 0` (propositional)
- `rst_n <= 1` (propositional)
- `valid_in >= 0` (propositional)
- `valid_in <= 1` (propositional)
- `data_in >= 0` (propositional)
- `data_in <= 255` (propositional)
- `valid_in <= rst_n` (propositional)
- `G(valid_in == 1 |-> (rst_n == 1))` (propositional)
- `G(rst_n == 1 && valid_in == 1 |-> (data_in >= 0))` (propositional)
- `G(rst_n == 1 && valid_in == 1 |-> (data_in <= 255))` (propositional)
- `data_in == 0` (propositional)
- `data_in == 1` (propositional)

### Guarantees
- `G((data_in >= 0 && data_in <= 11) |-> (##[1:5] data_out <= 255))` (temporal)
- `G((data_in >= 0 && data_in <= 11) |-> (##[1:5] valid_out == 0))` (temporal)
- `G((data_in >= 113 && data_in <= 143) |-> (##[1:5] data_out <= 255))` (temporal)
- `G((data_in >= 113 && data_in <= 143) |-> (##[1:5] valid_out == 0))` (temporal)
- `G((data_in >= 12 && data_in <= 28) |-> (##[1:5] data_out <= 255))` (temporal)
- `G((data_in >= 12 && data_in <= 28) |-> (##[1:5] valid_out == 0))` (temporal)
- `G((data_in >= 144 && data_in <= 173) |-> (##[1:5] data_out <= 255))` (temporal)
- `G((data_in >= 144 && data_in <= 173) |-> (##[1:5] valid_out == 0))` (temporal)
- `G((data_in >= 174 && data_in <= 202) |-> (##[1:5] data_out <= 255))` (temporal)
- `G((data_in >= 174 && data_in <= 202) |-> (##[1:5] valid_out == 0))` (temporal)
- `G((data_in >= 204 && data_in <= 231) |-> (##[1:5] data_out <= 255))` (temporal)
- `G((data_in >= 204 && data_in <= 231) |-> (##[1:5] valid_out == 0))` (temporal)
- `G((data_in >= 233 && data_in <= 255) |-> (##[1:5] data_out <= 255))` (temporal)
- `G((data_in >= 233 && data_in <= 255) |-> (##[1:5] valid_out == 0))` (temporal)
- `G((data_in >= 29 && data_in <= 52) |-> (##[1:5] data_out <= 255))` (temporal)
- `G((data_in >= 29 && data_in <= 52) |-> (##[1:5] valid_out == 0))` (temporal)
- `G((data_in >= 53 && data_in <= 81) |-> (##[1:5] data_out <= 255))` (temporal)
- `G((data_in >= 53 && data_in <= 81) |-> (##[1:5] valid_out == 0))` (temporal)
- `G((data_in >= 82 && data_in <= 112) |-> (##[1:5] data_out <= 255))` (temporal)
- `G((data_in >= 82 && data_in <= 112) |-> (##[1:5] valid_out == 0))` (temporal)
- `G((data_out >= 0 && data_out <= 41) |-> data_out <= 255)` (temporal)
- `G((data_out >= 0 && data_out <= 41) |-> (##[1:5] data_out <= 255))` (temporal)
- `G((data_out >= 0 && data_out <= 41) |-> (##[1:5] rst_n))` (temporal)
- `G((data_out >= 0 && data_out <= 41) |-> (##[1:5] valid_out == 0))` (temporal)
- `G((data_out >= 121 && data_out <= 201) |-> data_out <= 255)` (temporal)
- `G((data_out >= 121 && data_out <= 201) |-> rst_n)` (temporal)
- `G((data_out >= 121 && data_out <= 201) |-> (##[1:5] rst_n))` (temporal)
- `G((data_out >= 202 && data_out <= 292) |-> rst_n)` (temporal)
- `G((data_out >= 202 && data_out <= 292) |-> (##[1:5] rst_n))` (temporal)
- `G((data_out >= 294 && data_out <= 399) |-> rst_n)` (temporal)
- `G((data_out >= 294 && data_out <= 399) |-> (##[1:5] rst_n))` (temporal)
- `G((data_out >= 400 && data_out <= 500) |-> rst_n)` (temporal)
- `G((data_out >= 400 && data_out <= 500) |-> (##[1:5] rst_n))` (temporal)
- `G((data_out >= 42 && data_out <= 120) |-> data_out <= 255)` (temporal)
- `G((data_out >= 42 && data_out <= 120) |-> rst_n)` (temporal)
- `G((data_out >= 42 && data_out <= 120) |-> (##[1:5] rst_n))` (temporal)
- `G((data_out >= 501 && data_out <= 607) |-> rst_n)` (temporal)
- `G((data_out >= 501 && data_out <= 607) |-> (##[1:5] rst_n))` (temporal)
- `G((data_out >= 609 && data_out <= 724) |-> rst_n)` (temporal)
- `G((data_out >= 609 && data_out <= 724) |-> (##[1:5] rst_n))` (temporal)
- `G((data_out >= 725 && data_out <= 856) |-> rst_n)` (temporal)
- `G((data_out >= 725 && data_out <= 856) |-> (##[1:5] rst_n))` (temporal)
- `G((data_out >= 860 && data_out <= 1020) |-> rst_n)` (temporal)
- `G((data_out >= 860 && data_out <= 1020) |-> (##[1:5] rst_n))` (temporal)
- `G((rst_n == 0) |-> data_out == 0)` (temporal)
- `G((rst_n == 0) |-> data_out >= 0 && data_out <= 41)` (temporal)
- `G((rst_n == 0) |-> valid_out == 0)` (temporal)
- `G((rst_n == 0) |-> (##[1:5] data_out == 0))` (temporal)
- `G((rst_n) |-> (##[1:5] data_out <= 255))` (temporal)
- `G((rst_n) |-> (##[1:5] valid_out == 0))` (temporal)
- `G((valid_in == 0) |-> (##[1:5] data_out <= 255))` (temporal)
- `G((valid_in == 0) |-> (##[1:5] valid_out == 0))` (temporal)
- `G((valid_out == 1) |-> valid_out)` (temporal)
- `G((valid_out) |-> rst_n)` (temporal)
- `G((valid_out) |-> (##[1:5] rst_n))` (temporal)
- `G((data_out >= 725 && data_out <= 856) |-> (##3 valid_out == 0))` (temporal)
- `G((rst_n == 0) |-> (##4 valid_out == 0))` (temporal)
- `G(rst_n == 1 && valid_in == 1 |-> (data_out <= 1004))` (propositional)
- `G(rst_n == 1 && valid_in == 1 |-> (valid_out <= data_in))` (propositional)
- `G(rst_n == 1 && valid_in == 1 |-> (valid_out <= data_out))` (propositional)

- trace consistency: 0 violations over 0 positions
- dropped candidates: 76
- held-out: 139 episodes of the same region, 57 clauses generalise and survive minimization
- reference match: equivalent 0.4, acceptable 0.4

## Stage times (s)

- load: 0.0963
- 1_label:valid_out == 1: 0.0091
- 2_triggers:valid_out == 1: 1.8054
- 3_episodes:valid_out == 1: 0.0456
- 4_mine:valid_out == 1: 8.6481
- 5_merge: 0.0
