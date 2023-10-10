module amplitude_downscaler #(
  parameter DATA_BITS = 12,
  parameter AMPLITUDE_BITS = 8
) (
  input [DATA_BITS-1:0]       din,
  input [AMPLITUDE_BITS-1:0]  amplitude,
  output wire [DATA_BITS-1:0] dout
);

  wire signed [DATA_BITS+AMPLITUDE_BITS-1:0] scaled_din;

  assign scaled_din = din * amplitude;

  wire [DATA_BITS-1:0] midpoint = 2**(DATA_BITS-1);
  // wire [DATA_BITS-1:0] scaled_midpoint = (midpoint * amplitude) >> AMPLITUDE_BITS; // not working for some reason??????
  wire [DATA_BITS-1:0] scaled_midpoint = 2**(DATA_BITS-AMPLITUDE_BITS-1) * amplitude; // works
  wire [DATA_BITS-1:0] offset = midpoint - scaled_midpoint;

  wire [DATA_BITS-1:0] dout_scaled = scaled_din[DATA_BITS+AMPLITUDE_BITS-1:AMPLITUDE_BITS] + offset;

  assign dout = dout_scaled;

endmodule
