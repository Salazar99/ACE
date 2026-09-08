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

  // Test sequence
  initial begin
    $dumpfile("ibex_alu.vcd");
    $dumpvars(0, ibex_alu_tb);

    // Initialize all signals
    rst_n               = 1'b0;
    operand_a_i         = 32'hdeadbeef;
    operand_b_i         = 32'h00001234;
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

    // --- Test Case 1: Addition ---
    $display("--- Starting Test Case 1: Addition ---");
    operand_a_i         = 32'd10;
    operand_b_i         = 32'd5;
    operator_i          = ALU_ADD;
    @(posedge clk);
    #1; // Wait for combinational logic to settle
    if (result_o == 32'd15) begin
      $display("PASS: Addition 10 + 5 = %0d", result_o);
    end else begin
      $display("FAIL: Addition 10 + 5. Expected: 15, Got: %0d", result_o);
    end

    // --- Test Case 2: Subtraction ---
    $display("--- Starting Test Case 2: Subtraction ---");
    operand_a_i         = 32'd20;
    operand_b_i         = 32'd8;
    operator_i          = ALU_SUB;
    @(posedge clk);
    //#1;
    if (result_o == 32'd12) begin
      $display("PASS: Subtraction 20 - 8 = %0d", result_o);
    end else begin
      $display("FAIL: Subtraction 20 - 8. Expected: 12, Got: %0d", result_o);
    end

    // --- Test Case 3: Bitwise AND ---
    $display("--- Starting Test Case 3: Bitwise AND ---");
    operand_a_i         = 32'hFFFF0000;
    operand_b_i         = 32'h0000FFFF;
    operator_i          = ALU_AND;
    @(posedge clk);
    //#1;
    if (result_o == 32'h00000000) begin
      $display("PASS: Bitwise AND. Result: %h", result_o);
    end else begin
      $display("FAIL: Bitwise AND. Expected: 0, Got: %h", result_o);
    end

    // --- Test Case 4: Equality Check ---
    $display("--- Starting Test Case 4: Equality Check ---");
    operand_a_i         = 32'd100;
    operand_b_i         = 32'd100;
    operator_i          = ALU_EQ;
    @(posedge clk);
    //#1;
    if (is_equal_result_o == 1'b1) begin
      $display("PASS: Equality Check (100 == 100). Result: %b", is_equal_result_o);
    end else begin
      $display("FAIL: Equality Check. Expected: 1, Got: %b", is_equal_result_o);
    end

    // --- Test Case 5: Inequality Check ---
    $display("--- Starting Test Case 5: Inequality Check ---");
    operand_a_i         = 32'd100;
    operand_b_i         = 32'd99;
    operator_i          = ALU_EQ;
    @(posedge clk);
    //#1;
    if (is_equal_result_o == 1'b0) begin
      $display("PASS: Inequality Check (100 != 99). Result: %b", is_equal_result_o);
    end else begin
      $display("FAIL: Inequality Check. Expected: 0, Got: %b", is_equal_result_o);
    end

    // End of simulation
    $display("Testbench finished. Halting simulation.");
    $finish;
  end

endmodule
