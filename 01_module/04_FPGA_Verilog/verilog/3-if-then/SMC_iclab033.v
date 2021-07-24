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

    input [2:0] W_0, V_GS_0, V_DS_0;
    input [2:0] W_1, V_GS_1, V_DS_1;
    input [2:0] W_2, V_GS_2, V_DS_2;
    input [2:0] W_3, V_GS_3, V_DS_3;
    input [2:0] W_4, V_GS_4, V_DS_4;
    input [2:0] W_5, V_GS_5, V_DS_5;
    input [1:0] mode;

    output [9:0] out_n;

    wire [5:0] OUTPUT0, OUTPUT1, OUTPUT2, OUTPUT3, OUTPUT4, OUTPUT5; 
    wire [5:0] A0, A1, A2, A3, A4, A5; 

    //calculate ID/GM
    wire [5:0] q1, q2, q3, q4, q5, q6, q7, q8, q9, q10, q11, q12;
    
    //For sort
    wire [5:0] a1,a2,a3, b1,b2,b3,b4,b5,b6, c1,c2,c3,c4,c5,c6, d1,d2,d3,d4,d5,d6, e1,e2,e3,e4,e5,e6,f1,f2,f3;

    //module 1 + 2 
    calculate instance1(.W(W_0), .V_GS(V_GS_0), .V_DS(V_DS_0), .I_D(q1), .G_M(q2));
    mux2 instance2(.I_D(q1), .G_M(q2), .MODE(mode), .OUTPUT(A0));

    calculate instance3(.W(W_1), .V_GS(V_GS_1), .V_DS(V_DS_1), .I_D(q3), .G_M(q4));
    mux2 instance4(.I_D(q3), .G_M(q4), .MODE(mode), .OUTPUT(A1));

    calculate instance5(.W(W_2), .V_GS(V_GS_2), .V_DS(V_DS_2), .I_D(q5), .G_M(q6));
    mux2 instance6(.I_D(q5), .G_M(q6), .MODE(mode), .OUTPUT(A2));

    calculate instance7(.W(W_3), .V_GS(V_GS_3), .V_DS(V_DS_3), .I_D(q7), .G_M(q8));
    mux2 instance8(.I_D(q7), .G_M(q8), .MODE(mode), .OUTPUT(A3));

    calculate instance9(.W(W_4), .V_GS(V_GS_4), .V_DS(V_DS_4), .I_D(q9), .G_M(q10));
    mux2 instance10(.I_D(q9), .G_M(q10), .MODE(mode), .OUTPUT(A4));

    calculate instance11(.W(W_5), .V_GS(V_GS_5), .V_DS(V_DS_5), .I_D(q11), .G_M(q12));
    mux2 instance12(.I_D(q11), .G_M(q12), .MODE(mode), .OUTPUT(A5));

    //module 3(sort)
    comparator c1l1( A0,  A1, a1, b1);
    comparator c2l1( A2,  A3, c1, d1);
    comparator c3l1( A4,  A5, e1, f1); 
    
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

    //assign OUTPUT0 = a3;
    //assign OUTPUT1 = b6;
    //assign OUTPUT2 = c6;
    //assign OUTPUT3 = d6;
    //assign OUTPUT4 = e6;
    //assign OUTPUT5 = f3;

    //calculate2 instance13(.MODE(mode), .N0(OUTPUT0), .N1(OUTPUT1), .N2(OUTPUT2), .N3(OUTPUT3), .N4(OUTPUT4), .N5(OUTPUT5), .OUT_N(out_n)); 
    calculate3 instance14(.MODE(mode), .N0(a3), .N1(b6), .N2(c6), .N3(d6), .N4(e6), .N5(f3), .OUT_N(out_n));

endmodule


module calculate(
  // Input signals
  W, V_GS, V_DS,
  // Output signals
  I_D, G_M
);

//================================================================
//   INPUT AND OUTPUT DECLARATION
//================================================================
input [2:0] W, V_GS, V_DS;

output reg [5:0] I_D, G_M;

parameter VTH = 1;
  
always @ (*) begin
  if((V_GS - VTH) > V_DS) begin
    I_D = W * ( 2 * (V_GS - VTH) * V_DS - (V_DS * V_DS)) / 3; 
    G_M = 2 * W * V_DS / 3;  
  end
    
  else begin //(V_GS - VTH) <= V_DS
    I_D = W * ((V_GS - VTH) * (V_GS - VTH)) / 3; 
    G_M = 2 * W * (V_GS - VTH) / 3;
  end

end

endmodule

module mux2(
  // Input signals
  I_D, G_M, MODE,
  // Output signals
  OUTPUT
);

input [5:0] I_D, G_M;  
input [1:0] MODE;
output reg [5:0] OUTPUT;

always @(*) begin
  if(MODE[0]) begin
    OUTPUT = I_D; 
  end

  else begin
    OUTPUT = G_M; 
  end

end

endmodule

module comparator(
    input [5:0] a1,
    input [5:0] b1,
    output reg [5:0] a0,
    output reg [5:0] b0
);

    always @(a1, b1) begin
        if (a1 > b1) begin
            a0 = a1;
            b0 = b1;
        end
        else begin
            a0 = b1;
            b0 = a1;
        end
    end
endmodule

module calculate2(
  // Input signals
  MODE,
  N0, N1, N2, N3, N4, N5,
  // Output signals
  OUT_N
);

input [1:0] MODE;
input [5:0] N0, N1, N2, N3, N4, N5;
output reg [9:0] OUT_N;


always @(*) begin
    if(MODE == 2'b11) begin
        OUT_N = 3 * N0 + 4 * N1 + 5 * N2; //Larger         
    end

    if (MODE == 2'b01) begin
        OUT_N = 3 * N3 + 4 * N4 + 5 * N5; //Smaller 
    end
    
end

endmodule

module calculate3(
  // Input signals
  MODE,
  N0, N1, N2, N3, N4, N5,
  // Output signals
  OUT_N
);

input [1:0] MODE;
input [5:0] N0, N1, N2, N3, N4, N5;
output reg [9:0] OUT_N;

//Transconductance
//assign MODE[0] = 0;

always @(*) begin
    if(MODE == 2'b00) begin
        OUT_N = N3 + N4+ N5; //Larger         
    end

    if(MODE == 2'b01) begin
        OUT_N = 3 * N3 + 4 * N4 + 5 * N5; //Smaller 
    end
    
    if(MODE == 2'b10) begin
        OUT_N = N0 + N1 + N2; //Smaller 
    end

    if(MODE == 2'b11) begin
        OUT_N = 3 * N0 + 4 * N1 + 5 * N2; //Smaller 
    end 
end

endmodule