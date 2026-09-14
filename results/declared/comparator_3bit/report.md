# ACE contracts: comparator_3bit

- traces: 5 runs, 2000 samples
- temporal backend: harm
- trace budget: full corpus (seed 0)

## Event `A_greater == 1`
- occurrences: 869 (0.4345 of samples)
- triggers (observed values and interface relations (harm found no antecedent)):
    - `A > B` R=0.245 P=0.460 ATCT=212 AFCT=657 matches 461, explains 212
- coverage 0.244, overlap 0.000, unassigned 0.756
- episodes: 179 (834 samples, mode split, provenance ok)

### Assumptions
- `A >= 0` (propositional)
- `A <= 7` (propositional)
- `B >= 0` (propositional)
- `B <= 7` (propositional)

### Guarantees
- `G((A < B) |-> A_equal == 0)` (temporal)
- `G((A < B) |-> A_less == 1)` (temporal)
- `G((A < B) |-> A_less)` (temporal)
- `G((A <= B) |-> A_greater == 0)` (temporal)
- `G((A == B) |-> A_equal == 1)` (temporal)
- `G((A == B) |-> A_equal)` (temporal)
- `G((A > B) |-> A_equal == 0)` (temporal)
- `G((A > B) |-> A_greater == 1)` (temporal)
- `G((A > B) |-> A_greater)` (temporal)
- `G((A >= B) |-> A_less == 0)` (temporal)

- trace consistency: 0 violations over 834 positions
- dropped candidates: 29
- held-out: 96 episodes of the same region, 11 clauses generalise and survive minimization
- reference match: equivalent 0.75, acceptable 1.0

## Event `A_equal == 1`
- occurrences: 235 (0.1175 of samples)
- triggers (observed values and interface relations (harm found no antecedent)):
    - `A > B` R=0.245 P=0.124 ATCT=57 AFCT=178 matches 461, explains 57
- coverage 0.243, overlap 0.000, unassigned 0.757
- episodes: 51 (216 samples, mode split, provenance ok)

### Assumptions
- `A >= 0` (propositional)
- `A <= 7` (propositional)
- `B >= 0` (propositional)
- `B <= 7` (propositional)

### Guarantees
- `G((A < B) |-> A_equal == 0)` (temporal)
- `G((A < B) |-> A_less == 1)` (temporal)
- `G((A < B) |-> A_less)` (temporal)
- `G((A <= B) |-> A_greater == 0)` (temporal)
- `G((A == B) |-> A_equal == 1)` (temporal)
- `G((A == B) |-> A_equal)` (temporal)
- `G((A > B) |-> A_equal == 0)` (temporal)
- `G((A > B) |-> A_greater == 1)` (temporal)
- `G((A > B) |-> A_greater)` (temporal)
- `G((A >= B) |-> A_less == 0)` (temporal)

- trace consistency: 0 violations over 216 positions
- dropped candidates: 29
- held-out: 69 episodes of the same region, 11 clauses generalise and survive minimization
- reference match: equivalent 0.75, acceptable 1.0

## Event `A_less == 1`
- occurrences: 896 (0.4480 of samples)
- triggers (observed values and interface relations (harm found no antecedent)):
    - `A < B` R=0.241 P=0.465 ATCT=215 AFCT=681 matches 462, explains 215
- coverage 0.240, overlap 0.000, unassigned 0.760
- episodes: 187 (842 samples, mode split, provenance ok)

### Assumptions
- `A >= 0` (propositional)
- `A <= 7` (propositional)
- `B >= 0` (propositional)
- `B <= 7` (propositional)

### Guarantees
- `G((A < B) |-> A_equal == 0)` (temporal)
- `G((A < B) |-> A_less == 1)` (temporal)
- `G((A < B) |-> A_less)` (temporal)
- `G((A <= B) |-> A_greater == 0)` (temporal)
- `G((A == B) |-> A_equal == 1)` (temporal)
- `G((A == B) |-> A_equal)` (temporal)
- `G((A > B) |-> A_equal == 0)` (temporal)
- `G((A > B) |-> A_greater == 1)` (temporal)
- `G((A > B) |-> A_greater)` (temporal)
- `G((A >= B) |-> A_less == 0)` (temporal)

- trace consistency: 0 violations over 842 positions
- dropped candidates: 29
- held-out: 91 episodes of the same region, 11 clauses generalise and survive minimization
- reference match: equivalent 0.75, acceptable 1.0

## Merged regions

- `A_greater == 1`, `A_equal == 1`: equivalent triggers and equivalent guarantees

## Stage times (s)

- load: 0.007
- 1_label:A_greater == 1: 0.0007
- 2_triggers:A_greater == 1: 0.2365
- 3_episodes:A_greater == 1: 0.0158
- 4_mine:A_greater == 1: 0.2906
- 1_label:A_equal == 1: 0.0004
- 2_triggers:A_equal == 1: 0.2342
- 3_episodes:A_equal == 1: 0.0075
- 4_mine:A_equal == 1: 0.2153
- 1_label:A_less == 1: 0.0008
- 2_triggers:A_less == 1: 0.2347
- 3_episodes:A_less == 1: 0.0147
- 4_mine:A_less == 1: 0.3042
- 5_merge: 0.0139
