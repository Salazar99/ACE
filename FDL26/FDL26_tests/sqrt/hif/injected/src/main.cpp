#include <stdlib.h>
#include <stdint.h>

#include <algorithm>
#include <cstdio>
#include <filesystem>
#include <fstream>
#include <iostream>
#include <vector>

#include "cpptracer/tracer.hpp"
#include "muffin_dataTypes.hpp"
#include "sqrt_calculator.hpp"

using Trace = std::vector<sqrt_calculator::sqrt_calculator_iostruct>;

// set the inputs to random values
void setRandomInputs(sqrt_calculator::sqrt_calculator_iostruct& in) {
  in.rst = rand() % 2;
  in.start = rand() % 2;
  in.in = rand() % 2;
}

// set the inputs from a trace sample
void setInputsFromTraceSample(sqrt_calculator::sqrt_calculator_iostruct& in,
                              const sqrt_calculator::sqrt_calculator_iostruct& dump) {
  in.rst = dump.rst;
  in.start = dump.start;
  in.in = dump.in;
}

// returns true if two samples are equivalent
bool checkOutput(const sqrt_calculator::sqrt_calculator_iostruct& golden,
                 const sqrt_calculator::sqrt_calculator_iostruct& faulty) {
  if (golden.out != faulty.out || golden.done != faulty.done || golden.error != faulty.error) {
    return 0;
  }
  return 1;
}

void printSample(sqrt_calculator::sqrt_calculator_iostruct& in) {
  printf("rst: %d\n", in.rst);
  printf("start: %d\n", in.start);
  printf("x: %d\n", in.in);
  printf("y: %d\n", in.out);
  printf("done: %d\n", in.done);
  printf("error: %d\n", in.error);
}

//we need to this to dump as a wire 1 bit long
static std::vector<bool> vcd_clk = {0};
static std::vector<bool> vcd_rst = {0};
static std::vector<bool> vcd_start = {0};
static std::vector<bool> vcd_in = {0};
static std::vector<bool> vcd_out = {0};
static std::vector<bool> vcd_done = {0};
static std::vector<bool> vcd_error = {0};

static cpptracer::TimeScale timeStep(1, cpptracer::TimeUnit::NS);

cpptracer::Tracer initVCDTrace(const std::string& name) {
  cpptracer::Tracer tracer(name, timeStep, "sqrt_calculator_bench");
  tracer.addScope("sqrt_calculatorf_");

  tracer.addTrace(vcd_clk, "clk");
  tracer.addTrace(vcd_rst, "rst");
  tracer.addTrace(vcd_start, "start");
  tracer.addTrace(vcd_in, "in");
  tracer.addTrace(vcd_out, "out");
  tracer.addTrace(vcd_done, "done");
  tracer.addTrace(vcd_error, "error");

  tracer.closeScope();
  tracer.createTrace();
  return tracer;
}
void updateVCDVariables(const sqrt_calculator::sqrt_calculator_iostruct& in) {
  vcd_clk[0] = in.clk;
  vcd_rst[0] = in.rst;
  vcd_start[0] = in.start;
  vcd_in[0] = in.in;
  vcd_out[0] = in.out;
  vcd_done[0] = in.done;
  vcd_error[0] = in.error;
}

bool areEquivalent(const Trace& t1, const Trace& t2) {
  if (t1.size() != t2.size()) {
    return false;
  }
  for (size_t i = 0; i < t1.size(); ++i) {
    if (t1[i].rst != t2[i].rst || t1[i].start != t2[i].start ||
        t1[i].in != t2[i].in || t1[i].out != t2[i].out ||
        t1[i].done != t2[i].done || t1[i].error != t2[i].error) {
      return false;
    }
  }
  return true;
}

