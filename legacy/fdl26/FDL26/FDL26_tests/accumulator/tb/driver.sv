//gets the packet from generator and drive the transaction packet items into interface (interface is connected to DUT, so the items driven into interface signal will get driven in to DUT) 

class driver;

    //used to count the number of transactions
    int no_transactions;

    //creating virtual interface handle
    virtual accu_intf accu_vif;

    //creating mailbox handle
    mailbox gen2driv;

    //event
    event ended;

    //constructor
    function new(virtual accu_intf accu_vif, mailbox gen2driv, event ended);
        //getting the interface
        this.accu_vif = accu_vif;
        //getting the mailbox handles from  environment 
        this.gen2driv = gen2driv;
        this.ended    = ended;
    endfunction

    //Reset task, Reset the Interface signals to default/initial values
    task reset;
        $display("--------- [DRIVER] Resetting DUT ---------");
        accu_vif.rst_n = 0;
        accu_vif.data_in = 0;
        accu_vif.valid_in = 0;
        accu_vif.data_out = 0;
        accu_vif.valid_out = 0;
        @(negedge accu_vif.clk);
        @(negedge accu_vif.clk);
        accu_vif.rst_n = 1;
        accu_vif.valid_in = 1;
        $display("--------- [DRIVER] Reset Complete ---------");
    endtask

    //drivers the transaction items to interface signals
    task drive;
        transaction trans;
        gen2driv.get(trans);
           
        // new sequence
        accu_vif.data_in = trans.data_in1;

        @(negedge accu_vif.clk);
        accu_vif.data_in = trans.data_in2;
        
        @(negedge accu_vif.clk);
        accu_vif.data_in = trans.data_in3;

        @(negedge accu_vif.clk);
        accu_vif.data_in = trans.data_in4;

        // Aspetta che il DUT completi la sequenza
        wait(accu_vif.valid_out);

        // go negedge for next sequence
        @(negedge accu_vif.clk);

        no_transactions++;

        //@(negedge accu_vif.clk);
        // Notifica al generatore che la i-esima sequenza random è completata
        -> ended;
    endtask


    task main;
        //wait(!accu_vif.rst_n);
        forever begin
            drive();
        end
    endtask

endclass
