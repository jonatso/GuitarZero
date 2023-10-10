module tone_generator_pulse 
(
  input [23:0] accumulator,
  input [11:0] pulse_width,
  output wire [15:0] dout);

  localparam MAX_SCALE = (2**16) - 1;

  // if accumulator value > pulse_width, output = MAX; else 0;
  assign dout = (accumulator[23 -: 12] <= pulse_width) ? MAX_SCALE : 0;

endmodule