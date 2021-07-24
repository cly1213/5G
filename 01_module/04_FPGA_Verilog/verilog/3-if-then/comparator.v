module comparator(
    input [5:0] a_1,
    input [5:0] b_1,
    output reg [5:0] a_0,
    output reg [5:0] b_0
);

    always @(a_1, b_1) begin
        if (a_1 > b_1) begin
            a_0 = a_1;
            b_0 = b_1;
        end
        else begin
            a_0 = b_1;
            b_0 = a_1;
        end
    end
endmodule