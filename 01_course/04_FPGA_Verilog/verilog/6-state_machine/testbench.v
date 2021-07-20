module state_machine_TB();
  reg x, clk;
  wire A,B,y;
  state_machine SM(x,clk,A,B,y);
  
  always #5 clk=~clk;
  
  initial begin
    $dumpfile("out.vcd");
    $dumpvars(1,state_machine_TB);
    clk=0;
    x=0; #20
    x=1; #40
    x=0; #40
    x=1; #7
    x=0; #40
    $finish;
  end
endmodule
