
#export ACEROOT="/home/fabio/Desktop/ACE"

python3 "$ACEROOT/trace_filtering/filter.py" \
  --csv "$ACEROOT/Designs/comparator_3bit/1_csv/comparator_3bit.csv" \
  --ass "G((A > B) |-> true)" \
  --out "filtered_A_gt_0.csv"

python3 "$ACEROOT/trace_filtering/filter.py" \
  --csv "$ACEROOT/Designs/comparator_3bit/1_csv/comparator_3bit.csv" \
  --ass "G(!(A > B) |-> true)" \
  --out "filtered_A_gt_1.csv"

python3 "$ACEROOT/trace_filtering/filter.py" \
  --csv "$ACEROOT/Designs/comparator_3bit/1_csv/comparator_3bit.csv" \
  --ass "G((A < B) |-> true)" \
  --out "filtered_A_lt_0.csv"

python3 "$ACEROOT/trace_filtering/filter.py" \
  --csv "$ACEROOT/Designs/comparator_3bit/1_csv/comparator_3bit.csv" \
  --ass "G(!(A < B) |-> true)" \
  --out "filtered_A_lt_1.csv"

  python3 "$ACEROOT/trace_filtering/filter.py" \
  --csv "$ACEROOT/Designs/comparator_3bit/1_csv/comparator_3bit.csv" \
  --ass "G((A == B) |-> true)" \
  --out "filtered_A_eq_0.csv"

  python3 "$ACEROOT/trace_filtering/filter.py" \
  --csv "$ACEROOT/Designs/comparator_3bit/1_csv/comparator_3bit.csv" \
  --ass "G((A != B) |-> true)" \
  --out "filtered_A_eq_1.csv"

