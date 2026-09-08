// APB3 slave: four 8-bit registers, one of them slow, and an error response for addresses
// outside the register map.
//
// Address map
//   0..2  fast registers, the access phase completes in the cycle after it is entered
//   3     slow register, two wait states before it completes
//   4..7  unmapped: the access phase completes immediately with pslverr raised
//
// The responses are registered, so an access phase entered in cycle k is answered in cycle
// k+1 (or k+3 for the slow register). That keeps every contract a fixed- or bounded-delay
// relation between the request and the response, which is what the template family
// expresses; a combinational pready would make them same-cycle relations and hide the
// wait-state behaviour that makes this design interesting.
//
// The slave never stalls a fast access and never raises an error inside the map, so the
// protocol obligations that remain are the environment's: psel before penable, and the
// request held stable until pready. Those are the assumptions the stress corpus breaks.

module apb_slave (
    input  logic       pclk,
    input  logic       presetn,
    input  logic       psel,
    input  logic       penable,
    input  logic       pwrite,
    input  logic [2:0] paddr,
    input  logic [7:0] pwdata,
    output logic [7:0] prdata,
    output logic       pready,
    output logic       pslverr
);

  localparam int unsigned WAIT_STATES = 2;

  logic [7:0] regs [4];
  logic [1:0] waits;
  logic       access, mapped, slow;

  assign access = psel && penable;
  assign mapped = (paddr < 3'd4);
  assign slow   = (paddr == 3'd3);

  always_ff @(posedge pclk) begin
    if (!presetn) begin
      prdata  <= 8'd0;
      pready  <= 1'b0;
      pslverr <= 1'b0;
      waits   <= 2'd0;
      for (int unsigned i = 0; i < 4; i++) regs[i] <= 8'd0;
    end else begin
      pready  <= 1'b0;
      pslverr <= 1'b0;

      if (!access) begin
        waits <= 2'd0;
      end else if (!mapped) begin
        pready  <= 1'b1;              // an unmapped access is answered at once, with an error
        pslverr <= 1'b1;
        waits   <= 2'd0;
      end else if (slow && waits < WAIT_STATES[1:0]) begin
        waits <= waits + 2'd1;        // stall the slow register
      end else begin
        pready <= 1'b1;
        waits  <= 2'd0;
        if (pwrite) begin
          regs[paddr[1:0]] <= pwdata;
        end else begin
          prdata <= regs[paddr[1:0]];
        end
      end
    end
  end

endmodule
