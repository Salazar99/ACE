verilog2hif ../RTL/* --output sqrt.hif.xml

ddt sqrt.hif.xml --toplevel sqrt_newton --output sqrt.ddt.hif.xml

a2tool sqrt.ddt.hif.xml --protocol CPP --toplevel sqrt_newton --output sqrt.ddt.a2t.hif.xml

muffin sqrt.ddt.a2t.hif.xml --fault STUCK_AT --clock clk --toplevel sqrt_newton --output sqrt.ddt.a2t.muffin.hif.xml

hif2sc sqrt.ddt.a2t.muffin.hif.xml --extensions cpp_hpp --directory injected


