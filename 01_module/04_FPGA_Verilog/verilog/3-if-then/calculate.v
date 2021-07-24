module calculate(
  // Input signals
  W, V_GS, V_DS,
  // Output signals
  I_D, G_M
);

//================================================================
//   INPUT AND OUTPUT DECLARATION
//================================================================
input [2:0] W, V_GS, V_DS;

output reg [5:0] I_D, G_M;

parameter VTH = 1;
  
always @ (*) begin
  if((V_GS - VTH) > V_DS) begin
    I_D = W * ( 2 * (V_GS - VTH) * V_DS - (V_DS * V_DS)) / 3; 
    G_M = 2 * W * V_DS / 3;  
  end
    
  else begin //(V_GS - VTH) <= V_DS
    I_D = W * ((V_GS - VTH) * (V_GS - VTH)) / 3; 
    G_M = 2 * W * (V_GS - VTH) / 3;
  end

end

endmodule