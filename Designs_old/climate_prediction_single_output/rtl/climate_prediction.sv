module climate_prediction (climate_intf intf);

    // FSM states
    typedef enum logic [31:0] {
        IDLE,      
        UPDATE     
    } state_t;

    state_t current_state, next_state; // FSM states

    // Output encoding for climate conditions
    typedef enum logic [31:0] {
        UNDEFINED,  
        SNOW,       
        SUNNY,    
        STORM,     
        ERROR      
    } climate_t;

    // Registers for data path
    logic signed [31:0] reg_temperature, prev_temperature; // Current and previous temperature
    logic [31:0] reg_pressure, prev_pressure;      // Current and previous pressure

    // Sequential logic: State transition
    always_ff @(posedge intf.clk or negedge intf.rst_n) begin
        if (!intf.rst_n) begin
            current_state <= IDLE; 
            prev_temperature <= intf.temperature;
            prev_pressure <= intf.pressure;
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
                //if (intf.temperature != prev_temperature || intf.pressure != prev_pressure) begin
                next_state = UPDATE; // Move to UPDATE state if inputs changed
                //end
            end
            UPDATE: begin
                next_state = IDLE; // Return to IDLE after updating output
            end
        endcase
    end

    // Data path: Logic for outputs and intermediate computations
    always_ff @(posedge intf.clk or negedge intf.rst_n) begin
        if (!intf.rst_n) begin
            reg_temperature <= 0;
            reg_pressure <= 0;
            intf.climate_condition <= UNDEFINED; 
            intf.done <= 0; 
        end else begin
            case (current_state)
                IDLE: begin
                    reg_temperature <= intf.temperature; 
                    reg_pressure <= intf.pressure;
                    intf.climate_condition <= UNDEFINED; 
                    intf.done <= 0; 
                end
                UPDATE: begin
                    intf.done <= 1; 
                    //$display("Time: %0t | reg_temperature: %0d | reg_pressure: %0d", $time, reg_temperature, reg_pressure);
                    if ((reg_temperature >= -10 && reg_temperature <= 10) &&
                        (reg_pressure >= 950 && reg_pressure <= 1000)) begin
                        intf.climate_condition <= SNOW; // Condition for SNOW
                    end else if ((reg_temperature >= 11 && reg_temperature <= 25) &&
                                 (reg_pressure >= 1000 && reg_pressure <= 1020)) begin
                        intf.climate_condition <= SUNNY; // Condition for SUNNY
                    end else if (reg_temperature > 25 && reg_pressure < 950) begin
                        intf.climate_condition <= STORM; // Condition for STORM
                    end else begin
                        intf.climate_condition <= ERROR; // ERROR condition
                    end
                end
            endcase
        end
    end

endmodule