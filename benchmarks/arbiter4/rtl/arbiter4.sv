// Four-requester round-robin arbiter.
//
// One grant per cycle, to a requester that is asking, rotating priority so that a
// continuously asserted request cannot be starved: after granting requester i, priority
// moves to i+1, so with four requesters a held request waits at most three grants.
//
// Interface is deliberately flat - one bit per requester, plus a validity flag and the
// granted index - because the trace format is one column per signal and the contract
// language reasons about integer-valued signals. Mutual exclusion is then expressible as
// a sum over the grant bits.
//
// Registered grants: the decision made from the requests of cycle k appears at the outputs
// of cycle k+1. That is what makes the response contracts one-cycle properties rather than
// combinational ones.

module arbiter4 (
    input  logic clk,
    input  logic rst_n,
    input  logic req0,
    input  logic req1,
    input  logic req2,
    input  logic req3,
    output logic gnt0,
    output logic gnt1,
    output logic gnt2,
    output logic gnt3,
    output logic gnt_valid,
    output logic [1:0] gnt_id
);

  logic [3:0] req;
  logic [1:0] pointer;          // requester with highest priority this cycle
  logic [1:0] winner;
  logic       any;

  assign req = {req3, req2, req1, req0};
  assign any = |req;

  // First requester at or after `pointer`, wrapping.
  always_comb begin
    winner = pointer;
    for (int unsigned i = 0; i < 4; i++) begin
      logic [1:0] candidate;
      candidate = pointer + i[1:0];
      if (req[candidate]) begin
        winner = candidate;
        break;
      end
    end
  end

  always_ff @(posedge clk) begin
    if (!rst_n) begin
      pointer   <= 2'd0;
      gnt_valid <= 1'b0;
      gnt_id    <= 2'd0;
      gnt0      <= 1'b0;
      gnt1      <= 1'b0;
      gnt2      <= 1'b0;
      gnt3      <= 1'b0;
    end else begin
      gnt_valid <= any;
      gnt_id    <= any ? winner : 2'd0;
      gnt0      <= any && (winner == 2'd0);
      gnt1      <= any && (winner == 2'd1);
      gnt2      <= any && (winner == 2'd2);
      gnt3      <= any && (winner == 2'd3);
      if (any) begin
        pointer <= winner + 2'd1;   // rotate past the served requester
      end
    end
  end

endmodule
