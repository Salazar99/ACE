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
│                         #   + formula (evaluator), vocabulary (atoms), traces, backends
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

Python 3.10+ and a HARM build. HARM is the temporal backend and it is required: without it
the flow refuses to start rather than mining the same command a different way
(`tools/install_harm.sh` builds one, `tools/check_harm.py` verifies it).

    python3 tools/check_harm.py                        # the backend is usable (exit 0)
    python3 tests/test_formula.py                      # evaluator semantics
    python3 tests/test_recovery.py                     # selection and comparison traps
    python3 tests/test_flow.py                         # steps 1-5 end to end, on HARM

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

HARM is the temporal backend and there is no other. A run on a machine without it exits
non-zero and writes nothing, and a HARM failure mid-run takes the run down with HARM's own
message rather than mining that region some other way - so every number under `results/`
came from the same miner. `tools/install_harm.sh` builds an installation and
`tools/check_harm.py` reports whether it is usable by the flow.

## Where the numbers are

`reports/MINING_REPORT.md` is the headline: mined against golden, per design, in both
vocabulary settings, plus which golden clauses came back listed by id.

Guarantees, over the 130 golden `G(antecedent -> consequent)` clauses:

| vocabulary | golden | mined | equivalent | refinement | weaker | missed | exact | acceptable |
|---|---|---|---|---|---|---|---|---|
| declared | 130 | 2614 | 53 | 27 | 2 | 48 | 41% | 62% |
| interface | 130 | 21583 | 23 | 14 | 7 | 86 | 18% | 28% |

Assumptions are scored separately, as the invariants they are - 28 golden clauses, none of
them missed in either setting: declared 9 equivalent and 10 refinements (32% exact, 68%
acceptable), interface 11 and 8 (39%, 68%).

Every reference set is confirmed on its own traces before it is used as a reference: all 130
guarantees hold on the mining and held-out corpora, and 28 assumptions are exercised.
Categories are trace-bounded throughout - agreement on the observed corpus, not a proof.

## Dependencies

* python3 (3.10+), standard library only, for the flow, the scoring and the reports
* HARM, required, as the temporal backend (see `ace/README.md`)
* verilator 5.x, to regenerate traces (or QuestaSim, via the same plusargs)
* the FDL26 flow additionally needs `legacy/fdl26/third_party/` and QuestaSim, as before,
  and its scripts still hardcode paths that the move one level down invalidated
