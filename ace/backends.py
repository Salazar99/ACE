"""Replaceable property-mining backends. None of them is a contribution of the flow.

HARM (https://github.com/SamueleGerminiani/harm) is the temporal backend. Everything here
is a thin wrapper around its command line, written against its actual interface:

* `--csv <file>` mines one trace, `--csv-dir <dir>` mines every `.csv` in a directory as a
  SEPARATE trace. The second form is what the episode-split region uses: one HARM call per
  region, with episode boundaries preserved by the miner itself.
* `--conf <file>` is the configuration. Boolean signals are declared with `<prop>`;
  multi-bit signals need `<numeric clustering=...>`, which is how HARM turns a bitvector
  into propositions. Declaring a bitvector as `<prop>` silently gives a useless vocabulary.
* `--dump-to <dir>` writes one file per context, named `<context>_ass.txt`.
* `--reset <expr>` tells HARM which samples are a reset.
* `atct`, `atcf`, `afct`, ... and `traceLength` are the metric variables available in
  `<sort exp=...>`, so the flow's smoothed recall needs no patched miner:
  `(atct+1)/(atct+afct+2)`. HARM's cells are over samples and its `afct` is
  antecedent-false -> consequent-true, the false negative; see SMOOTHED_RECALL below.

Metrics are never read back from a backend: the flow scores clauses with its own evaluator,
so that labeling, selection and held-out validation agree by construction.

Local installation: set `HARM_BIN` to the binary (or put `harm` on PATH), and
`HARM_LIB` to a directory of shared libraries if it was built against libraries that are
not installed system-wide. `python3 tools/check_harm.py` verifies the installation by
mining a known property out of a generated trace.
"""
from __future__ import annotations

import os
import re
import shutil
import subprocess
from pathlib import Path
from xml.sax.saxutils import quoteattr

_ANSI = re.compile(r"\x1b\[[0-9;]*m")

ACEROOT = os.environ.get("ACEROOT")

#: HARM accepts metric expressions in <sort>, so the flow's own statistic needs no patched
#: miner. Written in HARM's vocabulary, where the contingency table is over SAMPLES and
#: `afct` is antecedent-false -> consequent-true: the event happened and the antecedent did
#: not predict it, i.e. the false negative. So this expression is a recall, the same
#: statistic `triggers.smoothed_recall` computes over event occurrences. HARM's false
#: positive is `atcf`, which is the cell that has no counterpart in an occurrence-indexed
#: population - do not read `afct` here as `triggers.TriggerStats.cells["atcf"]`.
SMOOTHED_RECALL = "(atct+1)/(atct+afct+2)"

#: How HARM turns a bitvector into propositions. Same default as `harm --generate-config`.
NUMERIC_CLUSTERING = "K,10Max,0.01WCSS,><,=="

#: Template vocabularies, in HARM's template language. 'H' is replaced with the configured
#: horizon; P0, P1, ... are proposition slots that HARM fills from the declared vocabulary.
GRAMMARS = {
    "G1": ["G(P0 |-> P1)"],
    "G2": ["G(P0 |-> P1)",
           "G(P0 |=> P1)"],
    "G3": ["G(P0 |-> P1)",
           "G(P0 |=> P1)",
           "G(P0 |-> ##[1:H] P1)"],
    "G4": ["G(P0 |-> P1)",
           "G(P0 |=> P1)",
           "G(P0 |-> ##[1:H] P1)",
           "G(P0 && P1 |-> ##[1:H] P2)"],
    "G5": ["G(P0 |-> P1)",
           "G(P0 |=> P1)",
           "G(P0 |-> ##[1:H] P1)",
           "G(P0 && P1 |-> ##[1:H] P2)",
           "G({..#1&..} |-> P0)"],
}


class BackendMissing(RuntimeError):
    pass


# --------------------------------------------------------------- installation

def harm_bin() -> str | None:
    """Resolve the HARM binary: $HARM_BIN if set, else `harm` on PATH."""
    explicit = os.environ.get("HARM_BIN")
    if explicit:
        path = Path(explicit)
        if path.is_dir():
            path = path / "harm"
        return str(path) if path.exists() else None
    return shutil.which("harm")


