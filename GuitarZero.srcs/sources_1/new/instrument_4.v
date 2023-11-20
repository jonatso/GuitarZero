module instrument_4
(
    input wire clk,
    input wire [7:0] midi_data,
    input wire midi_enable,
    input wire [7:0] amplitude,
    output wire [15:0] sound_data
);

    wire [15:0] sound_data1, sound_data2, sound_data3, sound_data1_2;
    wire [6:0] midi_data_octave_up = midi_data < 8'd117 ? midi_data + 12 : midi_data;
    wire [6:0] midi_data_two_octaves_up = midi_data < 8'd105 ? midi_data + 24 : midi_data_octave_up;

    wire [3:0] adsr_a = 4'h2;
    wire [3:0] adsr_d = 4'h8;
    wire [3:0] adsr_s = 4'h6;
    wire [3:0] adsr_r = 4'h9;

    voice voice1(
        .clk(clk),
        .midi_data(midi_data_two_octaves_up),
        .midi_enable(midi_enable),
        .dout(sound_data1),
        .waveform_select(2'b11),
        .pulse_width(12'd2048),
        .amplitude(amplitude),
        .filter_alpha(8'h10),
        .adsr_a(adsr_a),
        .adsr_d(adsr_d),
        .adsr_s(adsr_s),
        .adsr_r(adsr_r),
        .reverb_enable(1'b0),
        .reverb_alpha(8'hD0)
    );


    voice voice2(
        .clk(clk),
        .midi_data(midi_data_octave_up),
        .midi_enable(midi_enable),
        .dout(sound_data2),
        .waveform_select(2'b11),
        .pulse_width(12'd2048),
        .amplitude(amplitude),
        .filter_alpha(8'h10),
        .adsr_a(adsr_a),
        .adsr_d(adsr_d),
        .adsr_s(adsr_s),
        .adsr_r(adsr_r),
        .reverb_enable(1'b0),
        .reverb_alpha(8'hD0)
    );

    voice voice3(
        .clk(clk),
        .midi_data(midi_data),
        .midi_enable(midi_enable),
        .dout(sound_data3),
        .waveform_select(2'b10),
        .pulse_width(12'd2048),
        .amplitude(amplitude),
        .filter_alpha(8'h10),
        .adsr_a(adsr_a),
        .adsr_d(adsr_d),
        .adsr_s(adsr_s),
        .adsr_r(adsr_r),
        .reverb_enable(1'b0),
        .reverb_alpha(8'hD0)
    );

    two_into_one_mixer mixer1(
        .a(sound_data1),
        .b(sound_data2),
        .dout(sound_data1_2)
    );

    two_into_one_mixer mixer3(
        .a(sound_data1_2),
        .b(sound_data3),
        .dout(sound_data)
    );

endmodule

