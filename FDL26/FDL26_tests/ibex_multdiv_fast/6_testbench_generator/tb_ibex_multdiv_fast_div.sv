`timescale 1ns/1ps

module tb_ibex_multdiv_fast_div;

  import ibex_pkg::*;

  // Clock e reset
  logic clk;
  logic rst_n;

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

  logic [32:0]      alu_operand_a_o;
  logic [32:0]      alu_operand_b_o;
  logic [33:0]      imd_val_q_i [2];
  logic [33:0]      imd_val_d_o [2];
  logic [1:0]       imd_val_we_o;
  logic             multdiv_ready_id_i;
  logic [31:0]      multdiv_result_o;
  logic             valid_o;

  always #5 clk = ~clk;

  wire [33:0] adder_sum = {1'b0, alu_operand_a_o} + {1'b0, alu_operand_b_o};
  assign alu_adder_i           = adder_sum[32:1];
  assign alu_adder_ext_i[32:1] = adder_sum[32:1];
  assign alu_adder_ext_i[33]   = adder_sum[33]; // non 0
  assign alu_adder_ext_i[0]    = adder_sum[0];  // non 0

  assign equal_to_zero_i = (op_b_i == 32'd0);
  

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

  initial begin
    $dumpfile("verified_div.vcd");
    $dumpvars(0, tb_ibex_multdiv_fast_div);
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
    data_ind_timing_i = 1;
    multdiv_ready_id_i = 1;

    #20 rst_n = 1;
  end


  always @(posedge clk or negedge rst_n) begin
    if (!rst_n) begin
      imd_val_q_i[0] <= '0;
      imd_val_q_i[1] <= '0;
    end else begin
      if (imd_val_we_o[0]) imd_val_q_i[0] <= imd_val_d_o[0];
      if (imd_val_we_o[1]) imd_val_q_i[1] <= imd_val_d_o[1];
    end
  end

  integer fd;
  string line;
  int line_count = 0;

  int a_val, b_val;
  string fmt;
  int nread;
  logic [1:0] sm;

  initial begin
    @(posedge rst_n);

    fd = $fopen("filtered_div_sel_i.txt", "r");
    if (fd == 0) begin
      $error("Error: can't open .txt");
      $finish;
    end

    fmt = "";
    for (int i = 0; i < 38; i++) begin
      fmt = {fmt, "%*d,"};
    end
    fmt = {fmt, "%d,%d"};

    // Scarta intestazione
    void'($fgets(line, fd));

    while (!$feof(fd)) begin
      line_count++;
      if (!$fgets(line, fd)) break;

      // discards first 2 lines and takes every 3 lines
      if (line_count < 1) continue;
      if (((line_count-1) % 3) != 0) continue;

      nread = $sscanf(line, fmt, a_val, b_val);
      if (nread != 2) begin
        $error("Parse fallita alla riga %0d: '%s'", line_count+1, line);
        continue;
      end

      
      sm[0] = ($signed(a_val) < 0);
      sm[1] = ($signed(b_val) < 0);


      @(posedge clk);
      op_a_i     = a_val;
      op_b_i     = b_val;
      signed_mode_i = sm;
      div_en_i   = 1;
      div_sel_i  = 1;
      operator_i = MD_OP_DIV;

      wait (valid_o);
      @(posedge clk);
      div_en_i  = 0;
      div_sel_i = 0;

      $display("Stimolo da file: riga=%0d  A=%0d  B=%0d  Risultato=%0d",
               line_count+1, op_a_i, op_b_i, multdiv_result_o);
    end

    $fclose(fd);

    #10;
    $finish;
  end

endmodule
