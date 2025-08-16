
export ACEROOT="/home/fabio/Desktop/ACE"

python3 "$ACEROOT/trace_filtering/filter.py" \
  --csv "$ACEROOT/Designs/subplatform/sim/csv/bl_master/bl_master.csv" \
  --ass "G((!busy && request) |-> !busy && X(busy))"
