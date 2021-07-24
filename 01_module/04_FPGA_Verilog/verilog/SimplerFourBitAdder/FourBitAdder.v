`timescale 1ns/100ps

module FourBitAdder(
    input [3:0] A,
    input [3:0] B,
    output reg [3:0] S,
    output reg Cout
    );

  always @ * {Cout,S}=A+B;

endmodule























