
export ACEROOT="/home/fabio/Desktop/ACE"

python3 "$ACEROOT/trace_filtering/filter.py" \
  --csv "$ACEROOT/Designs/comparator_3bit/3_harm/comparator_3bit_DU.csv" \
  --ass "G((A > B) |-> A_greater_DU)" \
  --out "filtered_A_gt_B.csv"

python3 "$ACEROOT/trace_filtering/filter.py" \
  --csv "$ACEROOT/Designs/comparator_3bit/3_harm/comparator_3bit_DU.csv" \
  --ass "G((A < B) |-> A_less_DU)" \
  --out "filtered_A_lt_B.csv"

python3 "$ACEROOT/trace_filtering/filter.py" \
  --csv "$ACEROOT/Designs/comparator_3bit/3_harm/comparator_3bit_DU.csv" \
  --ass "G((A == B) |-> A_equal_DU)" \
  --out "filtered_A_eq_B.csv"


