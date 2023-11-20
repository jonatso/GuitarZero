// Outputs a triangle wave

module tone_generator_triangle (
  input [23:0] accumulator,
  output wire [15:0] dout);

  assign dout = accumulator[23] ? ~accumulator[22 -: 16] : accumulator[22 -: 16];

endmodule