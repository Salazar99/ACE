//gets the packet from generator and drive the transaction packet items into interface (interface is connected to DUT, so the items driven into interface signal will get driven in to DUT) 

class driver;

    //used to count the number of transactions
    int no_transactions;

    //creating virtual interface handle
    virtual sqrt_intf sqrt_vif;

    //creating mailbox handle
    mailbox gen2driv;

    //event
    event ended;

    //constructor
    function new(virtual sqrt_intf sqrt_vif, mailbox gen2driv, event ended);
        //getting the interface
        this.sqrt_vif = sqrt_vif;
        //getting the mailbox handles from  environment 
        this.gen2driv = gen2driv;
        this.ended    = ended;
    endfunction

    //Reset task, Reset the Interface signals to default/initial values
    task reset;
        $display("--------- [DRIVER] Resetting DUT ---------");
        sqrt_vif.rst = 1;
        sqrt_vif.start = 0;
        sqrt_vif.in = 0;
        sqrt_vif.out = 0;
        sqrt_vif.error = 0;
        sqrt_vif.done = 0;
        @(negedge sqrt_vif.clk);
        sqrt_vif.rst = 0;
        $display("--------- [DRIVER] Reset Complete ---------");
    endtask

    //drivers the transaction items to interface signals
    task drive;
        transaction trans;
        gen2driv.get(trans);
           
        // new sequence
        @(negedge sqrt_vif.clk);
        sqrt_vif.start = 1;
        sqrt_vif.in = trans.in;
        // qua ritarda di un ciclo di clock, anche ad esempio output, capire perche
        sqrt_vif.done = 0;
        sqrt_vif.error = 0;
        sqrt_vif.out = 0;

        @(negedge sqrt_vif.clk);
        sqrt_vif.start = 0;
        
 
        no_transactions++;
        //$display("[N. TRANSACTIONS] Number of transactions: %0d", no_transactions);

        // Aspetta che il DUT completi la sequenza
        wait(sqrt_vif.done);

        //@(negedge sqrt_vif.clk);
        // Notifica al generatore che la i-esima sequenza random è completata
        -> ended;
    endtask


    task main;
        //wait(!sqrt_vif.rst_n);
        forever begin
            drive();
        end
    endtask

endclass
