#!/bin/sh
# Extra accumulator traces from a sparser stimulus, added to the existing corpus.
#
#   ./generate_spaced.sh                 # traces into ../traces/accumulator/
#   ./generate_spaced.sh /tmp/out        # traces into /tmp/out/
#   CYCLES=6000 ./generate_spaced.sh     # longer runs
#
# Same RTL and same CSV dialect as tb_accumulator.sv, different stimulus: short accumulation
# bursts separated by long resets, because this design accumulates on every non-reset cycle
# and its event is otherwise present at 91% of positions. See tb_accumulator_spaced.sv.
#
# Seeds avoid run.py's (1-5 mining, 101-103 held out), so these eight files sit alongside the
# ten it generates and a later `run.py` run does not overwrite them. No config edit is needed:
# the config globs mine_*.csv and holdout_*.csv.
set -eu

design=accumulator
here=$(cd "$(dirname "$0")" && pwd)
root=$(cd "$here/../.." && pwd)
out=${1:-"$here/../traces/$design"}
cycles=${CYCLES:-3000}
obj=${OBJ_DIR:-"$root/benchmarks/build/obj_${design}_spaced"}
rtl="$here/rtl"

mkdir -p "$out" "$obj"

verilator --binary --timing -j 0 -Wno-fatal -Wno-WIDTHTRUNC -Wno-WIDTHEXPAND \
  -Wno-TIMESCALEMOD --top-module tb_accumulator_spaced -Mdir "$obj" -o sim \
  "$rtl/accuintf.sv" "$rtl/verified_accu.sv" "$here/tb_accumulator_spaced.sv"

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
