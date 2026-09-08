// Trace generator for fifo_sync (depth 8, width 8, first-word-fall-through).
//
// Protocol as implemented: the queue protects itself, so a write while full and a read while
// empty are simply ignored. The nominal environment respects the flags anyway - it never
// writes into a full queue and never reads an empty one - and it holds `din` stable for the
// cycle after a write, which is what makes the data-integrity contract
// `empty && wr_en |=> dout == din` expressible: with `din` changing every cycle the value at
// the output no longer matches the value at the input port, and no invariant can say
// "the data was held", so that contract breaks on the stress corpus.
//
// Scenario plan: fill to full, drain to empty, simultaneous read and write at several
// occupancies (the case where the count must NOT move), single element in and out, then
// random traffic that respects the flags. The stress environment writes while full, reads
// while empty, changes `din` every cycle and asserts reset mid-stream.
//
// Sampling convention: stimulus 1 ns after the active edge, row sampled late in the cycle,
// so a row holds the inputs applied for that cycle together with the outputs produced from
// the previous row's inputs, and `##1` is one cycle later.

`timescale 1ns/1ps

module tb_fifo_sync;

  localparam int PERIOD = 10;

  logic clk = 0;
  logic rst_n;
  logic wr_en, rd_en;
  logic [7:0] din;
  wire  [7:0] dout;
  wire        full, empty;
  wire  [3:0] count;

  fifo_sync dut (.clk(clk), .rst_n(rst_n), .wr_en(wr_en), .rd_en(rd_en), .din(din),
                 .dout(dout), .full(full), .empty(empty), .count(count));

  always #(PERIOD / 2) clk = ~clk;

  int unsigned seed, cycles, sampled, fd;
  string out, scenario;
  bit stress;
  int unsigned lfsr;
  logic [7:0] payload;

  function automatic int unsigned rnd();
    lfsr = lfsr * 32'd1103515245 + 32'd12345;
    return lfsr >> 16;
  endfunction

  task automatic step(input bit w, input bit r, input logic [7:0] data);
    @(posedge clk);
    #1;
    wr_en = w;
    rd_en = r;
    din   = data;
  endtask

  task automatic idle(input int unsigned n);
    for (int unsigned i = 0; i < n; i++) step(1'b0, 1'b0, payload);
  endtask

  // A write, followed by one cycle in which `din` is held: the nominal data protocol.
  task automatic push(input logic [7:0] data);
    payload = data;
    step(1'b1, 1'b0, data);
    step(1'b0, 1'b0, data);          // hold the data one more cycle
  endtask

  task automatic pop();
    step(1'b0, 1'b1, payload);
    step(1'b0, 1'b0, payload);
  endtask

  task automatic push_pop(input logic [7:0] data);
    payload = data;
    step(1'b1, 1'b1, data);
    step(1'b0, 1'b0, data);
  endtask

  task automatic reset_pulse(input int unsigned n);
    for (int unsigned i = 0; i < n; i++) begin
      @(posedge clk);
      #1;
      rst_n = 1'b0;
      wr_en = 1'b0;
      rd_en = 1'b0;
    end
    @(posedge clk);
    #1;
    rst_n = 1'b1;
  endtask

  initial begin
    if (!$value$plusargs("seed=%d", seed))     seed = 1;
    if (!$value$plusargs("cycles=%d", cycles)) cycles = 1200;
    if (!$value$plusargs("out=%s", out))       out = "trace.csv";
    if (!$value$plusargs("scenario=%s", scenario)) scenario = "nominal";
    stress = (scenario == "stress");
    lfsr = seed * 32'd2654435761 + 32'd1;

    fd = $fopen(out, "w");
    $fwrite(fd, "bool rst_n,bool wr_en,bool rd_en,int din,int dout,bool full,bool empty,int count\n");

    rst_n = 1'b0;
    wr_en = 1'b0;
    rd_en = 1'b0;
    din   = 8'd0;
    payload = 8'd0;
    reset_pulse(2);

    // directed: one element through an empty queue, then fill and drain
    push(8'd42);
    pop();
    idle(2);
    for (int unsigned i = 0; i < 8; i++) push(8'd10 + i[7:0]);   // reaches full
    idle(2);
    for (int unsigned i = 0; i < 8; i++) pop();                  // back to empty
    idle(2);
    push(8'd255);
    push(8'd0);
    push_pop(8'd128);        // read and write together: the count must not move
    push_pop(8'd7);
    pop();
    pop();
    idle(3);
    for (int unsigned i = 0; i < 4; i++) push(8'd100 + i[7:0]);
    for (int unsigned i = 0; i < 4; i++) push_pop(8'd200 + i[7:0]);
    for (int unsigned i = 0; i < 4; i++) pop();
    idle(2);

    if (stress) begin
      for (int unsigned i = 0; i < 8; i++) push(8'd1 + i[7:0]);
      step(1'b1, 1'b0, 8'd99);          // write while full
      step(1'b1, 1'b0, 8'd98);
      for (int unsigned i = 0; i < 8; i++) pop();
      step(1'b0, 1'b1, 8'd0);           // read while empty
      step(1'b0, 1'b1, 8'd0);
      step(1'b1, 1'b0, 8'd77);
      reset_pulse(1);                   // reset with data in flight
    end

    while (sampled < cycles) begin
      if (stress) begin
        case (rnd() % 5)
          0: begin                                   // ignore the flags entirely
            step(rnd() % 2, rnd() % 2, rnd() % 256);
            step(rnd() % 2, rnd() % 2, rnd() % 256);
          end
          1: for (int unsigned i = 0; i < 10; i++) step(1'b1, 1'b0, rnd() % 256);
          2: for (int unsigned i = 0; i < 10; i++) step(1'b0, 1'b1, rnd() % 256);
          3: begin step(1'b1, 1'b0, rnd() % 256); reset_pulse(1 + rnd() % 2); end
          default: begin
            step(1'b1, 1'b1, rnd() % 256);           // data not held
            step(1'b1, 1'b1, rnd() % 256);
          end
        endcase
      end else begin
        case (rnd() % 6)
          0: if (!full)  push(rnd() % 256);
          1: if (!empty) pop();
          2: if (!empty && !full) push_pop(rnd() % 256);
          3: begin
            for (int unsigned i = 0; i < 3; i++) if (!full) push(rnd() % 256);
          end
          4: begin
            for (int unsigned i = 0; i < 3; i++) if (!empty) pop();
          end
          default: begin
            if (rnd() % 4 == 0) reset_pulse(1 + rnd() % 2);
            idle(1 + rnd() % 4);
          end
        endcase
      end
    end

    idle(2);
    $fclose(fd);
    $finish;
  end

  initial begin
    forever begin
      @(posedge clk);
      #(PERIOD - 2);
      if (sampled < cycles) begin
        $fwrite(fd, "%0d,%0d,%0d,%0d,%0d,%0d,%0d,%0d\n",
                rst_n, wr_en, rd_en, din, dout, full, empty, count);
        sampled++;
      end
    end
  end

endmodule
