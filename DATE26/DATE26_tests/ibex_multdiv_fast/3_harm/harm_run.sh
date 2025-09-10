
# Automatic generation of autogen.xml
#harm --csv ./adder_8bit_DU.csv --conf autogen.xml --generate-config
#harm --csv ./adder_8bit_DU.csv --conf autogen.xml --max-ass 100 --min-frank 0.5

# Manual generation of camellia.xml
for file in ./Detection_traces/*_DU.csv; do
    base_name=$(basename "$file" .csv)
    harm --csv "$file" --conf ./conf/ibex_multdiv_fast_check.xml --dont-normalize --dump-to ./harm_res
    mv ./harm_res/default_ass.txt ./harm_res/$base_name.txt
done

#--check-dump-eval temporal_instants