import pandas as pd
import argparse
import os


if __name__ == "__main__":
    parser = argparse.ArgumentParser(description="Process a CSV trace file and modify a signal with a stuck-at value.")
    parser.add_argument("csv_trace_path", help="Path to the CSV trace file")
    parser.add_argument("signal_name", help="Name of the signal to modify")
    parser.add_argument("stuck_at_value", help="Stuck-at value to assign to the signal")

    args = parser.parse_args()
    signame_sanitized = args.signal_name.replace(" ", "_").replace("*", "ptr").replace("[", "_").replace("]", "_").replace(".", "_") 
    output_file_path = f"./Detection_traces/DT_{signame_sanitized}_{args.stuck_at_value}.csv"
    try:
        df = pd.read_csv(args.csv_trace_path, delimiter=',')
        #cast to int is important otherwise it will compare against string and giving always detected=true
        
        df["bool Detected"] = (df[args.signal_name] != int(args.stuck_at_value)).astype(int)
        df = df.drop(columns=[args.signal_name])
        print("Detected:", df["bool Detected"].unique())        
        df.to_csv(output_file_path, index=False, sep=';')
        
        print(f"Modified trace written to '{output_file_path}'.")
        
    except Exception as e:
        print(f"An error occurred while writing the modified trace: {e}")
