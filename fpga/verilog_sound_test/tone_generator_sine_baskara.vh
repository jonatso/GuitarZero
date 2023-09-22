`ifndef __TINY_SYNTH_TONE_SINE__
`define __TINY_SYNTH_TONE_SINE__
/* =============================
 * Sine tone generator
 * =============================
 *
 * Generates a sine output waveform.
 *
 * Principle of operation:
 *
 * Approximates sine using a baskara approximation.
 */
module tone_generator_sine_baskara #(
  parameter ACCUMULATOR_BITS = 24,
  parameter OUTPUT_BITS = 12
)(
  input [ACCUMULATOR_BITS-1:0] accumulator,
  output wire [OUTPUT_BITS-1:0] dout
);
  // TODO: implement module...
endmodule




`endif