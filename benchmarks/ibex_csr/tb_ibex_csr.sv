// Trace generator for ibex_csr (32-bit CSR primitive, ShadowCopy = 0).
//
// Scenario plan: asynchronous reset asserted at the start, mid-trace and (briefly) during a
// write, so the reset behavior is observable more than once; writes interleaved with idle
// gaps of varying length, so that "rd_data_o follows wr_data_i" is separable from "rd_data_o
// holds"; and repeated writes of the same value plus writes of 0 and all-ones, so a miner
// cannot explain the update event with a single data bit.
//
// Width is left at the default 32; wr_data_i is kept inside 24 bits so the values stay
// exactly representable when the trace is read back as a number.

`timescale 1ns/1ps

module tb_ibex_csr;

  localparam int PERIOD = 10;

  logic        clk = 0;
  logic        rst_n;
  logic [31:0] wr_data_i;
  logic        wr_en_i;
  wire  [31:0] rd_data_o;
  wire         rd_error_o;

  ibex_csr #(.Width(32), .ShadowCopy(1'b0), .ResetValue(32'h0)) dut (
    .clk_i(clk), .rst_ni(rst_n),
    .wr_data_i(wr_data_i), .wr_en_i(wr_en_i),
    .rd_data_o(rd_data_o), .rd_error_o(rd_error_o));

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
      wr_en_i = 1'b0;
    end
  endtask

  task automatic write(input [23:0] value);
    @(posedge clk);
    #1;
    wr_en_i   = 1'b1;
    wr_data_i = {8'h00, value};
  endtask

  task automatic reset_pulse(input int unsigned n);
    @(posedge clk);
    #1;
    rst_n = 1'b0;
    for (int i = 0; i < n; i++) @(posedge clk);
    rst_n = 1'b1;
  endtask

  initial begin
    if (!$value$plusargs("seed=%d", seed))     seed = 1;
    if (!$value$plusargs("cycles=%d", cycles)) cycles = 400;
    if (!$value$plusargs("out=%s", out))       out = "trace.csv";
    if (!$value$plusargs("scenario=%s", scenario)) scenario = "nominal";
    stress = (scenario == "stress");
    lfsr = seed * 32'd2654435761 + 32'd1;

    fd = $fopen(out, "w");
    $fwrite(fd, "bool rst_n,bool wr_en_i,int wr_data_i,int rd_data_o,bool rd_error_o\n");

    rst_n     = 1'b0;
    wr_en_i   = 1'b0;
    wr_data_i = 32'h0;

    reset_pulse(3);
    idle(2);

    // directed
    write(24'h000001); idle(3);
    write(24'h000000); idle(1);          // write zero after a non-zero value
    write(24'hFFFFFF); idle(2);
    write(24'hFFFFFF); idle(0);          // same value twice, back to back
    write(24'h00A5A5); write(24'h005A5A); // back-to-back writes, no idle
    idle(4);
    reset_pulse(2);                       // reset clears a written value
    idle(2);
    // (stress only) reset in the cycle right after a write, which pre-empts the update
    if (stress) begin
      write(24'h123456);
      reset_pulse(1);
    end
    idle(3);

    while (sampled < cycles) begin
      if (rnd() % 20 == 0) begin
        reset_pulse(1 + rnd() % 2);
        if (!stress) idle(1);             // let the update settle before the next write
      end else if (rnd() % 3 == 0) begin
        idle(1 + rnd() % 4);
      end else begin
        write(rnd() % 24'hFFFFFF);
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
        $fwrite(fd, "%0d,%0d,%0d,%0d,%0d\n",
                rst_n, wr_en_i, wr_data_i, rd_data_o, rd_error_o);
        sampled++;
      end
    end
  end

endmodule
