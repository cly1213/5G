module and_example_tb;

   reg  a, b;
   wire y;

   initial
     begin
        $dumpfile("and.vcd");
        $dumpvars(0, s);
        $monitor("a = %b, b = %b | y= %b ", a, b, y);
        #50 a = 1'b0; b=1'b0; 
        #50 a = 1'b0; b=1'b1;  
        #50 a = 1'b1; b=1'b0; 
        #50 a = 1'b1; b=1'b1;  
        #50 $finish;
     end

   and_example s(a, b, y);
endmodule
