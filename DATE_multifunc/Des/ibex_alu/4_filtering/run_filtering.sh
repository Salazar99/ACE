
export ACEROOT="/home/fabio/Desktop/ACE"

python3 "$ACEROOT/trace_filtering/filter.py" \
  --csv "$ACEROOT/Designs/ibex_alu/3_harm/ibex_alu_DU.csv" \
  --ass "G(rst_n && operator_i == 0 |-> result_o_DU)" \
  --out "filtered_operator_0.csv"

python3 "$ACEROOT/trace_filtering/filter.py" \
  --csv "$ACEROOT/Designs/ibex_alu/3_harm/ibex_alu_DU.csv" \
  --ass "G(rst_n && operator_i == 1 |-> result_o_DU)" \
  --out "filtered_operator_1.csv"

python3 "$ACEROOT/trace_filtering/filter.py" \
  --csv "$ACEROOT/Designs/ibex_alu/3_harm/ibex_alu_DU.csv" \
  --ass "G(rst_n && operator_i == 3 |-> result_o_DU)" \
  --out "filtered_operator_3.csv"

python3 "$ACEROOT/trace_filtering/filter.py" \
  --csv "$ACEROOT/Designs/ibex_alu/3_harm/ibex_alu_DU.csv" \
  --ass "G(rst_n && operator_i == 4 |-> result_o_DU)" \
  --out "filtered_operator_4.csv"

python3 "$ACEROOT/trace_filtering/filter.py" \
  --csv "$ACEROOT/Designs/ibex_alu/3_harm/ibex_alu_DU.csv" \
  --ass "G(rst_n && operator_i == 29 |-> result_o_DU)" \
  --out "filtered_operator_29.csv"





