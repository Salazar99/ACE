#!/usr/bin/env python3
"""
Make a DU (difference) CSV from two input CSVs by comparing a specified signal column.

DU logic:
- DU = 0 if the signal values are the same in both files (including both NaN)
- DU = 1 if they are different (including one NaN and the other not)

Usage examples (see below for more):
    python make_du_csv.py file1.csv file2.csv --signal-col signal --output out.csv
    python make_du_csv.py file1.csv file2.csv --signal-col Status --key-cols ID Date --base 2
"""

import argparse
import sys
from pathlib import Path

import pandas as pd


def compute_du(s1: pd.Series, s2: pd.Series, nan_equal: bool = True) -> pd.Series:
    """
    Compute DU (0 if equal, 1 if different) between two Series.
    If nan_equal=True, pairs of NaN are considered equal.
    """
    if nan_equal:
        same = s1.eq(s2) | (s1.isna() & s2.isna())
    else:
        same = s1.eq(s2)
    du = (~same).astype(int)
    return du


def main():
    parser = argparse.ArgumentParser(
        description="Create a CSV that replaces a signal column with DU (0=same, 1=different) "
                    "by comparing two CSVs."
    )
    parser.add_argument("file1", help="Path to first input CSV")
    parser.add_argument("file2", help="Path to second input CSV")
    parser.add_argument("--signal-col", required=True,
                        help="Name of the signal column to compare/replace")
    parser.add_argument("--key-cols", nargs="+",
                        help="Optional key column(s) to align rows (e.g., ID, Date). "
                             "If omitted, rows are compared by position.")
    parser.add_argument("--base", choices=["1", "2"], default="1",
                        help="Which file to copy as the base (default: 1)")
    parser.add_argument("--output", default="output_du.csv",
                        help="Output CSV path (default: output_du.csv)")
    parser.add_argument("--nan-not-equal", action="store_true",
                        help="Treat NaN vs NaN as different (default treats them as equal).")
    parser.add_argument("--encoding", default=None,
                        help="Optional encoding for reading/writing (e.g., utf-8, latin-1).")
    parser.add_argument("--sep", default=",",
                        help="CSV delimiter (default ','). Use '\\t' for TSV.")
    args = parser.parse_args()

    file1 = Path(args.file1)
    file2 = Path(args.file2)
    if not file1.exists():
        sys.exit(f"ERROR: File not found: {file1}")
    if not file2.exists():
        sys.exit(f"ERROR: File not found: {file2}")

    # Read CSVs
    try:
        df1 = pd.read_csv(file1, sep=args.sep, encoding=args.encoding)
        df2 = pd.read_csv(file2, sep=args.sep, encoding=args.encoding)
    except Exception as e:
        sys.exit(f"ERROR reading CSVs: {e}")

    signal_col = args.signal_col
    if args.base == "1":
        base_df = df1.copy()
        other_df = df2
        base_name = "file1"
        other_name = "file2"
    else:
        base_df = df2.copy()
        other_df = df1
        base_name = "file2"
        other_name = "file1"

    if signal_col not in base_df.columns:
        sys.exit(f"ERROR: signal column '{signal_col}' not found in {base_name}.")
    if signal_col not in other_df.columns:
        sys.exit(f"ERROR: signal column '{signal_col}' not found in {other_name}.")

    # Align rows either by keys or by position
    if args.key_cols:
        missing_in_base = [k for k in args.key_cols if k not in base_df.columns]
        missing_in_other = [k for k in args.key_cols if k not in other_df.columns]
        if missing_in_base:
            sys.exit(f"ERROR: Key column(s) {missing_in_base} not found in {base_name}.")
        if missing_in_other:
            sys.exit(f"ERROR: Key column(s) {missing_in_other} not found in {other_name}.")

        # We'll left-join the other file's signal onto base using the keys
        # This preserves the base file's exact row set and order.
        # To avoid column name clashes, rename the other signal temporarily.
        tmp_col = "__other_signal__"
        other_sig = other_df[args.key_cols + [signal_col]].rename(columns={signal_col: tmp_col})
        merged = base_df.merge(other_sig, how="left", on=args.key_cols)

        s_base = merged[signal_col]
        s_other = merged[tmp_col]
        du = compute_du(s_base, s_other, nan_equal=not args.nan_not_equal)

        # Replace the signal column with DU
        insert_at = list(merged.columns).index(signal_col)
        merged = merged.drop(columns=[signal_col, tmp_col])
        merged.insert(insert_at, "DU", du)

        out_df = merged

    else:
        # Compare by position (row index). Ensure lengths match.
        if len(base_df) != len(other_df):
            sys.exit(
                f"ERROR: Row counts differ when comparing by position: "
                f"{base_name} has {len(base_df)} rows, {other_name} has {len(other_df)} rows. "
                f"Use --key-cols to align rows by keys or make row counts equal."
            )

        s_base = base_df[signal_col]
        s_other = other_df[signal_col].reset_index(drop=True)

        du = compute_du(s_base.reset_index(drop=True), s_other, nan_equal=not args.nan_not_equal)

        # Replace the signal column in base with DU, preserving column order
        insert_at = list(base_df.columns).index(signal_col)
        out_df = base_df.drop(columns=[signal_col])
        out_df.insert(insert_at, "bool DU", du)

    # Write output
    try:
        out_path = Path(args.output)
        out_df.to_csv(out_path, index=False, sep=args.sep, encoding=args.encoding)
    except Exception as e:
        sys.exit(f"ERROR writing output CSV: {e}")

    print(f"Success! Wrote {len(out_df)} rows to: {out_path}")


if __name__ == "__main__":
    main()
