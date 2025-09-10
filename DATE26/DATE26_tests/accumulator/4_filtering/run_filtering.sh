
#export ACEROOT="~/ACE"

python3 "$ACEROOT/trace_filtering/filter.py" \
  --csv "$ACEROOT/Designs/accumulator/3_harm/accu_fault_valid_out0.csv" \
  --ass "G(valid_in |-> ##[1:4] valid_out)" \
  --out "filtered_valid_in0.csv"