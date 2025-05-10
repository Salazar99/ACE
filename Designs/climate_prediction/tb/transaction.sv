class transaction;
  //declaring the transaction items
  rand logic signed [7:0] temperature;
  rand logic [10:0] pressure;

  constraint valid_data {
    temperature inside {[-12:40]};
    pressure inside {[930:1040]};
  }
  
  //post-randomize function, displaying randomized values of items 
  function void post_randomize();
    $display("--------- [Trans] post_randomize ------");
    $display("\t Temperature: %0d", temperature);
    $display("\t Pressure: %0d", pressure);
    $display("-----------------------------------------");
  endfunction
  
  //deep copy method
  function transaction do_copy();
    transaction trans;
    trans = new();
    trans.temperature = this.temperature;
    trans.pressure = this.pressure;
    return trans;
  endfunction
endclass
