`timescale 1ns/100ps

module FourBitAdderTB();
  reg [3:0] A;
  reg [3:0] B;
  wire [4:0] C;
  
  FourBitAdder FBA(
    .A(A),
    .B(B),
    .Cout(C[4]),
    .S(C[3:0])
    );
  
  initial begin 
    $dumpfile("test.vcd"); 
    $dumpvars(1,FourBitAdderTB);  
    #100  A=4'd3; B=4'd4;
    #100  A=4'd0; B=4'd5;
    #100  A=4'd9; B=4'd2;
    #100  A=4'd10; B=4'd10;
    #100  A=4'd15; B=4'd15;
    #100  $finish;
  end
endmodule






