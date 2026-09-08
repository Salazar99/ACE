# ACE2 contracts: comparator_3bit

- traces: 5 runs, 2000 samples
- temporal backend: in-process-templates
- trace budget: full corpus (seed 0)

## Event `A_greater == 1`
- occurrences: 869 (0.4345 of samples)
- triggers (observed values and interface relations (harm unavailable)):
    - `B == 7` R=0.556 ATCT=139 AFCT=111 explains 139
    - `A == 5` R=0.508 ATCT=95 AFCT=92 explains 95
- coverage 0.247, overlap 0.022, unassigned 0.753
- episodes: 155 (777 samples, mode split, provenance ok)

### Assumptions
- `A >= 0` (propositional)
- `A <= 7` (propositional)
- `B >= 0` (propositional)
- `B <= 7` (propositional)
- `G(B == 7 |-> (A >= 0))` (propositional)
- `G(B == 7 |-> (A <= 7))` (propositional)
- `G(A == 5 |-> (B >= 0))` (propositional)
- `G(A == 5 |-> (B <= 7))` (propositional)

### Guarantees
- `G(B == 7 |-> (A_equal <= A))` (propositional)
- `G(A == 5 |-> (A_equal <= B))` (propositional)
- `G((A >= B) |-> (A_less == 0))` (temporal)
- `G((A <= B) |-> (A_greater == 0))` (temporal)
- `G((A > B) |-> ((A_equal == 0) && (A_greater == 1)))` (temporal)
- `G((A > B) |-> ((A_equal == 0) && (A_less == 0)))` (temporal)
- `G((A > B) |-> ((A_greater == 1) && (A_equal == 0)))` (temporal)
- `G((A > B) |-> ((A_greater == 1) && (A_less == 0)))` (temporal)
- `G((A > B) |-> ((A_less == 0) && (A_equal == 0)))` (temporal)
- `G((A > B) |-> ((A_less == 0) && (A_greater == 1)))` (temporal)
- `G((A > B) |-> (A_equal == 0))` (temporal)
- `G((A > B) |-> (A_greater == 1))` (temporal)
- `G((A < B) |-> ((A_equal == 0) && (A_greater == 0)))` (temporal)
- `G((A < B) |-> ((A_equal == 0) && (A_less == 1)))` (temporal)
- `G((A < B) |-> ((A_greater == 0) && (A_equal == 0)))` (temporal)
- `G((A < B) |-> ((A_greater == 0) && (A_less == 1)))` (temporal)
- `G((A < B) |-> ((A_less == 1) && (A_equal == 0)))` (temporal)
- `G((A < B) |-> ((A_less == 1) && (A_greater == 0)))` (temporal)
- `G((A < B) |-> (A_equal == 0))` (temporal)
- `G((A < B) |-> (A_less == 1))` (temporal)
- `G(((!(A_greater == 1)) ##1 (A_greater == 1)) |-> ((A_equal == 0) && (A_greater == 1)))` (temporal)
- `G(((!(A_greater == 1)) ##1 (A_greater == 1)) |-> ((A_equal == 0) && (A_less == 0)))` (temporal)
- `G(((!(A_greater == 1)) ##1 (A_greater == 1)) |-> ((A_greater == 1) && (A_equal == 0)))` (temporal)
- `G(((!(A_greater == 1)) ##1 (A_greater == 1)) |-> ((A_greater == 1) && (A_less == 0)))` (temporal)
- `G(((!(A_greater == 1)) ##1 (A_greater == 1)) |-> ((A_less == 0) && (A_equal == 0)))` (temporal)
- `G(((!(A_greater == 1)) ##1 (A_greater == 1)) |-> ((A_less == 0) && (A_greater == 1)))` (temporal)
- `G(((!(A_greater == 1)) ##1 (A_greater == 1)) |-> (A_equal == 0))` (temporal)
- `G(((!(A_greater == 1)) ##1 (A_greater == 1)) |-> (A_greater == 1))` (temporal)
- `G(((!(A_greater == 1)) ##1 (A_greater == 1)) |-> (A_less == 0))` (temporal)
- `G(((A_less == 1) ##1 (!(A_less == 1))) |-> (A_less == 0))` (temporal)
- `G(((A_greater == 1) ##1 (!(A_greater == 1))) |-> (A_greater == 0))` (temporal)
- `G(((!(A_less == 1)) ##1 (A_less == 1)) |-> ((A_equal == 0) && (A_greater == 0)))` (temporal)
- `G(((!(A_less == 1)) ##1 (A_less == 1)) |-> ((A_equal == 0) && (A_less == 1)))` (temporal)
- `G(((!(A_less == 1)) ##1 (A_less == 1)) |-> ((A_greater == 0) && (A_equal == 0)))` (temporal)
- `G(((!(A_less == 1)) ##1 (A_less == 1)) |-> ((A_greater == 0) && (A_less == 1)))` (temporal)
- `G(((!(A_less == 1)) ##1 (A_less == 1)) |-> ((A_less == 1) && (A_equal == 0)))` (temporal)
- `G(((!(A_less == 1)) ##1 (A_less == 1)) |-> ((A_less == 1) && (A_greater == 0)))` (temporal)
- `G(((!(A_less == 1)) ##1 (A_less == 1)) |-> (A_equal == 0))` (temporal)
- `G(((!(A_less == 1)) ##1 (A_less == 1)) |-> (A_greater == 0))` (temporal)
- `G(((!(A_less == 1)) ##1 (A_less == 1)) |-> (A_less == 1))` (temporal)
- `G((A == B) |-> (A_equal == 1))` (temporal)
- `G(((A_equal == 1) ##1 (!(A_equal == 1))) |-> (A_equal == 0))` (temporal)
- `G(((!(A_equal == 1)) ##1 (A_equal == 1)) |-> (A_equal == 1))` (temporal)
- `G(((!(A_equal == 1)) ##1 (A_equal == 1)) |-> (A_greater == 0))` (temporal)
- `G(((!(A_equal == 1)) ##1 (A_equal == 1)) |-> (A_less == 0))` (temporal)

