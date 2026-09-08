// Trace generator for verified_accu (4-sample accumulator behind a valid/valid interface).
//
// Protocol as implemented: `ready_add = !valid_out | valid_in`, so the design accumulates on
// EVERY cycle in which valid_out is low - whether or not valid_in is asserted - and only
// requires valid_in on the cycle right after a valid_out pulse. valid_out is a one-cycle
// pulse produced when the internal 2-bit counter reaches 3.
//
// Scenario plan: continuous streaming (valid_in held high), sparse streaming (valid_in with
// gaps, which is where the quirk above becomes observable), single-sample bursts, and
// resets both between and in the middle of an accumulation. data_in covers 0, 1, 255 and
// random values.
//
// data_in is held constant for the whole of each burst, so that input/output value
// relations are expressible in the tool's grammar (which has no past operator): a clause
// may compare data_out at t+1 with data_in at t+1 and still mean "the sample that was
// accepted at t".

`timescale 1ns/1ps

module tb_accumulator;

  localparam int PERIOD = 10;

  logic clk = 0;

  accu_intf intf (clk);

  verified_accu dut (intf);

  always #(PERIOD / 2) clk = ~clk;

  int unsigned seed, cycles, sampled, fd, cyc;
  string out;
  string scenario;              // "nominal": the environment respects the protocol
                                // "stress":  operations are aborted and reset mid-flight
  bit stress;
  int unsigned lfsr;

  function automatic int unsigned rnd();
    lfsr = lfsr * 32'd1103515245 + 32'd12345;
    return lfsr >> 16;
  endfunction

  task automatic drive(input valid, input [7:0] data);
    @(posedge clk);
    #1;
    cyc++;
    intf.valid_in = valid;
    intf.data_in  = data;
  endtask

  task automatic hold(input valid, input [7:0] data, input int unsigned n);
    for (int i = 0; i < n; i++) drive(valid, data);
  endtask

  task automatic reset_pulse(input int unsigned n);
    for (int i = 0; i < n; i++) begin
      @(posedge clk);
      #1;
      cyc++;
      intf.rst_n    = 1'b0;
      intf.valid_in = 1'b0;
    end
    @(posedge clk);
    #1;
    cyc++;
    intf.rst_n = 1'b1;
  endtask

  initial begin
    if (!$value$plusargs("seed=%d", seed))     seed = 1;
    if (!$value$plusargs("cycles=%d", cycles)) cycles = 700;
    if (!$value$plusargs("out=%s", out))       out = "trace.csv";
    if (!$value$plusargs("scenario=%s", scenario)) scenario = "nominal";
    stress = (scenario == "stress");
    lfsr = seed * 32'd2654435761 + 32'd1;

    fd = $fopen(out, "w");
    $fwrite(fd, "bool rst_n,bool valid_in,int data_in,bool valid_out,int data_out\n");

    intf.rst_n    = 1'b0;
    intf.valid_in = 1'b0;
    intf.data_in  = 8'd0;
    cyc           = 0;

    reset_pulse(3);

    // directed: continuous stream of a constant, two full accumulations
    hold(1'b1, 8'd1, 10);
    // directed: zeros
    hold(1'b1, 8'd0, 6);
    // directed: maximum samples
    hold(1'b1, 8'd255, 6);
    // directed: sparse valid_in, which exposes ready_add = !valid_out | valid_in
    for (int i = 0; i < 12; i++) begin
      drive(i % 3 == 0, 8'd7);
    end
    // directed: single sample then a long idle
    drive(1'b1, 8'd33);
    hold(1'b0, 8'd33, 6);
    // directed (stress only): reset in the middle of an accumulation
    if (stress) begin
      hold(1'b1, 8'd9, 2);
      reset_pulse(1);
      hold(1'b1, 8'd9, 4);
    end

    while (sampled < cycles) begin
      case (rnd() % 4)
        0: hold(1'b1, rnd() % 256, 4 + rnd() % 8);       // burst
        1: hold(1'b0, rnd() % 256, 4 + rnd() % 10);      // gap
        2: begin                                          // alternating valid_in
             int unsigned n;
             logic [7:0] value;
             n     = 4 + rnd() % 8;
             value = rnd() % 256;                         // one value for the whole burst
             for (int i = 0; i < n; i++) drive(i % 2 == 0, value);
           end
        default: begin
             // a reset between bursts is nominal; a reset inside one is stress
             if (rnd() % 3 == 0) reset_pulse(1 + rnd() % 2);
             hold(1'b1, rnd() % 256, 2 + rnd() % 4);
             if (stress && rnd() % 3 == 0) begin
               hold(1'b1, rnd() % 256, 2);
               reset_pulse(1);
             end
           end
      endcase
    end

    hold(1'b0, 8'd0, 2);
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
        $fwrite(fd, "%0d,%0d,%0d,%0d,%0d\n", intf.rst_n, intf.valid_in, intf.data_in,
                intf.valid_out, intf.data_out);
        sampled++;
      end
    end
  end

endmodule
