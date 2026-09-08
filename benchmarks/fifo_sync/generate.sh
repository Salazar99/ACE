#!/bin/sh
# Generate this design's traces on their own, without the rest of the benchmark.
#
#   ./generate.sh                 # traces into ../traces/fifo_sync/
#   ./generate.sh /tmp/out        # traces into /tmp/out/
#   CYCLES=4000 ./generate.sh     # longer runs
#
# Needs verilator 5.x on PATH and nothing else. Produces the same ten traces the full
# benchmark does: five mining runs, three held-out runs from independent seeds, and two
# runs of the stress environment that breaks the contracts' assumptions.
set -eu

design=fifo_sync
here=$(cd "$(dirname "$0")" && pwd)
out=${1:-"$here/../traces/$design"}
cycles=${CYCLES:-1200}
obj=${OBJ_DIR:-"$here/obj_$design"}

mkdir -p "$out" "$obj"

verilator --binary --timing -j 0 -Wno-fatal -Wno-WIDTHTRUNC -Wno-WIDTHEXPAND \
  -Wno-TIMESCALEMOD --top-module "tb_$design" -Mdir "$obj" -o sim \
  "$here/rtl/$design.sv" "$here/tb_$design.sv"

for seed in 1 2 3 4 5; do
  "$obj/sim" +seed=$seed +cycles=$cycles +scenario=nominal \
    +out="$out/mine_seed$(printf '%03d' $seed).csv" > /dev/null
done
for seed in 101 102 103; do
  "$obj/sim" +seed=$seed +cycles=$cycles +scenario=nominal \
    +out="$out/holdout_seed$seed.csv" > /dev/null
done
for seed in 201 202; do
  "$obj/sim" +seed=$seed +cycles=$cycles +scenario=stress \
    +out="$out/stress_seed$seed.csv" > /dev/null
done

echo "$design: $(ls "$out"/*.csv | wc -l) traces in $out"
head -1 "$out/mine_seed001.csv"
