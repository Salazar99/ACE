module tb_climate_prediction;

    logic clk;                 
    logic rst_n;               
    logic [7:0] temperature;   
    logic [10:0] pressure;       
    logic [2:0] climate_condition; 
    logic done;               

    // Instantiate the DUT (Device Under Test)
    climate_prediction dut (
        .clk(clk),
        .rst_n(rst_n),
        .temperature(temperature),
        .pressure(pressure),
        .climate_condition(climate_condition),
        .done(done)
    );

    always #5 clk = ~clk; // 10-unit clock period


    initial begin
        $dumpfile("climate_prediction.vcd");
        $dumpvars(0, tb_climate_prediction);
        // Initialize inputs
        clk = 0;
        rst_n = 0;
        temperature = 0;
        pressure = 0;

        // Rreset
        #10 rst_n = 1;

        // Test case 1: Snow condition
        #20 temperature = 8; pressure = 960;
        #30

        // Test case 1.1 negative: Snow condition
        #20 temperature = -3; pressure = 970;
        #30

        // Test case 2: Sunny condition
        #20 temperature = 20; pressure = 1015;
        #30

        // Test case 3: Storm condition
        #20 temperature = 30; pressure = 940;
        #30

        // Test case 4: Error condition
        #20 temperature = 50; pressure = 1050;
        #30

        // End simulation
        $finish;
    end

endmodule
