// Trace generator for apb_slave (APB3 register file, one slow register, error responses).
//
// Protocol as implemented by the nominal environment: psel is raised with penable low for
// the setup phase, penable follows for the access phase, and the request is held stable
// until pready is seen. That is the APB3 rule set, and the guarantees about the response are
// only true under it.
//
// One further nominal obligation deserves naming, because it is the one the contract
// language cannot state: on a read the environment drives `pwdata` with the value it last
// wrote to that address. That turns "the register reads back what was written" - a relation
// between two transactions, unbounded cycles apart - into the one-cycle contract
// `read access |=> prdata == pwdata`, which is exactly the trick the benchmark needs to keep
// a data-integrity property inside the grammar. On the stress corpus `pwdata` is random, so
// that contract breaks there while every protocol contract survives.
//
// Scenario plan: each register written and read back, the slow register (two wait states),
// unmapped addresses (error response), back-to-back transactions, idle gaps and resets.
// The stress environment raises penable without psel, drops requests before pready, drives
// unstable addresses and data, and resets mid-transaction.
//
// Sampling convention: stimulus 1 ns after the active edge, row sampled late in the cycle,
// so `##1` is one cycle later and a row never shows a response produced by the request in
// the same row.

`timescale 1ns/1ps

module tb_apb_slave;

  localparam int PERIOD = 10;

  logic clk = 0;
  logic presetn;
  logic psel, penable, pwrite;
  logic [2:0] paddr;
  logic [7:0] pwdata;
  wire  [7:0] prdata;
  wire        pready, pslverr;

  apb_slave dut (.pclk(clk), .presetn(presetn), .psel(psel), .penable(penable),
                 .pwrite(pwrite), .paddr(paddr), .pwdata(pwdata),
                 .prdata(prdata), .pready(pready), .pslverr(pslverr));

  always #(PERIOD / 2) clk = ~clk;

  int unsigned seed, cycles, sampled, fd;
  string out, scenario;
  bit stress;
  int unsigned lfsr;
  logic [7:0] shadow [8];        // what the environment believes each register holds

  function automatic int unsigned rnd();
    lfsr = lfsr * 32'd1103515245 + 32'd12345;
    return lfsr >> 16;
  endfunction

  task automatic drive(input bit sel, input bit en, input bit write,
                       input logic [2:0] addr, input logic [7:0] data);
    @(posedge clk);
    #1;
    psel    = sel;
    penable = en;
    pwrite  = write;
    paddr   = addr;
    pwdata  = data;
  endtask

  task automatic idle(input int unsigned n);
    for (int unsigned i = 0; i < n; i++) drive(1'b0, 1'b0, 1'b0, 3'd0, 8'd0);
  endtask

  // A complete APB3 transfer: setup, then access held until pready.
  task automatic transfer(input bit write, input logic [2:0] addr, input logic [7:0] data);
    drive(1'b1, 1'b0, write, addr, data);            // setup phase
    drive(1'b1, 1'b1, write, addr, data);            // access phase
    while (pready !== 1'b1) drive(1'b1, 1'b1, write, addr, data);
    drive(1'b0, 1'b0, write, addr, data);            // one cycle with the response visible
    if (write && addr < 3'd4) shadow[addr] = data;
  endtask

  // A read drives pwdata with the value the environment last wrote there: see the header.
  task automatic read(input logic [2:0] addr);
    transfer(1'b0, addr, shadow[addr]);
  endtask

  task automatic reset_pulse(input int unsigned n);
    for (int unsigned i = 0; i < n; i++) begin
      @(posedge clk);
      #1;
      presetn = 1'b0;
      psel    = 1'b0;
      penable = 1'b0;
      pwrite  = 1'b0;
      paddr   = 3'd0;
      pwdata  = 8'd0;
    end
    @(posedge clk);
    #1;
    presetn = 1'b1;
    for (int unsigned i = 0; i < 8; i++) shadow[i] = 8'd0;   // reset clears the map
  endtask

  initial begin
    if (!$value$plusargs("seed=%d", seed))     seed = 1;
    if (!$value$plusargs("cycles=%d", cycles)) cycles = 1200;
    if (!$value$plusargs("out=%s", out))       out = "trace.csv";
    if (!$value$plusargs("scenario=%s", scenario)) scenario = "nominal";
    stress = (scenario == "stress");
    lfsr = seed * 32'd2654435761 + 32'd1;

    fd = $fopen(out, "w");
    $fwrite(fd, "bool presetn,bool psel,bool penable,bool pwrite,int paddr,int pwdata,int prdata,bool pready,bool pslverr\n");

    presetn = 1'b0;
    psel = 1'b0; penable = 1'b0; pwrite = 1'b0; paddr = 3'd0; pwdata = 8'd0;
    for (int unsigned i = 0; i < 8; i++) shadow[i] = 8'd0;
    reset_pulse(2);

    // directed: every register written and read back, including the slow one
    transfer(1'b1, 3'd0, 8'd0);
    read(3'd0);
    transfer(1'b1, 3'd0, 8'd255);
    read(3'd0);
    transfer(1'b1, 3'd1, 8'd1);
    read(3'd1);
    transfer(1'b1, 3'd2, 8'd170);
    read(3'd2);
    transfer(1'b1, 3'd3, 8'd85);        // slow register: two wait states
    read(3'd3);
    idle(2);

    // unmapped addresses: an error response, both directions
    transfer(1'b1, 3'd4, 8'd7);
    read(3'd5);
    transfer(1'b1, 3'd7, 8'd200);
    idle(1);

    // back-to-back transfers with no idle cycle between them
    transfer(1'b1, 3'd1, 8'd11);
    transfer(1'b1, 3'd2, 8'd22);
    read(3'd1);
    read(3'd2);
    idle(3);

    if (stress) begin
      drive(1'b0, 1'b1, 1'b0, 3'd0, 8'd9);          // penable without psel
      drive(1'b0, 1'b1, 1'b0, 3'd1, 8'd9);
      drive(1'b1, 1'b1, 1'b1, 3'd3, 8'd5);          // slow access, request dropped early
      drive(1'b0, 1'b0, 1'b0, 3'd0, 8'd0);
      drive(1'b1, 1'b1, 1'b0, 3'd0, 8'd77);         // access phase with no setup
      reset_pulse(1);
    end

    while (sampled < cycles) begin
      if (stress) begin
        case (rnd() % 5)
          0: drive(1'b1, 1'b1, rnd() % 2, rnd() % 8, rnd() % 256);   // unstable request
          1: drive(1'b0, 1'b1, rnd() % 2, rnd() % 8, rnd() % 256);   // penable, no psel
          2: begin                                                    // dropped mid-access
            drive(1'b1, 1'b0, 1'b1, 3'd3, rnd() % 256);
            drive(1'b1, 1'b1, 1'b1, 3'd3, rnd() % 256);
            drive(1'b0, 1'b0, 1'b0, 3'd0, 8'd0);
          end
          3: begin drive(1'b1, 1'b1, 1'b1, rnd() % 8, rnd() % 256);
                   reset_pulse(1 + rnd() % 2); end
          default: begin                                              // reads with wrong data
            drive(1'b1, 1'b0, 1'b0, rnd() % 4, rnd() % 256);
            drive(1'b1, 1'b1, 1'b0, rnd() % 4, rnd() % 256);
            drive(1'b0, 1'b0, 1'b0, 3'd0, 8'd0);
          end
        endcase
      end else begin
        case (rnd() % 6)
          0: transfer(1'b1, rnd() % 4, rnd() % 256);
          1: read(rnd() % 4);
          2: transfer(1'b1, 3'd3, rnd() % 256);       // the slow register
          3: read(3'd3);
          4: begin                                     // an unmapped access now and then
            if (rnd() % 3 == 0) transfer(rnd() % 2, 4 + (rnd() % 4), rnd() % 256);
            else transfer(1'b1, rnd() % 4, rnd() % 256);
          end
          default: begin
            if (rnd() % 5 == 0) reset_pulse(1 + rnd() % 2);
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
        $fwrite(fd, "%0d,%0d,%0d,%0d,%0d,%0d,%0d,%0d,%0d\n",
                presetn, psel, penable, pwrite, paddr, pwdata, prdata, pready, pslverr);
        sampled++;
      end
    end
  end

endmodule
