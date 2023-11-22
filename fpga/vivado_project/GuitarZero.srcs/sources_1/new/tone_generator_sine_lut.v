// Outputs a sine wave

module tone_generator_sine_lut (
  input [23:0] accumulator,
  output wire [15:0] dout
);

reg [15:0] sine_lut [0:1023];

// Use the MSBs of the accumulator to index into the LUT
wire [9:0] lut_index = accumulator[23 -: 10];

// Read values from sine_lut.mem file
initial begin
    $readmemh("data/sine_lut.mem", sine_lut);
end

assign dout = sine_lut[lut_index];

endmodule