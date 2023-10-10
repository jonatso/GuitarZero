module two_into_one_mixer 
(
  input [15:0] a,
  input [15:0] b,
  output [15:0] dout
);

  wire [16:0] intermediate;

  assign intermediate = a+b;
  

  assign dout = intermediate >>> 1;

endmodule
