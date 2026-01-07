
#export ACEROOT="/home/fabio/Desktop/ACE"

python3 "$ACEROOT/trace_filtering/filter.py" \
  --csv "../3_harm/Detection_traces/ibex_csr_fault_rd_data_o_0_DU.csv" \
  --ass "G(wr_en_i |-> ##1 DU)" \
  --out "filtered_wr_en_i.csv"




