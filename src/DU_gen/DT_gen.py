import csv
import argparse


if __name__ == "__main__":
    parser = argparse.ArgumentParser(description="Process a CSV trace file and modify a signal with a stuck-at value.")
    parser.add_argument("csv_trace_path", help="Path to the CSV trace file")
    parser.add_argument("signal_name", help="Name of the signal to modify")
    parser.add_argument("stuck_at_value", help="Stuck-at value to assign to the signal")

    args = parser.parse_args()

    output_file_path = f"DT_{args.signal_name}_{args.stuck_at_value}.csv"
    try:
        with open(args.csv_trace_path, mode='r') as csv_file, open(output_file_path, mode='w', newline='') as output_file:
            csv_reader = csv.DictReader(csv_file)
            if not csv_reader.fieldnames:
                raise ValueError("The CSV file is empty or improperly formatted.")
            fieldnames = [field for field in csv_reader.fieldnames if field != args.signal_name] + ["Detected"]
            csv_writer = csv.DictWriter(output_file, fieldnames=fieldnames)
            
            csv_writer.writeheader()
            for row in csv_reader:
                detected = 1 if row[args.signal_name] != args.stuck_at_value else 0
                row["Detected"] = detected
                del row[args.signal_name]
                csv_writer.writerow(row)
        
        print(f"Modified trace written to '{output_file_path}'.")
    except Exception as e:
        print(f"An error occurred while writing the modified trace: {e}")