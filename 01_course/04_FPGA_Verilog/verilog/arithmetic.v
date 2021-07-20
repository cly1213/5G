module did16 (i0,i1,prod);
input [15:0] i0,i1;
output [31:0] prod;

assign prod = i0 * i1;
    
endmodule

module mul16 (i0,i1,prod);
input [15:0] i0,i1;
output [31:0] prod;

assign prod = i0 * i1;
    
endmodule

module sub32 (i0,i1,diff);
input [15:0] i0,i1;
output [31:0] diff;

assign diff = i0 - i1;
    
endmodule

module add32 (i0,i1,sum);
input [31:0] i0,i1;
output [31:0] sum;

assign sum = i0 + i1;
    
endmodule