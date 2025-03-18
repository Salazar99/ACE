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
#include "mutex.hpp"

using Trace = std::vector<mutex::mutex_iostruct>;

// set the inputs to random values
void setRandomInputs(mutex::mutex_iostruct& in) {
  in.in = rand() % 2;
}

// set the inputs from a trace sample
void setInputsFromTraceSample(mutex::mutex_iostruct& in,
                              const mutex::mutex_iostruct& dump) {
  in.in = dump.in;
}

// returns true if two samples are equivalent
bool checkOutput(const mutex::mutex_iostruct& golden,
                 const mutex::mutex_iostruct& faulty) {
  if (golden.positive_flag != faulty.positive_flag || golden.negative_flag != faulty.negative_flag) {
    return 0;
  }
  return 1;
}

void printSample(mutex::mutex_iostruct& in) {
  printf("in: %d\n", in.in);
  printf("positive_flag: %d\n", in.positive_flag);
  printf("negative_flag: %d\n", in.negative_flag);
}

//we need to this to dump as a wire 1 bit long
static std::vector<bool> vcd_clk = {0};
static std::vector<bool> vcd_in = {0};
static std::vector<bool> vcd_positive_flag = {0};
static std::vector<bool> vcd_negative_flag = {0};

static cpptracer::TimeScale timeStep(1, cpptracer::TimeUnit::NS);

cpptracer::Tracer initVCDTrace(const std::string& name) {
  cpptracer::Tracer tracer(name, timeStep, "mutex_bench");
  tracer.addScope("mutexf_");

  tracer.addTrace(vcd_clk, "clk");
  tracer.addTrace(vcd_in, "in");
  tracer.addTrace(vcd_positive_flag, "positive_flag");
  tracer.addTrace(vcd_negative_flag, "negative_flag");

  tracer.closeScope();
  tracer.createTrace();
  return tracer;
}
void updateVCDVariables(const mutex::mutex_iostruct& in) {
  vcd_clk[0] = in.clk;
  vcd_in[0] = in.in;
  vcd_positive_flag[0] = in.positive_flag;
  vcd_negative_flag[0] = in.negative_flag;
}

bool areEquivalent(const Trace& t1, const Trace& t2) {
  if (t1.size() != t2.size()) {
    return false;
  }
  for (size_t i = 0; i < t1.size(); ++i) {
    if (t1[i].in != t2[i].in || t1[i].positive_flag != t2[i].positive_flag ||
        t1[i].negative_flag != t2[i].negative_flag) {
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

  mutex mutex_instance;
  mutex_instance.initialize();

  Trace golden_trace;

  // in case of a rst
  mutex::mutex_iostruct in_rst_on;
  in_rst_on.clk = clock_0;
  mutex_instance.simulate(&in_rst_on, cycles_number);

  srand(0);

  mutex::mutex_iostruct in;

  for (size_t k = 0; k < traceLength; ++k) {
    clock_0 = !clock_0;

    in.clk = clock_0;

    // in
    if (!clock_0) {
      setRandomInputs(in);
    }

    mutex_instance.simulate(&in, cycles_number);

    // out
    golden_trace.push_back(in);
    // printSample(in);
  }

  // Simulate the design with faults (instance 1), we need to reuse the same input trace
  muffin::instance_number = 1;
  size_t faultObserved = 0;
  std::vector<size_t> uncoveredFaults;
  std::vector<Trace> faultyTraces;
  std::cout << "Number of faults: " << mutex_instance.hif_fault_node.number
            << "\n";

  for (muffin::fault_number = 0;
       muffin::fault_number < mutex_instance.hif_fault_node.number;
       ++muffin::fault_number) {
    Trace faulty_trace;
    muffin::hif_global_instance_counter = 0;
    printf("Simulating fault number '%ld:%ld'\n", muffin::instance_number,
           muffin::fault_number);

    clock_0 = 0;
    mutex::mutex_iostruct in_rst_on;
    in_rst_on.clk = clock_0;
    mutex_instance.simulate(&in_rst_on, cycles_number);
    mutex mutex_instance;
    mutex_instance.initialize();

    mutex::mutex_iostruct in;
    bool faultFound = 0;
    for (size_t k = 0; k < traceLength; ++k) {
      clock_0 = !clock_0;

      in.clk = clock_0;
      // in
      if (!clock_0) {
        setInputsFromTraceSample(in, golden_trace[k]);
      }
      mutex_instance.simulate(&in, cycles_number);

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
