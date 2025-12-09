import pandas as pd
import xml.etree.ElementTree as ET

def parse_signals_from_xml(xml_file):
    """
    Parse signals from an XML file.
    
    Args:
        xml_file (str): Path to the XML file
    
    Returns:
        list: Combined list of input and output signals
    """
    tree = ET.parse(xml_file)
    root = tree.getroot()
    
    signals = []
    
    # Get input signals
    inputs = root.find("inputs")
    if inputs is not None:
        signals.extend([item.text for item in inputs.findall("item") if item.text])
    
    # Get output signals
    outputs = root.find("outputs")
    if outputs is not None:
        signals.extend([item.text for item in outputs.findall("item") if item.text])
    
    return signals


def remove_signals(csv_file, signals_to_keep, output_file=None):
    """
    Remove columns from a CSV file that are not in the provided signals list.
    Handles headers with format "TYPE signal_name" where TYPE and name are space-separated.
    
    Args:
        csv_file (str): Path to the input CSV file
        signals_to_keep (list): List of column names to keep
        output_file (str): Path to save the filtered CSV. If None, overwrites input file
    
    Returns:
        pd.DataFrame: The filtered dataframe
    """
    # Read the CSV file
    df = pd.read_csv(csv_file)
    
    # Extract signal names from headers (last part after space if present)
    def extract_signal_name(col):
        return col.split()[-1] if ' ' in col else col
    
    # Keep columns where extracted signal name matches signals_to_keep
    columns_to_keep = [col for col in df.columns if extract_signal_name(col) in signals_to_keep]
    df_filtered = df[columns_to_keep]
    
    # Save to file
    if output_file is None:
        output_file = csv_file
    df_filtered.to_csv(output_file, index=False)
    
    return df_filtered


if __name__ == "__main__":
    # Example usage
    signals = parse_signals_from_xml("../io.xml")
    remove_signals("uart.csv", signals, "uart_filtered.csv")