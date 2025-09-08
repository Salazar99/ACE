
#export ACEROOT="/home/fabio/Desktop/ACE"

python3 "$ACEROOT/trace_filtering/filter.py" \
  --csv "$ACEROOT/Designs/ibex_csr/3_harm/ibex_csr_DU.csv" \
  --ass "G(wr_en_i |-> ##1 rd_data_o_DU)" \
  --out "filtered_wr_en_i.csv"




