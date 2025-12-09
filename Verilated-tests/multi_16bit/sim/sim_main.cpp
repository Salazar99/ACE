#include <verilated.h>
#include "verilated_vcd_c.h"
#include "Vverified_multi_16bit.h"

static vluint64_t sim_time = 0;
double sc_time_stamp() { return sim_time; }

static const int HALF_PERIOD = 5; // 100 MHz (10 ns period)


static inline void eval_and_dump(Vverified_multi_16bit * top, VerilatedVcdC* tfp) {
    top->eval();
    if (tfp) tfp->dump(sim_time);
}

static inline void step_half_cycle(Vverified_multi_16bit * top, VerilatedVcdC* tfp) {
    eval_and_dump(top, tfp);
    sim_time += HALF_PERIOD;
    top->clk = !top->clk;
}

static inline void step_full_cycle(Vverified_multi_16bit * top, VerilatedVcdC* tfp) {
    step_half_cycle(top, tfp); // low->high
    step_half_cycle(top, tfp); // high->low
}


int main(int argc, char **argv)
{
    Verilated::commandArgs(argc, argv);
    Verilated::traceEverOn(true);

    auto* top = new Vverified_multi_16bit;
    auto* tfp = new VerilatedVcdC;
    top->trace(tfp, 99);
    tfp->open("dump_global.vcd");
    
    top->clk   = 0;
    top->rst_n = 1;

    // Release reset
    top->start = 0; // Initialize start
    top->rst_n = 0;

    // Reset low for a few cycles
    for (int i = 0; i < 4; ++i) step_full_cycle(top, tfp);

    top->rst_n = 1;
    step_full_cycle(top, tfp);
    
    int cycles = 0;
    int fail_count = 0;
    while (cycles < 100)
    {
        top->rst_n = 1;
        uint16_t rand_ain, rand_bin;
        top->ain = rand_ain = (std::rand() % 100) + 1;
        top->bin = rand_bin = (std::rand() % 100) + 1;
        top->start = 1;
          
        step_full_cycle(top, tfp);
        step_full_cycle(top, tfp);
        
        while(top->done != 1) {
            step_full_cycle(top, tfp);
        }
        
        uint32_t expected_product = static_cast<uint32_t>(rand_ain) * static_cast<uint32_t>(rand_bin);
        
        if (top->done == 1) {
            fail_count = (top->yout == expected_product)? fail_count:fail_count+1;
            top->start = 0; // Stop the operation
        }
        
        for (int i = 0; i < 5; ++i) {
            step_full_cycle(top, tfp);
        }
        
        
        top->rst_n = 0;

        for (int i = 0; i < 5; ++i) {
            step_full_cycle(top, tfp);
        }
        cycles++;
    }
    // Remember to close the trace object to save data in the file
    tfp->close();
    // Free memory
    delete top;
    delete tfp;
    return 0;
}