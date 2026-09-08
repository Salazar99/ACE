class transaction;
  //declaring the transaction items
  rand logic signed [32:0] in;

  constraint valid_data {
    in inside {[-20:100]};
  }
  
  //post-randomize function, displaying randomized values of items 
  function void post_randomize();
    $display("--------- [Trans] post_randomize ------");
    $display("\t Input: %0d", in);
    $display("-----------------------------------------");
  endfunction
  
  //deep copy method
  function transaction do_copy();
    transaction trans;
    trans = new();
    trans.in = this.in;
    return trans;
  endfunction
endclass
