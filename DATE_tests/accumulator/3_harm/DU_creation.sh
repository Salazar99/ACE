
python3 $ACEROOT/Detection_trace_gen/DU_gen.py accu_fault_data_out0.csv ../1_csv/accu.csv --signal-col "bool A_equal" --base 2 --output "./Detection_traces/$accu_fault_data_out0_DU.csv"
python3 $ACEROOT/Detection_trace_gen/DU_gen.py accu_fault_data_out1.csv ../1_csv/accu.csv --signal-col "bool A_equal" --base 2 --output "./Detection_traces/$accu_fault_data_out1_DU.csv"
python3 $ACEROOT/Detection_trace_gen/DU_gen.py accu_fault_valid_out0.csv ../1_csv/accu.csv --signal-col "bool A_equal" --base 2 --output "./Detection_traces/$accu_fault_valid_out0_DU.csv"
python3 $ACEROOT/Detection_trace_gen/DU_gen.py accu_fault_valid_out1.csv ../1_csv/accu.csv --signal-col "bool A_equal" --base 2 --output "./Detection_traces/$accu_fault_valid_out1_DU.csv"
echo "Done processing DU files."