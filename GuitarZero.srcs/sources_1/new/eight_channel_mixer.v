module eight_channel_mixer
(
  input [15:0] a,
  input [15:0] b,
  input [15:0] c,
  input [15:0] d,
  input [15:0] e,
  input [15:0] f,
  input [15:0] g,
  input [15:0] h,
  output [15:0] dout
);

    wire [18:0] sum = (a+b+c+d+e+f+g+h);
    assign dout = sum[18:3];

endmodule