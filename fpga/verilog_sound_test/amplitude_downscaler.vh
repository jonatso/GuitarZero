`ifndef __TINY_SYNTH_AMPLITUDE_MODULATOR__
`define __TINY_SYNTH_AMPLITUDE_MODULATOR__
/* =====================
 *  amplitude modulator
 * =====================
 *
 * An amplitude modulator; used, for example, to adjust the output volume
 * of the tone generator based on the output of the ADSR envelope generator.
 *
 * Principle of operation:
 *
 * Scales value 0 to 100% of the input signal by the amplitude value.
 * Multiplies the input signal by the amplitude value, then divides by 2^AMPLITUDE_BITS.
 * Since the input input is unsigned, we need to add a midpoint offset to the output.
 *
 */
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



`endif
