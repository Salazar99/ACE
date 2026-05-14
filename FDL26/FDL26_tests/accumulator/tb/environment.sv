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
  virtual accu_intf accu_vif;
  
  //constructor
  function new(virtual accu_intf accu_vif);
    //get the interface from test
    this.accu_vif = accu_vif;
    
    //creating the mailbox (Same handle will be shared across generator and driver)
    gen2driv = new();
    
    //creating generator and driver
    gen  = new(gen2driv, gen_ended);
    driv = new(accu_vif, gen2driv, gen_ended);
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
    //wait(driv.accu_vif.done);
    //driv.reset();
  endtask  
  
  //run task
  task run;
    pre_test();
    test();
    post_test();
    $finish;
  endtask
  
endclass

