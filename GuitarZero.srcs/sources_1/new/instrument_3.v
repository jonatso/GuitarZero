// Ouputs the mix of two voices: one saw-wave and one pulse-wave, but with different asdr than inst0
 
module instrument_3
(
    input wire clk,
    input wire [6:0] midi_data,
    input wire midi_enable,
    input wire [7:0] amplitude,
    output wire [15:0] sound_data
);
    wire [15:0] sound_data1;
    wire [15:0] sound_data2;
 
    wire [6:0] midi_data_octave_up = midi_data < 7'd117 ? midi_data + 12 : midi_data;
    wire [7:0] amplitude_halved = amplitude[7:1];
 
    voice voice1(
        .clk(clk),
        .midi_data(midi_data),
        .midi_enable(midi_enable),
        .dout(sound_data1),
        .waveform_select(2'b10),
        .pulse_width(12'd2048),
        .amplitude(amplitude),
        .filter_alpha(8'h10),
        .adsr_a(4'h0),
        .adsr_d(4'h8),
        .adsr_s(4'h6),
        .adsr_r(4'h9),
        .reverb_enable(1'b0),
        .reverb_alpha(8'hD0)
    );
 
 
    voice voice2(
        .clk(clk),
        .midi_data(midi_data_octave_up),
        .midi_enable(midi_enable),
        .dout(sound_data2),
        .waveform_select(2'b10),
        .pulse_width(12'd2048),
        .amplitude(amplitude_halved),
        .filter_alpha(8'h10),
        .adsr_a(4'h0),
        .adsr_d(4'h8),
        .adsr_s(4'h6),
        .adsr_r(4'h9),
        .reverb_enable(1'b0),
        .reverb_alpha(8'hD0)
    );
 
    two_into_one_mixer mixer(
        .a(sound_data1),
        .b(sound_data2),
        .dout(sound_data)
    );
 
endmodule
 