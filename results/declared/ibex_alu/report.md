# ACE contracts: ibex_alu

- traces: 5 runs, 6000 samples
- temporal backend: harm
- trace budget: full corpus (seed 0)

## Event `comparison_result_o == 1`
- occurrences: 1787 (0.2978 of samples)
- triggers (observed values and interface relations (harm unavailable)):
    - `operand_a_i > operand_b_i` R=0.240 P=0.359 ATCT=428 AFCT=1359 matches 1193, explains 428
- coverage 0.240, overlap 0.000, unassigned 0.760
- episodes: 335 (1654 samples, mode split, provenance ok)

### Assumptions
- `operator_i >= 0` (propositional)
- `operator_i <= 34` (propositional)
- `operand_a_i >= 0` (propositional)
- `operand_a_i <= 4294967295` (propositional)
- `operand_b_i >= 0` (propositional)
- `operand_b_i <= 2147483648` (propositional)
- `G(operand_a_i > operand_b_i |-> (operator_i >= 0))` (propositional)
- `G(operand_a_i > operand_b_i |-> (operator_i <= 34))` (propositional)
- `operator_i == 0` (propositional)
- `operator_i == 1` (propositional)

### Guarantees
- `G((comparison_result_o) |-> comparison_result_o == 1)` (temporal)
- `G((is_equal_result_o) |-> is_equal_result_o == 1)` (temporal)
- `G((operand_b_i == 0) |-> result_o >= -746848256 && result_o <= 131366912)` (temporal)
- `G((operand_b_i == 0) |-> result_o >= operand_b_i)` (temporal)
- `G((operator_i == 0) |-> result_o >= -746848256 && result_o <= 131366912)` (temporal)
- `G((operator_i == 26) |-> result_o <= operand_b_i)` (temporal)
- `G((operator_i == 27) |-> result_o >= -746848256 && result_o <= 131366912)` (temporal)
- `G((operator_i == 28) |-> result_o >= -746848256 && result_o <= 131366912)` (temporal)
- `G((operator_i == 29) |-> result_o >= -746848256 && result_o <= 131366912)` (temporal)
- `G((operator_i == 30) |-> result_o >= -746848256 && result_o <= 131366912)` (temporal)
- `G((operator_i == 32) |-> result_o <= operand_a_i)` (temporal)
- `G((operator_i == 32) |-> result_o <= operand_b_i)` (temporal)
- `G((operator_i == 32) |-> result_o >= -746848256 && result_o <= 131366912)` (temporal)
- `G((operator_i == 34) |-> result_o >= operand_a_i)` (temporal)
- `G((operator_i == 3) |-> result_o >= operand_a_i)` (temporal)
- `G((operator_i == 4) |-> result_o <= operand_b_i)` (temporal)
- `G((operator_i >= 25 && operator_i <= 26) |-> result_o >= -746848256 && result_o <= 131366912)` (temporal)
- `G((result_o >= -746848256 && result_o <= 131366912) |-> result_o >= -1644167168 && result_o <= 2147483647)` (temporal)
- `G((result_o >= -746848256 && result_o <= 131366912) |-> result_o >= -2147483648 && result_o <= 827850752)` (temporal)
- `G((result_o >= 230195200 && result_o <= 656539648) |-> comparison_result_o == 0)` (temporal)
- `G((result_o >= 230195200 && result_o <= 656539648) |-> operator_i == 10)` (temporal)
- `G((result_o >= 230195200 && result_o <= 656539648) |-> result_o * 2 + 1 >= operand_a_i)` (temporal)
- `G((result_o >= 230195200 && result_o <= 656539648) |-> result_o >= -1644167168 && result_o <= 2147483647)` (temporal)
- `G((result_o >= 230195200 && result_o <= 656539648) |-> result_o >= -2147483648 && result_o <= 827850752)` (temporal)
- `G((result_o >= 230195200 && result_o <= 656539648) |-> result_o >= operand_a_i)` (temporal)
- `G((result_o >= 230195200 && result_o <= 656539648) |-> result_o >= operand_b_i)` (temporal)
- `G(operand_a_i > operand_b_i |-> (result_o <= 3925868544))` (propositional)
- `G((operand_a_i < operand_b_i) |-> result_o >= -1644167168 && result_o <= 2147483647)` (temporal)
- `G((operand_a_i == operand_b_i) |-> result_o >= -2147483648 && result_o <= 827850752)` (temporal)
- `G((operand_a_i >= -1 && operand_a_i <= 27941) |-> result_o >= -1644167168 && result_o <= 2147483647)` (temporal)
- `G((operand_a_i >= 28184 && operand_a_i <= 65535) |-> result_o >= -1644167168 && result_o <= 2147483647)` (temporal)
- `G((operand_b_i == 1) |-> result_o >= -1644167168 && result_o <= 2147483647)` (temporal)
- `G((operand_b_i >= 0 && operand_b_i <= 24016) |-> result_o >= -1644167168 && result_o <= 2147483647)` (temporal)
- `G((operand_b_i >= 24169 && operand_b_i <= 65534) |-> result_o >= -1644167168 && result_o <= 2147483647)` (temporal)
- `G(operand_a_i > operand_b_i |-> (is_equal_result_o == 0))` (propositional)
- `G(operand_a_i > operand_b_i |-> (comparison_result_o <= operator_i))` (propositional)
- `G(operand_a_i > operand_b_i |-> (comparison_result_o <= result_o))` (propositional)

