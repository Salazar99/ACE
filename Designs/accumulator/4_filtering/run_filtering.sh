
export ACEROOT="/home/fabio/Desktop/ACE"

python3 "$ACEROOT/trace_filtering/filter.py" \
  --csv "$ACEROOT/Designs/accumulator/3_harm/accu_DU.csv" \
  --ass "G(valid_in |-> ##[1:4] valid_out)" \
  --out "filtered_valid_in.csv"



