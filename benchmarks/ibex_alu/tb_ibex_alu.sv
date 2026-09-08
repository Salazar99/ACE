// Trace generator for ibex_alu (combinational RV32 ALU, RV32B extensions present).
//
// Only the RV32I core operations are driven, so the operator vocabulary in the trace stays
// small enough for per-operator contracts to be minable. operator_i is written to the trace
// as its integer encoding from ibex_pkg::alu_op_e:
//
//   ADD=0  SUB=1  XOR=2  OR=3  AND=4  SRA=8  SRL=9  SLL=10
//   LT=25  LTU=26  GE=27  GEU=28  EQ=29  NE=30  MIN=31  MINU=32  MAX=33  MAXU=34
//
// Scenario plan: for every operation, a directed set of corners (0, 1, all-ones, the
// arithmetic wrap boundary, equal operands, shift amounts 0/1/31) followed by random
// operands. Two operand regimes are used: 16-bit values, where a + b and a * 2 cannot wrap
// a 32-bit result, and full 32-bit values, which do wrap. Contracts that need the no-wrap
// case say so in their assumption.
//
// The multi-cycle RV32B paths are not exercised: multdiv_sel_i is low, instr_first_cycle_i
// is high, and the intermediate-value inputs are tied to zero.

`timescale 1ns/1ps

module tb_ibex_alu;

  import ibex_pkg::*;

  localparam int PERIOD = 10;

  logic clk = 0;

  alu_op_e     operator_i;
  logic [31:0] operand_a_i, operand_b_i;
  logic        instr_first_cycle_i;
  logic [32:0] multdiv_operand_a_i, multdiv_operand_b_i;
  logic        multdiv_sel_i;
  logic [31:0] imd_val_q_i [2];
  wire  [31:0] imd_val_d_o [2];
  wire  [1:0]  imd_val_we_o;
  wire  [31:0] adder_result_o;
  wire  [33:0] adder_result_ext_o;
  wire  [31:0] result_o;
  wire         comparison_result_o;
  wire         is_equal_result_o;

  ibex_alu #(.RV32B(RV32BFull)) dut (
    .operator_i(operator_i), .operand_a_i(operand_a_i), .operand_b_i(operand_b_i),
    .instr_first_cycle_i(instr_first_cycle_i),
    .multdiv_operand_a_i(multdiv_operand_a_i), .multdiv_operand_b_i(multdiv_operand_b_i),
    .multdiv_sel_i(multdiv_sel_i),
    .imd_val_q_i(imd_val_q_i), .imd_val_d_o(imd_val_d_o), .imd_val_we_o(imd_val_we_o),
    .adder_result_o(adder_result_o), .adder_result_ext_o(adder_result_ext_o),
    .result_o(result_o), .comparison_result_o(comparison_result_o),
    .is_equal_result_o(is_equal_result_o));

  always #(PERIOD / 2) clk = ~clk;

  int unsigned seed, cycles, sampled, fd;
  string out;
  int unsigned lfsr;

  function automatic int unsigned rnd();
    lfsr = lfsr * 32'd1103515245 + 32'd12345;
    return lfsr >> 16;
  endfunction

  localparam int NOPS = 18;
  alu_op_e ops [NOPS];
  alu_op_e pick_op;

  task automatic drive(input alu_op_e op, input [31:0] a, input [31:0] b);
    @(posedge clk);
    #1;
    operator_i  = op;
    operand_a_i = a;
    operand_b_i = b;
  endtask

  initial begin
    if (!$value$plusargs("seed=%d", seed))     seed = 1;
    if (!$value$plusargs("cycles=%d", cycles)) cycles = 1200;
    if (!$value$plusargs("out=%s", out))       out = "trace.csv";
    lfsr = seed * 32'd2654435761 + 32'd1;

    ops = '{ALU_ADD, ALU_SUB, ALU_XOR, ALU_OR, ALU_AND, ALU_SRA, ALU_SRL, ALU_SLL,
            ALU_LT, ALU_LTU, ALU_GE, ALU_GEU, ALU_EQ, ALU_NE, ALU_MIN, ALU_MINU,
            ALU_MAX, ALU_MAXU};

    fd = $fopen(out, "w");
    $fwrite(fd, "int operator_i,int operand_a_i,int operand_b_i,int result_o,");
    $fwrite(fd, "bool comparison_result_o,bool is_equal_result_o\n");

    instr_first_cycle_i = 1'b1;
    multdiv_sel_i       = 1'b0;
    multdiv_operand_a_i = 33'd0;
    multdiv_operand_b_i = 33'd0;
    imd_val_q_i[0]      = 32'd0;
    imd_val_q_i[1]      = 32'd0;
    operator_i          = ALU_ADD;
    operand_a_i         = 32'd0;
    operand_b_i         = 32'd0;

    // directed corners, per operation
    for (int i = 0; i < NOPS; i++) begin
      drive(ops[i], 32'd0,          32'd0);
      drive(ops[i], 32'd1,          32'd0);
      drive(ops[i], 32'd0,          32'd1);
      drive(ops[i], 32'd7,          32'd7);            // equal operands
      drive(ops[i], 32'd65535,      32'd1);
      drive(ops[i], 32'hFFFF_FFFF,  32'd1);            // wraps for ADD
      drive(ops[i], 32'h8000_0000,  32'h8000_0000);    // sign boundary
      drive(ops[i], 32'd31,         32'd31);           // shift amount 31
      drive(ops[i], 32'd12345,      32'd0);            // shift amount 0
    end

    // random: 16-bit regime (no 32-bit wrap for a+b or a<<1) and full 32-bit regime
    while (sampled < cycles) begin
      pick_op = ops[rnd() % NOPS];
      if (rnd() % 2 == 0) drive(pick_op, rnd() % 65536, rnd() % 65536);
      else                drive(pick_op, rnd(), rnd() % 32);
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
        $fwrite(fd, "%0d,%0d,%0d,%0d,%0d,%0d\n", int'(operator_i), operand_a_i, operand_b_i,
                result_o, comparison_result_o, is_equal_result_o);
        sampled++;
      end
    end
  end

endmodule
