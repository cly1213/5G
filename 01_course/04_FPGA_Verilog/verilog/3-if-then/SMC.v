module SMC(
  // Input signals
  mode,
  W_0, V_GS_0, V_DS_0,
  W_1, V_GS_1, V_DS_1,
  W_2, V_GS_2, V_DS_2,
  W_3, V_GS_3, V_DS_3,
  W_4, V_GS_4, V_DS_4,
  W_5, V_GS_5, V_DS_5,

  // Output signals
  out_n
);

//================================================================
//   INPUT AND OUTPUT DECLARATION
//================================================================
input [2:0] W_0, V_GS_0, V_DS_0;
input [2:0] W_1, V_GS_1, V_DS_1;
input [2:0] W_2, V_GS_2, V_DS_2;
input [2:0] W_3, V_GS_3, V_DS_3;
input [2:0] W_4, V_GS_4, V_DS_4;
input [2:0] W_5, V_GS_5, V_DS_5;

input [1:0] mode;

output reg [9:0] out_n;



//assign temp_output0 = out_n;

endmodule