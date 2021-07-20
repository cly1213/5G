module tristate_ifelse(input in, input en, output out);
  reg out;
  always @(in,en) begin
    if(en)
      out=in;
    else
      out=1'bz;
  end
endmodule

module tristate_hardwired(input in, input en, output out);
  assign out=en?in:1'bz;
endmodule


module tristate_primitive(input in, input en, output out);
  bufif1(out,in,en);
endmodule
