// Trace generator for verified_multi_16bit (16x16 shift-add multiplier, 17-cycle operation).
//
// Protocol as implemented: `start` must be held for the whole operation. The internal shift
// counter advances while start is high, `done` pulses for one cycle when the counter reaches
// 16, and the product register is NEVER cleared except by reset - so a second operation
// without an intervening reset accumulates on top of the first.
//
// Scenario plan: every operation is preceded by a reset pulse, which is the only usage under
// which the product is the product of the operands (this is a property of the RTL, not a
// convenience: see CONTRACTS.md). Operands cover 0, 1, powers of two, all-ones and random
// values; start is dropped for a varying number of idle cycles between operations, and one
// directed scenario drops start in the middle of an operation to show that the counter
// restarts and no done pulse is produced.
//
// Operand inputs are held stable for the whole operation, so input/output value relations
// are expressible in the tool's grammar (which has no past operator).

`timescale 1ns/1ps

module tb_multi_16bit;

  localparam int PERIOD = 10;

  logic        clk = 0;
  logic        rst_n;
  logic        start;
  logic [15:0] ain, bin;
  wire  [31:0] yout;
  wire         done;

  verified_multi_16bit dut (.clk(clk), .rst_n(rst_n), .start(start),
                            .ain(ain), .bin(bin), .yout(yout), .done(done));

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
      start = 1'b0;
    end
  endtask

  task automatic reset_pulse(input int unsigned n);
    for (int i = 0; i < n; i++) begin
      @(posedge clk);
      #1;
      rst_n = 1'b0;
      start = 1'b0;
    end
    @(posedge clk);
    #1;
    rst_n = 1'b1;
  endtask

  // One complete operation: reset, then hold start and the operands until done pulses.
  task automatic multiply(input [15:0] a, input [15:0] b, input int unsigned tail);
    reset_pulse(2);
    @(posedge clk);
    #1;
    ain   = a;
    bin   = b;
    start = 1'b1;
    while (done !== 1'b1) @(posedge clk);
    @(posedge clk);            // one cycle with done still visible in the trace
    idle(tail);
  endtask

  initial begin
    if (!$value$plusargs("seed=%d", seed))     seed = 1;
    if (!$value$plusargs("cycles=%d", cycles)) cycles = 900;
    if (!$value$plusargs("out=%s", out))       out = "trace.csv";
    if (!$value$plusargs("scenario=%s", scenario)) scenario = "nominal";
    stress = (scenario == "stress");
    lfsr = seed * 32'd2654435761 + 32'd1;

    fd = $fopen(out, "w");
    $fwrite(fd, "bool rst_n,bool start,int ain,int bin,int yout,bool done\n");

    rst_n = 1'b0;
    start = 1'b0;
    ain   = 0;
    bin   = 0;

    // directed
    multiply(16'd0,     16'd0,     2);
    multiply(16'd1,     16'd1,     1);
    multiply(16'd0,     16'd12345, 3);
    multiply(16'd12345, 16'd0,     1);
    multiply(16'd1,     16'd65535, 2);
    multiply(16'd65535, 16'd65535, 4);   // maximum product
    multiply(16'd256,   16'd256,   1);   // powers of two
    multiply(16'd32768, 16'd2,     2);

    // aborted operation (stress only): start dropped mid-way, no done expected. This
    // breaks the assumption that start is held for the whole operation.
    if (stress) begin
    reset_pulse(2);
    @(posedge clk);
    #1;
    ain   = 16'd1234;
    bin   = 16'd5678;
    start = 1'b1;
    repeat (8) @(posedge clk);
    idle(4);
    end

    while (sampled < cycles) begin
      if (stress && rnd() % 5 == 0) begin
        reset_pulse(2);                                  // aborted operation
        @(posedge clk);
        #1;
        ain   = rnd() % 65536;
        bin   = rnd() % 65536;
        start = 1'b1;
        repeat (2 + rnd() % 12) @(posedge clk);
        idle(2 + rnd() % 3);
      end else begin
        // an idle reset, followed by no operation: without these, every reset in the trace
        // is followed by a completion and "rst_n == 0" becomes a perfect explanation of
        // the done event, which says nothing about the multiplier
        if (rnd() % 4 == 0) begin
          reset_pulse(1 + rnd() % 2);
          idle(2 + rnd() % 6);
        end
        multiply(rnd() % 65536, rnd() % 65536, 4 + rnd() % 12);
      end
    end

    idle(2);
    $fclose(fd);
    $finish;
  end

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
        $fwrite(fd, "%0d,%0d,%0d,%0d,%0d,%0d\n", rst_n, start, ain, bin, yout, done);
        sampled++;
      end
    end
  end

endmodule
