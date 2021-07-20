`timescale 1ns/100ps

module UD_counter(
  input UD,     // Up=1, Down=0
  input clk,
  output reg [7:0] count
);
  initial count=0;
  always @ (negedge clk) begin
    if(UD==1)
      count=count+1;
    else
      count=count-1;
  end
endmodule