- trace consistency: 0 violations over 0 positions
- dropped candidates: 97
- held-out: 10 episodes of the same region, 33 clauses generalise and survive minimization
- reference match: equivalent 0.2222222222222222, acceptable 0.3888888888888889

## Event `is_equal_result_o == 1`
- occurrences: 325 (0.0542 of samples)
- triggers (harm and observed values):
    - `operand_a_i > operand_b_i` R=0.370 P=0.101 ATCT=120 AFCT=205 matches 1193, explains 120
    - `operand_b_i == 1` R=0.278 P=0.360 ATCT=90 AFCT=235 matches 250, explains 90
- coverage 0.538, overlap 0.108, unassigned 0.462
- episodes: 85 (645 samples, mode split, provenance ok)

### Assumptions
- `operator_i >= 0` (propositional)
- `operator_i <= 34` (propositional)
- `operand_a_i >= 0` (propositional)
- `operand_a_i <= 4294967295` (propositional)
- `operand_b_i >= 0` (propositional)
- `operand_b_i <= 2147483648` (propositional)
- `G(operand_a_i > operand_b_i |-> (operator_i >= 0))` (propositional)
- `G(operand_b_i == 1 |-> (operator_i >= 0))` (propositional)
- `G(operand_b_i == 1 |-> (operator_i <= 34))` (propositional)
- `G(operand_b_i == 1 |-> (operand_a_i >= 0))` (propositional)
- `operator_i == 0` (propositional)
- `operator_i == 1` (propositional)
- `operator_i == 2` (propositional)

