#!/usr/bin/env python3
"""Verify a local HARM installation against the way this flow drives it.

    python3 tools/check_harm.py
    HARM_BIN=/opt/harm/build/harm python3 tools/check_harm.py

It generates a trace in which one property holds by construction, runs HARM on it exactly
as `ace.backends` does - single trace and directory of traces, boolean and bitvector
vocabulary, smoothed recall as the ranking metric - and checks that the property comes
back. Exit code 0 means the backend is usable by the flow.
"""
from __future__ import annotations

import os
import sys
import tempfile
from pathlib import Path

sys.path.insert(0, str(Path(__file__).resolve().parents[1]))

from ace import backends

HEADER = "bool req,int payload,bool ack"


def write_trace(path, offset, samples=120):
    """req at t implies ack at t+1. payload is a bitvector so the numeric vocabulary is
    exercised too; it is only non-zero while a request is in flight."""
    rows, t = [], 0
    while len(rows) < samples:
        req = (t + offset) % 5 == 0
        rows.append((int(req), (t * 7) % 64 if req else 0, 0))
        if req and len(rows) < samples:
            rows.append((0, 0, 1))
            t += 1
        t += 1
    lines = [HEADER] + [",".join(str(v) for v in row) for row in rows[:samples]]
    Path(path).write_text("\n".join(lines) + "\n")


def main() -> int:
    binary = backends.harm_bin()
    print(f"HARM_BIN  : {os.environ.get('HARM_BIN', '(unset)')}")
    print(f"resolved  : {binary or 'NOT FOUND'}")
    print(f"HARM_LIB  : {os.environ.get('HARM_LIB', '(unset)')}")
    if binary is None:
        print("\nHARM not found. Set HARM_BIN to the binary, or put `harm` on PATH.\n"
              "tools/install_harm.sh builds it from source on a Linux box.")
        return 1

    with tempfile.TemporaryDirectory(prefix="harm_check_") as tmp:
        tmp = Path(tmp)
        traces = tmp / "traces"
        traces.mkdir()
        for i in range(3):
            write_trace(traces / f"trace_{i}.csv", offset=i)

        conf = backends.write_conf(
            backends.harm_conf(backends.GRAMMARS["G3"], booleans=["req", "ack"],
                               numerics=["payload"], horizon=4),
            tmp / "conf.xml")
        print(f"\nconfig    : {conf}")

        try:
            single = backends.harm(traces / "trace_0.csv", conf, tmp / "dump_single")
        except Exception as exc:                      # noqa: BLE001 - report, don't raise
            print(f"\nFAILED running HARM on a single trace:\n{exc}")
            return 2
        print(f"--csv     : {len(single)} clauses mined")

        try:
            many = backends.harm(traces, conf, tmp / "dump_dir")
        except Exception as exc:                      # noqa: BLE001
            print(f"\nFAILED running HARM on a directory of traces:\n{exc}")
            return 3
        print(f"--csv-dir : {len(many)} clauses mined")

        if not single and not many:
            print("\nHARM ran but mined nothing. The binary works; the configuration or the\n"
                  "trace vocabulary does not. Check `harm --generate-config` output for this\n"
                  "trace (ace.backends.generate_conf) against the config above.")
            return 4

        for clause in (many or single)[:8]:
            print(f"   {clause}")

        wanted = [c for c in (many or single)
                  if "ack" in c and "req" in c]
        if not wanted:
            print("\nHARM mined clauses, but none relating req to ack. Usable, but check the\n"
                  "template vocabulary: the flow expects request/response shapes.")
            return 5

        print(f"\nOK: HARM is usable by the flow "
              f"({len(wanted)} req/ack clauses, e.g. {wanted[0]})")
        return 0


if __name__ == "__main__":
    sys.exit(main())
