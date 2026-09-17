#!/bin/sh
# Extra sqrt traces from a spaced stimulus, added to the existing corpus.
#
#   ./generate_spaced.sh                 # traces into ../traces/sqrt/
#   ./generate_spaced.sh /tmp/out        # traces into /tmp/out/
#   CYCLES=6000 ./generate_spaced.sh     # longer runs
#
# Same RTL and same CSV dialect as tb_sqrt.sv, different stimulus: the operand is presented
# one cycle before `start` and requests are 40-80 cycles apart with alternating sign. See the
# header of tb_sqrt_spaced.sv for why.
#
# The seeds below avoid run.py's (1-5 mining, 101-103 held out), so these eight files sit
# alongside the ten it generates and a later `run.py` run does not overwrite them. No config
# edit is needed: sqrt's config globs mine_*.csv and holdout_*.csv.
set -eu

design=sqrt
here=$(cd "$(dirname "$0")" && pwd)
root=$(cd "$here/../.." && pwd)
out=${1:-"$here/../traces/$design"}
cycles=${CYCLES:-3000}
obj=${OBJ_DIR:-"$root/benchmarks/build/obj_${design}_spaced"}   # where run.py builds too
rtl="$here/rtl"

mkdir -p "$out" "$obj"

verilator --binary --timing -j 0 -Wno-fatal -Wno-WIDTHTRUNC -Wno-WIDTHEXPAND \
  -Wno-TIMESCALEMOD --top-module tb_sqrt_spaced -Mdir "$obj" -o sim \
  "$rtl/sqrtintf.sv" "$rtl/sqrt_calculator.sv" "$here/tb_sqrt_spaced.sv"

for seed in 11 12 13 14 15; do
  "$obj/sim" +seed=$seed +cycles=$cycles \
    +out="$out/mine_seed$(printf '%03d' $seed).csv" > /dev/null
done
for seed in 111 112 113; do
  "$obj/sim" +seed=$seed +cycles=$cycles \
    +out="$out/holdout_seed$seed.csv" > /dev/null
done

echo "$design: 8 spaced traces of $cycles cycles in $out"
head -1 "$out/mine_seed011.csv"
