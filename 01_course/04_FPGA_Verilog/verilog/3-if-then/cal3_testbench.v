module calculata3_TB();
  reg [5:0] N0, N1, N2, N3, N4, N5;
  reg [1:0] MODE;
  wire [9:0] OUT_N;
  
  calculate3 my_calculate3(N0, N1, N2, N3, N4, N5, MODE, OUT_N);
  always #1 MODE[0] = 0;
  
  initial begin
    $dumpfile("out.vcd");
    //$dumpvars(1, calcuate_TB);
    $dumpvars;
    MODE[1] = 1;
    N0 = 27;
    N1 = 11;
    N2 = 10;
    N3 = 5;
    N4 = 3;
    N5 = 1;

    #20
    $finish;
  end

endmodule