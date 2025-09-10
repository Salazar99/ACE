
#export ACEROOT="/home/fabio/Desktop/ACE"

python3 "$ACEROOT/trace_filtering/filter.py" \
  --csv "../3_harm/Detection_traces/verified_multi_16bit_faulty_done_0_DU.csv" \
  --ass "G(!start ##1 start |-> ##17 DU)" \
  --out "filtered_start_done.csv"




