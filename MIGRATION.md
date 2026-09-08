# What this refactor changed

The repository used to hold the FDL26 flow (fault injection, detection traces, filtering,
HARM, testbench regeneration) plus a first sketch of the new flow in `ace2/`. This refactor
replaces the sketch with a complete implementation of the DATE2027 methodology, adds a trace
benchmark with a confirmed reference contract set, and adds the scoring and reporting that
turn a mining run into the tables of the paper.

The root now holds the current flow and nothing else. The FDL26 flow is unchanged but moved
one level down, into `legacy/fdl26/`, together with its step outputs and its VCD dumps:

    legacy/fdl26/FDL26/                 results, golden specs, and the RTL of 8 designs
    legacy/fdl26/Detection_trace_gen/   detection trace generation
    legacy/fdl26/InvGen/                invariant generation
    legacy/fdl26/tb_generator/          testbench generation
    legacy/fdl26/trace_filtering/       trace filtering (and its filter.py evaluator)
    legacy/fdl26/third_party/           install scripts and third-party tools
    legacy/fdl26/tests/                 the old per-design step outputs (1_csv .. 7_GUARANTEES)
    legacy/fdl26/Verilated-tests/       VCD dumps from the verilated runs
    legacy/fdl26/src/                   the two filter.py fixture CSVs

Its scripts hardcode `$ACEROOT` and absolute paths, so they need their paths pointed at the
new location before they run again; nothing in the current flow reads them. `benchmarks/run.py`
knows about both layouts and finds the RTL either way, so it needs no `--ace-root` inside a
checkout.

Deleted rather than moved: the `ace2/` sketch, the old root `README.md`, `Claude outputs/`
(copies of what `reports/` now generates), and the empty `Copilot_mined_contracts/`. All of
it is in the git history.

## Step map

| FDL26 step | now | change |
|---|---|---|
| `1_csv` (vcd2csv) | `ace/traces.py`, `backends.vcd2csv` | unchanged in substance; the corpus loader keeps runs separate, which the rest of the flow relies on |
| `2_fault_injection` + `Detection_trace_gen/DU_gen.py` | `ace/labeling.py` | fault forcing, IP encapsulation and DU diffing replaced by one linear scan of a declared output predicate over the original traces. No re-simulation |
| `3_harm` (mine DU predictors, sort by `atct-afct`) | `ace/triggers.py` | greedy multi-trigger selection scored by smoothed recall `(ATCT+1)/(ATCT+AFCT+2)`, with match onsets, a support floor and a lift test against the base event rate. The absolute-volume sort is gone; precision/F1 are not reported, because the miner discards false positives and pins precision at 1.0 |
| `4_filtering` (`trace_filtering/filter.py`, zero-pads unselected rows) | `ace/episodes.py` | boundary-preserving windows `[t-h_pre, t+h_post]` clipped out of the anchor's own run. Every sample is an original sample, so nothing needs repairing and nothing needs re-simulating |
| `5_ASSUMPTIONS`, `7_GUARANTEES` | `ace/mining.py` | mined per region on episodes, with the roles fenced (assumptions over environment signals, guarantees over observable outputs) and assembled into `C_r = (A_r, G_r)` with provenance |
| `6_testbench_generator` + re-simulation | dropped | there are no corrupted outputs to re-simulate |
| - | `ace/validation.py` | new: held-out violation rates, equivalence grouping, subsumption removal, reference matching (`equivalent` / `mined-stronger` / `mined-weaker` / `missed`) |
| - | `ace/formula.py` | new: the flow's own finite-trace evaluator. A match is a *set* of end positions, `support()` separates vacuity from satisfaction, and trace-boundary positions are vacuous rather than violations. Labeling, ATCT/AFCT and the held-out check all depend on exactly those details |
| - | `ace/templates.py` | new: in-process template instantiator, so the flow runs end to end without HARM |

## Files replaced

