// Trace generator for sqrt_calculator (Newton-Raphson integer square root, negedge clocked).
//
// Protocol as implemented: `start` latches the operand, then the design iterates while
// `done` is low and raises `done` when its iteration counter reaches 10. A negative operand
// - strictly, an operand with bit 31 set - short-circuits to error = 1, done = 1, out = 0.
// The design also drives `intf.in` back to 0 after latching, so the operand is NOT visible
// to a black-box observer when the result appears; only control-flow contracts are minable
// from these traces (see CONTRACTS.md).
//
// Scenario plan: perfect squares, non-squares, 0 and 1, the largest safe operand, values in
// [2^31, 2^32) that expose the bit-31 test, strictly negative operands, back-to-back
// requests, start asserted while an operation is still running, and asynchronous reset both
// while idle and mid-operation.

`timescale 1ns/1ps

module tb_sqrt;

  localparam int PERIOD = 10;

  logic clk = 0;

  sqrt_intf intf (clk);

  sqrt_calculator dut (intf);

  always #(PERIOD / 2) clk = ~clk;

  int unsigned seed, cycles, sampled, fd;
  string out;
  string scenario;              // "nominal": the environment respects the protocol
                                // "stress":  operations are aborted and reset mid-flight
  bit stress;
  int unsigned lfsr;

  function automatic int unsigned rnd();
    lfsr = lfsr * 32'd1103515245 + 32'd12345;
    return lfsr >> 16;
  endfunction

  task automatic idle(input int unsigned n);
    for (int i = 0; i < n; i++) begin
      @(posedge clk);
      #1;
      intf.start = 1'b0;
    end
  endtask

  // Assert start for one cycle with an operand, then wait for done (bounded).
  task automatic request(input logic signed [32:0] value, input int unsigned tail);
    @(posedge clk);
    #1;
    intf.start = 1'b1;
    intf.in    = value;
    @(posedge clk);
    #1;
    intf.start = 1'b0;
    begin
      int unsigned guard;
      guard = 0;
      while (intf.done !== 1'b1 && guard < 40) begin
        @(posedge clk);
        guard++;
      end
    end
    idle(tail);
  endtask

  task automatic reset_pulse(input int unsigned n);
    for (int i = 0; i < n; i++) begin
      @(posedge clk);
      #1;
      intf.rst   = 1'b1;
      intf.start = 1'b0;
    end
    @(posedge clk);
    #1;
    intf.rst = 1'b0;
  endtask

  initial begin
    if (!$value$plusargs("seed=%d", seed))     seed = 1;
    if (!$value$plusargs("cycles=%d", cycles)) cycles = 900;
    if (!$value$plusargs("out=%s", out))       out = "trace.csv";
    if (!$value$plusargs("scenario=%s", scenario)) scenario = "nominal";
    stress = (scenario == "stress");
    lfsr = seed * 32'd2654435761 + 32'd1;

    fd = $fopen(out, "w");
    $fwrite(fd, "bool rst,bool start,int in,int out,bool error,bool done\n");

    intf.rst   = 1'b1;
    intf.start = 1'b0;
    intf.in    = 0;

    reset_pulse(3);
    idle(2);

    // directed: valid operands
    request(33'd0,          2);
    request(33'd1,          1);
    request(33'd4,          2);
    request(33'd144,        1);
    request(33'd1000,       3);
    request(33'd65536,      1);
    request(33'd2147483647, 2);   // largest operand with bit 31 clear
    // directed: the bit-31 test, not a sign test
    request(33'd2147483648, 2);   // bit 31 set, positive as a 33-bit number
    request(33'd4000000000, 1);
    // directed: strictly negative operands
    request(-33'sd1,        2);
    request(-33'sd144,      1);
    // directed: back-to-back requests with no idle gap
    request(33'd25,         0);
    request(33'd36,         0);
    // directed (stress only): start re-asserted while an operation is running, and
    // reset in the middle of an operation. Both break the assumption that the environment
    // leaves the design alone until done, so they are kept out of the nominal traces.
    if (stress) begin
    @(posedge clk);
    #1;
    intf.start = 1'b1;
    intf.in    = 33'd10000;
    @(posedge clk);
    #1;
    intf.start = 1'b0;
    repeat (4) @(posedge clk);
    @(posedge clk);
    #1;
    intf.start = 1'b1;
    intf.in    = 33'd9;
    @(posedge clk);
    #1;
    intf.start = 1'b0;
    repeat (16) @(posedge clk);
    // directed: reset in the middle of an operation
    @(posedge clk);
    #1;
    intf.start = 1'b1;
    intf.in    = 33'd777;
    @(posedge clk);
    #1;
    intf.start = 1'b0;
    repeat (4) @(posedge clk);
    reset_pulse(2);
    idle(3);
    end

    while (sampled < cycles) begin
      case (rnd() % 8)
        0: request(-$signed({1'b0, rnd()}), 1 + rnd() % 3);       // negative
        1: request({1'b0, 32'h8000_0000 + (rnd() % 1000)}, 1 + rnd() % 3); // bit 31 set
        2: begin
             int unsigned root;
             root = rnd() % 1000;
             request(root * root, 1 + rnd() % 3);                  // perfect square
           end
        3: begin
             if (rnd() % 4 == 0) reset_pulse(1 + rnd() % 2);   // reset between requests
             request(rnd() % 100000, 1 + rnd() % 3);
           end
        4: begin
             if (stress) begin                                  // reset mid-operation
               @(posedge clk);
               #1;
               intf.start = 1'b1;
               intf.in    = rnd() % 100000;
               @(posedge clk);
               #1;
               intf.start = 1'b0;
               repeat (2 + rnd() % 8) @(posedge clk);
               reset_pulse(1 + rnd() % 2);
             end else begin
               request(rnd() % 100000, 1 + rnd() % 3);
             end
           end
        default: request(rnd() % 2147483647, 4 + rnd() % 10);
      endcase
    end

    idle(2);
    $fclose(fd);
    $finish;
  end

  // sqrt_calculator updates on the NEGATIVE clock edge, so a row is sampled just before
  // that edge: it holds the inputs applied for this cycle together with the outputs the
  // previous edge produced. Every design in this benchmark uses the same convention -
  // sample immediately before the active edge - so "##1" always means "one cycle later".
  // Stimulus is applied 1 ns AFTER the active edge and the row is sampled late in the
  // cycle. That ordering is what makes the trace unambiguous: the design samples the
  // inputs of row k at the edge that starts row k+1, so a row never shows an output that
  // was produced by the input written in the same row, and "##1" always means "one cycle
  // later". Driving at the edge itself would leave the pairing up to the simulator's
  // scheduling of blocking assignments against the clocked blocks.
  initial begin
    forever begin
      @(posedge clk);
      #(PERIOD / 2 - 1);
      if (sampled < cycles) begin
        $fwrite(fd, "%0d,%0d,%0d,%0d,%0d,%0d\n", intf.rst, intf.start, $signed(intf.in),
                intf.out, intf.error, intf.done);
        sampled++;
      end
    end
  end

endmodule
