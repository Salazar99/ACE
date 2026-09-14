// Second trace generator for sqrt_calculator: same RTL, same CSV dialect, different
// stimulus. `tb_sqrt.sv` is untouched and its ten traces stay what they are; these traces
// are added to the same corpus.
//
// Why a second stimulus exists. Two properties of the original one make the square root's
// regions unminable, and neither is a property of the design:
//
//   1. `in` and `start` are applied in the same instant, so the operand first becomes
//      visible on the request row. The error response arrives one cycle later, and with
//      `event_onsets: true` the event `(!(error == 1)) ##1 (error == 1)` MATCHES STARTING ON
//      THE REQUEST ROW - the row where `error` is still low. A candidate assertion
//      `G(a |-> ##[1:H] e)` needs a delay of at least one, so no predicate that fires on the
//      request row can reach it. Presenting the operand one cycle earlier gives `in < 0` an
//      onset one row before the response edge begins, which a delay of one does reach.
//   2. Requests land every ~15 cycles while the horizon is 24, so almost every position in
//      the trace has an event within its window. A trigger is then no better than an
//      arbitrary position and the flow correctly refuses to build a region from it.
//
// So: operand on a setup cycle, requests 40-80 cycles apart, and strictly alternating sign.
// The alternation matters as much as the spacing - `error` and `done` are cleared only by a
// non-negative start, so two negative requests in a row produce ONE error edge, and the
// event that is never re-armed is simply not observed.

`timescale 1ns/1ps

module tb_sqrt_spaced;

  localparam int PERIOD = 10;

  logic clk = 0;

  sqrt_intf intf (clk);

  sqrt_calculator dut (intf);

  always #(PERIOD / 2) clk = ~clk;

  int unsigned seed, cycles, sampled, fd;
  string out;
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

  // Operand one cycle BEFORE start, held through it. The design latches at the negedge
  // after `start`, so it sees the same value either way; what changes is the observer's
  // view, which now has a predicate that becomes true one row before the response edge.
  task automatic spaced_request(input logic signed [32:0] value, input int unsigned gap);
    @(posedge clk);
    #1;
    intf.start = 1'b0;
    intf.in    = value;              // setup cycle: operand visible, request not yet made
    @(posedge clk);
    #1;
    intf.start = 1'b1;               // request, operand still held
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
    idle(gap);
  endtask

  function automatic int unsigned gap();
    return 40 + rnd() % 40;
  endfunction

  // The gap that FOLLOWS a rejected operand is deliberately shorter than the horizon.
  // `error` is sticky - only a non-negative start clears it - so a wide gap here would leave
  // it high for more than 24 cycles and falsify SQ8, `G((start == 1 && in >= 0) |-> ##[1:24]
  // error == 0)`. SQ8 is stated over `in >= 0`, which includes the two bit-31 operands the
  // design rejects (SQ6), so it is true of the original traces only because their requests
  // arrive every ~15 cycles. Keeping the recovery request inside the horizon preserves the
  // reference set as written; the weakness of SQ8's assumption is a separate matter.
  function automatic int unsigned recovery_gap();
    return 8 + rnd() % 8;
  endfunction

  // The operands are the directed set of `tb_sqrt.sv` - perfect squares, 0 and 1, a large
  // safe value, the two bit-31 cases that are positive as 33-bit numbers and still rejected,
  // and strictly negative values - so these traces exercise the same reference contracts.
  task automatic directed_pair(input int unsigned i);
    case (i)
      0: spaced_request(33'd0, gap());
      1: spaced_request(33'd1, gap());
      2: spaced_request(33'd4, gap());
      3: spaced_request(33'd144, gap());
      4: spaced_request(33'd1000, gap());
      5: spaced_request(33'd65536, gap());
      default: spaced_request({1'b0, rnd() % 32'd100000}, gap());
    endcase
    case (i)
      0: spaced_request(-33'sd1, recovery_gap());
      1: spaced_request(-33'sd144, recovery_gap());
      2: spaced_request(33'd2147483648, recovery_gap());  // bit 31 set, positive as 33 bits
      3: spaced_request(33'd4000000000, recovery_gap());  // bit 31 set
      default: spaced_request(-$signed({1'b0, rnd()}), recovery_gap());
    endcase
  endtask

  initial begin
    if (!$value$plusargs("seed=%d", seed))     seed = 1;
    if (!$value$plusargs("cycles=%d", cycles)) cycles = 3000;
    if (!$value$plusargs("out=%s", out))       out = "trace.csv";
    lfsr = seed * 32'd2654435761 + 32'd1;

    fd = $fopen(out, "w");
    $fwrite(fd, "bool rst,bool start,int in,int out,bool error,bool done\n");

    intf.rst   = 1'b1;
    intf.start = 1'b0;
    intf.in    = 0;

    reset_pulse(3);
    idle(2);

    // Driven by the sampler, not by a fixed program: `+cycles` sets the length and the
    // alternating pairs repeat until the trace is full.
    begin
      int unsigned i;
      i = 0;
      while (sampled < cycles) begin
        directed_pair(i);
        i++;
      end
    end

    idle(2);
    $fclose(fd);
    $finish;
  end

  // Identical convention to tb_sqrt.sv: one row per posedge, sampled late in the cycle, so
  // a row holds the inputs applied for this cycle and the outputs the previous negedge
  // produced, and "##1" always means one cycle later.
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
