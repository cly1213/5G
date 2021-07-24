 module tb_jkff;

    // Inputs
    reg J;
    reg K;
    reg Clk;
    reg R;
    reg S;
    reg CE;

    // Outputs
    wire Qout;

    // Instantiate the Unit Under Test (UUT)
    FJKRSE uut (
        .J(J), 
        .K(K), 
        .Clk(Clk), 
        .R(R), 
        .S(S), 
        .CE(CE), 
        .Qout(Qout)
    );
    
    //Create 50 Mhz clock(20 ns clock period).
    initial Clk = 0;
    always #10 Clk = ~Clk;

    initial begin
	    $monitor(R,S,CE,Clk,J,K, Qout);
	    $dumpfile("jk.vcd");
        $dumpvars(0, uut);
        // Initialize Inputs
        J = 0;
        K = 0;
        R = 0;
        S = 0;
        CE = 0;
        #30;
        //Apply inputs
        R = 1;  #50;
        R = 0;
        S = 1;  #50;
        S = 0;
        J = 1;  K = 1;  #50;
        CE = 1; #50;
        J = 0;  K = 0;  #50;
        J = 0;  K = 1;  #50;
        J = 1;  K = 0;  #50;
        J = 1;  K = 1;  #50;
        CE = 0;
		#100 $finish;
    end
      
endmodule