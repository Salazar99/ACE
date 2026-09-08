// Trace generator for comparator_3bit (combinational, 3-bit magnitude comparator).
//
// Scenario plan: an exhaustive sweep of all 64 (A,B) pairs, so every one of the three
// output events occurs many times and the equal case is not starved, followed by a
// pseudo-random tail that breaks the sweep's regular ordering (a miner must not be able to
// explain an event by the position in the sweep).
//
//   +seed=<n>    stimulus seed
//   +cycles=<n>  total sampled cycles
//   +out=<path>  CSV to write

`timescale 1ns/1ps

module tb_comparator_3bit;

  localparam int PERIOD = 10;

  logic       clk = 0;
  logic [2:0] A, B;
  wire        A_greater, A_equal, A_less;

  comparator_3bit dut (.clk(clk), .A(A), .B(B),
                       .A_greater(A_greater), .A_equal(A_equal), .A_less(A_less));

  always #(PERIOD / 2) clk = ~clk;

  int unsigned seed, cycles, sampled, fd;
  string out;
  int unsigned lfsr;

  function automatic int unsigned rnd();
    lfsr = lfsr * 32'd1103515245 + 32'd12345;
    return lfsr >> 16;
  endfunction

  initial begin
    if (!$value$plusargs("seed=%d", seed))     seed = 1;
    if (!$value$plusargs("cycles=%d", cycles)) cycles = 256;
    if (!$value$plusargs("out=%s", out))       out = "trace.csv";
    lfsr = seed * 32'd2654435761 + 32'd1;

    fd = $fopen(out, "w");
    $fwrite(fd, "int A,int B,bool A_greater,bool A_equal,bool A_less\n");

    A = 0;
    B = 0;

    // directed: exhaustive sweep
    for (int a = 0; a < 8; a++) begin
      for (int b = 0; b < 8; b++) begin
        @(posedge clk);
        #1;
        A = a[2:0];
        B = b[2:0];
      end
    end

    // random tail
    while (sampled < cycles) begin
      @(posedge clk);
      #1;
      A = rnd() % 8;
      B = rnd() % 8;
    end

    @(posedge clk);
    $fclose(fd);
    $finish;
  end

  // One row per cycle, sampled late in the cycle so the row holds the inputs applied at
  // this edge together with the outputs they produced.
  // Stimulus is applied 1 ns AFTER the active edge and the row is sampled late in the
  // cycle. That ordering is what makes the trace unambiguous: the design samples the
  // inputs of row k at the edge that starts row k+1, so a row never shows an output that
  // was produced by the input written in the same row, and "##1" always means "one cycle
  // later". Driving at the edge itself would leave the pairing up to the simulator's
  // scheduling of blocking assignments against the clocked blocks.
  initial begin
    forever begin
      @(posedge clk);
      #(PERIOD - 2);
      if (sampled < cycles) begin
        $fwrite(fd, "%0d,%0d,%0d,%0d,%0d\n", A, B, A_greater, A_equal, A_less);
        sampled++;
      end
    end
  end

endmodule
