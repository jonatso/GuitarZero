`include "tone_generator.vh"
`include "amplitude_downscaler.vh"

module voice #(
  parameter PULSEWIDTH_BITS = 12,
  parameter OUTPUT_BITS = 16,
  parameter ACCUMULATOR_BITS = 24,
  parameter FREQ_BITS = 16,
  parameter AMPLITUDE_BITS = 8
) (
    input wire clk,
    input wire enable,
    input wire [7:0] midi_data,
    input wire [AMPLITUDE_BITS-1:0] amplitude,
    input wire [1:0] waveform_select,
    input wire [PULSEWIDTH_BITS-1:0] pulse_width,
    output wire [OUTPUT_BITS-1:0] dout
);

    `include "midi_note_to_tone_freq.vh"
    wire [15:0] tone_freq;
    assign tone_freq = midi_note_to_tone_freq(midi_data) * 4;

    wire [OUTPUT_BITS-1:0] tone_generator_dout;
    tone_generator #(
        .PULSEWIDTH_BITS(PULSEWIDTH_BITS),
        .OUTPUT_BITS(OUTPUT_BITS),
        .ACCUMULATOR_BITS(ACCUMULATOR_BITS),
        .FREQ_BITS(FREQ_BITS),
        .AMPLITUDE_BITS(AMPLITUDE_BITS)
    ) tone(
        .clk(clk),
        .tone_freq(tone_freq),
        .amplitude(amplitude),
        .waveform_select(waveform_select),
        .pulse_width(pulse_width),
        .dout(tone_generator_dout)
    );

    wire [OUTPUT_BITS-1:0] amp_dout;

    amplitude_downscaler #(
        .DATA_BITS(OUTPUT_BITS),
        .AMPLITUDE_BITS(8)
    ) amp(
        .din(tone_generator_dout),
        .amplitude(amplitude),
        .dout(amp_dout)
    );

    assign dout = enable ? amp_dout : 0;

endmodule

