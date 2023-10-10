module tone_generator_triangle (
  input [23:0] accumulator,
  output wire [15:0] dout);

  wire invert_wave;

  // invert the waveform (ie. start counting down instead of up)
  // if either ringmod is enabled and high,
  // or MSB of accumulator is set.
  assign invert_wave = accumulator[23];

  assign dout = invert_wave ? ~accumulator[22 -: 16]
                            : accumulator[22 -: 16];

endmodule