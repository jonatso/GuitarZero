`include "voice.v"

module midi_player 
(
    input wire clk,
    input wire [7:0] midi_data,
    input wire midi_valid,
    input wire [7:0] amplitude,
    input wire [1:0] waveform_select,
    input wire [7:0] filter_alpha,
    output wire [15:0] sound_data
);

    voice #(
    ) voice1(
        .clk(clk),
        .midi_data(midi_data),
        .enable(midi_valid),
        .dout(sound_data),
        .waveform_select(waveform_select),
        .pulse_width(12'd2048),
        .amplitude(amplitude),
        .filter_alpha(filter_alpha),
        .adsr_a(4'h9),
        .adsr_d(4'h9),
        .adsr_s(4'hC),
        .adsr_r(4'h7),
        .reverb_enable(1'b1),
        .reverb_alpha(8'hD0)
    );

endmodule

