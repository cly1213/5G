module calculata_TB();
  reg [2:0] W_0, V_GS_0, V_DS_0;
  reg [2:0] W_1, V_GS_1, V_DS_1;

  reg [2:0] W_2, V_GS_2, V_DS_2;
  reg [2:0] W_3, V_GS_3, V_DS_3;
  reg [2:0] W_4, V_GS_4, V_DS_4;
  reg [2:0] W_5, V_GS_5, V_DS_5;
  
  reg [1:0] mode;

  //wire [5:0] OUTPUT0,OUTPUT1,OUTPUT2,OUTPUT3,OUTPUT4,OUTPUT5;

  wire [9:0] out_n;
  
  top my_top(
  // Input signals
  mode,
  W_0, V_GS_0, V_DS_0,
  W_1, V_GS_1, V_DS_1,
  W_2, V_GS_2, V_DS_2,
  W_3, V_GS_3, V_DS_3,
  W_4, V_GS_4, V_DS_4,
  W_5, V_GS_5, V_DS_5,

  // Output signals
  //OUTPUT0,
  //OUTPUT1,
  //OUTPUT2,
  //OUTPUT3,
  //OUTPUT4,
  //OUTPUT5
  out_n

  );

  always #1 mode = 2'b00;
  
  initial begin
    $dumpfile("out.vcd");
    //$dumpvars(1, calcuate_TB);
    $dumpvars;
    #2
    W_0 = 7;
    V_GS_0 = 3;
    V_DS_0 = 5; 

    W_1 = 7;
    V_GS_1 = 3;
    V_DS_1 = 1;

    W_2 = 6;
    V_GS_2 = 4;
    V_DS_2 = 3;

    W_3 = 6;
    V_GS_3 = 1;
    V_DS_3 = 4;

    W_4 = 7;
    V_GS_4 = 2;
    V_DS_4 = 1;

    W_5 = 3;
    V_GS_5 = 7;
    V_DS_5 = 7;

    #10
    $finish;
  end

endmodule