- trace consistency: 0 violations over 777 positions
- dropped candidates: 219
- held-out: 64 episodes of the same region, 29 clauses generalise and survive minimization
- reference match: equivalent 0.75, acceptable 1.0

## Event `A_equal == 1`
skipped: no candidate passed selection

## Event `A_less == 1`
- occurrences: 896 (0.4480 of samples)
- triggers (observed values and interface relations (harm unavailable)):
    - `A == B` R=0.592 ATCT=128 AFCT=88 explains 128
    - `B == 6` R=0.542 ATCT=116 AFCT=98 explains 116
- coverage 0.260, overlap 0.012, unassigned 0.740
- episodes: 153 (829 samples, mode split, provenance ok)

### Assumptions
- `A >= 0` (propositional)
- `A <= 7` (propositional)
- `B >= 0` (propositional)
- `B <= 7` (propositional)
- `G(B == 6 |-> (A >= 0))` (propositional)
- `G(B == 6 |-> (A <= 7))` (propositional)

### Guarantees
- `G(A == B |-> (A_equal == 1))` (propositional)
- `G(B == 6 |-> (A_equal <= A))` (propositional)
- `G((A <= B) |-> (A_greater == 0))` (temporal)
- `G((A < B) |-> ((A_equal == 0) && (A_greater == 0)))` (temporal)
- `G((A < B) |-> ((A_equal == 0) && (A_less == 1)))` (temporal)
- `G((A < B) |-> ((A_greater == 0) && (A_equal == 0)))` (temporal)
- `G((A < B) |-> ((A_greater == 0) && (A_less == 1)))` (temporal)
- `G((A < B) |-> ((A_less == 1) && (A_equal == 0)))` (temporal)
- `G((A < B) |-> ((A_less == 1) && (A_greater == 0)))` (temporal)
- `G((A < B) |-> (A_equal == 0))` (temporal)
- `G((A < B) |-> (A_less == 1))` (temporal)
- `G((A >= B) |-> (A_less == 0))` (temporal)
- `G((A > B) |-> ((A_equal == 0) && (A_greater == 1)))` (temporal)
- `G((A > B) |-> ((A_equal == 0) && (A_less == 0)))` (temporal)
- `G((A > B) |-> ((A_greater == 1) && (A_equal == 0)))` (temporal)
- `G((A > B) |-> ((A_greater == 1) && (A_less == 0)))` (temporal)
- `G((A > B) |-> ((A_less == 0) && (A_equal == 0)))` (temporal)
- `G((A > B) |-> ((A_less == 0) && (A_greater == 1)))` (temporal)
- `G((A > B) |-> (A_equal == 0))` (temporal)
- `G((A > B) |-> (A_greater == 1))` (temporal)
- `G(((!(A_less == 1)) ##1 (A_less == 1)) |-> ((A_equal == 0) && (A_greater == 0)))` (temporal)
- `G(((!(A_less == 1)) ##1 (A_less == 1)) |-> ((A_equal == 0) && (A_less == 1)))` (temporal)
- `G(((!(A_less == 1)) ##1 (A_less == 1)) |-> ((A_greater == 0) && (A_equal == 0)))` (temporal)
- `G(((!(A_less == 1)) ##1 (A_less == 1)) |-> ((A_greater == 0) && (A_less == 1)))` (temporal)
- `G(((!(A_less == 1)) ##1 (A_less == 1)) |-> ((A_less == 1) && (A_equal == 0)))` (temporal)
- `G(((!(A_less == 1)) ##1 (A_less == 1)) |-> ((A_less == 1) && (A_greater == 0)))` (temporal)
- `G(((!(A_less == 1)) ##1 (A_less == 1)) |-> (A_equal == 0))` (temporal)
- `G(((!(A_less == 1)) ##1 (A_less == 1)) |-> (A_greater == 0))` (temporal)
- `G(((!(A_less == 1)) ##1 (A_less == 1)) |-> (A_less == 1))` (temporal)
- `G(((A_less == 1) ##1 (!(A_less == 1))) |-> (A_less == 0))` (temporal)
- `G(((A_equal == 1) ##1 (!(A_equal == 1))) |-> (A_equal == 0))` (temporal)
- `G(((!(A_equal == 1)) ##1 (A_equal == 1)) |-> (A_equal == 1))` (temporal)
- `G(((!(A_equal == 1)) ##1 (A_equal == 1)) |-> (A_greater == 0))` (temporal)
- `G(((!(A_equal == 1)) ##1 (A_equal == 1)) |-> (A_less == 0))` (temporal)
- `G(((A_greater == 1) ##1 (!(A_greater == 1))) |-> (A_greater == 0))` (temporal)
- `G(((!(A_greater == 1)) ##1 (A_greater == 1)) |-> ((A_equal == 0) && (A_greater == 1)))` (temporal)
- `G(((!(A_greater == 1)) ##1 (A_greater == 1)) |-> ((A_equal == 0) && (A_less == 0)))` (temporal)
- `G(((!(A_greater == 1)) ##1 (A_greater == 1)) |-> ((A_greater == 1) && (A_equal == 0)))` (temporal)
- `G(((!(A_greater == 1)) ##1 (A_greater == 1)) |-> ((A_greater == 1) && (A_less == 0)))` (temporal)
- `G(((!(A_greater == 1)) ##1 (A_greater == 1)) |-> ((A_less == 0) && (A_equal == 0)))` (temporal)
- `G(((!(A_greater == 1)) ##1 (A_greater == 1)) |-> ((A_less == 0) && (A_greater == 1)))` (temporal)
- `G(((!(A_greater == 1)) ##1 (A_greater == 1)) |-> (A_equal == 0))` (temporal)
- `G(((!(A_greater == 1)) ##1 (A_greater == 1)) |-> (A_greater == 1))` (temporal)
- `G(((!(A_greater == 1)) ##1 (A_greater == 1)) |-> (A_less == 0))` (temporal)

- trace consistency: 0 violations over 829 positions
- dropped candidates: 217
- held-out: 66 episodes of the same region, 26 clauses generalise and survive minimization
- reference match: equivalent 0.75, acceptable 1.0

## Stage times (s)

- load: 0.0093
- 1_label:A_greater == 1: 0.0017
- 2_triggers:A_greater == 1: 0.3515
- 3_episodes:A_greater == 1: 0.029
- 4_mine:A_greater == 1: 2.7548
- 1_label:A_equal == 1: 0.0012
- 2_triggers:A_equal == 1: 0.3072
- 1_label:A_less == 1: 0.0014
- 2_triggers:A_less == 1: 0.3106
- 3_episodes:A_less == 1: 0.0272
- 4_mine:A_less == 1: 2.857
