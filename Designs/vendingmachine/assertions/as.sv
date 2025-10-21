 `define VM  tbench_top.DUT
  checker check(clk,rst,start, coin_in, button_in, change_out, beverage_out,credit_out,disp_out);
	assert property(check_clocking.p0);
 	assert property(check_clocking.p1);
	assert property(check_clocking.p2);
	assert property(check_clocking.p3);
	assert property(check_clocking.p4);
	assert property(check_clocking.p5);
	
	clocking check_clocking @(posedge clk);

		//If there is enough credit for beverage 1 and it is selected, after M it is dispensed
		property p0;
			((credit_out > 2 && button_in == 2'b01) && !(disp_out || beverage_out)) |-> nexttime[13](beverage_out > 0);
		endproperty		
		//If there is enough credit for beverage 1 and it is selected, after M it is dispensed
		property p1;
			((credit_out > 4 && button_in == 2'b10) && !(disp_out || beverage_out)) |-> nexttime[13](beverage_out > 0);
		endproperty
		//If a beverage is not being dispensed and I have credit inside, I will still have credit at next cycle 
		property p2;
		 	!(beverage_out) && credit_out |-> nexttime[1](credit_out > 0);	
		endproperty
		//When change is dispended, after a cycle beverage_out is set to 0
		property p3;
		 	(change_out) |-> nexttime[1](change_out == 0);	
		endproperty
		//If there is no credit and coin is inserted, at next cycle I will have credit inside the machine 
		property p4;
			 (coin_in > 0 && !credit_out) |-> nexttime[1](credit_out > 0);	
		endproperty
		//When the machine enter in dispensing state, disp is activated after 1 clk cycle
		property p5;
			(((credit_out > 2 && button_in == 2'b01)||(credit_out > 4 && button_in == 2'b10)) && !(disp_out || beverage_out)) |-> nexttime[1](disp_out);
		endproperty
	endclocking

		 int p0ATCT=0;
   		 cover property (check_clocking.p0) begin
        		p0ATCT++;
   		 end

		 int p1ATCT=0;
   		 cover property (check_clocking.p1) begin
        		p1ATCT++;
   		 end
		 int p2ATCT=0;
   		 cover property (check_clocking.p2) begin
        		p2ATCT++;
   		 end
		 int p3ATCT=0;
		 
   		 cover property (check_clocking.p3) begin
        		p3ATCT++;
   		 end
 
		 int p4ATCT=0;
   		 cover property (check_clocking.p4) begin
        		p4ATCT++;
   		 end  
   		 
   		 int p5ATCT=0;
   		 cover property (check_clocking.p5) begin
        		p5ATCT++;
   		 end  
   		 
	
	final begin
		//$display("p0:%d", p0ATCT);
		//$display("p1:%d", p1ATCT);
		//$display("p2:%d", p2ATCT);
		$display("p3:%d", p3ATCT);
		//$display("p4:%d", p4ATCT);
		//$display("p5:%d", p5ATCT);
	end
	 endchecker: check

	bind `VM check check_instance(`VM.intf.clk,`VM.intf.rst,`VM.intf.start,`VM.intf.coin_in,`VM.intf.button_in,`VM.intf.change_out,`VM.intf.beverage_out,`VM.intf.credit_out,`VM.intf.disp_out);
