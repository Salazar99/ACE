`define CAMELLIA sim1.p.slave_0.camallia_u

checker camellia_checker(wb_clk, Krdy, Kvld, EncDec, Drdy, Dvld);
	clocking clk_cone1 @(posedge wb_clk);

        //Load a Key
		property p0;
		  !(Krdy) ##1 (Krdy) |-> nexttime[7](Kvld);
		endproperty

        //Common behavior encode/decode
		property p1;
		  !(Drdy) ##1 (Drdy) |-> nexttime[24](Dvld);
		endproperty

        //Encode a word
		property p2;
		  !(Drdy && EncDec) ##1 (Drdy && EncDec) |-> nexttime[1]((EncDec and nexttime[23](Dvld)));
		endproperty

        //Decode a word
		property p3;
		  !(Drdy && !EncDec) ##1 (Drdy && !EncDec) |-> nexttime[1]((!EncDec and nexttime[23](Dvld)));
		endproperty



	endclocking

    assert property (clk_cone1.p0);
    int p0ATCT=0;
    cover property (clk_cone1.p0) begin
        p0ATCT++;
    end

    assert property (clk_cone1.p1);
    int p1ATCT=0;
    cover property (clk_cone1.p1) begin
        p1ATCT++;
    end

    assert property (clk_cone1.p2);
    int p2ATCT=0;
    cover property (clk_cone1.p2) begin
        p2ATCT++;
    end

    assert property (clk_cone1.p3);
    int p3ATCT=0;
    cover property (clk_cone1.p3) begin
        p3ATCT++;
    end

    final begin
        $display("camellia.p0ATCT: %d", p0ATCT);
        $display("camellia.p1ATCT: %d", p1ATCT);
        $display("camellia.p2ATCT: %d", p2ATCT);
        $display("camellia.p3ATCT: %d", p3ATCT);
    end


endchecker: camellia_checker

bind `CAMELLIA camellia_checker camellia_checker_instance(sim1.p.slave_0.slave_interface.wb_clk, `CAMELLIA.Krdy, `CAMELLIA.Kvld, `CAMELLIA.EncDec, `CAMELLIA.Drdy, `CAMELLIA.Dvld );
