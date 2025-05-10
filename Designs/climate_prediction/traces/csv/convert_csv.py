import pandas as pd
import numpy as np
import sys

def uint32_to_signed(value):
    """Convert a uint32_t value to signed int using two's complement."""
    if value >= 2**31:
        return value - 2**32
    return value

def process_csv(file_path):
    """
    Processes the input CSV file:
    - Automatically detects columns with uint32_t values.
    - Converts these columns to signed integers.
    - Overwrites the original CSV file with the updated data.
    
    Args:
        file_path (str): Path to the CSV file to process.
    """
    # Read the CSV file
    df = pd.read_csv(file_path)
    
    # Automatically detect uint32_t columns
    uint32_columns = []
    for column in df.columns:
        # Check for integer-like columns that might be uint32_t
        if df[column].dtype == np.int64 or df[column].dtype == np.uint32:
            uint32_columns.append(column)

    # Convert uint32_t columns to signed integers
    for column in uint32_columns:
        df[column] = df[column].apply(uint32_to_signed).astype(int)
        df.rename(columns={column: column.replace("uint32_t", "int")}, inplace=True)


    # Overwrite the original file with the updated content
    df.to_csv(file_path, index=False)
    print(f"Updated file saved: {file_path}")

if __name__ == "__main__":
    if len(sys.argv) != 2:
        print("Usage: python3 convert_csv.py <file_path>")
        sys.exit(1)

    file_path = sys.argv[1]
    process_csv(file_path)