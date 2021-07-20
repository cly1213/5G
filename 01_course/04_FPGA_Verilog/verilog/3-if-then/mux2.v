module mux2(
  // Input signals
  I_D, G_M, MODE,
  // Output signals
  OUTPUT
);

input [5:0] I_D, G_M;  
input [1:0] MODE;
output reg [5:0] OUTPUT;

always @(*) begin
  if(MODE[0]) begin
    OUTPUT = I_D; 
  end

  else begin
    OUTPUT = G_M; 
  end

end

endmodule