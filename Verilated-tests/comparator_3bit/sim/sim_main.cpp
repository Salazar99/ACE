#include <verilated.h>
#include "verilated_vcd_c.h"
#include "Vcomparator_3bit.h"

static vluint64_t sim_time = 0;
double sc_time_stamp() { return sim_time; }

static const int HALF_PERIOD = 5; // 100 MHz (10 ns period)


static inline void eval_and_dump(Vcomparator_3bit * top, VerilatedVcdC* tfp) {
    top->eval();
    if (tfp) tfp->dump(sim_time);
}

static inline void step_half_cycle(Vcomparator_3bit * top, VerilatedVcdC* tfp) {
    eval_and_dump(top, tfp);
    sim_time += HALF_PERIOD;
    top->clk = !top->clk;
}

static inline void step_full_cycle(Vcomparator_3bit * top, VerilatedVcdC* tfp) {
    step_half_cycle(top, tfp); // low->high
    step_half_cycle(top, tfp); // high->low
}


int main(int argc, char **argv)
{
    Verilated::commandArgs(argc, argv);
    Verilated::traceEverOn(true);

    auto* top = new Vcomparator_3bit;
    auto* tfp = new VerilatedVcdC;
    top->trace(tfp, 99);
    tfp->open("dump_global.vcd");
    
    top->clk   = 0;
  
    int cycles = 0;

    while (cycles < 1000000)
    {
        //generate two random 3-bit numbers
        uint8_t rand_A = std::rand() & 0x7;
        top->A = rand_A;
        uint8_t rand_B = std::rand() & 0x7;
        top->B = rand_B;

        for (int i = 0; i < 15; ++i) {
            step_full_cycle(top, tfp);
            cycles++;
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