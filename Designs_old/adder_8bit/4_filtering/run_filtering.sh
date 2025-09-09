
export ACEROOT="/home/fabio/Desktop/ACE"

python3 "$ACEROOT/trace_filtering/filter.py" \
  --csv "$ACEROOT/Designs/adder_8bit/3_harm/adder_8bit_DU.csv" \
  --ass "G(a + b + cin == 256 |-> cout_DU && !sum_DU)" \
  --out "filtered_a_+_b_+_cin_eq_256.csv"

python3 "$ACEROOT/trace_filtering/filter.py" \
  --csv "$ACEROOT/Designs/adder_8bit/3_harm/adder_8bit_DU.csv" \
  --ass "G((a + b + cin == 0) |-> !sum_DU && !cout_DU)" \
  --out "filtered_a_+_b_+_cin_eq_0.csv"

python3 "$ACEROOT/trace_filtering/filter.py" \
  --csv "$ACEROOT/Designs/adder_8bit/3_harm/adder_8bit_DU.csv" \
  --ass "G((a + b + cin > 255) |-> cout_DU)" \
  --out "filtered_a_+_b_+_cin_gt_255.csv"

  python3 "$ACEROOT/trace_filtering/filter.py" \
  --csv "$ACEROOT/Designs/adder_8bit/3_harm/adder_8bit_DU.csv" \
  --ass "G((a + b + cin <= 255) |-> !cout_DU)" \
  --out "filtered_a_+_b_+_cin_le_255.csv"


