#!/usr/bin/env python3
"""Structural check of a LaTeX file, for a machine with no `pdflatex`.

    python3 tools/checktex.py reports/RESULTS.tex

Not a parser and not a substitute for compiling: it checks the three things that actually
break when a table body is regenerated from `tools/report_rqs.py` and pasted in, and that a
reader cannot see by eye.

* every `\\begin{x}` has a matching `\\end{x}`, in order;
* braces balance, ignoring `\\{`, `\\}` and comment tails;
* every row of a `tabular` has as many cells as the column specification allows, counting
  `\\multicolumn{n}` as n and skipping rule and `\\cmidrule` lines.

Exit code 0 when nothing was found, 1 otherwise, so it can gate a commit.
"""
from __future__ import annotations

import re
import sys
from pathlib import Path

COLUMN = re.compile(r"[lcr]|p\{[^}]*\}|@\{[^}]*\}|\|")
MULTICOLUMN = re.compile(r"\\multicolumn\{(\d+)\}")
SKIP = ("\\toprule", "\\midrule", "\\bottomrule", "\\cmidrule", "\\hline", "\\addlinespace")


def strip_comment(line: str) -> str:
    """Everything before an unescaped `%`."""
    out = []
    for i, ch in enumerate(line):
        if ch == "%" and (i == 0 or line[i - 1] != "\\"):
            break
        out.append(ch)
    return "".join(out)


def columns(spec: str) -> int:
    """How many cells one row of this column specification has."""
    return len([c for c in COLUMN.findall(spec) if c != "|" and not c.startswith("@")])


def cells(row: str) -> int:
    """Cells in a row, counting a `\\multicolumn{n}` as n."""
    total, depth, current = 0, 0, ""
    for ch in row:
        if ch == "{":
            depth += 1
        elif ch == "}":
            depth -= 1
        if ch == "&" and depth == 0:
            total += _weight(current)
            current = ""
            continue
        current += ch
    return total + _weight(current)


def _weight(cell: str) -> int:
    match = MULTICOLUMN.search(cell)
    return int(match.group(1)) if match else 1


def check(path: Path) -> list:
    text = path.read_text()
    lines = [strip_comment(line) for line in text.splitlines()]
    problems = []

    depth = 0
    for n, line in enumerate(lines, 1):
        for i, ch in enumerate(line):
            if line[i - 1:i] == "\\":
                continue
            depth += (ch == "{") - (ch == "}")
        if depth < 0:
            problems.append(f"{path}:{n}: a closing brace with nothing open")
            depth = 0
    if depth:
        problems.append(f"{path}: {depth} brace(s) left open at end of file")

    stack = []
    for n, line in enumerate(lines, 1):
        for kind, name in re.findall(r"\\(begin|end)\{([^}]*)\}", line):
            if kind == "begin":
                stack.append((name, n))
            elif not stack:
                problems.append(f"{path}:{n}: \\end{{{name}}} with nothing open")
            else:
                opened, at = stack.pop()
                if opened != name:
                    problems.append(f"{path}:{n}: \\end{{{name}}} closes "
                                    f"\\begin{{{opened}}} from line {at}")
    for name, at in stack:
        problems.append(f"{path}:{at}: \\begin{{{name}}} is never closed")

    spec, start, buffer = None, 0, ""
    for n, line in enumerate(lines, 1):
        opened = re.search(r"\\begin\{tabular\}\{([^}]*)\}", line)
        if opened:
            spec, start, buffer = columns(opened.group(1)), n, ""
            continue
        if spec is None:
            continue
        if "\\end{tabular}" in line:
            spec = None
            continue
        if line.strip().startswith(SKIP) or not line.strip():
            continue
        buffer += " " + line
        if r"\\" not in buffer:
            continue                      # a row wrapped over several source lines
        for row in buffer.split(r"\\"):
            if row.strip():
                got = cells(row)
                if got != spec:
                    problems.append(
                        f"{path}:{n}: row has {got} cells, the tabular opened at line "
                        f"{start} declares {spec}: {row.strip()[:70]}")
        buffer = ""
    return problems


def main(argv=None) -> int:
    paths = [Path(a) for a in (argv or sys.argv[1:])]
    if not paths:
        raise SystemExit("usage: checktex.py FILE.tex [FILE.tex ...]")
    found = []
    for path in paths:
        found += check(path)
    for problem in found:
        print(problem)
    print(f"{len(found)} problem(s) in {len(paths)} file(s)")
    return 1 if found else 0


def demo():
    import tempfile

    good = ("\\begin{tabular}{lrr}\n\\toprule\na & 1 & 2 \\\\\n"
            "\\multicolumn{3}{l}{note} \\\\\n\\bottomrule\n\\end{tabular}\n")
    bad = "\\begin{tabular}{lrr}\na & 1 \\\\\n\\end{tabular}\n"
    unclosed = "\\begin{table}\n\\begin{tabular}{l}\nx \\\\\n\\end{tabular}\n"
    with tempfile.TemporaryDirectory() as tmp:
        tmp = Path(tmp)
        (tmp / "good.tex").write_text(good)
        (tmp / "bad.tex").write_text(bad)
        (tmp / "unclosed.tex").write_text(unclosed)
        (tmp / "comment.tex").write_text("% a & b \\\\ 50\\% of it\n" + good)
        assert check(tmp / "good.tex") == [], check(tmp / "good.tex")
        assert "2 cells" in check(tmp / "bad.tex")[0], check(tmp / "bad.tex")
        assert "never closed" in check(tmp / "unclosed.tex")[0]
        assert check(tmp / "comment.tex") == [], check(tmp / "comment.tex")
    print("checktex ok")


if __name__ == "__main__":
    sys.exit(demo() if "--demo" in sys.argv else main())
