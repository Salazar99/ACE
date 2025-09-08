
export ACEROOT="/home/fabio/Desktop/ACE"

python3 "$ACEROOT/trace_filtering/filter.py" \
  --csv "$ACEROOT/Designs/multi_16bit/3_harm/multi_16bit_DU.csv" \
  --ass "G(!start ##1 start |-> ##17 done_DU)" \
  --out "filtered_start_done.csv"




