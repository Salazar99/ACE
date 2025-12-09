#include <verilated.h>
#include "verilated_vcd_c.h"
#include "Vverified_adder_8bit.h"

static vluint64_t sim_time = 0;
double sc_time_stamp() { return sim_time; }

static const int HALF_PERIOD = 5; // 100 MHz (10 ns period)


static inline void eval_and_dump(Vverified_adder_8bit * top, VerilatedVcdC* tfp) {
    top->eval();
    if (tfp) tfp->dump(sim_time);
}

static inline void step_half_cycle(Vverified_adder_8bit * top, VerilatedVcdC* tfp) {
    eval_and_dump(top, tfp);
    sim_time += HALF_PERIOD;
    top->clk = !top->clk;
}

static inline void step_full_cycle(Vverified_adder_8bit * top, VerilatedVcdC* tfp) {
    step_half_cycle(top, tfp); // low->high
    step_half_cycle(top, tfp); // high->low
}


int main(int argc, char **argv)
{
    Verilated::commandArgs(argc, argv);
    Verilated::traceEverOn(true);

    auto* top = new Vverified_adder_8bit;
    auto* tfp = new VerilatedVcdC;
    top->trace(tfp, 99);
    tfp->open("dump_global.vcd");
    
    top->clk   = 0;
    
    int cycles = 0;

    while (cycles < 1000000)
    {
        //randomize data_in and then send a valid_in
        uint8_t rand_a = std::rand() & 0xFF;
        uint8_t rand_b = std::rand() & 0xFF;
        uint8_t rand_cin = std::rand() & 0x1;
        top->a = rand_a;
        top->b = rand_b;
        top->cin = rand_cin;
        for (int i = 0; i < 15; ++i) {
            step_full_cycle(top, tfp);
            cycles++;
        }
        step_full_cycle(top, tfp);
        cycles++;
    }
    // Remember to close the trace object to save data in the file
    tfp->close();
    // Free memory
    delete top;
    delete tfp;
    return 0;
}