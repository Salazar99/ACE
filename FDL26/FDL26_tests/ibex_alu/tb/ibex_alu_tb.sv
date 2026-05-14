// ibex_alu_tb.sv
// Testbench for the ibex_alu module.

`timescale 1ns / 1ps

module ibex_alu_tb;

  // Import the simplified package for ALU operations and parameters.
  import ibex_pkg::*;

  // Testbench parameters
  localparam CLK_PERIOD = 10; // 10 ns clock period

  // DUT signals
  logic clk;
  logic rst_n;
  alu_op_e operator_i;
  logic [31:0] operand_a_i;
  logic [31:0] operand_b_i;
  logic instr_first_cycle_i;
  logic [32:0] multdiv_operand_a_i;
  logic [32:0] multdiv_operand_b_i;
  logic multdiv_sel_i;
  logic [31:0] imd_val_q_i [2];
  logic [31:0] imd_val_d_o [2];
  logic [1:0] imd_val_we_o;
  logic [31:0] adder_result_o;
  logic [33:0] adder_result_ext_o;
  logic [31:0] result_o;
  logic comparison_result_o;
  logic is_equal_result_o;

  // Instantiate the Device Under Test (DUT)
  ibex_alu #(.RV32B(RV32BFull))
  i_ibex_alu (
    .operator_i          (operator_i),
    .operand_a_i         (operand_a_i),
    .operand_b_i         (operand_b_i),
    .instr_first_cycle_i (instr_first_cycle_i),
    .multdiv_operand_a_i (multdiv_operand_a_i),
    .multdiv_operand_b_i (multdiv_operand_b_i),
    .multdiv_sel_i       (multdiv_sel_i),
    .imd_val_q_i         (imd_val_q_i),
    .imd_val_d_o         (imd_val_d_o),
    .imd_val_we_o        (imd_val_we_o),
    .adder_result_o      (adder_result_o),
    .adder_result_ext_o  (adder_result_ext_o),
    .result_o            (result_o),
    .comparison_result_o (comparison_result_o),
    .is_equal_result_o   (is_equal_result_o)
  );

  // Clock generation
  initial begin
    clk = 0;
    forever #(CLK_PERIOD / 2) clk = ~clk;
  end

  // Dichiarazioni prima del codice eseguibile
  int unsigned test_count;
  int unsigned op_sel;
  logic [31:0] expected_result;
  logic [31:0] temp_a;
  logic [31:0] temp_b;
  alu_op_e     temp_op;
  logic [31:0] temp_result;
  logic        temp_eq;

  // Test sequence
  initial begin
    $dumpfile("ibex_alu.vcd");
    $dumpvars(0, ibex_alu_tb);

    // Initialize all signals
    rst_n               = 1'b0;
    operand_a_i         = 32'h0;
    operand_b_i         = 32'h0;
    instr_first_cycle_i = 1'b0;
    multdiv_sel_i       = 1'b0;
    multdiv_operand_a_i = 33'h0;
    multdiv_operand_b_i = 33'h0;
    imd_val_q_i[0]      = 32'h0;
    imd_val_q_i[1]      = 32'h0;
    operator_i          = ALU_ADD;

    // Reset sequence
    $display("Testbench starting...");
    repeat (2) @(posedge clk);
    rst_n = 1'b1;
    $display("Testbench is out of reset.");

    

    // Inizio test randomici
    test_count = 0;
    $display("Starting randomized testbench with 10000 tests...");

    while (test_count < 10000) begin
      temp_a = $urandom_range(1, 20);
      temp_b = $urandom_range(1, 20);
      op_sel = $urandom_range(0, 4);

      case (op_sel)
        0: begin
             temp_op    = ALU_ADD;
             temp_result = temp_a + temp_b;
           end
        1: begin
             temp_op    = ALU_SUB;
             temp_result = temp_a - temp_b;
           end
        2: begin
             temp_op    = ALU_OR;
             temp_result = temp_a | temp_b;
           end
        3: begin
             temp_op    = ALU_AND;
             temp_result = temp_a & temp_b;
           end
        4: begin
             temp_op = ALU_EQ;
             temp_eq = (temp_a == temp_b);
           end
      endcase

      // Filtro: salta se risultato è zero
      if ((temp_op == ALU_EQ && temp_eq == 1'b0) ||
          (temp_op != ALU_EQ && temp_result == 32'd0)) begin
        continue;
      end

      // Assegna solo se valido
      operand_a_i = temp_a;
      operand_b_i = temp_b;
      operator_i  = temp_op;

      @(posedge clk);
      #2;

      // Stampa risultato
      $display("Test %0d: op=%s, a=%0d, b=%0d => result=%0d",
               test_count,
               operator_i.name(),
               operand_a_i,
               operand_b_i,
               (operator_i == ALU_EQ) ? is_equal_result_o : result_o);

      test_count++;
    end

    $display("Randomized testbench completed.");
    $finish;
  end

endmodule
