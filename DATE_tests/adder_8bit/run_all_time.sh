#!/bin/bash

# 1 script
cd ./1_csv
bash run_csv.sh

# 2 script
#cd ../2_fault_injection
#ash run_faulty.sh

start=$(date +%s.%N)

# 3 script
cd ../3_harm
bash harm_run.sh

end=$(date +%s.%N)

# 4 script
cd ../4_filtering
bash run_filtering.sh

start1=$(date +%s.%N)

# 5 script
cd "../5_ASSUMPTIONS_(Invariants_extractor)"
bash run_InvGen.sh

end1=$(date +%s.%N)

# 6 script
#cd ../6_testbench_generator
#bash run_tb_generator.sh

start2=$(date +%s.%N)

# 7 script
cd ../7_GUARANTEES
bash run_guarantees.sh

end2=$(date +%s.%N)


duration=$(echo "$end - $start" | bc)
echo "Duration interesting mined behaviors: $duration"

duration1=$(echo "$end1 - $start1" | bc)
echo "Duration assumptions extractor: $duration1"

duration2=$(echo "$end2 - $start2" | bc)
echo "Duration guarantees extractor: $duration2"

