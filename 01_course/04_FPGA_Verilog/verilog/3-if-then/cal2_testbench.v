`timescale 1ns/10ps

module calculata2_TB();
  reg [5:0] N0, N1, N2, N3, N4, N5;
  reg [1:0] MODE;
  wire [9:0] OUT_N;
  
  calculate2 my_calculate2(N0, N1, N2, N3, N4, N5, MODE, OUT_N);
  always #1 MODE[0] = 1;
  
  initial begin
    $dumpfile("out.vcd");
    //$dumpvars(1, calcuate_TB);
    $dumpvars;
    MODE[1] = 1;
    N0 = 33;
    N1 = 27;
    N2 = 25;
    N3 = 6;
    N4 = 5;
    N5 = 0;

    #20
    $finish;
  end

endmodule