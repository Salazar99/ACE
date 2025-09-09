import pandas as pd
import sys

def process_csv(file_path):
    """
    Processes the input CSV file:
    - Updates the column names from uint32_t or uint64_t to int.
    - Overwrites the original CSV file with the updated data.

    Args:
        file_path (str): Path to the CSV file to process.
    """
    # Read the CSV file
    df = pd.read_csv(file_path)

    # Rename columns to reflect uint32_t/uint64_t to int transformation
    renamed_columns = {
        col: col.replace("uint32_t", "int").replace("uint64_t", "int")
        for col in df.columns
        if "uint32_t" in col or "uint64_t" in col
    }
    df.rename(columns=renamed_columns, inplace=True)

    # Overwrite the original file with the updated content
    df.to_csv(file_path, index=False)
    print(f"Updated file saved: {file_path}")

if __name__ == "__main__":
    if len(sys.argv) != 2:
        print("Usage: python3 convert_csv.py <file_path>")
        sys.exit(1)

    file_path = sys.argv[1]
    process_csv(file_path)