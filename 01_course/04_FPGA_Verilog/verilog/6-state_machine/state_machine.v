module state_machine(input x, input clk, output reg A, output reg B, output y);
  initial {A,B}=0;
  assign y= ~B & (~A | ~x) | B & ~(A^x);
  always @(posedge clk) begin
    case ({A,B})
      2'b00 : {A,B} = (x==0) ? 2'b00 : 2'b01;
      2'b01 : {A,B} = (x==0) ? 2'b11 : 2'b10;
      2'b10 : {A,B} = (x==0) ? 2'b00 : 2'b11;
      2'b11 : {A,B} = (x==0) ? 2'b10 : 2'b11;
    endcase
  end
endmodule