### Guarantees
- `G((comparison_result_o) |-> comparison_result_o == 1)` (temporal)
- `G((is_equal_result_o) |-> is_equal_result_o == 1)` (temporal)
- `G((operand_a_i == 12345) |-> result_o <= operand_a_i)` (temporal)
- `G((operand_a_i == 1) |-> result_o * 2 + 1 >= operand_a_i)` (temporal)
- `G((operand_a_i == 1) |-> result_o <= operand_a_i)` (temporal)
- `G((operand_a_i == 7) |-> result_o >= -2 && result_o <= 32767)` (temporal)
- `G((operand_b_i == 0) |-> result_o >= -2 && result_o <= 32767)` (temporal)
- `G((operand_b_i == 0) |-> result_o >= operand_b_i)` (temporal)
- `G((operator_i == 26) |-> result_o <= operand_b_i)` (temporal)
- `G((operator_i == 2) |-> result_o == operand_a_i - operand_b_i)` (temporal)
- `G((operator_i == 32) |-> result_o <= operand_a_i)` (temporal)
- `G((operator_i == 32) |-> result_o <= operand_b_i)` (temporal)
- `G((operator_i == 33) |-> result_o >= operand_a_i)` (temporal)
- `G((operator_i == 33) |-> result_o >= operand_b_i)` (temporal)
- `G((operator_i == 34) |-> result_o >= operand_a_i)` (temporal)
- `G((operator_i == 34) |-> result_o >= operand_b_i)` (temporal)
- `G((operator_i == 3) |-> result_o <= operand_a_i)` (temporal)
- `G((operator_i == 3) |-> result_o == operand_a_i)` (temporal)
- `G((operator_i == 3) |-> result_o >= operand_a_i)` (temporal)
- `G((operator_i == 4) |-> result_o <= operand_b_i)` (temporal)
- `G((operator_i == 4) |-> result_o >= operand_b_i)` (temporal)
- `G((operator_i == 8) |-> result_o <= operand_a_i)` (temporal)
- `G((operator_i >= 25 && operator_i <= 27) |-> result_o >= -2 && result_o <= 32767)` (temporal)
- `G((operator_i >= 28 && operator_i <= 29) |-> result_o >= -2 && result_o <= 32767)` (temporal)
- `G((operator_i >= 30 && operator_i <= 32) |-> result_o >= -2 && result_o <= 32767)` (temporal)
- `G((result_o == 131070) |-> comparison_result_o == 0)` (temporal)
- `G((result_o == 131070) |-> operand_a_i == 65535)` (temporal)
- `G((result_o == 131070) |-> operator_i == 10)` (temporal)
- `G((result_o == 131070) |-> result_o == operand_a_i * 2)` (temporal)
- `G((result_o == 131070) |-> result_o >= operand_a_i)` (temporal)
- `G((result_o == 2147483647) |-> comparison_result_o)` (temporal)
- `G((result_o == 2147483647) |-> is_equal_result_o)` (temporal)
- `G((result_o == 2147483647) |-> operator_i == 9)` (temporal)
- `G((result_o >= 65534 && result_o <= 65536) |-> operand_a_i == 65535)` (temporal)
- `G((result_o >= 65534 && result_o <= 65536) |-> operand_b_i == 1)` (temporal)
- `G((result_o >= 65534 && result_o <= 65536) |-> result_o * 2 + 1 >= operand_a_i)` (temporal)
- `G((result_o >= 65534 && result_o <= 65536) |-> result_o >= operand_b_i)` (temporal)
- `G(operator_i >= 33 && operator_i <= 34 |-> result_o * 2 + 1 >= operand_a_i)` (temporal)
- `G(result_o >= 131070 && result_o <= 2147483647 |-> operand_b_i == 1)` (temporal)
- `G(result_o >= 131070 && result_o <= 2147483647 |-> result_o * 2 + 1 >= operand_a_i)` (temporal)
- `G(result_o >= 131070 && result_o <= 2147483647 |-> result_o >= operand_b_i)` (temporal)
- `G(operand_a_i > operand_b_i |-> (result_o <= 131070))` (propositional)
- `G(operand_a_i > operand_b_i |-> (is_equal_result_o == 0))` (propositional)
- `G(operand_a_i > operand_b_i |-> (comparison_result_o <= operator_i))` (propositional)
- `G(operand_a_i > operand_b_i |-> (comparison_result_o <= result_o))` (propositional)
- `G(operand_b_i == 1 |-> (is_equal_result_o == 0))` (propositional)
- `G(operand_b_i == 1 |-> (comparison_result_o <= operator_i))` (propositional)
- `G((operand_a_i == 0) |-> result_o >= -2 && result_o <= 32767)` (temporal)

- trace consistency: 0 violations over 0 positions
- dropped candidates: 97
- held-out: 29 episodes of the same region, 39 clauses generalise and survive minimization
- reference match: equivalent 0.2222222222222222, acceptable 0.3888888888888889

## Event `result_o == 0`
- occurrences: 1569 (0.2615 of samples)
- triggers (observed values and interface relations (harm unavailable)):
    - `operand_a_i > operand_b_i` R=0.234 P=0.307 ATCT=366 AFCT=1203 matches 1193, explains 366
- coverage 0.233, overlap 0.000, unassigned 0.767
- episodes: 288 (1362 samples, mode split, provenance ok)

### Assumptions
- `operator_i >= 0` (propositional)
- `operator_i <= 34` (propositional)
- `operand_a_i >= 0` (propositional)
- `operand_a_i <= 4294967295` (propositional)
- `operand_b_i >= 0` (propositional)
- `operand_b_i <= 2147483648` (propositional)
- `G(operand_a_i > operand_b_i |-> (operator_i >= 0))` (propositional)
- `G(operand_a_i > operand_b_i |-> (operator_i <= 34))` (propositional)
- `operator_i == 0` (propositional)
- `operator_i == 1` (propositional)

