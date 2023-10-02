`ifndef __TINY_SYNTH_TONE_SINE_LUT__
`define __TINY_SYNTH_TONE_SINE_LUT__
/* =============================
 * Sine tone generator
 * =============================
 *
 * Generates a sine output waveform.
 *
 * Principle of operation:
 *
 * Finds the correct value in a lookup table based on the MSBs of the accumulator.
 */
module tone_generator_sine_lut #(
  parameter ACCUMULATOR_BITS = 24,
  parameter OUTPUT_BITS = 12,
  parameter LUT_SIZE = 1024
)(
  input [ACCUMULATOR_BITS-1:0] accumulator,
  output wire [OUTPUT_BITS-1:0] dout
);

// Lookup Table for sine values
reg [OUTPUT_BITS-1:0] sine_lut [0:LUT_SIZE-1];

// Use the MSBs of the accumulator to index into the LUT
wire [9:0] lut_index = accumulator[ACCUMULATOR_BITS-1:ACCUMULATOR_BITS-10];

// Read values from sine_lut.mem file
initial begin
    $readmemh("data/sine_lut.mem", sine_lut); // lut values are 16bit, output bits must be 16!
end

assign dout = sine_lut[lut_index];

endmodule

`endif
