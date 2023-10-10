module two_into_one_mixer #(
  parameter DATA_BITS = 12
)
(
  input [DATA_BITS-1:0] a,
  input [DATA_BITS-1:0] b,
  output [DATA_BITS-1:0] dout
);

  wire [DATA_BITS:0] intermediate;

  assign intermediate = a+b;
  

  assign dout = intermediate >>> 1;

endmodule
