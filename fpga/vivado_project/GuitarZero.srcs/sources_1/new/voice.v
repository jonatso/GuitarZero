// inspired by https://github.com/gundy/tiny-synth/blob/develop/hdl/voice.vh
// Outputs sound data based on given parameters for midi_data, amplitude, etc.

module voice (
    input wire clk,
    input wire midi_enable,
    input wire [6:0] midi_data,
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
    wire [23:0] tone_freq = midi_note_to_tone_freq(midi_data);

    // Genarates a sound wave
    wire [15:0] tone_generator_dout;
    tone_generator tone(
        .clk(clk),
        .tone_freq(tone_freq),
        .waveform_select(waveform_select),
        .pulse_width(pulse_width),
        .dout(tone_generator_dout)
    );

    // Calculates amplitude with attach, decay, substain and release
    wire [7:0] adsr_amplitude;
    adsr_generator adsr(
        .clk(clk),
        .gate(midi_enable),
        .a(adsr_a),
        .d(adsr_d),
        .s(adsr_s),
        .r(adsr_r),
        .amplitude(adsr_amplitude)
    );

    // Scales the amplitude of the sound wave to add asdr
    wire [15:0] adsr_amp_dout;
    amplitude_downscaler adsr_amp(
        .din(tone_generator_dout),
        .amplitude(adsr_amplitude),
        .dout(adsr_amp_dout)
    );

    // Scales the amplitude of the sound wave to fit the amplitude requested my MCU
    wire [15:0] main_amp_dout;
    amplitude_downscaler main_amp(
        .din(adsr_amp_dout),
        .amplitude(amplitude),
        .dout(main_amp_dout)
    );

    // Add low pass filter to the sound wave
    wire [15:0] filter_ewma_dout;
    filter_ewma filter_ewma(
        .clk(clk),
        .alpha(filter_alpha),
        .din(main_amp_dout),
        .dout(filter_ewma_dout)
    );
    
    // Doesn't work at moment, so does nothing really
    wire [15:0] reverb_dout;
    simple_reverb reverb(
        .clk(clk),
        .reverb_enable(reverb_enable),
        .reverb_alpha(reverb_alpha),
        .din(filter_ewma_dout),
        .dout(reverb_dout)
    );

    assign dout = reverb_dout;

endmodule