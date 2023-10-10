module amplitude_downscaler #(
  parameter DATA_BITS = 12,
  parameter AMPLITUDE_BITS = 8
) (
  input [15:0]       din,
  input [7:0]  amplitude,
  output wire [15:0] dout
);

  wire signed [23:0] scaled_din;

  assign scaled_din = din * amplitude;

  wire [15:0] midpoint = 2**(15);
  // wire [DATA_BITS-1:0] scaled_midpoint = (midpoint * amplitude) >> AMPLITUDE_BITS; // not working for some reason??????
  wire [15:0] scaled_midpoint = 2**(7) * amplitude; // works
  wire [15:0] offset = midpoint - scaled_midpoint;

  wire [15:0] dout_scaled = scaled_din[23:8] + offset;

  assign dout = dout_scaled;

endmodule
