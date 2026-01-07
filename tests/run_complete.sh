#!/bin/bash

# Loop through all directories in the current folder
for dir in */; do
    if [ -d "$dir" ]; then
        # Define a unique result file for each directory
        result_file="${dir%/}_results.txt"
        
        echo "Running in directory: $dir" > "$result_file"
        # Navigate to the directory, run the script, and append the output to the result file
        (cd "$dir" && ./run_all_time.sh >> "../$result_file" 2>&1)
        echo "----------------------------------------" >> "$result_file"
    fi
done

echo "All runs completed. Results saved in individual result files."