def temporal_backend() -> str:
    """Which temporal backend a run will use. `ace.templates` instantiates the same
    templates over the same declared vocabulary when HARM is not installed, so a run
    without a miner still produces template instances - it just enumerates them itself."""
    return "harm" if harm_bin() else "in-process-templates"


def available(tool: str = "harm") -> bool:
    return harm_bin() is not None if tool == "harm" else shutil.which(tool) is not None


def _env() -> dict:
    """Environment for the backend, with $HARM_LIB prepended to the library path."""
    env = dict(os.environ)
    lib = env.get("HARM_LIB")
    if lib:
        env["LD_LIBRARY_PATH"] = os.pathsep.join(
            [lib] + ([env["LD_LIBRARY_PATH"]] if env.get("LD_LIBRARY_PATH") else []))
    return env


def last_message(exc, limit: int = 300) -> str:
    """The informative part of a backend failure, for a one-line warning.

    HARM prints a banner, a source location, the message and the formula it was parsing, and
    ends with an ANSI reset - so the last line is useless and the two that matter are named.
    """
    lines = [line.strip() for line in _ANSI.sub("", str(exc)).splitlines() if line.strip()]
    wanted = [line for line in lines
              if line.startswith("Message:") or line.startswith("In formula:")]
    return " ".join(wanted or lines[-1:])[:limit]


def _run(command, cwd=None, timeout=3600):
    result = subprocess.run(command, shell=True, cwd=cwd, capture_output=True,
                            text=True, timeout=timeout, env=_env())
    if result.returncode != 0:
        raise RuntimeError(f"command failed ({result.returncode}): {command}\n"
                           f"{result.stdout.strip()[-1500:]}\n{result.stderr.strip()[-1500:]}")
    return result.stdout


# ------------------------------------------------------------- configuration

def harm_conf(templates, booleans=(), numerics=(), horizon=None,
              sorts=(("smoothed_recall", SMOOTHED_RECALL),),
              loc="a,c,dt", clustering=NUMERIC_CLUSTERING, context="default",
              extra_props=()) -> str:
    """Build a HARM configuration.

    booleans:    signals whose domain is {0, 1}   -> <prop>
    numerics:    every other signal               -> <numeric clustering=...>
    extra_props: compound propositions to declare verbatim, as {"exp":..., "loc":...}.
                 Clustering only ever generates comparisons against constants, so a
                 proposition relating two signals ("yout == ain * bin", "out <= in") is
                 only ever mined if it is declared here. HARM's proposition grammar takes
                 arithmetic, signal-to-signal comparison, bit selects, `inside {..}` and
                 $past/$stable/$rose/$fell.
    loc:         where a proposition may appear, comma separated: 'a' antecedent,
                 'c' consequent, 'dt' decision tree.
    """
    lines = ["<harm>", f'\t<context name={quoteattr(context)}>']
    for prop in extra_props:
        exp = prop["exp"] if isinstance(prop, dict) else prop
        where = prop.get("loc", loc) if isinstance(prop, dict) else loc
        lines.append(f'\t\t<prop exp={quoteattr(exp)} loc={quoteattr(where)}/>')
    for signal in booleans:
        lines.append(f'\t\t<prop exp={quoteattr(signal)} loc={quoteattr(loc)}/>')
    for signal in numerics:
        lines.append(f'\t\t<numeric clustering={quoteattr(clustering)} '
                     f'exp={quoteattr(signal)} loc={quoteattr(loc)}/>')
    for template in templates:
        # \bH\b, not a bare replace: a template mentioning HREADY must survive
        text = (re.sub(r"\bH\b", str(horizon), template) if horizon is not None
                else template)
        lines.append(f'\t\t<template exp={quoteattr(text)} />')
    for name, exp in sorts:
        lines.append(f'\t\t<sort name={quoteattr(name)} exp={quoteattr(exp)}/>')
    lines += ["\t</context>", "</harm>", ""]
    return "\n".join(lines)


def write_conf(text, path) -> Path:
    path = Path(path)
    path.parent.mkdir(parents=True, exist_ok=True)
    path.write_text(text)
    return path


