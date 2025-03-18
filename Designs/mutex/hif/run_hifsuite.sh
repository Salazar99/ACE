verilog2hif ../rtl/mutex.v --output sqrt.hif.xml

ddt sqrt.hif.xml --toplevel mutex --output sqrt.ddt.hif.xml

a2tool sqrt.ddt.hif.xml --protocol CPP --toplevel mutex --output sqrt.ddt.a2t.hif.xml

muffin sqrt.ddt.a2t.hif.xml --fault STUCK_AT --clock clk --toplevel mutex --output sqrt.ddt.a2t.muffin.hif.xml

hif2sc sqrt.ddt.a2t.muffin.hif.xml --extensions cpp_hpp --directory injected


