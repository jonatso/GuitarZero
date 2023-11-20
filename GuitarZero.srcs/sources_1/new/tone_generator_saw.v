// Outputs a saw wave

module tone_generator_saw (
  input [23:0] accumulator,
  output wire [15:0] dout);

  assign dout = accumulator[23 -: 16];

endmodule
