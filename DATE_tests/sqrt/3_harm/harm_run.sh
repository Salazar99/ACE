
# Automatic generation of autogen.xml
#harm --csv ./sqrt_calculator.csv --conf autogen.xml --generate-config
#harm --csv ./sqrt_calculator.csv --conf autogen.xml --max-ass 100 --min-frank 0.5

# Manual generation of camellia.xml
harm --csv ./sqrt_calculator_fault_out0_DU.csv --conf ./conf/sqrt_calculator_fault_out_0.xml
harm --csv ./sqrt_calculator_fault_out1_DU.csv --conf ./conf/sqrt_calculator_fault_out_1.xml
harm --csv ./sqrt_calculator_fault_error0_DU.csv --conf ./conf/sqrt_calculator_fault_error_0.xml
harm --csv ./sqrt_calculator_fault_error1_DU.csv --conf ./conf/sqrt_calculator_fault_error_1.xml
harm --csv ./sqrt_calculator_fault_done0_DU.csv --conf ./conf/sqrt_calculator_fault_done_0.xml
harm --csv ./sqrt_calculator_fault_done1_DU.csv --conf ./conf/sqrt_calculator_fault_done_1.xml