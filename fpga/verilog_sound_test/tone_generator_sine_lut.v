module tone_generator_sine_lut (
  input [23:0] accumulator,
  output wire [15:0] dout
);

// Lookup Table for sine values
reg [15:0] sine_lut [0:1023];

// Use the MSBs of the accumulator to index into the LUT
wire [9:0] lut_index = accumulator[23:14];

// Read values from sine_lut.mem file
initial begin
    $readmemh("data/sine_lut.mem", sine_lut); // lut values are 16bit, output bits must be 16!
end

assign dout = sine_lut[lut_index];

endmodule