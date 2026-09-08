// Trace generator for arbiter4 (four-requester round-robin arbiter, registered grants).
//
// Protocol as implemented: a requester asserts its request and holds it until it sees its
// grant; the arbiter grants one requester per cycle, rotating priority. Grants are
// registered, so the request of cycle k is answered in cycle k+1.
//
// Scenario plan. The nominal environment respects hold-until-grant, which is what makes
// "a grant only ever goes to a requester that is asking" and "a held request is granted
// within four cycles" true - neither is a property of the arbiter alone. Directed cases
// come first: one requester alone, all four at once, alternating pairs, and one requester
// asking continuously while the others come and go. Random arrivals follow.
//
// The stress environment breaks hold-until-grant: requests are pulsed for a single cycle
// whether or not they are granted, and reset lands in the middle of arbitration. A
// well-formed contract is vacuous or violated there, which is the point of that corpus.
//
// Sampling convention (identical to every other design here): stimulus is applied 1 ns
// after the active edge and the row is sampled late in the cycle, so a row holds the
// inputs applied for that cycle together with the outputs the design produced from the
// PREVIOUS row's inputs, and `##1` always means one cycle later.

`timescale 1ns/1ps

module tb_arbiter4;

  localparam int PERIOD = 10;

  logic clk = 0;
  logic rst_n;
  logic req0, req1, req2, req3;
  wire  gnt0, gnt1, gnt2, gnt3;
  wire  gnt_valid;
  wire [1:0] gnt_id;

  arbiter4 dut (.clk(clk), .rst_n(rst_n),
                .req0(req0), .req1(req1), .req2(req2), .req3(req3),
                .gnt0(gnt0), .gnt1(gnt1), .gnt2(gnt2), .gnt3(gnt3),
                .gnt_valid(gnt_valid), .gnt_id(gnt_id));

  always #(PERIOD / 2) clk = ~clk;

  int unsigned seed, cycles, sampled, fd;
  string out, scenario;
  bit stress;
  int unsigned lfsr;
  bit [3:0] pending;            // requests still waiting for their grant

  function automatic int unsigned rnd();
    lfsr = lfsr * 32'd1103515245 + 32'd12345;
    return lfsr >> 16;
  endfunction

  function automatic bit [3:0] granted();
    return {gnt3, gnt2, gnt1, gnt0};
  endfunction

  task automatic drive(input bit [3:0] value);
    @(posedge clk);
    #1;
    req0 = value[0];
    req1 = value[1];
    req2 = value[2];
    req3 = value[3];
  endtask

  task automatic idle(input int unsigned n);
    for (int unsigned i = 0; i < n; i++) drive(4'b0000);
  endtask

  task automatic reset_pulse(input int unsigned n);
    for (int unsigned i = 0; i < n; i++) begin
      @(posedge clk);
      #1;
      rst_n = 1'b0;
      req0 = 1'b0; req1 = 1'b0; req2 = 1'b0; req3 = 1'b0;
    end
    @(posedge clk);
    #1;
    rst_n   = 1'b1;
    pending = 4'b0000;
  endtask

  // Hold `mask` until every requester in it has been granted: the nominal protocol.
  task automatic serve(input bit [3:0] mask, input int unsigned tail);
    pending = mask;
    while (pending != 4'b0000) begin
      drive(pending);
      pending = pending & ~granted();      // a grant is visible as it is driven
    end
    drive(4'b0000);
    idle(tail);
  endtask

  // One cycle of the stress environment: pulse whatever is asked for exactly one cycle.
  task automatic pulse(input bit [3:0] mask);
    drive(mask);
    drive(4'b0000);
  endtask

  initial begin
    if (!$value$plusargs("seed=%d", seed))     seed = 1;
    if (!$value$plusargs("cycles=%d", cycles)) cycles = 1000;
    if (!$value$plusargs("out=%s", out))       out = "trace.csv";
    if (!$value$plusargs("scenario=%s", scenario)) scenario = "nominal";
    stress = (scenario == "stress");
    lfsr = seed * 32'd2654435761 + 32'd1;

    fd = $fopen(out, "w");
    $fwrite(fd, "bool rst_n,bool req0,bool req1,bool req2,bool req3,bool gnt0,bool gnt1,bool gnt2,bool gnt3,bool gnt_valid,int gnt_id\n");

    rst_n = 1'b0;
    req0 = 1'b0; req1 = 1'b0; req2 = 1'b0; req3 = 1'b0;
    pending = 4'b0000;
    reset_pulse(2);

    // directed: each requester alone, then contention of growing width
    serve(4'b0001, 2);
    serve(4'b0010, 1);
    serve(4'b0100, 2);
    serve(4'b1000, 1);
    serve(4'b0011, 2);
    serve(4'b0101, 1);
    serve(4'b1010, 2);
    serve(4'b0111, 1);
    serve(4'b1111, 3);          // full contention: the rotation is exercised here
    serve(4'b1111, 1);

    // one requester asking continuously while the others arrive: the starvation case
    for (int unsigned round = 0; round < 6; round++) begin
      serve(4'b0001 | (4'b0010 << (round % 3)), 1);
    end

    if (stress) begin
      // requests that are not held until granted, and reset mid-arbitration
      pulse(4'b1111);
      pulse(4'b0110);
      drive(4'b1111);
      reset_pulse(1);
    end

    while (sampled < cycles) begin
      if (stress) begin
        case (rnd() % 4)
          0: pulse(4'b0001 << (rnd() % 4));
          1: pulse(rnd() % 16);
          2: begin drive(rnd() % 16); reset_pulse(1 + rnd() % 2); end
          default: begin
            drive(4'b1111);
            drive(4'b1111);
            drive(4'b0000);
          end
        endcase
      end else begin
        if (rnd() % 7 == 0) begin
          reset_pulse(1 + rnd() % 2);
          idle(1 + rnd() % 3);
        end
        serve((rnd() % 15) + 1, rnd() % 4);   // never all-zero: that is what idle() is for
      end
    end

    idle(2);
    $fclose(fd);
    $finish;
  end

  initial begin
    forever begin
      @(posedge clk);
      #(PERIOD - 2);
      if (sampled < cycles) begin
        $fwrite(fd, "%0d,%0d,%0d,%0d,%0d,%0d,%0d,%0d,%0d,%0d,%0d\n",
                rst_n, req0, req1, req2, req3,
                gnt0, gnt1, gnt2, gnt3, gnt_valid, gnt_id);
        sampled++;
      end
    end
  end

endmodule
