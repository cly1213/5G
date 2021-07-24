module tb();

    reg [7:0] A [0:15]; //memory declaration for storing the contents of file.
    integer outfile1,outfile2,outfile3; //file descriptors
    integer i;  //index used in "for" loop

initial begin
    //read the contents of the file A_hex.txt as hexadecimal values into memory "A".
    $readmemh("A_hex.txt",A);
    //The $fopen function opens a file and returns a multi-channel descriptor 
    //in the format of an unsized integer. 
    outfile1=$fopen("A_write_dec.txt","w");
    outfile2=$fopen("A_write_bin.txt","w");
    outfile3=$fopen("A_write_hex.txt","w");
    
    //Write one by one the contents of vector "A" into text files.
    for (i = 0; i < 16; i = i +1) begin
        $fdisplay(outfile1,"%d",A[i]);  //write as decimal
        $fdisplay(outfile2,"%b",A[i]);  //write as binary
        $fdisplay(outfile3,"%h",A[i]);  //write as hexadecimal
    end 
    //once writing is finished, close all the files.
    $fclose(outfile1);
    $fclose(outfile2);
    $fclose(outfile3);
    //wait and then stop the simulation.
    #100;
    $stop;
end 
endmodule