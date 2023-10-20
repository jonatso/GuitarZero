`timescale 1ns/1ps

module tb_instrument;

    reg clk;
    reg [7:0] midi_data;
    reg midi_valid;
    reg [7:0] amplitude;
    wire [15:0] sound_data;
    wire sound_valid;

    reg [7:0] midi_data2;
    reg midi_valid2;
    reg [7:0] amplitude2;
    wire [15:0] sound_data2;
    wire sound_valid2;

    wire [15:0] sound_data_mix;

    instrument_1 instr1 (
        .clk(clk),
        .midi_data(midi_data),
        .midi_valid(midi_valid),
        .amplitude(amplitude),
        .sound_data(sound_data)
    );

    instrument_2 instr2 (
        .clk(clk),
        .midi_data(midi_data2),
        .midi_valid(midi_valid2),
        .amplitude(amplitude2),
        .sound_data(sound_data2)
    );

    two_into_one_mixer mixer(
        .a(sound_data),
        .b(sound_data2),
        .dout(sound_data_mix)
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
        amplitude = 8'h3F;
        midi_valid2 = 1;
        midi_data2 = 8'b0;
        amplitude2 = 8'h3F;

        #20;
        midi_data = 8'd72; // Middle C
        midi_data2 = 8'd72;
        #20
        #132300;
        midi_valid = 0;
        midi_valid2 = 0;
        #100000;
        midi_valid = 1;
        midi_data = 8'd74; // D
        midi_valid2 = 1;
        midi_data2 = 8'd74; // D
        #20;
        #132300;
        midi_valid = 0;
        midi_valid2 = 0;

        #350000; // for testing adsr finishing
        midi_data = 8'd60; // Middle C
        midi_valid = 1;
        midi_data2 = 8'd60; // Middle C
        midi_valid2 = 1;

        #20
        #132300;
        midi_valid = 0;
        midi_valid2 = 0;
        #100000;
        midi_valid = 1;
        midi_data = 8'd62; // D
        midi_valid2 = 1;
        midi_data2 = 8'd62; // D
        #20;
        #132300;
        midi_valid = 0;
        midi_valid2 = 0;

        #350000; // for testing adsr finishing
        midi_data = 8'd60; // Middle C
        midi_data2 = 8'd79;
        midi_valid = 1;
        midi_valid2 = 1;
        #20
        #132300;
        midi_valid = 0;
        midi_valid2 = 0;
        #100000;
        midi_valid = 1;
        midi_data = 8'd62; // D
        midi_valid2 = 1;
        midi_data2 = 8'd81;
        #20;
        #132300;
        midi_valid = 0;
        midi_valid2 = 0;

        #350000;
        midi_data = 8'd60; // Middle C
        midi_valid = 1;
        midi_data2 = 8'd86; // Middle C
        midi_valid2 = 1;
        #20
        #132300;
        midi_valid = 0;
        midi_valid2 = 0;
        #100000;
        midi_valid = 1;
        midi_data = 8'd62; // D
        midi_valid2 = 1;
        midi_data2 = 8'd84; // D
        #20;
        #132300;
        midi_valid = 0;
        midi_valid2 = 0;


        #350000; // for testing adsr finishing
        $finish; // Properly finish the simulation
    end

    integer output_file;

    initial begin
        output_file = $fopen("output/sound_data.txt", "w");
        if (output_file === 0) $display("Error: Couldn't open sound_data.txt for writing.");
    end

    always @(posedge clk) begin
        $fwrite(output_file, "%d\n", sound_data_mix);
    end

endmodule
