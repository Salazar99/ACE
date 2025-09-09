
python3 $ACEROOT/Detection_trace_gen/DU_gen.py sqrt_calculator_fault_out0.csv ../1_csv/sqrt_calculator.csv --signal-col "int out" --base 2 --output "./Detection_traces/sqrt_calculator_fault_out0_DU.csv"
python3 $ACEROOT/Detection_trace_gen/DU_gen.py sqrt_calculator_fault_out1.csv ../1_csv/sqrt_calculator.csv --signal-col "int out" --base 2 --output "./Detection_traces/sqrt_calculator_fault_out1_DU.csv"
python3 $ACEROOT/Detection_trace_gen/DU_gen.py sqrt_calculator_fault_error0.csv ../1_csv/sqrt_calculator.csv --signal-col "int error" --base 2 --output "./Detection_traces/sqrt_calculator_fault_error0_DU.csv"
python3 $ACEROOT/Detection_trace_gen/DU_gen.py sqrt_calculator_fault_error1.csv ../1_csv/sqrt_calculator.csv --signal-col "int error" --base 2 --output "./Detection_traces/sqrt_calculator_fault_error1_DU.csv"
python3 $ACEROOT/Detection_trace_gen/DU_gen.py sqrt_calculator_fault_done0.csv ../1_csv/sqrt_calculator.csv --signal-col "int done" --base 2 --output "./Detection_traces/sqrt_calculator_fault_done0_DU.csv"
python3 $ACEROOT/Detection_trace_gen/DU_gen.py sqrt_calculator_fault_done1.csv ../1_csv/sqrt_calculator.csv --signal-col "int done" --base 2 --output "./Detection_traces/sqrt_calculator_fault_done1_DU.csv"