### Guarantees
- `result_o <= 4294966737` (propositional)
- `G(operand_a_i > operand_b_i |-> (result_o <= 4127588352))` (propositional)
- `G((comparison_result_o) |-> comparison_result_o == 1)` (temporal)
- `G((comparison_result_o) |-> result_o >= -939524096 && result_o <= 364732416)` (temporal)
- `G((is_equal_result_o) |-> is_equal_result_o == 1)` (temporal)
- `G((is_equal_result_o) |-> result_o >= -939524096 && result_o <= 364732416)` (temporal)
- `G((operand_b_i == 0) |-> result_o >= operand_b_i)` (temporal)
- `G((operator_i == 0) |-> result_o >= -939524096 && result_o <= 364732416)` (temporal)
- `G((operator_i == 25) |-> result_o * 2 <= operand_a_i)` (temporal)
- `G((operator_i == 25) |-> result_o <= operand_a_i)` (temporal)
- `G((operator_i == 25) |-> result_o <= operand_b_i)` (temporal)
- `G((operator_i == 25) |-> result_o >= -939524096 && result_o <= 364732416)` (temporal)
- `G((operator_i == 32) |-> result_o <= operand_b_i)` (temporal)
- `G((operator_i == 3) |-> result_o * 2 + 1 >= operand_a_i)` (temporal)
- `G((operator_i == 3) |-> result_o >= operand_a_i)` (temporal)
- `G((operator_i == 3) |-> result_o >= operand_b_i)` (temporal)
- `G((operator_i == 4) |-> result_o <= operand_a_i)` (temporal)
- `G((operator_i == 4) |-> result_o <= operand_b_i)` (temporal)
- `G((operator_i == 8) |-> result_o <= operand_a_i)` (temporal)
- `G((operator_i == 8) |-> result_o >= -939524096 && result_o <= 364732416)` (temporal)
- `G((operator_i == 9) |-> result_o <= operand_a_i)` (temporal)
- `G((operator_i == 9) |-> result_o >= -939524096 && result_o <= 364732416)` (temporal)
- `G((operator_i >= 2 && operator_i <= 4) |-> result_o >= -939524096 && result_o <= 364732416)` (temporal)
- `G((operator_i >= 26 && operator_i <= 27) |-> result_o >= -939524096 && result_o <= 364732416)` (temporal)
- `G((operator_i >= 28 && operator_i <= 29) |-> result_o >= -939524096 && result_o <= 364732416)` (temporal)
- `G((operator_i >= 30 && operator_i <= 32) |-> result_o <= operand_a_i)` (temporal)
- `G((operator_i >= 30 && operator_i <= 32) |-> result_o >= -939524096 && result_o <= 364732416)` (temporal)
- `G((operator_i >= 33 && operator_i <= 34) |-> result_o * 2 + 1 >= operand_a_i)` (temporal)
- `G((operator_i >= 33 && operator_i <= 34) |-> result_o >= -939524096 && result_o <= 364732416)` (temporal)
- `G((operator_i >= 33 && operator_i <= 34) |-> result_o >= operand_a_i)` (temporal)
- `G((operator_i >= 33 && operator_i <= 34) |-> result_o >= operand_b_i)` (temporal)
- `G((result_o >= 1031798784 && result_o <= 1685848064) |-> comparison_result_o == 0)` (temporal)
- `G((result_o >= 1031798784 && result_o <= 1685848064) |-> operand_b_i >= 0 && operand_b_i <= 23228)` (temporal)
- `G((result_o >= 1031798784 && result_o <= 1685848064) |-> operator_i == 10)` (temporal)
- `G((result_o >= 1031798784 && result_o <= 1685848064) |-> result_o * 2 + 1 >= operand_a_i)` (temporal)
- `G((result_o >= 1031798784 && result_o <= 1685848064) |-> result_o >= operand_a_i)` (temporal)
- `G((result_o >= 1031798784 && result_o <= 1685848064) |-> result_o >= operand_b_i)` (temporal)
- `G(operand_b_i >= 0 && operand_b_i <= 1 |-> result_o >= -939524096 && result_o <= 364732416)` (temporal)
- `G((operand_b_i >= 23608 && operand_b_i <= 65338) |-> result_o >= -939524096 && result_o <= 364732416)` (temporal)
- `G((operator_i >= 0 && operator_i <= 1) |-> result_o >= -939524096 && result_o <= 364732416)` (temporal)
- `G(operand_a_i > operand_b_i |-> (is_equal_result_o == 0))` (propositional)
- `G(operand_a_i > operand_b_i |-> (comparison_result_o <= operator_i))` (propositional)
- `G(operand_a_i > operand_b_i |-> (comparison_result_o <= result_o))` (propositional)

- trace consistency: 0 violations over 0 positions
- dropped candidates: 75
- held-out: 19 episodes of the same region, 30 clauses generalise and survive minimization
- reference match: equivalent 0.2222222222222222, acceptable 0.3888888888888889

## Stage times (s)

- load: 0.0209
- 1_label:comparison_result_o == 1: 0.0016
- 2_triggers:comparison_result_o == 1: 0.4123
- 3_episodes:comparison_result_o == 1: 0.0259
- 4_mine:comparison_result_o == 1: 1.1092
- 1_label:is_equal_result_o == 1: 0.0011
- 2_triggers:is_equal_result_o == 1: 0.366
- 3_episodes:is_equal_result_o == 1: 0.0064
- 4_mine:is_equal_result_o == 1: 0.8132
- 1_label:result_o == 0: 0.0016
- 2_triggers:result_o == 0: 0.3578
- 3_episodes:result_o == 0: 0.0181
- 4_mine:result_o == 0: 0.9526
- 5_merge: 0.1494
