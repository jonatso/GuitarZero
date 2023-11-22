// Outputs a pulse wave

module tone_generator_pulse 
(
  input [23:0] accumulator,
  input [11:0] pulse_width,
  output wire [15:0] dout
);

  assign dout = (accumulator[23 -: 12] <= pulse_width) ? (2**16) - 1 : 0;

endmodule