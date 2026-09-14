"""Trace corpus: the observation set T = {tau_1, ..., tau_N} of Section III.

One CSV is one execution tau_k. Runs are kept separate everywhere: no stage concatenates
them, and temporal evaluation never crosses a run boundary, because the hidden state at the
start of one run is not the successor of the state at the end of another.
"""
from __future__ import annotations

import csv
import glob
import os
import random
from dataclasses import dataclass, field
from pathlib import Path

#: CSV headers produced by vcd2csv carry the C type, e.g. 'uint64_t data_out'.
_TYPE_WORDS = {
    "bool", "char", "short", "int", "long", "unsigned", "signed", "size_t",
    "int8_t", "int16_t", "int32_t", "int64_t", "uint8_t", "uint16_t", "uint32_t",
    "uint64_t", "float", "double", "reg", "logic", "wire", "bit", "byte",
    "shortint", "longint", "integer", "time", "real", "shortreal", "realtime",
}


def signal_name(column: str) -> str:
    """'uint64_t data_out' -> 'data_out'; 'unsigned long int x' -> 'x'."""
    parts = column.strip().split()
    kept = [p for p in parts if p not in _TYPE_WORDS]
    return kept[-1] if kept else parts[-1]


def numeric_header(header) -> list:
    """Retype every column as `int`: 'bool cin' -> 'int cin', 'uint64_t x' -> 'int x'.

    A concession to the temporal backend, not a change of data. HARM reads the column type
    out of the header and stamps it onto every occurrence of that variable before parsing a
    proposition, and its grammar has no boolean alternative under an arithmetic operator and
    no cast: a column declared `bool` can never appear in `sum == a + b + cin`, which is
    exactly what the adder and arbiter contracts are about. A numeric column is still usable
    as a boolean proposition (HARM's `boolean` rule admits a bare `numeric`), so declaring
    everything numeric loses nothing and every value stays the value that was observed.
    """
    return [f"int {signal_name(column)}" for column in header]


def _number(text):
    if text is None or text == "":
        return None
    try:
        return int(text)
    except ValueError:
        pass
    try:
        return float(text)
    except ValueError:
        return text


@dataclass
class Run:
    """One execution. rows[t][signal] is the value of signal at sample t."""

    name: str
    header: list                 # original columns, types included (miners want them back)
    rows: list
    path: str = None

    def __len__(self):
        return len(self.rows)

    def signals(self) -> list:
        return [signal_name(c) for c in self.header]


def load_run(path, hold_values=True) -> Run:
    """Read one trace CSV.

    hold_values: a blank cell means 'unchanged since the last sample' in a VCD dump, so the
    last known value is held. Cells before a signal's first value stay None and raise a clear
    error if a formula reads them, rather than being silently treated as zero.
    """
    path = Path(path)
    with open(path, newline="") as fh:
        reader = csv.reader(fh)
        header = next(reader)
        names = [signal_name(c) for c in header]
        rows, last = [], {}
        for raw in reader:
            if not any(cell.strip() for cell in raw):
                continue
            row = {}
            for name, cell in zip(names, raw):
                value = _number(cell.strip())
                if value is None and hold_values:
                    value = last.get(name)
                row[name] = value
                if value is not None:
                    last[name] = value
            rows.append(row)
    if not rows:
        raise ValueError(f"trace {path} has no samples")
    return Run(path.stem, header, rows, str(path))


@dataclass
class Corpus:
    runs: list
    source: list = field(default_factory=list)

    def __len__(self):
        return len(self.runs)

    @property
    def samples(self) -> int:
        return sum(len(r) for r in self.runs)

    def signals(self) -> list:
        return self.runs[0].signals()

    def positions(self):
        """Every (run index, sample index) in the corpus."""
        return ((k, t) for k, run in enumerate(self.runs) for t in range(len(run)))

    def subsample(self, fraction: float, seed: int = 0) -> "Corpus":
        """Keep a fraction of WHOLE runs. Splitting a run would invent a trace boundary."""
        if not 0 < fraction <= 1:
            raise ValueError("fraction must be in (0, 1]")
        rng = random.Random(seed)
        keep = max(1, round(fraction * len(self.runs)))
        return Corpus(rng.sample(self.runs, keep), self.source)


def expand(patterns, base=".") -> list:
    """Resolve config trace patterns: environment variables, then globs."""
    out = []
    for pattern in patterns:
        pattern = os.path.expandvars(os.path.expanduser(str(pattern)))
        if not os.path.isabs(pattern):
            pattern = str(Path(base) / pattern)
        out += sorted(glob.glob(pattern))
    return out


def load_corpus(patterns, base=".", hold_values=True) -> Corpus:
    paths = expand(patterns, base)
    if not paths:
        resolved = [os.path.expandvars(os.path.expanduser(str(p))) for p in patterns]
        raise FileNotFoundError(f"no traces matched {list(patterns)}\n"
                                f"  resolved to: {resolved}\n"
                                f"  relative paths are taken from {Path(base).resolve()}")
    runs = [load_run(p, hold_values) for p in paths]
    first = runs[0].signals()
    for run in runs[1:]:
        if run.signals() != first:
            raise ValueError(f"trace {run.name} has a different interface than {runs[0].name}")
    return Corpus(runs, paths)


def write_rows(rows, header, path):
    """Write samples back out under `header`, which carries the C/Verilog type words a miner
    expects in the first row. Callers writing for a temporal backend pass the header through
    `numeric_header` first; the values written are the observed values either way."""
    path = Path(path)
    path.parent.mkdir(parents=True, exist_ok=True)
    names = [signal_name(c) for c in header]
    with open(path, "w", newline="") as fh:
        writer = csv.writer(fh)
        writer.writerow(header)
        for row in rows:
            writer.writerow(["" if row.get(n) is None else row[n] for n in names])
    return path
