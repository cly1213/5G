`timescale 1ns/10ps

module calculata_TB();
  reg [2:0] W, V_GS, V_DS;

  wire [5:0] I_D, G_M;
  
  calculate my_calculate(W, V_GS, V_DS, I_D, G_M);

  always #1 W = 7;
  
  initial begin
    $dumpfile("out.vcd");
    //$dumpvars(1, calcuate_TB);
    $dumpvars;
    W = 7;
    V_GS = 3;
    V_DS = 5; 
    #20
    W = 7;
    V_GS = 3;
    V_DS = 1;
    #40
    $finish;
  end

endmodule
