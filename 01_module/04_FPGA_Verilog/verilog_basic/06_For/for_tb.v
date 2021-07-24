module prob1_tb();
    reg a,b,c,d;
    wire out;
	integer i;

    prob1 prob1_test(a,b,c,d, out);

    initial begin
        $monitor(a,b,c,d,out, Qout);
        for (i=0; i<16; i=i+1) begin
            {a,b,c,d} = i;
            #1;
        end
    end
endmodule