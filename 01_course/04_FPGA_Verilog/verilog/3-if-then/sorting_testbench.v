module sorting_test;
    reg [31:0] a, b, c, d, e,f;
    wire [31:0] aa, bb, cc, dd, ee, ff;
    reg clk;

    initial begin
        $dumpfile("sorting.vcd");
        $dumpvars();
        #10 $finish;
    end

    initial begin
        clk = 0;
    end

    always #1 clk = ~clk;

    initial begin
        a = 0;
        b = 0;
        c = 0;
        d = 0;
        e = 0;
        f = 0;

        #1
        a = 4;
        b = 1;
        c = 2;
        d = 5;
        e = 3;
        f = 7;

        #1
        a = 1;
        b = 16;
        c = 12;
        d = 14;
        e = 15;
        f = 8;

        #1
        a = 3;
        b = 4;
        c = 9;
        d = 19;
        e = 2;
        f = 9;

        #1
        a = 16;
        b = 11;
        c = 12;
        d = 16;
        e = 12;
        f = 10;

        #1  
        a = 15;
        b = 17;
        c = 11;
        d = 15;
        e = 3;
        f = 12;

        #1  
        a = 13;
        b = 9;
        c = 2;
        d = 1;
        e = 18;
        f = 20;

        #1  
        a = 17;
        b = 3;
        c = 8;
        d = 3;
        e = 14;
        f = 25;

        #1  
        a = 14;
        b = 10;
        c = 9;
        d = 14;
        e = 14;
        f = 21;

        #1  
        a = 15;
        b = 12;
        c = 13;
        d = 10;
        e = 19;
        f = 15;

        #1  
        a = 6;
        b = 8;
        c = 7;
        d = 16;
        e = 15;
        f = 18;

        #1  
        a = 10;
        b = 17;
        c = 18;
        d = 1;
        e = 16;
        f = 4;
    end

    wire [31:0] a1,a2,a3, b1,b2,b3,b4,b5,b6, c1,c2,c3,c4,c5,c6, d1,d2,d3,d4,d5,d6, e1,e2,e3,e4,e5,e6,f1,f2,f3;
    comparator c1l1( a,  b, a1, b1);
    comparator c2l1( c,  d, c1, d1);
    comparator c3l1( e,  f, e1, f1); 
    
    comparator c1l2(b1, c1, b2, c2);
    comparator c2l2(d1, e1, d2, e2);
    
    comparator c1l3(a1, b2, a2, b3);
    comparator c2l3(c2, d2, c3, d3);
    comparator c3l3(e2, f1, e3, f2);

    comparator c1l4(b3, c3, b4, c4);
    comparator c2l4(d3, e3, d4, e4);

    comparator c1l5(a2, b4, a3, b5);
    comparator c2l5(c4, d4, c5, d5);
    comparator c3l5(e4, f2, e5, f3);

    comparator c1l6(b5, c5, b6, c6);
    comparator c2l6(d5, e5, d6, e6);

    assign aa = a3;
    assign bb = b6;
    assign cc = c6;
    assign dd = d6;
    assign ee = e6;
    assign ff = f3;

endmodule