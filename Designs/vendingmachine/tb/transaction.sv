class transaction;
  //declaring the transaction items
  rand logic [3:0] coin_in;
  rand logic [1:0] button_in;
  
  constraint coin_c { coin_in==0 || coin_in==1 || coin_in==2  /*|| coin_in==5 || coin_in==10 || coin_in==20*/;};
  constraint button_c {/*button_in==0 ||*/ button_in==1 || button_in==2;};  

  
  //post-randomize function, displaying randomized values of items 
  function void post_randomize();
    $display("--------- [Trans] post_randomize ------");
    $display("\t coin = %0h",coin_in);
    $display("\t button = %0h",button_in);
    $display("-----------------------------------------");
  endfunction
  
  //deep copy method
  function transaction do_copy();
    transaction trans;
    trans = new();
    trans.coin_in  = this.coin_in;
    trans.button_in  = this.button_in;
    return trans;
  endfunction
endclass
