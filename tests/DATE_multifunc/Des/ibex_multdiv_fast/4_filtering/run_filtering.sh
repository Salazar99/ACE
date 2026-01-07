
export ACEROOT="/home/fabio/Desktop/ACE"

python3 "$ACEROOT/trace_filtering/filter.py" \
  --csv "$ACEROOT/Designs/ibex_multdiv_fast/3_harm/ibex_multdiv_fast_DU.csv" \
  --ass "G(!div_sel_i ##1 div_sel_i ##36 true |-> valid_o_DU)" \
  --out "filtered_div_sel_i.csv"

  python3 "$ACEROOT/trace_filtering/filter.py" \
  --csv "$ACEROOT/Designs/ibex_multdiv_fast/3_harm/ibex_multdiv_fast_DU.csv" \
  --ass "G(!mult_sel_i ##1 mult_sel_i |-> valid_o_DU)" \
  --out "filtered_mult_sel_i.csv"



