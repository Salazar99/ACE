# ACE contracts: adder_8bit

- traces: 5 runs, 2500 samples
- temporal backend: harm
- trace budget: full corpus (seed 0)

## Event `cout == 1`
- occurrences: 1317 (0.5268 of samples)
- triggers (observed values and interface relations (harm unavailable)):
    - `cin == 0` R=0.262 P=0.539 ATCT=344 AFCT=973 matches 638, explains 344
    - `a > b` R=0.209 P=0.541 ATCT=275 AFCT=1042 matches 508, explains 275
- coverage 0.416, overlap 0.054, unassigned 0.584
- episodes: 214 (1709 samples, mode split, provenance ok)

### Assumptions
- `a >= 0` (propositional)
- `a <= 255` (propositional)
- `b >= 0` (propositional)
- `b <= 255` (propositional)
- `cin >= 0` (propositional)
- `cin <= 1` (propositional)
- `G(cin == 0 |-> (a >= 0))` (propositional)
- `G(cin == 0 |-> (a <= 255))` (propositional)
- `G(cin == 0 |-> (b >= 0))` (propositional)
- `G(cin == 0 |-> (b <= 255))` (propositional)
- `G(a > b |-> (cin >= 0))` (propositional)
- `G(a > b |-> (cin <= 1))` (propositional)

### Guarantees
- `G(cin == 0 |-> (cout <= b))` (propositional)
- `G((a + b + cin <= 255) |-> cout == 0)` (temporal)
- `G((a + b + cin <= 255) |-> sum == a + b + cin)` (temporal)
- `G((a + b + cin >= 256) |-> cout)` (temporal)
- `G((cout) |-> cout == 1)` (temporal)
- `G((cout) |-> sum == a + b + cin - 256)` (temporal)

- trace consistency: 0 violations over 1709 positions
- dropped candidates: 22
- held-out: 4 episodes of the same region, 15 clauses generalise and survive minimization
- reference match: equivalent 0.5714285714285714, acceptable 0.7142857142857143

## Stage times (s)

- load: 0.0043
- 1_label:cout == 1: 0.0007
- 2_triggers:cout == 1: 0.185
- 3_episodes:cout == 1: 0.0222
- 4_mine:cout == 1: 0.3036
- 5_merge: 0.0
