#include <verilated.h>
#include "verilated_vcd_c.h"
#include "Vibex_csr.h"
#include <iostream>

static vluint64_t sim_time = 0;
double sc_time_stamp() { return sim_time; }

static const int HALF_PERIOD = 5; // 100 MHz (10 ns period)


static inline void eval_and_dump(Vibex_csr * top, VerilatedVcdC* tfp) {
    top->eval();
    if (tfp) tfp->dump(sim_time);
}

static inline void step_half_cycle(Vibex_csr * top, VerilatedVcdC* tfp) {
    eval_and_dump(top, tfp);
    sim_time += HALF_PERIOD;
    top->clk_i = !top->clk_i;
}

static inline void step_full_cycle(Vibex_csr * top, VerilatedVcdC* tfp) {
    step_half_cycle(top, tfp); // low->high
    step_half_cycle(top, tfp); // high->low
}


int main(int argc, char **argv)
{
    Verilated::commandArgs(argc, argv);
    Verilated::traceEverOn(true);

    auto* top = new Vibex_csr;
    auto* tfp = new VerilatedVcdC;
    top->trace(tfp, 99);
    tfp->open("dump_global.vcd");
    
    top->clk_i = 0;
    top->rst_ni = 0;
    top->wr_data_i = 0;
    top->wr_en_i = 0;

    // Reset
    for (int i = 0; i < 4; ++i) step_full_cycle(top, tfp);
    top->rst_ni = 1;
    for (int i = 0; i < 4; ++i) step_full_cycle(top, tfp);

    // Check reset value
    if (top->rd_data_o != 0x00000000)
      std::cout << "Reset value mismatch: expected " << std::hex << 0x00000000 << ", got " << top->rd_data_o << std::endl;

    // Loop di test su 100 valori
    for (int i = 1; i < 100; i++) {
      top->wr_data_i = i * 0x01010101; // Valori pseudo-random
      top->wr_en_i = 1;
      for (int j = 0; j < 2; ++j) step_full_cycle(top, tfp);
      top->wr_en_i = 0;
      top->wr_data_i = 0;
      for (int j = 0; j < 2; ++j) step_full_cycle(top, tfp);
      top->rst_ni = 0;
      for (int j = 0; j < 2; ++j) step_full_cycle(top, tfp);
      top->rst_ni = 1;

      // Verifica lettura
      if (top->rd_data_o != top->wr_data_i)
        std::cout << "Mismatch at iteration " << i << ": expected " << std::hex << top->wr_data_i << ", got " << top->rd_data_o << std::endl;

      // Verifica integrità shadow
      if (top->rd_error_o)
       std::cout << "Shadow copy error at iteration " << i << std::endl;
    }

    // Remember to close the trace object to save data in the file
    tfp->close();
    // Free memory
    delete top;
    delete tfp;
    return 0;
}