int main() {
  muffin::stuck_at = 0;
  muffin::hif_global_instance_counter = 0;

  // number of faulted instances created with muffin, 0 is the original design
  // without faults
  muffin::instance_number = 0;

  // faults
  int32_t cycles_number = 0;
  size_t traceLength = 1000 * 2;  // 1000 positive and 1000 negative edges

  bool clock_0 = 0;

  printf("Simulate golden\n");

  sqrt_calculator sqrt_calculator_instance;
  sqrt_calculator_instance.initialize();

  Trace golden_trace;

  // in case of a rst
  sqrt_calculator::sqrt_calculator_iostruct in_rst_on;
  in_rst_on.clk = clock_0;
  sqrt_calculator_instance.simulate(&in_rst_on, cycles_number);

  srand(0);

  sqrt_calculator::sqrt_calculator_iostruct in;

  for (size_t k = 0; k < traceLength; ++k) {
    clock_0 = !clock_0;

    in.clk = clock_0;

    // in
    if (!clock_0) {
      setRandomInputs(in);
    }

    sqrt_calculator_instance.simulate(&in, cycles_number);

    // out
    golden_trace.push_back(in);
    // printSample(in);
  }

  // Simulate the design with faults (instance 1), we need to reuse the same input trace
  muffin::instance_number = 1;
  size_t faultObserved = 0;
  std::vector<size_t> uncoveredFaults;
  std::vector<Trace> faultyTraces;
  std::cout << "Number of faults: " << sqrt_calculator_instance.hif_fault_node.number
            << "\n";

  for (muffin::fault_number = 0;
       muffin::fault_number < sqrt_calculator_instance.hif_fault_node.number;
       ++muffin::fault_number) {
    Trace faulty_trace;
    muffin::hif_global_instance_counter = 0;
    printf("Simulating fault number '%ld:%ld'\n", muffin::instance_number,
           muffin::fault_number);

    clock_0 = 0;
    sqrt_calculator::sqrt_calculator_iostruct in_rst_on;
    in_rst_on.clk = clock_0;
    sqrt_calculator_instance.simulate(&in_rst_on, cycles_number);
    sqrt_calculator sqrt_calculator_instance;
    sqrt_calculator_instance.initialize();

    sqrt_calculator::sqrt_calculator_iostruct in;
    bool faultFound = 0;
    for (size_t k = 0; k < traceLength; ++k) {
      clock_0 = !clock_0;

      in.clk = clock_0;
      // in
      if (!clock_0) {
        setInputsFromTraceSample(in, golden_trace[k]);
      }
      sqrt_calculator_instance.simulate(&in, cycles_number);

      faulty_trace.push_back(in);

      // get the output
      if (clock_0) {
        if (!checkOutput(golden_trace[k], in)) {
          faultFound = 1;
        }
      }
    }

    if (faultFound) {
      faultyTraces.push_back(faulty_trace);
      ++faultObserved;
    } else {
      uncoveredFaults.push_back(muffin::fault_number);
    }
  }

  // remove redundant faulty traces
  for (auto it = faultyTraces.begin(); it != faultyTraces.end(); ++it) {
    for (auto it2 = it + 1; it2 != faultyTraces.end(); ++it2) {
      if (areEquivalent(*it, *it2)) {
        faultyTraces.erase(it2);
        --it2;
      }
    }
  }

  printf("Faults observed: %ld\n", faultObserved);
  for (auto fault : uncoveredFaults) {
    printf("Fault n %ld not observed\n", fault);
  }
  printf("Unique faulty traces: %ld\n", faultyTraces.size());

  //-------------------------------------------------------------------------
  // Dump traces to VCD
  // make traces directory if it does not exist
  if (!std::filesystem::exists("traces")) {
    std::filesystem::create_directory("traces");
  }

  auto tracer = initVCDTrace("traces/golden.vcd");
  double time = 0;
  for (auto& sample : golden_trace) {
    updateVCDVariables(sample);
    tracer.updateTrace(time);
    time += timeStep;
  }
  tracer.closeTrace();

  for (size_t i = 0; i < faultyTraces.size(); ++i) {
    time = 0;
    auto tracer = initVCDTrace("traces/fault_" + std::to_string(i) + ".vcd");
    for (auto& sample : faultyTraces[i]) {
      updateVCDVariables(sample);
      tracer.updateTrace(time);
      time += timeStep;
    }
    tracer.closeTrace();
  }

  return 0;
}
