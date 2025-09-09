
module sequence_generator (
    input logic clk,
    input logic rst_n,              // Low reset
    input logic enable,
    input logic signed [31:0] start_value, // Start value of the sequence
    input logic signed [31:0] step,        // Step of the sequence
    input logic signed [31:0] range_min,   // Minimum range of the interval
    input logic signed [31:0] range_max,   // Maximum range of the interval
    output logic signed [31:0] sequence_value, // Each value of the sequence
    output logic done
);

    // FSM states
    typedef enum logic [1:0] {
        IDLE,
        INIT,
        GENERATE,
        DONE
    } state_t;

    state_t current_state, next_state;

    // Registers for data path
    logic signed [31:0] current_value;

    // FSM: Next state
    // update current_state
    // Il cambiamento di current_state provoca l'attivazione del blocco always_comb, 
    // che ricalcola il nuovo next_state
    always_ff @(posedge clk or negedge rst_n) begin
        if (!rst_n)
            current_state <= IDLE;
        else
            current_state <= next_state;
    end

    // Combinational logic: Next state logic
    // Sensibilità del blocco combinatorio: è istantaneo dal punto di vista della simulazione, eseguito subito
    // Rieseguito ogni volta che cambia uno dei seguenti segnali:
    // current_state: lo stato attuale della FSM
    // enable, step, current_value, range_min, o range_max: poiché influenzano le condizioni nei rami della FSM
    always_comb begin
        next_state = current_state; 
        case (current_state)
            IDLE: begin
                if (enable)
                    next_state = INIT;
            end
            INIT: begin
                next_state = GENERATE;
            end
            GENERATE: begin
                if ((step > 0 && current_value + step > range_max) ||
                    (step < 0 && current_value + step < range_min))
                    next_state = DONE;
            end
            DONE: begin
                if (!enable)
                    next_state = IDLE;
            end
        endcase
    end

    // Data path: Logic for outputs
    always_ff @(posedge clk or negedge rst_n) begin
        if (!rst_n) begin
            current_value <= 0;
            sequence_value <= 0;
            done <= 0;
        end else begin
            case (current_state)
                IDLE: begin
                    done <= 0;
                    sequence_value <= 0;
                end
                INIT: begin
                    current_value <= start_value;
                    sequence_value <= start_value;
                    done <= 0;
                end
                GENERATE: begin
                    current_value <= current_value + step;
                    sequence_value <= current_value + step;
                    done <= 0;
                end
                DONE: begin
                    done <= 1;
                end
            endcase
        end
    end
endmodule



