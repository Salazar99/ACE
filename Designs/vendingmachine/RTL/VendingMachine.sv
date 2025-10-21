module VendingMachine (vendingmachine_intf intf);

/* 
	input clk;
	input rst;
	input [3:0] coin_in; //moneta in input
	input [1:0] button_in; //selezione bevanda
	output [2:0] change_out, beverage_out;
	output [31:0] credit_out;
*/

	reg [2:0] STATE;
	reg [31:0] credit; //codifico il credito come 1 = 10cent, 10 = 1 euro ecc.
	reg [31:0] countN, countM;
	reg [2:0] c_out;
	reg [1:0] b_out;
	reg disp;

	parameter M = 10, N = 10;
	parameter ST_RES = 3'b000, ST_0 = 3'b001, ST_1 = 3'b010 , ST_2 = 3'b011, ST_3 = 3'b100, ST_4 = 3'b101, ST_5 = 3'b110, ST_6=3'b111;

	assign intf.change_out = c_out;
	assign intf.beverage_out = b_out;
	assign intf.credit_out = credit;
	assign intf.disp_out = disp;

	//fsm+D
	always_ff @(posedge intf.clk or intf.rst) begin
	    if(intf.rst) begin
		STATE <= ST_RES;
		credit <= 0;
		c_out <= 0;
		b_out <= 0;
		disp <= 0;
		countN <= M;
		countM <= N;

	    end else begin
		case(STATE) 
		 
		    ST_RES: begin
		        if(intf.rst) begin STATE <= ST_RES; end
		        else begin STATE <= ST_0; end
		    end
		  
		    ST_0: begin
		    	//putting signal to 0 here cause a delay of 1 in the assertions regarding counting  
		    	c_out <= 0;
		    	b_out <= 0;
		   
		        
		        if(intf.button_in == 2'b01 && credit >=3) begin
		                STATE <= ST_1;
		                disp <= 1;
		        end

		        else if (intf.button_in == 2'b10 && credit >= 5) begin
		                STATE <= ST_2;  
		                disp <= 1;  	              
		        end else begin STATE <= ST_0; end 
		        credit <= credit + intf.coin_in;
		    end
		
		    ST_1: begin
		        if(countN != 0) begin
		            countN <= countN -1;
		            STATE <= ST_1;
		        end else begin 
		            credit <= credit - 3;
		            countN <= N;
		            STATE <= ST_3;
		        end
		    end

		    ST_2: begin
		        if(countN != 0) begin
		            countN <= countN -1;
		            STATE <= ST_2;
		        end else begin 
		            disp <= 0;
		            credit <= credit - 5;
		            countN <= N;
		            STATE <= ST_4;
		        end
		    end

		    ST_3: begin
		    	 disp <= 0;
		    	 b_out <= 2'b01;
		         if(countM != 0) begin
		            countM <= countM -1;
		            STATE <= ST_3;
		         end else begin
		             countM <= M;
		             if(credit <= 3) begin
		                 c_out <= credit[2:0];
		                 credit <= 0;
		             end
		             STATE <= ST_0;
		         end
		    end

		    ST_4: begin
		    	 disp <= 0;
		    	 b_out <= 2'b10;
		         if(countM != 0) begin
		            countM <= countM -1;
		            STATE <= ST_4;
		         end else begin
		             countM <= M;
		             if(credit <= 3) begin
		                 c_out <= credit[2:0];
		                 credit <= 0;
		             end
		             STATE <= ST_0;
		         end
		    end


		  default: begin end

		endcase
	    end


	end
endmodule
