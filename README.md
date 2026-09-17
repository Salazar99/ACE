# ACE

Assume-guarantee Contract Extractor: mines A/G contracts for an IP from its simulation
traces, treating the IP as a black box.

A contract is a pair `(A, G)`. **A** is a conjunction of invariants — propositional
predicates over the environment, with no temporal operator. **G** is a conjunction of whole
`G(antecedent -> consequent)` properties. A guarantee is claimed only at the samples where
every invariant of its A holds, and nothing from A is ever folded into a guarantee's
antecedent, so the two sides stay separable: weakening A never silently strengthens G.

The flow is `ace/`: five steps, one module each, implementing output-guided behavioral
decomposition. It labels the traces by an output event, searches for a trigger that explains
each event, cuts the traces into episodes around the confirmed triggers, mines a contract per
region with HARM, and validates and minimizes what comes back.

## Layout

```
├── ace/                  # the flow: labeling, triggers, episodes, mining, validation
│                         #   + formula (evaluator), vocabulary (atoms), traces, backends
├── benchmarks/           # 11 designs, each with a confirmed reference set
│   ├── <design>/         #   tb_<design>.sv, generate.sh, config.json, candidates.json,
│   │                     #   reference_contracts.txt, rtl/
│   ├── traces/<design>/  #   mine_seed*, holdout_seed*, stress_seed*, reference_check.json
│   └── run.py            #   build, simulate, validate the reference contracts
├── tools/                # sweeps, scoring, reporting, HARM install and check
├── tests/                # self-checks: evaluator semantics, recovery traps, flow end to end
└── results/              # what the runs produced (below)
```

## Quickstart

Python 3.10+, standard library only, and a HARM build. HARM is the temporal backend and it is
required: without it the flow refuses to start rather than mining the same command a different
way.

    python3 tools/check_harm.py                        # the backend is usable (exit 0)
    python3 -m pytest -q                               # 30 self-checks
    python3 benchmarks/run.py --validate-only          # re-check every reference contract

`--validate-only` needs nothing beyond this repository: it re-checks all 130 reference
guarantees and 28 reference assumptions against the committed traces and rewrites
`benchmarks/traces/summary.json`, which should come back byte-identical.

Mine one design, score the benchmark, assemble the contract bundle:

    python3 -m ace benchmarks/sqrt/config.json --out results/declared/sqrt
    python3 tools/score_recovery.py benchmarks/*/config.json --out results
    python3 tools/report_bundle.py --results results --out reports

## Where the numbers are

Nothing here restates a figure that can drift. The committed artifacts are the source:

| path | what it holds |
|---|---|
| `results/declared/<design>/contracts.json` | the mined contract, per region |
| `results/declared/<design>/recovery.json` | each reference clause against what was recovered |
| `results/recovery_summary.json` | per design: regions, mined counts, recall, categories |
| `results/sweeps/*.jsonl` | the sweeps — `budget`, `grammar`, `cost`, `baseline` |
| `results/reachability.json` | region-local obligations an undecomposed miner cannot state |

To read them:

    python3 tools/report_rqs.py --section all          # every research question, as tables
    python3 tools/report_recovery.py results           # per-design recovery tables
    python3 tools/reachability.py                      # recompute results/reachability.json

Recovery categories are **trace-bounded**: they record agreement on the observed corpus, not a
proof. `equivalent` is mutual implication over the traces, `mined-stronger` a refinement that
implies the reference, `mined-weaker` the converse, `missed` no related clause at all.

Every reference set is confirmed on its own traces before being used as a reference, which is
what `--validate-only` re-runs.

## Regenerating traces

Needs verilator 5.x on PATH and nothing else — every design carries its own RTL under
`benchmarks/<design>/rtl/`, so there is no external checkout to find:

    python3 benchmarks/run.py                          # all 11 designs
    python3 benchmarks/run.py --design arbiter4        # one of them

`run.py` writes into `benchmarks/traces/`, overwriting the committed corpus every result under
`results/` was mined from. Point it elsewhere with `--out` if that is not what you want.

The protocol designs (`apb_slave`, `arbiter4`, `fifo_sync`) also carry a standalone generator,
and `accumulator` and `sqrt` carry one for their spaced-stimulus traces:

    cd benchmarks/arbiter4 && ./generate.sh            # ten traces, verilator only
    benchmarks/sqrt/generate_spaced.sh /tmp/out        # eight extra traces, disjoint seeds

All testbenches are plain SystemVerilog driven by plusargs (`+seed`, `+cycles`, `+scenario`,
`+out`), so QuestaSim runs them the same way.

## Dependencies

* python3 (3.10+), standard library only, for the flow, the scoring and the reports
* HARM, required, as the temporal backend — `tools/install_harm.sh` builds an installation
  and `tools/check_harm.py` reports whether it is usable by the flow
* verilator 5.x, only to regenerate traces (or QuestaSim, via the same plusargs)

A run on a machine without HARM exits non-zero and writes nothing, and a HARM failure mid-run
takes the run down with HARM's own message rather than mining that region some other way — so
every number under `results/` came from the same miner.
