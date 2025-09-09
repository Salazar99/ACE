
module tb_sequence_generator;
    logic clk;
    logic rst_n;
    logic enable;
    logic signed [31:0] start_value;
    logic signed [31:0] step;
    logic signed [31:0] range_min;
    logic signed [31:0] range_max;
    logic signed [31:0] sequence_value;
    logic done;

    sequence_generator dut (
        .clk(clk),
        .rst_n(rst_n),
        .enable(enable),
        .start_value(start_value),
        .step(step),
        .range_min(range_min),
        .range_max(range_max),
        .sequence_value(sequence_value),
        .done(done)
    );

    always #5 clk = ~clk;

    initial begin
        $dumpfile("sequence_generator.vcd");
        $dumpvars(0, tb_sequence_generator);
        // Initialize inputs
        clk = 0;
        rst_n = 0;
        enable = 0;
        start_value = 10;
        step = 2;
        range_min = 5;
        range_max = 20;

        // Reset
        #10 rst_n = 1;

        // Enable module
        #10 enable = 1;

        // Disable module
        #100 enable = 0;

        // End simulation
        #20 $finish;
    end
endmodule