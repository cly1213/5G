module tristate_TB();
  reg in, en;
  wire out1,out2,out3;
  tristate_ifelse tr1(in,en,out1);
  tristate_hardwired tr2(in,en,out2);
  tristate_primitive tr3(in,en,out3);
  always #5 in=~in;
  
  initial begin
    $dumpfile("out.vcd");
    $dumpvars(1,tristate_TB);
    in=0;
    en=0;
    #20
    en=1;
    #20
    en=0;
    #20
    $finish;
  end
endmodule