def classify_signals(rows, signals) -> tuple:
    """Split a vocabulary into (booleans, numerics) by the values actually observed."""
    booleans, numerics = [], []
    for signal in signals:
        values = {row.get(signal) for row in rows} - {None}
        (booleans if values and values <= {0, 1} else numerics).append(signal)
    return booleans, numerics


# ------------------------------------------------------------------- running

def harm(trace, conf, dump_to, reset=None, max_ass=None, min_frank=None,
         extra: str = "", context: str = "default") -> list:
    """Run HARM on one trace file or on a directory of traces; return the mined clauses.

    A directory is passed as `--csv-dir`, so every episode in it is mined as its own trace
    and no property can relate samples across an episode boundary.
    """
    binary = harm_bin()
    if binary is None:
        raise BackendMissing(
            "HARM not found: set HARM_BIN to the binary or put `harm` on PATH "
            "(tools/install_harm.sh builds it; tools/check_harm.py verifies it)")

    trace = Path(trace).resolve()
    flag = "--csv-dir" if trace.is_dir() else "--csv"
    dump_to = Path(dump_to)
    dump_to.mkdir(parents=True, exist_ok=True)
    dump_to = dump_to.resolve()

    options = [f'{flag} "{trace}"', f'--conf "{Path(conf).resolve()}"',
               f'--dump-to "{dump_to}"', "--psilent", "--dont-print-ass"]
    if reset:
        options.append(f"--reset {_quote(reset)}")
    if max_ass:
        options.append(f"--max-ass {int(max_ass)}")
    if min_frank is not None:
        options.append(f"--min-frank {float(min_frank)}")
    if extra:
        options.append(extra)

    # HARM writes warning.log, error.log and gmon.out into its working directory; running it
    # from the dump directory keeps those out of wherever the flow happened to be launched
    _run(f'"{binary}" ' + " ".join(options), cwd=dump_to)

    mined = dump_to / f"{context}_ass.txt"
    if not mined.exists():
        return []
    # sorted, because HARM's own order is not reproducible: it de-duplicates through an
    # unordered_set of pointers and ranks with a non-stable sort over a frequently tied
    # score. This pins the ORDER the flow sees, not the SET - two runs can still keep a
    # different member of a group of equivalent clauses.
    return sorted(line.strip() for line in mined.read_text().splitlines() if line.strip())


def _quote(text: str) -> str:
    return "'" + text.replace("'", "'\\''") + "'"


def generate_conf(trace, out) -> Path:
    """Ask HARM for a starting configuration derived from a trace (`--generate-config`).
    Useful to see the vocabulary it would build for a design."""
    trace = Path(trace)
    flag = "--csv-dir" if trace.is_dir() else "--csv"
    binary = harm_bin()
    if binary is None:
        raise BackendMissing("HARM not found")
    _run(f'"{binary}" {flag} "{trace}" --conf "{out}" --generate-config --psilent')
    return Path(out)


# --------------------------------------------------------- optional backends

def invgen(templates_xml, csv) -> str:
    """ACE's propositional instantiator (it builds a HARM conf and runs HARM itself)."""
    if not ACEROOT:
        raise BackendMissing("ACEROOT is not set, cannot locate InvGen.py")
    script = Path(ACEROOT) / "InvGen" / "InvGen.py"
    if not script.exists():
        raise BackendMissing(f"{script} not found")
    return _run(f'python3 "{script}" "{templates_xml}" "{csv}"')


def daikon(csv):
    """Not implemented. Daikon needs a .dtrace front end for these CSVs, and the
    propositional family the flow uses is computed over the episode samples directly
    (mining.propositional_invariants)."""
    raise BackendMissing("daikon backend not implemented; see mining.propositional_invariants")


def vcd2csv(vcd, out_csv, clk="clk", scope="tbench_top::intf") -> str:
    tool = Path(ACEROOT or ".") / "third_party" / "vcd2csv"
    exe = str(tool) if tool.exists() else "vcd2csv"
    return _run(f'"{exe}" --vcd "{vcd}" --clk {clk} --vcd-ss {scope} --dump-to "{out_csv}"')
