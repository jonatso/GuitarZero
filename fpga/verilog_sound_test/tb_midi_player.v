`timescale 1ns/1ps

module tb_midi_player;

    reg clk;
    reg [7:0] midi_data;
    reg midi_valid;
    wire [15:0] sound_data;
    wire sound_valid;
    reg [7:0] amplitude;
    reg [1:0] waveform_select;
    reg [7:0] filter_alpha;

    // Instantiate the midi_player module
    midi_player uut (
        .clk(clk),
        .midi_data(midi_data),
        .midi_valid(midi_valid),
        .amplitude(amplitude),
        .waveform_select(waveform_select),
        .sound_data(sound_data),
        .sound_valid(sound_valid),
        .filter_alpha(filter_alpha)
    );

    // Clock generation
    always begin
        #5 clk = ~clk;
    end

    // Test sequence
    initial begin
        clk = 0;
        midi_valid = 1;
        midi_data = 8'b0;
        amplitude = 8'hFF;
        waveform_select = 2'b00;
        filter_alpha = 8'h07;

        #20;
        midi_data = 8'd72; // Middle C
        #20
        #132300;
        midi_valid = 0;
        #100000;
        midi_valid = 1;
        midi_data = 8'd74; // D
        #20;
        #132300;
        midi_valid = 0;

        #300000; // for testing adsr finishing
        // change filter alpha
        filter_alpha = 8'h57;
        midi_data = 8'd72; // Middle C
        midi_valid = 1;
        #20
        #132300;
        midi_valid = 0;
        #100000;
        midi_valid = 1;
        midi_data = 8'd74; // D
        #20;
        #132300;
        midi_valid = 0;

        #300000; // for testing adsr finishing
        // change filter alpha
        filter_alpha = 8'hF7;
        midi_data = 8'd72; // Middle C
        midi_valid = 1;
        #20
        #132300;
        midi_valid = 0;
        #100000;
        midi_valid = 1;
        midi_data = 8'd74; // D
        #20;
        #132300;
        midi_valid = 0;

        #300000;
        // choose new waveform
        waveform_select = 2;
        midi_data = 8'd72; // Middle C
        midi_valid = 1;
        #20
        #132300;
        midi_valid = 0;
        #100000;
        midi_valid = 1;
        midi_data = 8'd74; // D
        #20;
        #132300;
        midi_valid = 0;

        


        #300000; // for testing adsr finishing
        $finish; // Properly finish the simulation
    end

    integer output_file;

    initial begin
        output_file = $fopen("output/sound_data.txt", "w");
        if (output_file === 0) $display("Error: Couldn't open sound_data.txt for writing.");
    end

    always @(posedge clk) begin
        $fwrite(output_file, "%d\n", sound_data);
    end

endmodule
