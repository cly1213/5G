https://verilogcodes.blogspot.com/search?updated-max=2017-11-05T15:53:00%2B05:30&max-results=1


File Reading and Writing in Verilog - Part 1
File reading and writing is a very useful thing to know in Verilog. The possibility to read test input values from files, and write output values for later verification makes testbench codes easy to write and understand.

There are few ways to read or write files in Verilog. So I will explain the whole thing in few different posts. In this first part we will learn the following things,

    How to read hexadecimal values from a file using readmemh function.
    How to read binary values from a file using readmemb function.
    How to write a file with binary values using fopen and fdisplay.
    How to write a file with decimal values using fopen and fdisplay.
    How to write a file with hexadecimal values using fopen and fdisplay.


Now if you want to read a binary file instead of hex file you just have to replace a single line in the above code,

Replace the line $readmemh("A_hex.txt",A);
with $readmemb("A_bin.txt",A);

 That's all! The output files should look the same in both the cases.


