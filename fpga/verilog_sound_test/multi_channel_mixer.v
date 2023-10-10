module multi_channel_mixer #(
  parameter DATA_BITS = 12,
  parameter ACTIVE_CHANNELS = 2
)
(
  // input clk,
  input [DATA_BITS-1:0] a,
  input [DATA_BITS-1:0] b,
  input [DATA_BITS-1:0] c,
  input [DATA_BITS-1:0] d,
  input [DATA_BITS-1:0] e,
  input [DATA_BITS-1:0] f,
  input [DATA_BITS-1:0] g,
  input [DATA_BITS-1:0] h,
  input [DATA_BITS-1:0] i,
  input [DATA_BITS-1:0] j,
  input [DATA_BITS-1:0] k,
  input [DATA_BITS-1:0] l,
  output [DATA_BITS-1:0] dout
);

  localparam EXTRA_BITS_REQUIRED = $clog2(ACTIVE_CHANNELS);

  wire [DATA_BITS+4:0] sum;

  localparam MIN_VALUE = 0;
  localparam MAX_VALUE = (2**(DATA_BITS))-1;

  assign sum = (a+b+c+d+e+f+g+h+i+j+k+l) >>> EXTRA_BITS_REQUIRED;
  assign dout = (sum < MIN_VALUE)
                ? MIN_VALUE :
                  (sum > MAX_VALUE ?
                      MAX_VALUE
                      : sum);

endmodule

`endif
