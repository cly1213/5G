`timescale 1ns/100ps

module counter_TB();
  reg updown,clk;
  wire [7:0] thecount;
  UD_counter myCounter(updown,clk,thecount);

  always #10 clk=~clk;
  initial
  begin
    $dumpfile("waves.vcd");
    $dumpvars(1,counter_TB);
    clk=1;
    updown=1;  // count up 
    #348
    updown=0;  // count down
    #200
    $finish; 
  end
endmodule






