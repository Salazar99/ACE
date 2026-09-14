// Second trace generator for verified_accu: same RTL, same CSV dialect, sparser events.
// `tb_accumulator.sv` is untouched and its ten traces stay what they are; these traces are
// added to the same corpus.
//
// Why a second stimulus exists. The design's `ready_add = !valid_out | valid_in` means it
// accumulates on EVERY cycle in which `valid_out` is low, whether or not the environment
// offers a sample, so `valid_out` pulses every four cycles for as long as reset is released.
// Measured on the original corpus: 832 occurrences and a base rate of 0.912 at `horizon: 5`
// - 91% of positions already have the event inside the window. No predicate can beat that,
// every candidate is rejected for not discriminating the event, and the region is skipped.
//
// The only legal way to stop the design accumulating is to hold reset, which is exactly what
// the reference contracts describe (`G((rst_n == 0) |-> (valid_out == 0))`). So: short
// bursts of activity separated by long resets. That makes `valid_out` sparse, gives the
// reset-behaviour contracts real support, and leaves `rst_n == 1` as a predicate that
// genuinely discriminates the event instead of being true everywhere.

`timescale 1ns/1ps

module tb_accumulator_spaced;

  localparam int PERIOD = 10;

  logic clk = 0;

  accu_intf intf (clk);

  verified_accu dut (intf);

  always #(PERIOD / 2) clk = ~clk;

  int unsigned seed, cycles, sampled, fd;
  string out;
  int unsigned lfsr;

  function automatic int unsigned rnd();
    lfsr = lfsr * 32'd1103515245 + 32'd12345;
    return lfsr >> 16;
  endfunction

  task automatic drive(input valid, input [7:0] data);
    @(posedge clk);
    #1;
    intf.valid_in = valid;
    intf.data_in  = data;
  endtask

  task automatic hold(input valid, input [7:0] data, input int unsigned n);
    for (int i = 0; i < n; i++) drive(valid, data);
  endtask

  // Reset held low for the whole gap: the design is quiet only while it is in reset.
  task automatic quiet(input int unsigned n);
    for (int i = 0; i < n; i++) begin
      @(posedge clk);
      #1;
      intf.rst_n    = 1'b0;
      intf.valid_in = 1'b0;
    end
    @(posedge clk);
    #1;
    intf.rst_n = 1'b1;
  endtask

  // One accumulation of four samples of a constant, then a long quiet stretch. Holding
  // `data_in` constant across the burst is the same convention `tb_accumulator.sv` uses, so
  // input/output value relations stay expressible without a past operator.
  task automatic burst(input [7:0] value, input int unsigned samples, input int unsigned gap);
    hold(1'b1, value, samples);
    hold(1'b0, value, 1);
    quiet(gap);
  endtask

  initial begin
    if (!$value$plusargs("seed=%d", seed))     seed = 1;
    if (!$value$plusargs("cycles=%d", cycles)) cycles = 3000;
    if (!$value$plusargs("out=%s", out))       out = "trace.csv";
    lfsr = seed * 32'd2654435761 + 32'd1;

    fd = $fopen(out, "w");
    $fwrite(fd, "bool rst_n,bool valid_in,int data_in,bool valid_out,int data_out\n");

    intf.rst_n    = 1'b0;
    intf.valid_in = 1'b0;
    intf.data_in  = 8'd0;

    quiet(3);

    // directed corners, each in its own burst: zero, one, the maximum sample (four of which
    // reach data_out = 1020, the bound one reference states), and a mid-range value
    burst(8'd0,   4, 40);
    burst(8'd1,   4, 45);
    burst(8'd255, 4, 50);
    burst(8'd7,   4, 40);

    while (sampled < cycles) begin
      burst(rnd() % 256, 4 + rnd() % 4, 40 + rnd() % 40);
    end

    hold(1'b0, 8'd0, 2);
    $fclose(fd);
    $finish;
  end

  // Identical convention to tb_accumulator.sv: one row per posedge, sampled late in the
  // cycle, so a row holds the inputs applied for this cycle and the outputs the previous
  // edge produced, and "##1" always means one cycle later.
  initial begin
    forever begin
      @(posedge clk);
      #(PERIOD - 2);
      if (sampled < cycles) begin
        $fwrite(fd, "%0d,%0d,%0d,%0d,%0d\n", intf.rst_n, intf.valid_in, intf.data_in,
                intf.valid_out, intf.data_out);
        sampled++;
      end
    end
  end

endmodule
