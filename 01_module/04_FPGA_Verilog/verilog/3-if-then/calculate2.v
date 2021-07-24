module calculate2(
  // Input signals
  N0, N1, N2, N3, N4, N5, MODE,
  // Output signals
  OUT_N
);

input [1:0] MODE;
input [5:0] N0, N1, N2, N3, N4, N5;
output reg [9:0] OUT_N;

//Currnet 
assign MODE[0] = 1;

always @(*) begin
    if(MODE[1] == 1) begin
        OUT_N = 3 * N0 + 4 * N1 + 5 * N2; //Larger         
    end

    if (MODE[1] == 0) begin
        OUT_N = 3 * N3 + 4 * N4 + 5 * N5; //Smaller 
    end
    
end

endmodule