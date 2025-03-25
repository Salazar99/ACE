class transaction;
  //declaring the transaction items
  rand logic [15:0] in;
  
  //post-randomize function, displaying randomized values of items 
  function void post_randomize();
    $display("--------- [Trans] post_randomize ------");
    $display("\t in = %0h",in);
    $display("-----------------------------------------");
  endfunction
  
  //deep copy method
  function transaction do_copy();
    transaction trans;
    trans = new();
    trans.in  = this.in;
    return trans;
  endfunction
endclass
