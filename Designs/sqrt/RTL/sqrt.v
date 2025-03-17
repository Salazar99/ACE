module sqrt_newton(
    parameter WIDTH = 32,     // Bit width of the input and output
    parameter ITERATIONS = 10 // Number of Newton-Raphson iterations
    input wire clk,
    input wire rst,
    input wire start,
    input wire signed [WIDTH-1:0] x, // Signed input number
    output reg [WIDTH-1:0] y,        // Computed square root
    output reg done,                 // Done signal
    output reg error                 // Error flag (set if x < 0)
);

    reg [WIDTH-1:0] xn;   // Current approximation
    reg [3:0] iter;       // Iteration counter
    reg running;          // Indicates if the calculation is running

    always @(posedge clk or posedge rst) begin
        if (rst) begin
            y <= 0;
            done <= 0;
            error <= 0;
            running <= 0;
            iter <= 0;
        end else if (start && !running) begin
            if (x < 0) begin
                error <= 1; // Raise error flag if input is negative
                done <= 1;  // Signal completion with error
                running <= 0;
            end else begin
                // Initialize the algorithm
                xn <= x >> 1; // Initial guess: x / 2
                iter <= 0;
                done <= 0;
                error <= 0;
                running <= 1;
            end
        end else if (running) begin
            // Perform one Newton-Raphson iteration
            xn <= (xn + (x / xn)) >> 1;
            iter <= iter + 1;

            if (iter == ITERATIONS - 1) begin
                y <= xn;
                done <= 1;
                running <= 0;
            end
        end
    end

endmodule
