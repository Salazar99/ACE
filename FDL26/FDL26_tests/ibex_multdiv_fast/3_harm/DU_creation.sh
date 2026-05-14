#python3 $ACEROOT/Detection_trace_gen/DU_gen.py ibex_alu_result_o_0.csv ../1_csv/ibex_alu.csv --signal-col "bool result_o" --base 2 --output "./Detection_traces/ibex_alu_result_o_0_DU.csv"

for file in ./*.csv; do
    base_name=$(basename "$file" .csv)
    DU_signal="${base_name#multdiv_}"
    DU_signal="${DU_signal%%_fault*}"
    echo "DU_signal $DU_signal from file $file"
    python3 $ACEROOT/Detection_trace_gen/DU_gen.py "./$base_name".csv ../1_csv/ibex_multdiv_fast.csv --signal-col "int $DU_signal" --base 2 --output "./Detection_traces/${base_name}_DU.csv"
done