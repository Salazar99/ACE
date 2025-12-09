// tlul_host.sv
// Minimal TL-UL host BFM with tl_write32 / tl_read32 tasks.
// Assumes TL_DW == 32. If different, adjust masks/size encoding.

module tlul_host #(
  parameter int TL_AW = top_pkg::TL_AW,
  parameter int TL_DW = top_pkg::TL_DW
) (
  input  logic              clk_i,
  input  logic              rst_ni,
  output tlul_pkg::tl_h2d_t tl_h2d,
  input  tlul_pkg::tl_d2h_t tl_d2h
);

  import tlul_pkg::*;

  // Drive defaults and keep a local reg we control.
  tlul_pkg::tl_h2d_t h2d_q, h2d_d;

  // Tie d_ready high to always accept responses.
  // (Host side owns d_ready per TL-UL.)

localparam tlul_pkg::tl_h2d_t H2D_IDLE = '{
  default: '0,
  d_ready: 1'b1,
  a_opcode: tl_a_op_e'('0),   // avoid implicit logic→enum
  a_user:   TL_A_USER_DEFAULT
};

always_ff @(posedge clk_i or negedge rst_ni) begin
  if (!rst_ni) begin
    h2d_q <= H2D_IDLE;
  end else begin
    h2d_q <= h2d_d;
  end
end

  // Drive the output
  assign tl_h2d = h2d_q;

  // Helper: put host into idle between transactions
  task automatic set_idle();
    h2d_d = H2D_IDLE;
  endtask

  
// 32-bit aligned write (PutFullData)
task automatic tl_write32(input logic [TL_AW-1:0] addr,
                          input logic [31:0]      wdata);
  set_idle();

  // 1) Drive A
  h2d_d              = H2D_IDLE;
  h2d_d.a_valid      = 1'b1;
  h2d_d.a_opcode     = PutFullData;
  h2d_d.a_param      = '0;
  h2d_d.a_size       = top_pkg::TL_SZW'($clog2(4)); // 4 bytes
  h2d_d.a_source     = '0;
  h2d_d.a_address    = addr;
  h2d_d.a_mask       = (TL_DW == 32) ? 4'hF : {top_pkg::TL_DBW{1'b1}};
  h2d_d.a_data       = {{(TL_DW-32){1'b0}}, wdata};

  
  // $display("[%0t] CMDINTG-FEED: op=%0d param=%0d size=%0d src=%0h addr=%08h mask=%0h data_intg=%0h",
        //  $time, h2d_d.a_opcode, h2d_d.a_param, h2d_d.a_size, h2d_d.a_source,
        //  h2d_d.a_address, h2d_d.a_mask, h2d_d.a_user.data_intg);


  // Use canonical defaults for user
  h2d_d.a_user       = TL_A_USER_DEFAULT;

  // 2) IMPORTANT: compute data_intg FIRST, then cmd_intg over FINAL A-beat
  h2d_d.a_user.data_intg = tlul_pkg::get_data_intg(h2d_d.a_data);
  h2d_d.a_user.cmd_intg  = tlul_pkg::get_cmd_intg(h2d_d);

  // $display("[%0t] A: op=%0d size=%0d addr=0x%08h mask=0x%0h cmd_ecc=0x%0h data_ecc=0x%0h",
          //  $time, h2d_d.a_opcode, h2d_d.a_size, h2d_d.a_address, h2d_d.a_mask,
          //  h2d_d.a_user.cmd_intg, h2d_d.a_user.data_intg);

  // 3) A handshake then drop a_valid
  do @(posedge clk_i); while (!tl_d2h.a_ready);
  h2d_d.a_valid = 1'b0;

  // 4) Single D beat (AccessAck)
  do @(posedge clk_i); while (!tl_d2h.d_valid);
  // $display("[%0t] D: d_error=%0b (write ack)", $time, tl_d2h.d_error);
  // if (tl_d2h.d_error) $display("[%0t] TL-UL ERROR on write @0x%08h", $time, addr);

  set_idle();
endtask

// 32-bit aligned read (Get)
// 32-bit aligned read (Get)
task automatic tl_read32(input  logic [TL_AW-1:0] addr,
                         output logic [31:0]      rdata);
  set_idle();

  // 1) Drive A fields
  h2d_d              = H2D_IDLE;
  h2d_d.a_valid      = 1'b1;
  h2d_d.a_opcode     = Get;
  h2d_d.a_param      = '0;
  h2d_d.a_size       = top_pkg::TL_SZW'($clog2(4)); // 4 bytes
  h2d_d.a_source     = '0;
  h2d_d.a_address    = addr;
  h2d_d.a_mask       = (TL_DW == 32) ? 4'hF : {top_pkg::TL_DBW{1'b1}}; // full mask for 32b read
  h2d_d.a_data       = '0;

  // 2) Start from canonical user defaults
  h2d_d.a_user             = TL_A_USER_DEFAULT;

  // 3) IMPORTANT: For GET, set data_intg to the canonical "zero-data" integrity
  h2d_d.a_user.data_intg   = tlul_pkg::get_data_intg('0);

  // (Optional debug)
  // $display("[%0t] CMDINTG-FEED (GET): op=%0d param=%0d size=%0d src=%0h addr=%08h mask=%0h data_intg=%0h",
          //  $time, h2d_d.a_opcode, h2d_d.a_param, h2d_d.a_size, h2d_d.a_source,
          //  h2d_d.a_address, h2d_d.a_mask, h2d_d.a_user.data_intg);

  // 4) Compute cmd_intg over the final A-beat (includes data_intg)
  h2d_d.a_user.cmd_intg    = tlul_pkg::get_cmd_intg(h2d_d);

  // $display("[%0t] A: op=%0d size=%0d addr=0x%08h mask=0x%0h cmd_ecc=0x%0h",
          //  $time, h2d_d.a_opcode, h2d_d.a_size, h2d_d.a_address, h2d_d.a_mask,
          //  h2d_d.a_user.cmd_intg);

  // A handshake
  do @(posedge clk_i); while (!tl_d2h.a_ready);
  h2d_d.a_valid = 1'b0;

  // Single D response
  do @(posedge clk_i); while (!tl_d2h.d_valid);
  rdata = tl_d2h.d_data[31:0];

  // $display("[%0t] D: d_error=%0b d_data=0x%08h", $time, tl_d2h.d_error, tl_d2h.d_data);
  // if (tl_d2h.d_error) $display("[%0t] TL-UL ERROR on read @0x%08h", $time, addr);

  set_idle();
endtask

endmodule
