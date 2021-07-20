`timescale 1ns/10ps

module calculata_TB();
  reg [5:0] I_D, G_M;
  reg [1:0] MODE;

  wire [5:0] OUTPUT;
  
  mux2 my_mux2(I_D, G_M, MODE, OUTPUT);

  always #1 MODE[0] = 0;
  
  initial begin
    $dumpfile("out.vcd");
    //$dumpvars(1, calcuate_TB);
    $dumpvars;
    I_D = 9;
    G_M = 9; 
    #20
    I_D = 7;
    G_M = 4;
    #40
    $finish;
  end

endmodule