 `define VM  tbench_top.DUT
  checker check(clk,rst,start, coin_in, button_in, change_out, beverage_out,credit_out,disp_out);
	assert property(check_clocking.p0atct);
	/*assert property(check_clocking.p0atcf);
	assert property(check_clocking.p0afct);
	assert property(check_clocking.p0afcf);
	*/
 	assert property(check_clocking.p1atct);
	/*assert property(check_clocking.p1atcf);
	assert property(check_clocking.p1afct);
	assert property(check_clocking.p1afcf);
	*/
	assert property(check_clocking.p2atct);
	/*assert property(check_clocking.p2atcf);
	assert property(check_clocking.p2afct);
	assert property(check_clocking.p2afcf);
	*/
	assert property(check_clocking.p3atct);
	/*assert property(check_clocking.p3atcf);
	assert property(check_clocking.p3afct);
	assert property(check_clocking.p3afcf);
	*/
	assert property(check_clocking.p4atct);
	/*assert property(check_clocking.p4atcf);
	assert property(check_clocking.p4afct);
	assert property(check_clocking.p4afcf);
	*/
	assert property(check_clocking.p5atct);
	/*assert property(check_clocking.p5atcf);
	assert property(check_clocking.p5afct);
	assert property(check_clocking.p5afcf);
	*/
	
	clocking check_clocking @(posedge clk);

		//If there is enough credit for beverage 1 and it is selected, after M it is dispensed
		property p0atct;
			((credit_out > 2 && button_in == 2'b01) && !(disp_out || beverage_out)) |-> nexttime[13](beverage_out > 0);
		endproperty
				
		property p0atcf;
			((credit_out > 2 && button_in == 2'b01) && !(disp_out || beverage_out)) |-> not (nexttime[13](beverage_out > 0));
		endproperty
		
		property p0afct;
			(!((credit_out > 2 && button_in == 2'b01) && !(disp_out || beverage_out))) |-> nexttime[13](beverage_out>0);
		endproperty
		
		property p0afcf;
			(!((credit_out > 2 && button_in == 2'b01) && !(disp_out || beverage_out))) |-> not (nexttime[13](beverage_out > 0));
		endproperty
		
		
		//If there is enough credit for beverage 1 and it is selected, after M it is dispensed
		property p1atct;
			((credit_out > 4 && button_in == 2'b10) && !(disp_out || beverage_out)) |-> nexttime[13](beverage_out > 0);
		endproperty
				
		property p1atcf;
			((credit_out > 4 && button_in == 2'b10) && !(disp_out || beverage_out)) |-> not(nexttime[13](beverage_out > 0));
		endproperty
		
		property p1afct;
			(!((credit_out > 4 && button_in == 2'b10) && !(disp_out || beverage_out))) |-> nexttime[13](beverage_out > 0);
		endproperty
		
		property p1afcf;
			(!((credit_out > 2 && button_in == 2'b01) && !(disp_out || beverage_out))) |-> not(nexttime[13](beverage_out > 0));
		endproperty
		
		
		//If a beverage is not being dispensed and I have credit inside, I will still have credit at next cycle 
		property p2atct;
		 	!(beverage_out) && credit_out |-> nexttime[1](credit_out > 0);	
		endproperty
				
		property p2atcf;
			!(beverage_out) && credit_out |-> not nexttime[1](credit_out > 0);
		endproperty
		
		property p2afct;
			(beverage_out) && credit_out |-> not nexttime[1](credit_out > 0);	
		endproperty
		
		property p2afcf;
			(beverage_out) && credit_out |->not nexttime[1](credit_out > 0);
		endproperty
		
		
		//When change is dispended, after a cycle it is set to 0
		property p3atct;
		 	(change_out) |-> nexttime[1](change_out == 0);	
		endproperty
		
		property p3atcf;
		 	(change_out) |-> not nexttime[1](change_out == 0);	
		endproperty
		
		property p3afct;
		 	!change_out |-> nexttime[1](change_out == 0);	
		endproperty
		
		property p3afcf;
		 	!change_out |-> not nexttime[1](change_out == 0);	
		endproperty
		
		
		//If coin is inserted, at next cycle I will have credit inside the machine 
		property p4atct;
			(coin_in > 0 && (!beverage_out)) |-> nexttime[1](credit_out > 0);	
		endproperty
		
		property p4atcf;
			(coin_in > 0 && (!beverage_out)) |-> not(nexttime[1](credit_out > 0));	
		endproperty
		
		property p4afct;
			!(coin_in > 0 && (!beverage_out)) |-> nexttime[1](credit_out > 0);	
		endproperty
		
		property p4afcf;
			!(coin_in > 0 && (!beverage_out)) |-> not(nexttime[1](credit_out > 0));	
		endproperty
		
		
		//When the machine enter in dispensing state, disp is activated after 1 clk cycle
		property p5atct;
			(((credit_out > 2 && button_in == 2'b01)||(credit_out > 4 && button_in == 2'b10)) && !(disp_out || beverage_out)) |-> nexttime[1](disp_out);
		endproperty
		
		property p5atcf;
			(((credit_out > 2 && button_in == 2'b01)||(credit_out > 4 && button_in == 2'b10)) && !(disp_out || beverage_out)) |-> not(nexttime[1](disp_out));
		endproperty
		
		property p5afct;
			!((((credit_out > 2 && button_in == 2'b01)||(credit_out > 4 && button_in == 2'b10)) && !(disp_out || beverage_out))) |-> nexttime[1](disp_out);
		endproperty
		
		property p5afcf;
			!(((credit_out > 2 && button_in == 2'b01)||(credit_out > 4 && button_in == 2'b10)) && !(disp_out || beverage_out)) |-> not(nexttime[1](disp_out));
		endproperty
		
	endclocking

		 int p0ATCT=0;
   		 cover property (check_clocking.p0atct) begin
        		p0ATCT++;
   		 end
      		 
      		 int p0ATCF=0;
   		 cover property (check_clocking.p0atcf) begin
        		p0ATCF++;
   		 end

		 int p0AFCT=0;
   		 cover property (check_clocking.p0afct) begin
        		p0AFCT++;
   		 end
   		 
   		 int p0AFCF=0;
   		 cover property (check_clocking.p0afcf) begin
        		p0AFCF++;
   		 end
   		 
		 
		 
		 int p1ATCT=0;
   		 cover property (check_clocking.p1atct) begin
        		p1ATCT++;
   		 end
   		 
		 int p1ATCF=0;
   		 cover property (check_clocking.p1atcf) begin
        		p1ATCF++;
   		 end
   		 
		 int p1AFCT=0;
   		 cover property (check_clocking.p1afct) begin
        		p1AFCT++;
   		 end
   		 
		 int p1AFCF=0;
   		 cover property (check_clocking.p1afcf) begin
        		p1AFCF++;
   		 end
   		 
   		 
   		 
		 int p2ATCT=0;
   		 cover property (check_clocking.p2atct) begin
        		p2ATCT++;
   		 end
   		 
		 int p2ATCF=0;
   		 cover property (check_clocking.p2atcf) begin
        		p2ATCF++;
   		 end
   		 
		 int p2AFCT=0;
   		 cover property (check_clocking.p2afct) begin
        		p2AFCT++;
   		 end
   		 
		 int p2AFCF=0;
   		 cover property (check_clocking.p2afcf) begin
        		p2AFCF++;
   		 end
   		 
   		 
		 
		 int p3ATCT=0;
   		 cover property (check_clocking.p3atct) begin
        		p3ATCT++;
   		 end
   		 
		 int p3ATCF=0;
   		 cover property (check_clocking.p3atcf) begin
        		p3ATCF++;
   		 end
   		 
		 int p3AFCT=0;
   		 cover property (check_clocking.p3afct) begin
        		p3AFCT++;
   		 end
   		 
		 int p3AFCF=0;
   		 cover property (check_clocking.p3afcf) begin
        		p3AFCF++;
   		 end
   		 
   		 
		 
		 int p4ATCT=0;
   		 cover property (check_clocking.p4atct) begin
        		p4ATCT++;
   		 end
   		 
		 int p4ATCF=0;
   		 cover property (check_clocking.p4atcf) begin
        		p4ATCF++;
   		 end
   		 
		 int p4AFCT=0;
   		 cover property (check_clocking.p4afct) begin
        		p4AFCT++;
   		 end
   		 
		 int p4AFCF=0;
   		 cover property (check_clocking.p4afcf) begin
        		p4AFCF++;
   		 end
   		 
   		 
   		  int p5ATCT=0;
   		 cover property (check_clocking.p5atct) begin
        		p5ATCT++;
   		 end
   		 
		 int p5ATCF=0;
   		 cover property (check_clocking.p5atcf) begin
        		p5ATCF++;
   		 end
   		 
		 int p5AFCT=0;
   		 cover property (check_clocking.p5afct) begin
        		p5AFCT++;
   		 end
   		 
		 int p5AFCF=0;
   		 cover property (check_clocking.p5afcf) begin
        		p5AFCF++;
   		 end

	
	final begin
		$display("p0:\t atct:%d atcf:%d \n\t afct:%d afcf:%d", p0ATCT, p0ATCF, p0AFCT, p0AFCF);
		$display("p1:\t atct:%d atcf:%d \n\t afct:%d afcf:%d", p1ATCT, p1ATCF, p1AFCT, p1AFCF);
		$display("p2:\t atct:%d atcf:%d \n\t afct:%d afcf:%d", p2ATCT, p2ATCF, p2AFCT, p2AFCF);
		$display("p3:\t atct:%d atcf:%d \n\t afct:%d afcf:%d", p3ATCT, p3ATCF, p3AFCT, p3AFCF);
		$display("p4:\t atct:%d atcf:%d \n\t afct:%d afcf:%d", p4ATCT, p4ATCF, p4AFCT, p4AFCF);
		$display("p5:\t atct:%d atcf:%d \n\t afct:%d afcf:%d", p5ATCT, p5ATCF, p5AFCT, p5AFCF);
	end
	 endchecker: check

	bind `VM check check_instance(`VM.intf.clk,`VM.intf.rst,`VM.intf.start,`VM.intf.coin_in,`VM.intf.button_in,`VM.intf.change_out,`VM.intf.beverage_out,`VM.intf.credit_out,`VM.intf.disp_out);
