
#export ACEROOT="/home/fabio/Desktop/ACE"

python3 "$ACEROOT/trace_filtering/filter.py" \
  --csv "$ACEROOT/Designs/sqrt/3_harm/sqrt_calculator_DU.csv" \
  --ass "G((in > 0) |-> ##12 out_DU)" \
  --out "filtered_in_gt_0.csv"


python3 "$ACEROOT/trace_filtering/filter.py" \
  --csv "$ACEROOT/Designs/sqrt/3_harm/sqrt_calculator_DU.csv" \
  --ass "G((in < 0) |-> ##1 error_DU)" \
  --out "filtered_in_lt_0.csv"

python3 "$ACEROOT/trace_filtering/filter.py" \
  --csv "$ACEROOT/Designs/sqrt/3_harm/sqrt_calculator_DU.csv" \
  --ass "G((in == 0) && start |-> ##12 !out_DU)" \
  --out "filtered_in_eq_0.csv"
  #--ass "G((in == 0) && start |-> ##12 !out_DU && !error && done_DU)" \


