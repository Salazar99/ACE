// Trace generator for ibex_multdiv_fast (16x16 kernel multiplier + long divider, RV32MFast).
//
// The DUT is not self-contained: it needs an external adder on its ALU operand outputs and
// an external register for its intermediate values. Both are wired here exactly as the
// existing FDL26 testbench and ibex_ex_block do, and neither is written to the trace: they
// are internal to the composition, not part of the observable interface.
//
// operator_i is written as its ibex_pkg::md_op_e encoding: MULL=0 MULH=1 DIV=2 REM=3.
// Only unsigned operations are driven (signed_mode_i = 0), which keeps the trace values
// directly comparable with the arithmetic in the tool's grammar.
//
// Scenario plan: multiplications and divisions with operands covering 0, 1, small values,
// 16-bit values, powers of two and full 32-bit values; division and remainder by zero,
// which RISC-V defines as all-ones and the numerator respectively; divisor greater than
// numerator; equal operands; back-to-back operations; and reset in the middle of a long
// division. Operands are held for the whole operation, as the ID stage does.

`timescale 1ns/1ps

module tb_ibex_multdiv_fast;

  import ibex_pkg::*;

  localparam int PERIOD = 10;

  logic             clk = 0;
  logic             rst_n;
  logic             mult_en_i, div_en_i, mult_sel_i, div_sel_i;
  md_op_e           operator_i;
  logic [1:0]       signed_mode_i;
  logic [31:0]      op_a_i, op_b_i;
  logic [33:0]      alu_adder_ext_i;
  logic [31:0]      alu_adder_i;
  logic             equal_to_zero_i;
  logic             data_ind_timing_i;
  wire  [32:0]      alu_operand_a_o, alu_operand_b_o;
  logic [33:0]      imd_val_q_i [2];
  wire  [33:0]      imd_val_d_o [2];
  wire  [1:0]       imd_val_we_o;
  logic             multdiv_ready_id_i;
  wire  [31:0]      multdiv_result_o;
  wire              valid_o;

  // external adder and zero comparator, as in ibex_ex_block
  wire [33:0] adder_sum = {1'b0, alu_operand_a_o} + {1'b0, alu_operand_b_o};
  assign alu_adder_i           = adder_sum[32:1];
  assign alu_adder_ext_i[33]   = adder_sum[33];
  assign alu_adder_ext_i[32:1] = adder_sum[32:1];
  assign alu_adder_ext_i[0]    = adder_sum[0];
  assign equal_to_zero_i       = (op_b_i == 32'd0);

  ibex_multdiv_fast #(.RV32M(RV32MFast)) dut (
    .clk_i(clk), .rst_ni(rst_n),
    .mult_en_i(mult_en_i), .div_en_i(div_en_i),
    .mult_sel_i(mult_sel_i), .div_sel_i(div_sel_i),
    .operator_i(operator_i), .signed_mode_i(signed_mode_i),
    .op_a_i(op_a_i), .op_b_i(op_b_i),
    .alu_adder_ext_i(alu_adder_ext_i), .alu_adder_i(alu_adder_i),
    .equal_to_zero_i(equal_to_zero_i), .data_ind_timing_i(data_ind_timing_i),
    .alu_operand_a_o(alu_operand_a_o), .alu_operand_b_o(alu_operand_b_o),
    .imd_val_q_i(imd_val_q_i), .imd_val_d_o(imd_val_d_o), .imd_val_we_o(imd_val_we_o),
    .multdiv_ready_id_i(multdiv_ready_id_i),
    .multdiv_result_o(multdiv_result_o), .valid_o(valid_o));

  // external intermediate-value register
  always @(posedge clk or negedge rst_n) begin
    if (!rst_n) begin
      imd_val_q_i[0] <= '0;
      imd_val_q_i[1] <= '0;
    end else begin
      if (imd_val_we_o[0]) imd_val_q_i[0] <= imd_val_d_o[0];
      if (imd_val_we_o[1]) imd_val_q_i[1] <= imd_val_d_o[1];
    end
  end

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
      mult_en_i  = 1'b0;
      div_en_i   = 1'b0;
      mult_sel_i = 1'b0;
      div_sel_i  = 1'b0;
    end
  endtask

  int unsigned pick;
  md_op_e      pick_op;

  task automatic operation(input md_op_e op, input [31:0] a, input [31:0] b,
                           input int unsigned tail);
    bit is_div;
    is_div = (op == MD_OP_DIV) || (op == MD_OP_REM);
    @(posedge clk);
    #1;
    op_a_i     = a;
    op_b_i     = b;
    operator_i = op;
    mult_sel_i = !is_div;
    mult_en_i  = !is_div;
    div_sel_i  = is_div;
    div_en_i   = is_div;
    // Wait for valid_o AS THE TRACE SEES IT (same sampling point). The divide-by-zero
    // path asserts valid_o combinationally from equal_to_zero_i, and valid_o is gated by
    // the enable, so polling it at the clock edge would let the handshake be observed at
    // an instant that never appears in a row - and the enables would then be withdrawn
    // before any row could record the completion.
    begin
      int unsigned guard;
      guard = 0;
      forever begin
        @(posedge clk);
        #(PERIOD - 2);
        if (valid_o === 1'b1 || guard >= 80) break;
        guard++;
      end
    end
    // Release the enables exactly one cycle after the handshake. The unit's FSM state
    // register only advances while the operation is enabled: dropping the enable during
    // the valid cycle freezes it in its finish state, so valid_o would stay asserted for
    // ever; holding the enable for a further cycle instead makes the FSM leave IDLE again
    // and re-run the operation. One cycle is the protocol, and it is what ibex's ID stage
    // does.
    @(posedge clk);
    #1;
    mult_en_i  = 1'b0;
    div_en_i   = 1'b0;
    mult_sel_i = 1'b0;
    div_sel_i  = 1'b0;
    begin
      int unsigned drain;
      drain = 0;
      forever begin
        @(posedge clk);
        #(PERIOD - 2);
        if (valid_o === 1'b0 || drain >= 20) break;
        drain++;
      end
    end
    idle(tail);
  endtask

  task automatic reset_pulse(input int unsigned n);
    for (int i = 0; i < n; i++) begin
      @(posedge clk);
      #1;
      rst_n      = 1'b0;
      mult_en_i  = 1'b0;
      div_en_i   = 1'b0;
      mult_sel_i = 1'b0;
      div_sel_i  = 1'b0;
    end
    @(posedge clk);
    #1;
    rst_n = 1'b1;
  endtask

  initial begin
    if (!$value$plusargs("seed=%d", seed))     seed = 1;
    if (!$value$plusargs("cycles=%d", cycles)) cycles = 1500;
    if (!$value$plusargs("out=%s", out))       out = "trace.csv";
    if (!$value$plusargs("scenario=%s", scenario)) scenario = "nominal";
    stress = (scenario == "stress");
    lfsr = seed * 32'd2654435761 + 32'd1;

    fd = $fopen(out, "w");
    $fwrite(fd, "bool rst_n,bool mult_en_i,bool div_en_i,int operator_i,");
    $fwrite(fd, "int op_a_i,int op_b_i,int multdiv_result_o,bool valid_o\n");

    rst_n              = 1'b0;
    mult_en_i          = 1'b0;
    div_en_i           = 1'b0;
    mult_sel_i         = 1'b0;
    div_sel_i          = 1'b0;
    operator_i         = MD_OP_MULL;
    signed_mode_i      = 2'b00;
    op_a_i             = 32'd0;
    op_b_i             = 32'd0;
    data_ind_timing_i  = 1'b0;
    multdiv_ready_id_i = 1'b1;

    reset_pulse(3);
    idle(2);

    // directed multiplications
    operation(MD_OP_MULL, 32'd0,      32'd0,      2);
    operation(MD_OP_MULL, 32'd1,      32'd1,      1);
    operation(MD_OP_MULL, 32'd0,      32'd12345,  2);
    operation(MD_OP_MULL, 32'd65535,  32'd65535,  1);
    operation(MD_OP_MULL, 32'd7,      32'd7,      0);   // back to back
    operation(MD_OP_MULL, 32'd256,    32'd256,    1);
    operation(MD_OP_MULH, 32'hFFFF,   32'hFFFF,   2);

    // directed divisions
    operation(MD_OP_DIV,  32'd100,    32'd7,      2);
    operation(MD_OP_DIV,  32'd100,    32'd1,      1);
    operation(MD_OP_DIV,  32'd100,    32'd100,    1);   // equal operands
    operation(MD_OP_DIV,  32'd7,      32'd100,    2);   // divisor greater
    operation(MD_OP_DIV,  32'd0,      32'd5,      1);
    operation(MD_OP_DIV,  32'd12345,  32'd0,      2);   // division by zero
    operation(MD_OP_REM,  32'd12345,  32'd0,      2);   // remainder by zero
    operation(MD_OP_REM,  32'd100,    32'd7,      1);
    operation(MD_OP_DIV,  32'hFFFFFFFF, 32'd3,    2);

    // directed (stress only): reset during a long division
    if (stress) begin
    @(posedge clk);
    #1;
    op_a_i     = 32'hFFFF_FFFF;
    op_b_i     = 32'd1;
    operator_i = MD_OP_DIV;
    div_sel_i  = 1'b1;
    div_en_i   = 1'b1;
    repeat (6) @(posedge clk);
    reset_pulse(2);
    idle(3);
    end

    while (sampled < cycles) begin
      pick = rnd() % 10;
      if (pick < 4)
        operation(MD_OP_MULL, rnd() % 65536, rnd() % 65536, 4 + rnd() % 8);
      else if (pick < 5)
        operation(MD_OP_MULH, rnd(), rnd(), 1 + rnd() % 3);
      else if (pick < 8)
        operation(MD_OP_DIV, rnd() % 100000, 1 + rnd() % 1000, 4 + rnd() % 8);
      else if (pick < 9)
        operation(MD_OP_REM, rnd() % 100000, 1 + rnd() % 1000, 1 + rnd() % 3);
      else begin
        pick_op = (rnd() % 2 == 0) ? MD_OP_DIV : MD_OP_REM;
        operation(pick_op, rnd() % 1000, 32'd0, 1 + rnd() % 3);
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
        $fwrite(fd, "%0d,%0d,%0d,%0d,%0d,%0d,%0d,%0d\n",
                rst_n, mult_en_i, div_en_i, int'(operator_i),
                op_a_i, op_b_i, multdiv_result_o, valid_o);
        sampled++;
      end
    end
  end

endmodule
