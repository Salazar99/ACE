import pandas as pd
import matplotlib.pyplot as plt
import sys

uart_to_plot=["bool rst_ni",
    "bool rx",
    "int32_t reg2hw_intr_state",
    "int32_t reg2hw_alert_test",
    "int32_t reg2hw_rdata",
    "int32_t reg2hw_ovrd",
    "int32_t reg2hw_intr_enable",
    "int32_t reg2hw_ctrl",
    "int32_t reg2hw_wdata",
    "int32_t reg2hw_timeout_ctrl",
    "int32_t reg2hw_intr_test",
    "int32_t reg2hw_status",
    "int32_t reg2hw_fifo_ctrl",
    "bool Detected"]


def main(filename):
    dataframe = pd.read_csv(filename)

    fig, ax = plt.subplots()
    
    for column in dataframe.columns:
        if column in uart_to_plot:
            ax.plot(dataframe[column], label=column)
            
    ax.legend()
    plt.show()



if __name__ == "__main__":
    main(sys.argv[1])