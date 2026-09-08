
module verified_accu(accu_intf intf);
    
   reg [1:0] count;
   wire add_cnt;
   wire ready_add;
   wire end_cnt;
   reg [9:0]   data_out_reg;

   assign add_cnt = ready_add;
   assign end_cnt = ready_add && (count == 'd3);
   
   //count
   always @(posedge intf.clk or negedge intf.rst_n) begin
       if(!intf.rst_n) begin
          count <= 0;
       end
       else if(end_cnt) begin
          count <= 0;
       end
       else if(add_cnt) begin
          count <= count + 1;
       end
   end

    //data_out_reg
   always @(posedge intf.clk or negedge intf.rst_n) begin
      if(!intf.rst_n) begin
        data_out_reg <= 0;
      end
      else if (add_cnt && count == 0) begin
          data_out_reg <= intf.data_in;
      end
      else if (add_cnt) begin
          data_out_reg <= data_out_reg + intf.data_in;
      end
   end

    //intf.data_out
   always @(posedge intf.clk or negedge intf.rst_n) begin
      if(!intf.rst_n) begin
        intf.data_out <= 0;
      end
      else if (add_cnt && count == 0) begin
          intf.data_out <= intf.data_in;
      end
      else if (add_cnt) begin
          intf.data_out <= intf.data_out + intf.data_in;
      end
   end

   //ready_add
   assign ready_add = !intf.valid_out | intf.valid_in;

   //intf.valid_out
   always @(posedge intf.clk or negedge intf.rst_n) begin
       if(!intf.rst_n) begin
           intf.valid_out <= 0;
       end
       else if(end_cnt) begin
           intf.valid_out <= 1;
       end
       else begin
           intf.valid_out <= 0;
       end
   end  
     
endmodule