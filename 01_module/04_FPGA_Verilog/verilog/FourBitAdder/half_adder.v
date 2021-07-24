`timescale 1ns / 100ps

module half_adder(
    input x,
    input y,
    output Cout,
    output S
    );

  xor #5 (S,x,y);
  and #5 (Cout,x,y);

endmodule












