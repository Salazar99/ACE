
python3 $ACEROOT/Detection_trace_gen/DU_gen.py adder_8bit_fault_sum0.csv ../1_csv/adder_8bit.csv --signal-col "bool A_equal" --base 2 --output "./Detection_traces/adder_8bit_fault_sum0_DU.csv"
python3 $ACEROOT/Detection_trace_gen/DU_gen.py adder_8bit_fault_sum1.csv ../1_csv/adder_8bit.csv --signal-col "bool A_equal" --base 2 --output "./Detection_traces/adder_8bit_fault_sum1_DU.csv"
python3 $ACEROOT/Detection_trace_gen/DU_gen.py adder_8bit_fault_cout0.csv ../1_csv/adder_8bit.csv --signal-col "bool A_equal" --base 2 --output "./Detection_traces/adder_8bit_fault_cout0_DU.csv"
python3 $ACEROOT/Detection_trace_gen/DU_gen.py adder_8bit_fault_cout1.csv ../1_csv/adder_8bit.csv --signal-col "bool A_equal" --base 2 --output "./Detection_traces/adder_8bit_fault_cout1_DU.csv"

echo "Done processing Adder files."