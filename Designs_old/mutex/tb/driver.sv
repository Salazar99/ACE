//gets the packet from generator and drive the transaction paket items into interface (interface is connected to DUT, so the items driven into interface signal will get driven in to DUT) 

class driver;

    //used to count the number of transactions
    int no_transactions;

    //creating virtual interface handle
    virtual mutex_intf mutex_vif;

    //creating mailbox handle
    mailbox gen2driv;

    //constructor
    function new(virtual mutex_intf mutex_vif,mailbox gen2driv);
        //getting the interface
        this.mutex_vif = mutex_vif;
        //getting the mailbox handles from  environment 
        this.gen2driv = gen2driv;
    endfunction

    //Reset task, Reset the Interface signals to default/initial values
    task reset;
         $display("--------- NO RESET PRESENT ---------");
    endtask

    //drivers the transaction items to interface signals
    task drive;
        transaction trans;
        gen2driv.get(trans);
        @(negedge mutex_vif.clk);

        mutex_vif.in=trans.in;

        no_transactions++;
    endtask


    task main;
        forever
            drive();
    endtask

endclass
