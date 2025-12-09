module tb_ibex_csr;

  // Parametri
  localparam int unsigned WIDTH = 32;
  localparam bit SHADOW_COPY    = 1'b1;
  localparam logic [WIDTH-1:0] RESET_VALUE = 32'h0;
  localparam int NUM_TESTS = 100;

  // Segnali
  logic clk;
  logic rst_n;
  logic [WIDTH-1:0] wr_data;
  logic wr_en;
  logic [WIDTH-1:0] rd_data;
  logic rd_error;

  // Clock generation
  always #5 clk = ~clk;

  // DUT instantiation
  ibex_csr #(
    .Width(WIDTH),
    .ShadowCopy(SHADOW_COPY),
    .ResetValue(RESET_VALUE)
  ) dut (
    .clk_i(clk),
    .rst_ni(rst_n),
    .wr_data_i(wr_data),
    .wr_en_i(wr_en),
    .rd_data_o(rd_data),
    .rd_error_o(rd_error)
  );

  // Test sequence
  initial begin
    $dumpfile("ibex_csr.vcd");
    $dumpvars(0, tb_ibex_csr);

    $display("=== Starting ibex_csr Testbench ===");
    clk = 0;
    rst_n = 0;
    wr_data = '0;
    wr_en = 0;

    // Reset
    #10;
    rst_n = 1;
    #10;

    // Check reset value
    if (rd_data !== RESET_VALUE)
      $error("Reset value mismatch: expected %h, got %h", RESET_VALUE, rd_data);

    // Loop di test su 100 valori
    for (int i = 1; i < NUM_TESTS; i++) begin
      wr_data = i * 32'h01010101; // Valori pseudo-random
      wr_en = 1;
      #10;
      wr_en = 0;
      wr_data = 0;
      #5;
      rst_n = 0;
      #5;
      rst_n = 1;

      // Verifica lettura
      if (rd_data !== wr_data)
        $error("Mismatch at iteration %0d: expected %h, got %h", i, wr_data, rd_data);

      // Verifica integrità shadow
      if (rd_error)
        $error("Shadow copy error at iteration %0d", i);
    end

    $display("=== Testbench completed successfully ===");
    $finish;
  end

endmodule
