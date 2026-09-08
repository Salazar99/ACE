class transaction;
  //declaring the transaction items
  rand logic signed [7:0] data_in1;
  rand logic signed [7:0] data_in2;
  rand logic signed [7:0] data_in3;
  rand logic signed [7:0] data_in4;

  constraint valid_data {
    data_in1 inside {[0:200]};
    data_in2 inside {[0:200]};
    data_in3 inside {[0:200]};
    data_in4 inside {[0:200]};
  }
  
  //post-randomize function, displaying randomized values of items 
  function void post_randomize();
    $display("--------- [Trans] post_randomize ------");
    $display("\t Input: %0d", data_in1);
    $display("\t Input: %0d", data_in2);
    $display("\t Input: %0d", data_in3);
    $display("\t Input: %0d", data_in4);
    $display("-----------------------------------------");
  endfunction
  
  //deep copy method
  function transaction do_copy();
    transaction trans;
    trans = new();
    trans.data_in1 = this.data_in1;
    trans.data_in2 = this.data_in2;
    trans.data_in3 = this.data_in3;
    trans.data_in4 = this.data_in4;
    return trans;
  endfunction
endclass
