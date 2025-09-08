
python3 $ACEROOT/Detection_trace_gen/DU_gen.py ibex_csr_fault_rd_data_o_0.csv ../1_csv/comparator_3bit.csv --signal-col "bool data_o" --base 2 --output "./Detection_traces/ibex_csr_fault_rd_data_o_0_DU.csv"
python3 $ACEROOT/Detection_trace_gen/DU_gen.py ibex_csr_fault_rd_data_o_1.csv ../1_csv/comparator_3bit.csv --signal-col "bool data_o" --base 2 --output "./Detection_traces/ibex_csr_fault_rd_data_o_1_DU.csv"
python3 $ACEROOT/Detection_trace_gen/DU_gen.py ibex_csr_fault_rd_error_o_0.csv ../1_csv/comparator_3bit.csv --signal-col "bool error_o" --base 2 --output "./Detection_traces/ibex_csr_fault_rd_error_o_0_DU.csv"
python3 $ACEROOT/Detection_trace_gen/DU_gen.py ibex_csr_fault_rd_error_o_1.csv ../1_csv/comparator_3bit.csv --signal-col "bool error_o" --base 2 --output "./Detection_traces/ibex_csr_fault_rd_error_o_1_DU.csv"

