`include "environment.sv"
program test(accu_intf intf);

    class my_trans extends transaction;
        function void pre_randomize();
            data_in1.rand_mode(1);
            data_in2.rand_mode(1);
            data_in3.rand_mode(1);
            data_in4.rand_mode(1);
        endfunction
    endclass

    //declaring environment instance
    environment env;
    my_trans my_tr;

    initial begin
        //creating environment
        
        env = new(intf);
        my_tr = new();

        //setting the repeat count of the generator
        env.gen.repeat_count = 1000;

        env.gen.trans = my_tr;
        
        //calling run of env, it issues calls to the generator and driver
        env.run();
    end
endprogram
