
# Automatic generation of autogen.xml
#harm --csv ./comparator_3bit_DU.csv --conf autogen.xml --generate-config
#harm --csv ./comparator_3bit_DU.csv --conf autogen.xml --max-ass 100 --min-frank 0.5

# Manual generation of camellia.xml
harm --csv ./verified_multi_16bit_faulty_yout_0_DU.csv --conf verified_multi_16bit_faulty_yout_0_DU.xml
harm --csv ./verified_multi_16bit_faulty_yout_1_DU.csv --conf verified_multi_16bit_faulty_yout_1_DU.xml
harm --csv ./verified_multi_16bit_faulty_done_0_DU.csv --conf verified_multi_16bit_faulty_done_0_DU.xml
harm --csv ./verified_multi_16bit_faulty_done_1_DU.csv --conf verified_multi_16bit_faulty_done_1_DU.xml