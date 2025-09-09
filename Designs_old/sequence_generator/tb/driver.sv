//gets the packet from generator and drive the transaction packet items into interface (interface is connected to DUT, so the items driven into interface signal will get driven in to DUT) 

class driver;

    //used to count the number of transactions
    int no_transactions;

    //creating virtual interface handle
    virtual sequence_intf sequence_vif;

    //creating mailbox handle
    mailbox gen2driv;

    //event
    event ended;

    //constructor
    function new(virtual sequence_intf sequence_vif, mailbox gen2driv, event ended);
        //getting the interface
        this.sequence_vif = sequence_vif;
        //getting the mailbox handles from  environment 
        this.gen2driv = gen2driv;
        this.ended    = ended;
    endfunction

    //Reset task, Reset the Interface signals to default/initial values
    task reset;
        $display("--------- [DRIVER] Resetting DUT ---------");
        sequence_vif.rst_n = 0;
        sequence_vif.enable = 0;
        sequence_vif.start_value = 0;
        sequence_vif.step = 0;
        sequence_vif.range_min = 0;
        sequence_vif.range_max = 0;
        sequence_vif.sequence_value = 0;
        sequence_vif.done = 0;
        //wait(!sequence_vif.rst_n);
        $display("--------- [DRIVER] Reset Complete ---------");
    endtask

    //drivers the transaction items to interface signals
    task drive;
        transaction trans;
        gen2driv.get(trans);
        
        // Abbassa rst_n per resettare il DUT
        @(negedge sequence_vif.clk);
        sequence_vif.rst_n = 0;


        @(negedge sequence_vif.clk);
        @(negedge sequence_vif.clk); // Low for 2 cycles clock
        sequence_vif.rst_n = 1;


        // Inizio nuova sequenza
        @(negedge sequence_vif.clk);
        sequence_vif.enable = 1;
        sequence_vif.start_value = trans.start_value;
        sequence_vif.step = trans.step;
        sequence_vif.range_min = trans.range_min;
        sequence_vif.range_max = trans.range_max;

        no_transactions++;
        //$display("[N. TRANSACTIONS] Number of transactions: %0d", no_transactions);

        // Aspetta che il DUT completi la sequenza
        //$display("[DRIVER] Waiting for DUT to complete sequence...");
        wait(sequence_vif.done);

        //$display("[DRIVER] Sequence completed. Disabling enable.");

        // Disabilita enable
        @(negedge sequence_vif.clk);
        sequence_vif.enable = 0;

        // Notifica al generatore che la i-esima sequenza random è completata
        -> ended;
    endtask


    task main;
        //wait(!sequence_vif.rst_n);
        forever begin
            drive();
        end
    endtask

endclass
