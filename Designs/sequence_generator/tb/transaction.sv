class transaction;
  //declaring the transaction items
  rand logic signed [31:0] start_value, step, range_min, range_max;

  constraint valid_data {
    range_min < range_max;
    step inside {[-10:-1], [1:10]}; // not 0
    range_min inside {[-100:100]};
    range_max inside {[-100:100]};
    start_value inside {[range_min:range_max]};

  }
  
  //post-randomize function, displaying randomized values of items 
  function void post_randomize();
    $display("--------- [Trans] post_randomize ------");
    $display("\t Start Value: %0d", start_value);
    $display("\t Step: %0d", step);
    $display("\t Range: [%0d, %0d]", range_min, range_max);
    $display("-----------------------------------------");
  endfunction
  
  //deep copy method
  function transaction do_copy();
    transaction trans;
    trans = new();
    trans.start_value = this.start_value;
    trans.step = this.step;
    trans.range_min = this.range_min;
    trans.range_max = this.range_max;
    return trans;
  endfunction
endclass
