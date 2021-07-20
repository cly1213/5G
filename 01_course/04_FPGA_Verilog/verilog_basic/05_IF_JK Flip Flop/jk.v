//JK flip flop module
module FJKRSE(J,K,Clk,R,S,CE,Qout);

    input J,K;  //inputs
    input Clk;  //Clock
    input R;    //synchronous reset (R) 
    input S;    //synchronous set (S)
    input CE;   //clock enable (CE) 
    output Qout;  //data output (Q)
    
    //Internal variable
    reg Qout;
    
    always@ (posedge(Clk))  //Everything is synchronous to positive edge of clock
    begin
        if(R == 1) //reset has highest priority.
            Qout = 0;
        else    
            if(S == 1)  //set has next priority
                Qout = 1;
            else
                if(CE == 1) //J,K values are considered only when CE is ON.
                    if(J == 0 && K == 0)    
                        Qout = Qout; //no change
                    else if(J == 0 && K == 1)
                        Qout = 0;  //reset
                    else if(J == 1 && K == 0)
                        Qout = 1;  //set
                    else
                        Qout = ~Qout;  //toggle
                else
                    Qout = Qout; //no change
    end
    
endmodule