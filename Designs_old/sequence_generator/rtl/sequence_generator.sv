
module sequence_generator (sequence_intf intf);

    // Stati della FSM
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
    always_ff @(posedge intf.clk or negedge intf.rst_n) begin
        if (!intf.rst_n)
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
        next_state = current_state; // tieni uguale se nessuna condizione soddisfatta, per evitare latch (nel cominatorio sempre rami completi)
        case (current_state)
            IDLE: begin
                if (intf.enable)
                    next_state = INIT;
            end
            INIT: begin
                next_state = GENERATE;
            end
            GENERATE: begin
                if ((intf.step > 0 && current_value + intf.step > intf.range_max) ||
                    (intf.step < 0 && current_value + intf.step < intf.range_min))
                    next_state = DONE;
            end
            DONE: begin
                if (!intf.enable)
                    next_state = IDLE;
            end
        endcase
    end

    // Data path: Logic for outputs
    always_ff @(posedge intf.clk or negedge intf.rst_n) begin
        if (!intf.rst_n) begin
            current_value <= 0;
            intf.sequence_value <= 0;
            intf.done <= 0;
        end else begin
            case (current_state)
                IDLE: begin
                    intf.done <= 0;
                    intf.sequence_value <= 0;
                end
                INIT: begin
                    current_value <= intf.start_value;
                    intf.sequence_value <= intf.start_value;
                    intf.done <= 0;
                end
                GENERATE: begin
                    current_value <= current_value + intf.step;
                    intf.sequence_value <= current_value + intf.step;
                    intf.done <= 0;
                end
                DONE: begin
                    intf.done <= 1;
                end
            endcase
        end
    end
endmodule