The package is called `ace` and lives at the root; the working name `ace2` is gone, and so
is the sketch it held: `core.py`, `backends.py`, `semantics.py`, `pipeline.py`, `configs/`,
`test_ace2.py` - one module per layer. It is now one module per flow step:

    ace/__init__.py        package
    ace/__main__.py        the flow and the CLI          (was pipeline.py)
    ace/traces.py          corpus I/O                    (was part of core.py)
    ace/labeling.py        Step 1                        (was part of core.py)
    ace/triggers.py        Step 2                        (was part of core.py)
    ace/episodes.py        Step 3                        (was part of core.py)
    ace/mining.py          Step 4                        (was part of pipeline.py)
    ace/validation.py      Step 5                        (was semantics.py)
    ace/formula.py         the evaluator                 (new; was filter.py, loaded dynamically)
    ace/templates.py       template instantiation        (new)
    ace/backends.py        HARM / InvGen / vcd2csv       (rewritten against HARM's real interface)
    ace/config_template.json   every configuration field (was configs/_template.json)

The sketch loaded the assertion evaluator out of `trace_filtering/filter.py` (now `legacy/fdl26/trace_filtering/`). That evaluator
substitutes placeholders by regex, keeps a single match end rather than a set, treats an
implication as satisfied on its first antecedent match, and raises on an arithmetic
right-hand operand. Those are the four details the new flow's measurements depend on, which
is why `formula.py` exists rather than a wrapper.

## Added

`benchmarks/` is new: 11 designs, each with a testbench, a candidate contract set with a
written rationale per contract, and a `reference_contracts.txt` that is regenerated from the
traces rather than hand-maintained.

* 8 designs reuse the FDL26 RTL (`legacy/fdl26/FDL26/FDL26_tests/`): accumulator, adder_8bit,
  comparator_3bit, ibex_alu, ibex_csr, ibex_multdiv_fast, multi_16bit, sqrt.
* 3 protocol blocks were written for this benchmark and carry their own RTL: `arbiter4`
  (round-robin arbitration, bounded fairness), `fifo_sync` (queue flags and occupancy),
  `apb_slave` (protocol responses, error family, wait-state latencies). Each folder is a
  standalone trace generator: `./generate.sh` needs nothing but verilator.
* Every design ships 10 traces: 5 for mining, 3 held-out from independent seeds, and 2 from
  a stress environment that deliberately breaks the contracts' assumptions. The stress runs
  are what makes an assumption falsifiable rather than decorative: 11 of the 135 guarantees
  break there.
* `run.py --validate-only` re-evaluates every candidate with the flow's own evaluator and
  rewrites the confirmed set into each `config.json`. A reference contract in this benchmark
  is therefore never an unchecked claim.

`tools/` is new: `score_recovery.py` (mined against golden, both vocabulary settings),
`report_bundle.py` (the report and the txt files), `report_recovery.py` (per-design
expected-against-mined tables with a diagnosed cause per miss), `check_harm.py`,
`install_harm.sh`.

`.gitignore` had to change: it ignored `*.csv` and `work`, which would have dropped the
benchmark traces. Traces under `benchmarks/traces/` are now exempt, everything else still
ignored.

## Reproducing the reported numbers

    python3 benchmarks/run.py --validate-only                       # 135/135 confirmed
    python3 tools/score_recovery.py benchmarks/*/config.json --out results
    python3 tools/report_bundle.py --results results --out reports

The second step re-runs the flow twice per design (declared and interface vocabulary) and
takes a few minutes; per-design runtime is 1-20 s, roughly linear in samples at 2.4 ms per
sample, dominated by candidate screening.

## Open items

* The CSR error response (`rd_error_o`) and the accumulator overflow (`data_out > 1020`) are
  never provoked by their testbenches, so 3 golden guarantees stay vacuous and unmineable
  until the stimulus is extended.
* Precision is unresolved and the negative result is recorded in `RECOVERY.md`: no
  trace-side ranking (support, delay tightness, antecedent size, interface relevance) puts
  the golden clauses near the top, and no mined extra is implied by a reference. Separating
  them needs mutation-based importance or engineer triage.
* HARM has not been run against this benchmark; the in-process instantiator is the backend
  used for every number here. `tools/check_harm.py` exists to make that comparison cheap.
* The paper's Table II also lists SPI/I2C, UART and DMA. They are not in the benchmark yet.
