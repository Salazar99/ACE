`include "transaction.sv"
`include "generator.sv"
`include "driver.sv"

class environment;
  
  //generator and driver instance
  generator gen;
  driver    driv;
  
  //mailbox handle's
  mailbox gen2driv;
  
  //event for synchronization between generator and test
  event gen_ended;
  
  //virtual interface
  virtual sqrt_intf sqrt_vif;
  
  //constructor
  function new(virtual sqrt_intf sqrt_vif);
    //get the interface from test
    this.sqrt_vif = sqrt_vif;
    
    //creating the mailbox (Same handle will be shared across generator and driver)
    gen2driv = new();
    
    //creating generator and driver
    gen  = new(gen2driv, gen_ended);
    driv = new(sqrt_vif, gen2driv, gen_ended);
  endfunction
  
  task pre_test();
    driv.reset();
  endtask
  
  task test();
    fork
        gen.main();
        driv.main();
    join_none
  endtask
  
  task post_test();
    //wait(gen_ended.triggered);
    wait(gen.repeat_count == driv.no_transactions);
    //wait(driv.sqrt_vif.done);
    driv.reset();
  endtask  
  
  //run task
  task run;
    pre_test();
    test();
    post_test();
    $finish;
  endtask
  
endclass

