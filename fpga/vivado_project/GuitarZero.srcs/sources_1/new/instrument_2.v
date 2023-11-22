// Outputs one voice with a saw wave

module instrument_2
(
    input wire clk,
    input wire [6:0] midi_data,
    input wire midi_enable,
    input wire [7:0] amplitude,
    output wire [15:0] sound_data
);

    voice voice1(
        .clk(clk),
        .midi_data(midi_data),
        .midi_enable(midi_enable),
        .dout(sound_data),
        .waveform_select(2'b00),
        .pulse_width(12'd2048),
        .amplitude(amplitude),
        .filter_alpha(8'h10),
        .adsr_a(4'h9),
        .adsr_d(4'h9),
        .adsr_s(4'hC),
        .adsr_r(4'h7),
        .reverb_enable(1'b0),
        .reverb_alpha(8'hD0)
    );

endmodule