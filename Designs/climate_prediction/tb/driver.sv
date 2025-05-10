//gets the packet from generator and drive the transaction packet items into interface (interface is connected to DUT, so the items driven into interface signal will get driven in to DUT) 

class driver;

    //used to count the number of transactions
    int no_transactions;

    //creating virtual interface handle
    virtual climate_intf climate_vif;

    //creating mailbox handle
    mailbox gen2driv;

    //event
    event ended;

    //constructor
    function new(virtual climate_intf climate_vif, mailbox gen2driv, event ended);
        //getting the interface
        this.climate_vif = climate_vif;
        //getting the mailbox handles from  environment 
        this.gen2driv = gen2driv;
        this.ended    = ended;
    endfunction

    //Reset task, Reset the Interface signals to default/initial values
    task reset;
        $display("--------- [DRIVER] Resetting DUT ---------");
        climate_vif.rst_n = 0;
        climate_vif.temperature = 0;
        climate_vif.pressure = 0;
        climate_vif.snow = 0;
        climate_vif.sunny = 0;
        climate_vif.storm = 0;
        climate_vif.error = 0;
        climate_vif.done = 0;
        $display("--------- [DRIVER] Reset Complete ---------");
    endtask

    //drivers the transaction items to interface signals
    task drive;
        transaction trans;
        gen2driv.get(trans);
        
        // Abbassa rst_n per resettare il DUT al prossimo posedge in modo che 
        // climate_condition rimanga positivo per un intero ciclo di clock
        @(posedge climate_vif.clk);
        climate_vif.rst_n = 0;


        @(negedge climate_vif.clk);
        @(negedge climate_vif.clk); // Mantieni basso per 2 cicli di clock
        climate_vif.rst_n = 1;


        // Inizio nuova sequenza
        //@(negedge climate_vif.clk);
        climate_vif.temperature = trans.temperature;
        climate_vif.pressure = trans.pressure;


        no_transactions++;
        //$display("[N. TRANSACTIONS] Number of transactions: %0d", no_transactions);

        // Aspetta che il DUT completi la sequenza
        wait(climate_vif.done);

        //@(negedge climate_vif.clk);
        // Notifica al generatore che la i-esima sequenza random è completata
        -> ended;
    endtask


    task main;
        //wait(!climate_vif.rst_n);
        forever begin
            drive();
        end
    endtask

endclass
