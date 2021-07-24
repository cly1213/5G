`timescale 1ns/100ps

module concurrent();
  reg [7:0] x;
  reg [7:0] y;
  reg [7:0] z;
  reg CLK;
  
  initial begin 
    CLK=0;
    x=10;
    y=10;
    z=10;
    $dumpfile("test.vcd"); 
    $dumpvars(1,concurrent);  
    #100  $finish;
  end
  
  always #5 CLK = ~CLK;
  
  always @ (posedge CLK) begin
    x<=25;   // 0x19
    y<=x+13; // 0x26
    z<=x*y;  // 0xB6
  end
  
endmodule






