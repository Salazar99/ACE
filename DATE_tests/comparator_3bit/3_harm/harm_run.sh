
# Automatic generation of autogen.xml
#harm --csv ./comparator_3bit_DU.csv --conf autogen.xml --generate-config
#harm --csv ./comparator_3bit_DU.csv --conf autogen.xml --max-ass 100 --min-frank 0.5

# Manual generation of camellia.xml
harm --csv ./Detection_traces/comparator_3bit_DU.csv --conf ./conf/comparator_3bit_DU.xml
harm --csv ./Detection_traces/comparator_A_equal0_DU.csv --conf ./conf/comparator_A_equal0.xml
harm --csv ./Detection_traces/comparator_A_equal1_DU.csv --conf ./conf/comparator_A_equal1.xml
harm --csv ./Detection_traces/comparator_A_greater0_DU.csv --conf ./conf/comparator_A_greater0.xml
harm --csv ./Detection_traces/comparator_A_greater1_DU.csv --conf ./conf/comparator_A_greater1.xml
harm --csv ./Detection_traces/comparator_A_less0_DU.csv --conf ./conf/comparator_A_less0.xml
harm --csv ./Detection_traces/comparator_A_less1_DU.csv --conf ./conf/comparator_A_less1.xml