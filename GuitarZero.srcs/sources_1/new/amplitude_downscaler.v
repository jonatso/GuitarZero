// Scales the amplitude of the sound date input

module amplitude_downscaler (
  input [15:0] din,
  input [7:0] amplitude,
  output wire [15:0] dout
);

  wire signed [23:0] scaled_din = din * amplitude;
  wire [15:0] midpoint = 2**(15);
  wire [15:0] scaled_midpoint = 2**(7) * amplitude;
  wire [15:0] offset = midpoint - scaled_midpoint;
  
  wire [15:0] dout_scaled = scaled_din[23:8] + offset;
  assign dout = dout_scaled;

endmodule