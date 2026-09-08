// Trace generator for verified_adder_8bit (combinational ripple-carry adder, 8 bit + carry).
//
// Scenario plan: directed corners first (0+0, max+max, the exact carry boundary in both
// directions, cin high and low), then random operands drawn from three regimes - small,
// large, and "sum lands near 255" - so that the overflow event (cout == 1) is frequent
// enough to mine and is not correlated with any single operand bit.

`timescale 1ns/1ps

module tb_adder_8bit;

  localparam int PERIOD = 10;

  logic       clk = 0;
  logic [7:0] a, b;
  logic       cin;
  wire  [7:0] sum;
  wire        cout;

  verified_adder_8bit dut (.clk(clk), .a(a), .b(b), .cin(cin), .sum(sum), .cout(cout));

  always #(PERIOD / 2) clk = ~clk;

  int unsigned seed, cycles, sampled, fd;
  string out;
  int unsigned lfsr;

  function automatic int unsigned rnd();
    lfsr = lfsr * 32'd1103515245 + 32'd12345;
    return lfsr >> 16;
  endfunction

  task automatic drive(input [7:0] va, input [7:0] vb, input vcin);
    @(posedge clk);
    #1;
    a   = va;
    b   = vb;
    cin = vcin;
  endtask

  initial begin
    if (!$value$plusargs("seed=%d", seed))     seed = 1;
    if (!$value$plusargs("cycles=%d", cycles)) cycles = 400;
    if (!$value$plusargs("out=%s", out))       out = "trace.csv";
    lfsr = seed * 32'd2654435761 + 32'd1;

    fd = $fopen(out, "w");
    $fwrite(fd, "int a,int b,bool cin,int sum,bool cout\n");

    a   = 0;
    b   = 0;
    cin = 0;

    // directed corners
    drive(8'd0,   8'd0,   1'b0);
    drive(8'd0,   8'd0,   1'b1);
    drive(8'd255, 8'd0,   1'b0);
    drive(8'd255, 8'd0,   1'b1);   // exact boundary via carry in
    drive(8'd255, 8'd255, 1'b1);
    drive(8'd128, 8'd127, 1'b0);   // 255, no overflow
    drive(8'd128, 8'd128, 1'b0);   // 256, overflow
    drive(8'd1,   8'd254, 1'b1);   // 256, overflow
    drive(8'd15,  8'd240, 1'b0);
    drive(8'd170, 8'd85,  1'b0);

    while (sampled < cycles) begin
      case (rnd() % 3)
        0: drive(rnd() % 16,  rnd() % 16,  rnd() % 2);              // small
        1: drive(rnd() % 256, rnd() % 256, rnd() % 2);              // full range
        default: begin                                              // near the boundary
          int unsigned x;
          x = 200 + (rnd() % 56);
          drive(x[7:0], (255 - x[7:0]) + (rnd() % 8), rnd() % 2);
        end
      endcase
    end

    @(posedge clk);
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
        $fwrite(fd, "%0d,%0d,%0d,%0d,%0d\n", a, b, cin, sum, cout);
        sampled++;
      end
    end
  end

endmodule
