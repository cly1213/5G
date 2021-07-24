module prob1(input wire a,b,c,d, output wire out);
    assign out = (a||d)&&(!d&&b&&c);
endmodule