`timescale 1ns/1ps

module tb_midi_player;

    reg clk;
    reg [7:0] midi_data;
    reg midi_valid;
    wire [15:0] sound_data;
    wire sound_valid;
    reg [7:0] amplitude;
    reg [1:0] waveform_select;

    // Instantiate the midi_player module
    midi_player uut (
        .clk(clk),
        .midi_data(midi_data),
        .midi_valid(midi_valid),
        .amplitude(amplitude),
        .waveform_select(waveform_select),
        .sound_data(sound_data),
        .sound_valid(sound_valid)
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
        #20;
        midi_data = 8'd60; // Middle C
        #20
        #132300;
        midi_valid = 0;
        #100000;
        midi_valid = 1;
        midi_data = 8'd62; // D
        $display("Starting D at time %d", $time);
        #20;
        #132300;
        $display("Stopping D at time %d", $time);


        $finish; // Properly finish the simulation
    end

    integer output_file;

    initial begin
        output_file = $fopen("sound_data.txt", "w");
        if (output_file === 0) $display("Error: Couldn't open sound_data.txt for writing.");
    end

    always @(posedge clk) begin
        $fwrite(output_file, "%d\n", sound_data);
    end

endmodule
