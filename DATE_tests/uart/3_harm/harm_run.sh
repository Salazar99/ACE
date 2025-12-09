
# Automatic generation of autogen.xml
#harm --csv ./sqrt_calculator.csv --conf autogen.xml --generate-config
#harm --csv ./sqrt_calculator.csv --conf autogen.xml --max-ass 100 --min-frank 0.5
prefix="DT_"
#Run all harm scripts
for file in ../2_fault_injection/Detection_traces/DT_*.csv; do
    base=$(basename "$file" .csv)
    base=${base#"$prefix"}
    conf="./conf/${base}.xml"
    harm --csv "$file" --conf "$conf" --dump-to ./harm_res
    mv ./harm_res/default_ass.txt "./harm_res/${base}.txt"
done
# for file in ../2_fault_injection/Detection_traces/DT_*.csv; do
#     prefix="DT_"
#     base=$(basename "$file" .csv)
#     base=${base#"$prefix"}
#     conf="./conf/${base}.xml"
#     touch ${conf}
# done