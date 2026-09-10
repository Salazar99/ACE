# ACE

Assume-guarantee Contract Extractor: mines A/G contracts for an IP from its simulation
traces, treating the IP as a black box.

A contract is a pair `(A, G)`. **A** is a conjunction of invariants - propositional
predicates over the environment, no temporal operator. **G** is a conjunction of whole
`G(antecedent -> consequent)` properties. A guarantee is claimed only at the samples where
every invariant of its A holds, and nothing from A is ever folded into a guarantee's
antecedent. `benchmarks/CONTRACTS.md` states the shape in full.

The flow is `ace/`: five steps, one module each, implementing the DATE2027 methodology
(output-guided behavioral decomposition). It replaces the FDL26 fault-injection flow, which
is unchanged under `legacy/fdl26/` so the two can be compared.

## Layout

```bash
├── ace/                  # the flow: labeling, triggers, episodes, mining, validation
│                         #   + formula (evaluator), templates (miner), traces, backends
├── benchmarks/           # the trace benchmark: 11 designs with a confirmed reference set
│   ├── <design>/         #   tb_<design>.sv, generate.sh, config.json, candidates.json,
│   │                     #   reference_contracts.txt, and rtl/ for the 3 protocol blocks
│   ├── traces/<design>/  #   10 traces: 5 mining, 3 held-out, 2 stress
│   ├── run.py            #   build, simulate, validate the reference contracts
│   ├── CONTRACTS.md      #   the contract shape and why the benchmark is built this way
│   └── README.md         #   per-design index: what each one contributes
├── tools/                # score_recovery, report_bundle, report_recovery, HARM check
├── tests/                # self-checks: evaluator semantics, recovery traps, flow end to end
├── results/              # mining output per design, per vocabulary setting
├── reports/              # MINING_REPORT.md + golden / mined / match contract text
├── ARCHITECTURE.md       # how the flow works: the five steps, module by module
├── RECOVERY.md           # what comes back, and why each miss is missed
├── CONTRACT_RECOVERY.md  # per-design expected-against-mined comparison
└── legacy/fdl26/         # the FDL26 flow, its step outputs and its RTL (nothing imports it)
```

## Quickstart

Python 3.10+ and the standard library are enough for everything except producing new traces.

    python3 tests/test_formula.py                      # evaluator semantics
    python3 tests/test_recovery.py                     # selection and comparison traps
    python3 tests/test_flow.py                         # steps 1-5, no external tools

    python3 benchmarks/run.py --validate-only          # re-check all 135 golden contracts
    python3 -m ace benchmarks/sqrt/config.json --out results/declared/sqrt
    python3 tools/score_recovery.py benchmarks/*/config.json --out results
    python3 tools/report_bundle.py --results results --out reports

Regenerating traces needs verilator 5.x on PATH:

    python3 benchmarks/run.py                          # all 11 designs
    python3 benchmarks/run.py --design sqrt
    cd benchmarks/arbiter4 && ./generate.sh            # one design, standalone

The eight FDL26 designs are compiled from `legacy/fdl26/FDL26/FDL26_tests`, which `run.py`
finds on its own (`--ace-root` overrides it, for RTL kept outside this repository). The three
protocol designs carry their own RTL. All testbenches are plain SystemVerilog driven by
plusargs (`+seed`, `+cycles`, `+scenario`, `+out`), so QuestaSim runs them the same way.

HARM is optional. Without it, `ace/templates.py` instantiates the same templates over the
same vocabulary in process; `tools/check_harm.py` reports whether an installation is usable
and `tools/install_harm.sh` builds one.

## Where the numbers are

`reports/MINING_REPORT.md` is the headline: mined against golden, per design, in both
vocabulary settings, plus which golden clauses came back listed by id.

| vocabulary | golden | mined | equivalent | refinement | weaker | missed | exact | acceptable |
|---|---|---|---|---|---|---|---|---|
| declared | 135 | 2092 | 64 | 41 | 10 | 20 | 47% | 78% |
| interface | 135 | 6301 | 35 | 37 | 13 | 50 | 26% | 53% |

Every reference set is confirmed on its own traces before it is used as a reference: all 135
guarantees hold on the mining and held-out corpora, and 28 assumptions are exercised.
Categories are trace-bounded throughout - agreement on the observed corpus, not a proof.

## Dependencies

* python3 (3.10+), standard library only, for the flow, the scoring and the reports
* verilator 5.x, to regenerate traces (or QuestaSim, via the same plusargs)
* HARM, optional, as the temporal backend (see `ace/README.md`)
* the FDL26 flow additionally needs `legacy/fdl26/third_party/` and QuestaSim, as before,
  and its scripts still hardcode paths that the move one level down invalidated
