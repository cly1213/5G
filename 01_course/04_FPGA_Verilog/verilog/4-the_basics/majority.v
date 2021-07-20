`timescale 1ns/100ps

//////////////////////////////////////////////////////////////////////////////////
// Company: Closure Labs
// Engineer: Eduardo Corpeño
// 
// Create Date:    Feb-23-2018 
// Module Name:    majority
// Description:    A simple 3-input majority function implemented with gates.
//
// Revision: 1.0
// Revision 0.01 - File Created
// Additional Comments: Part of the FPGA Embedded Design course by Closure Labs.
//
//////////////////////////////////////////////////////////////////////////////////

module majority(
    input a,
    input b,
    input c,
    output x);
  
  wire b_c, and_out, bc;
  
  and (and_out,a,b_c);
  and (bc,c,b);
  or  (b_c,b,c);
  or  (x,and_out,bc);
endmodule

