module climate_prediction (
    input logic clk,
    input logic rst_n,           // Low reset
    input logic signed [7:0] temperature, // Temperature value, signed because also negative
    input logic [10:0] pressure,  // Atmospheric pressure value (0-2047)
    output logic [2:0] climate_condition, // Predicted climate condition
    output logic done
);

    // FSM states
    typedef enum logic [1:0] {
        IDLE,
        UPDATE
    } state_t;

    state_t current_state, next_state; // FSM states

    // Output encoding for climate conditions
    typedef enum logic [2:0] {
        UNDEFINED,
        SNOW,
        SUNNY,   
        STORM,   
        ERROR    
    } climate_t;

    // Registers for data path
    logic signed [7:0] reg_temperature, prev_temperature; // Current and previous temperature
    logic [10:0] reg_pressure, prev_pressure;      // Current and previous pressure

    // Sequential logic: State transition
    always_ff @(posedge clk or negedge rst_n) begin
        if (!rst_n) begin
            current_state <= IDLE; 
            prev_temperature <= 0;
            prev_pressure <= 0;
        end else begin
            current_state <= next_state;
            if (current_state == UPDATE) begin
                // Update previous values after processing
                prev_temperature <= reg_temperature;
                prev_pressure <= reg_pressure;
            end
        end
    end

    // Combinational logic: Next state logic
    always_comb begin
        next_state = current_state; 
        case (current_state)
            IDLE: begin
                // Check if inputs have changed
                if (temperature != prev_temperature || pressure != prev_pressure) begin
                    next_state = UPDATE; // Move to UPDATE state if inputs changed
                end
            end
            UPDATE: begin
                next_state = IDLE; // Return to IDLE after updating output
            end
        endcase
    end

    // Data path: Logic for outputs and intermediate computations
    always_ff @(posedge clk or negedge rst_n) begin
        if (!rst_n) begin
            reg_temperature <= 0;
            reg_pressure <= 0;
            climate_condition <= UNDEFINED;
            done <= 0;
        end else begin
            case (current_state)
                IDLE: begin
                    reg_temperature <= temperature; 
                    reg_pressure <= pressure;
                    climate_condition <= UNDEFINED;
                    done <= 0; 
                end
                UPDATE: begin
                    done <= 1; 
                    $display("Time: %0t | reg_temperature: %0d | reg_pressure: %0d", $time, reg_temperature, reg_pressure);
                    if ((reg_temperature >= -10 && reg_temperature <= 10) &&
                        (reg_pressure >= 950 && reg_pressure <= 1000)) begin
                        climate_condition <= SNOW; // Condition for SNOW
                    end else if ((reg_temperature >= 11 && reg_temperature <= 25) &&
                                 (reg_pressure >= 1000 && reg_pressure <= 1020)) begin
                        climate_condition <= SUNNY; // Condition for SUNNY
                    end else if (reg_temperature > 25 && reg_pressure < 950) begin
                        climate_condition <= STORM; // Condition for STORM
                    end else begin
                        climate_condition <= ERROR; // ERROR condition
                    end
                end
            endcase
        end
    end

endmodule