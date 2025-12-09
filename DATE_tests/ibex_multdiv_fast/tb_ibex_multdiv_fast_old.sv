`timescale 1ns/1ps

module tb_ibex_multdiv_fast;

  import ibex_pkg::*;

  // Clock e reset
  logic clk;
  logic rst_n;

  // Stimoli al DUT
  logic             mult_en_i;
  logic             div_en_i;
  logic             mult_sel_i;
  logic             div_sel_i;
  md_op_e           operator_i;
  logic [1:0]       signed_mode_i;
  logic [31:0]      op_a_i;
  logic [31:0]      op_b_i;
  logic [33:0]      alu_adder_ext_i;
  logic [31:0]      alu_adder_i;
  logic             equal_to_zero_i;
  logic             data_ind_timing_i;

  // Uscite DUT
  logic [32:0]      alu_operand_a_o;
  logic [32:0]      alu_operand_b_o;
  logic [33:0]      imd_val_q_i [2];
  logic [33:0]      imd_val_d_o [2];
  logic [1:0]       imd_val_we_o;
  logic             multdiv_ready_id_i;
  logic [31:0]      multdiv_result_o;
  logic             valid_o;

  // Clock
  always #5 clk = ~clk;

  wire [33:0] adder_sum = {1'b0, alu_operand_a_o} + {1'b0, alu_operand_b_o};
  assign alu_adder_i           = adder_sum[32:1];
  assign alu_adder_ext_i[32:1] = adder_sum[32:1];
  assign alu_adder_ext_i[33]   = adder_sum[33]; // non 0
  assign alu_adder_ext_i[0]    = adder_sum[0];  // non 0

  // equal_to_zero combinatorio
  assign equal_to_zero_i = (op_b_i == 32'd0);
  

  // Instanziazione DUT
  ibex_multdiv_fast #(
    .RV32M(RV32MSingleCycle) // puoi cambiare in RV32MFast
  ) dut (
    .clk_i(clk),
    .rst_ni(rst_n),
    .mult_en_i(mult_en_i),
    .div_en_i(div_en_i),
    .mult_sel_i(mult_sel_i),
    .div_sel_i(div_sel_i),
    .operator_i(operator_i),
    .signed_mode_i(signed_mode_i),
    .op_a_i(op_a_i),
    .op_b_i(op_b_i),
    .alu_adder_ext_i(alu_adder_ext_i),
    .alu_adder_i(alu_adder_i),
    .equal_to_zero_i(equal_to_zero_i),
    .data_ind_timing_i(data_ind_timing_i),
    .alu_operand_a_o(alu_operand_a_o),
    .alu_operand_b_o(alu_operand_b_o),
    .imd_val_q_i(imd_val_q_i),
    .imd_val_d_o(imd_val_d_o),
    .imd_val_we_o(imd_val_we_o),
    .multdiv_ready_id_i(multdiv_ready_id_i),
    .multdiv_result_o(multdiv_result_o),
    .valid_o(valid_o)
  );

  // Inizializzazione segnali
  initial begin
    $dumpfile("ibex_multdiv_fast.vcd");
    $dumpvars(0, tb_ibex_multdiv_fast);
    clk = 0;
    rst_n = 0;
    mult_en_i = 0;
    div_en_i = 0;
    mult_sel_i = 0;
    div_sel_i = 0;
    operator_i = MD_OP_MULL;
    signed_mode_i = 2'b00; // unsigned
    op_a_i = 0;
    op_b_i = 0;
    //alu_adder_ext_i = 0;
    //alu_adder_i = 0;
    //equal_to_zero_i = 0;
    data_ind_timing_i = 0;
    multdiv_ready_id_i = 1;

    #20 rst_n = 1;
  end

  // Task per eseguire moltiplicazioni
  task do_mult(input [31:0] a, input [31:0] b, input [1:0] signed_mode);
    begin
      @(posedge clk);
      op_a_i = a;
      op_b_i = b;
      signed_mode_i = signed_mode;
      operator_i = MD_OP_MULL;
      mult_sel_i = 1;
      mult_en_i = 1;

      wait(valid_o);

      @(posedge clk);
      mult_en_i = 0;
      mult_sel_i = 0;
      $display("MULT %0d * %0d = %0d", $signed(a), $signed(b), $signed(multdiv_result_o));
    end
  endtask

  // Task per eseguire divisioni
  task do_div(input [31:0] a, input [31:0] b, input [1:0] signed_mode);
    begin
      @(posedge clk);
      op_a_i = a;
      op_b_i = b;
      signed_mode_i = signed_mode;
      operator_i = MD_OP_DIV;
      div_sel_i = 1;
      div_en_i = 1;

      wait(valid_o);
      
      @(posedge clk);
      div_en_i = 0;
      div_sel_i = 0;
      $display("DIV %0d / %0d = %0d", $signed(a), $signed(b), $signed(multdiv_result_o));
    end
  endtask


  always @(posedge clk or negedge rst_n) begin
    if (!rst_n) begin
      imd_val_q_i[0] <= '0;
      imd_val_q_i[1] <= '0;
    end else begin
      if (imd_val_we_o[0]) imd_val_q_i[0] <= imd_val_d_o[0];
      if (imd_val_we_o[1]) imd_val_q_i[1] <= imd_val_d_o[1];
    end
  end

  // Stimoli
  initial begin
    @(posedge rst_n);

    // Esempi moltiplicazione
    do_mult(10, 3, 2'b00);    // unsigned
    do_mult(-12, 5, 2'b11);   // signed
    do_mult(1000, -2, 2'b11); // signed
    do_mult(1000, 0, 2'b11);

    // Esempi divisione
    do_div(100, 5, 2'b00);    // unsigned
    do_div(-50, 7, 2'b11);    // signed
    do_div(42, 0, 2'b00);     // divisione per zero, unsigned
    do_div(0, 42, 2'b00);     // divisione per zero, unsigned
    do_div(147, 147, 2'b00); 

    #10;
    $finish;
  end

endmodule
