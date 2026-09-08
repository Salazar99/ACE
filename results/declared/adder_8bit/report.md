# ACE2 contracts: adder_8bit

- traces: 5 runs, 2500 samples
- temporal backend: in-process-templates
- trace budget: full corpus (seed 0)

## Event `cout == 1`
- occurrences: 1317 (0.5268 of samples)
- triggers (observed values and interface relations (harm unavailable)):
    - `cin == 0` R=0.539 ATCT=344 AFCT=294 explains 344
    - `a > b` R=0.541 ATCT=275 AFCT=233 explains 275
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
- `G((a + b + cin >= 256) |-> (cout == 1))` (temporal)
- `G((cout == 1) |-> ((cout == 1) && (sum == a + b + cin - 256)))` (temporal)
- `G((cout == 1) |-> (sum == a + b + cin - 256))` (temporal)
- `G((a + b + cin <= 255) |-> (cout == 0))` (temporal)
- `G((cout == 0) |-> ((cout == 0) && (sum == a + b + cin)))` (temporal)
- `G((cout == 0) |-> (sum == a + b + cin))` (temporal)
- `G(((!(cout == 1)) ##1 (cout == 1)) |-> ((cout == 1) && (sum == a + b + cin - 256)))` (temporal)
- `G(((!(cout == 1)) ##1 (cout == 1)) |-> (cout == 1))` (temporal)
- `G(((!(cout == 1)) ##1 (cout == 1)) |-> (sum == a + b + cin - 256))` (temporal)
- `G(((cout == 1) ##1 (!(cout == 1))) |-> ((cout == 0) && (sum == a + b + cin)))` (temporal)
- `G(((cout == 1) ##1 (!(cout == 1))) |-> (cout == 0))` (temporal)
- `G(((cout == 1) ##1 (!(cout == 1))) |-> (sum == a + b + cin))` (temporal)
- `G((sum == 3) && (a + b + cin >= 256) |-> ((cout == 1) && (sum == 3)))` (temporal)
- `G((sum == 0) && (a + b + cin >= 256) |-> ((cout == 1) && (sum == 0)))` (temporal)
- `G((sum == 0) && (a + b + cin >= 256) |-> ((sum == 0) && (cout == 1)))` (temporal)
- `G((sum == 6) && (a + b + cin >= 256) |-> ((cout == 1) && (sum == 6)))` (temporal)
- `G((sum == 4) && (a + b + cin >= 256) |-> ((cout == 1) && (sum == 4)))` (temporal)
- `G((sum == 1) && (a + b + cin >= 256) |-> ((cout == 1) && (sum == 1)))` (temporal)
- `G((sum == 1) && (a + b + cin >= 256) |-> ((sum == 1) && (cout == 1)))` (temporal)
- `G((sum == 5) && (a + b + cin >= 256) |-> ((cout == 1) && (sum == 5)))` (temporal)
- `G((cin == 0) && (sum == 0) |-> (sum == cin))` (temporal)
- `G((cin == 1) && (sum == 1) |-> (sum == cin))` (temporal)
- `G((sum == 6) && (a + b + cin <= 255) |-> ((cout == 0) && (sum == 6)))` (temporal)
- `G((a == 1) && (cout == 1) |-> (sum == 0))` (temporal)
- `G((a == 6) && (sum == 6) |-> (sum == a))` (temporal)

- trace consistency: 0 violations over 1709 positions
- dropped candidates: 113
- held-out: 4 episodes of the same region, 28 clauses generalise and survive minimization
- reference match: equivalent 0.5714285714285714, acceptable 0.7142857142857143

## Stage times (s)

- load: 0.0111
- 1_label:cout == 1: 0.0024
- 2_triggers:cout == 1: 0.3811
- 3_episodes:cout == 1: 0.0654
- 4_mine:cout == 1: 2.7433
