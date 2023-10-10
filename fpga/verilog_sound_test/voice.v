`include "tone_generator.v"
`include "amplitude_downscaler.v"
`include "filter_ewma.v"
`include "adsr_generator.v"
`include "simple_reverb.v" 

module voice (
    input wire clk,
    input wire enable,
    input wire [7:0] midi_data,
    input wire [7:0] amplitude,
    input wire [1:0] waveform_select,
    input wire [11:0] pulse_width,
    input wire [7:0] filter_alpha,
    input wire reverb_enable,
    input wire [7:0] reverb_alpha,
    input wire [3:0] adsr_a,
    input wire [3:0] adsr_d,
    input wire [3:0] adsr_s,
    input wire [3:0] adsr_r,
    output wire [15:0] dout
);

    `include "midi_note_to_tone_freq.v"
    wire [15:0] tone_freq;
    assign tone_freq = midi_note_to_tone_freq(midi_data) * 4;

    wire [15:0] tone_generator_dout;
    tone_generator #(
        // .PULSEWIDTH_BITS(PULSEWIDTH_BITS),
        // .OUTPUT_BITS(OUTPUT_BITS),
        // .ACCUMULATOR_BITS(ACCUMULATOR_BITS),
        // .FREQ_BITS(FREQ_BITS),
        // .AMPLITUDE_BITS(AMPLITUDE_BITS)
    ) tone(
        .clk(clk),
        .tone_freq(tone_freq),
        .amplitude(amplitude),
        .waveform_select(waveform_select),
        .pulse_width(pulse_width),
        .dout(tone_generator_dout)
    );

    wire [7:0] adsr_amplitude;
    adsr_generator #(
    ) adsr(
        .clk(clk),
        .gate(enable),
        .rst(1'b0),
        .a(adsr_a),
        .d(adsr_d),
        .s(adsr_s),
        .r(adsr_r),
        .amplitude(adsr_amplitude)
    );


    wire [15:0] adsr_amp_dout;
    amplitude_downscaler #(
        // .DATA_BITS(OUTPUT_BITS),
        // .AMPLITUDE_BITS(8)
    ) adsr_amp(
        .din(tone_generator_dout),
        // .amplitude(amplitude),
        .amplitude(adsr_amplitude),
        .dout(adsr_amp_dout)
    );

    wire [15:0] main_amp_dout;
    amplitude_downscaler #(
        // .DATA_BITS(OUTPUT_BITS),
        // .AMPLITUDE_BITS(8)
    ) main_amp(
        .din(adsr_amp_dout),
        .amplitude(amplitude),
        .dout(main_amp_dout)
    );

    wire [15:0] filter_dout;
    filter_ewma #(
        // .DATA_BITS(OUTPUT_BITS)
    ) filter(
        .clk(clk),
        .alpha(filter_alpha),
        .din(main_amp_dout),
        .dout(filter_dout)
    );

    wire [15:0] reverb_dout;
    simple_reverb #(
        // .DATA_BITS(OUTPUT_BITS),
        // .DELAY_LENGTH(2048)
    ) reverb(
        .clk(clk),
        .enable(reverb_enable),
        .reverb_alpha(reverb_alpha),
        .din(filter_dout),
        .dout(reverb_dout)
    );

    assign dout = reverb_dout;

endmodule