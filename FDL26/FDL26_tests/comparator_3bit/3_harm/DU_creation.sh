for csv_file in ./comparator_A_equal*.csv; do
 base_name=$(basename "$csv_file" .csv)
    python3 $ACEROOT/Detection_trace_gen/DU_gen.py "$csv_file" ../1_csv/comparator_3bit.csv --signal-col "bool A_equal" --base 2 --output "./Detection_traces/${base_name}_DU.csv"
done
echo "Done processing A_equal files."
for csv_file in ./comparator_A_greater*.csv; do
 base_name=$(basename "$csv_file" .csv)
    python3 $ACEROOT/Detection_trace_gen/DU_gen.py "$csv_file" ../1_csv/comparator_3bit.csv --signal-col "bool A_greater" --base 2 --output "./Detection_traces/${base_name}_DU.csv"
done
echo "Done processing A_greater files."
for csv_file in ./comparator_A_less*.csv; do
 base_name=$(basename "$csv_file" .csv)
    python3 $ACEROOT/Detection_trace_gen/DU_gen.py "$csv_file" ../1_csv/comparator_3bit.csv --signal-col "bool A_less" --base 2 --output "./Detection_traces/${base_name}_DU.csv"
done
echo "Done processing A_less files."