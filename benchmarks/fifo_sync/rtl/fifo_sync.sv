// Synchronous FIFO, depth 8, width 8, with occupancy count and full/empty flags.
//
// First-word-fall-through: `dout` is a combinational read of the entry at the read pointer,
// so the value written into an empty queue is visible at the output on the next cycle. That
// is what makes a data-integrity contract expressible without a past operator.
//
// Overflow and underflow are protected in the RTL: a write while full is ignored, a read
// while empty is ignored. Those are guarantees of the design, not obligations on the
// environment - which is why the stress corpus can violate the protocol without breaking
// the queue, and why the interesting contracts here are about the flags and the count
// rather than about data loss.

module fifo_sync #(
    parameter int unsigned DEPTH = 8,
    parameter int unsigned WIDTH = 8
) (
    input  logic             clk,
    input  logic             rst_n,
    input  logic             wr_en,
    input  logic             rd_en,
    input  logic [WIDTH-1:0] din,
    output logic [WIDTH-1:0] dout,
    output logic             full,
    output logic             empty,
    output logic [3:0]       count
);

  localparam int unsigned PTR_W = $clog2(DEPTH);

  logic [WIDTH-1:0] mem [DEPTH];
  logic [PTR_W-1:0] wr_ptr, rd_ptr;

  logic push, pop;
  assign push = wr_en && !full;
  assign pop  = rd_en && !empty;

  assign full  = (count == DEPTH[3:0]);
  assign empty = (count == 4'd0);
  assign dout  = mem[rd_ptr];

  always_ff @(posedge clk) begin
    if (!rst_n) begin
      wr_ptr <= '0;
      rd_ptr <= '0;
      count  <= 4'd0;
    end else begin
      if (push) begin
        mem[wr_ptr] <= din;
        wr_ptr      <= wr_ptr + 1'b1;
      end
      if (pop) begin
        rd_ptr <= rd_ptr + 1'b1;
      end
      case ({push, pop})
        2'b10:   count <= count + 4'd1;
        2'b01:   count <= count - 4'd1;
        default: count <= count;        // both or neither: occupancy unchanged
      endcase
    end
  end

endmodule
