// Outputs the avarage of two numbers

module two_into_one_mixer 
(
  input [15:0] a,
  input [15:0] b,
  output [15:0] dout
);

  wire [16:0] sum = a+b;
  assign dout = sum[16:1];

endmodule
