`timescale 1ns/1ps

module tb_midi_player;

    reg clk;
    reg [7:0] midi_data;
    reg midi_valid;
    wire [15:0] sound_data;
    wire sound_valid;

    // Instantiate the midi_player module
    midi_player uut (
        .clk(clk),
        .midi_data(midi_data),
        .midi_valid(midi_valid),
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
        midi_valid = 0;
        midi_data = 8'b0;

        #20;
        $display("Starting Middle C at time %d", $time);
        midi_data = 8'd60; // Middle C
        midi_valid = 1;
        #20;
        midi_valid = 0;
        #132300;
        $display("Stopping Middle C at time %d", $time);

        midi_data = 8'd62; // D
        $display("Starting D at time %d", $time);
        midi_valid = 1;
        #20;
        midi_valid = 0;
        #132300;
        $display("Stopping D at time %d", $time);

        midi_data = 8'd64; // E
        $display("Starting E at time %d", $time);
        midi_valid = 1;
        #20;
        midi_valid = 0;
        #132300;
        $display("Stopping E at time %d", $time);

        midi_data = 8'd65; // F
        $display("Starting F at time %d", $time);
        midi_valid = 1;
        #20;
        midi_valid = 0;
        #132300;
        $display("Stopping F at time %d", $time);

        midi_data = 8'd67; // G
        $display("Starting G at time %d", $time);
        midi_valid = 1;
        #20;
        midi_valid = 0;
        #132300;
        $display("Stopping G at time %d", $time);

        midi_data = 8'd69; // A
        $display("Starting A at time %d", $time);
        midi_valid = 1;
        #20;
        midi_valid = 0;
        #132300;
        $display("Stopping A at time %d", $time);

        midi_data = 8'd67; // G
        $display("Starting G at time %d", $time);
        midi_valid = 1;
        #20;
        midi_valid = 0;
        #132300;
        $display("Stopping G at time %d", $time);

        midi_data = 8'd65; // F
        $display("Starting F at time %d", $time);
        midi_valid = 1;
        #20;
        midi_valid = 0;
        #132300;
        $display("Stopping F at time %d", $time);

        midi_data = 8'd64; // E
        $display("Starting E at time %d", $time);
        midi_valid = 1;
        #20;
        midi_valid = 0;
        #132300;
        $display("Stopping E at time %d", $time);

        midi_data = 8'd62; // D
        $display("Starting D at time %d", $time);
        midi_valid = 1;
        #20;
        midi_valid = 0;
        #132300;
        $display("Stopping D at time %d", $time);

        midi_data = 8'd60; // C
        $display("Starting C at time %d", $time);
        midi_valid = 1;
        #20;
        midi_valid = 0;
        #132300;
        $display("Stopping C at time %d", $time);










        $finish; // Properly finish the simulation
    end

    integer output_file;
    integer write_count = 0; // Track the number of writes to the file

    initial begin
        output_file = $fopen("sound_data.txt", "w");
        if (output_file === 0) $display("Error: Couldn't open sound_data.txt for writing.");
    end

    always @(posedge clk) begin
        $fwrite(output_file, "%d\n", sound_data);
        write_count = write_count + 1; // Increment the write count every time we write to the file
    end

    // Debug: Monitor sound_data and sound_valid signals

    // always @(posedge clk) begin
    //     $display("Time: %d, Clock Value: %b, Sound Valid: %b, Sound Data: %d", $time, clk, sound_valid, sound_data);
    // end

    // At the end of the simulation, display the write count
    initial begin
        // This will now be executed at the end, once the simulation finishes
        $display("Total writes to sound_data.txt: %d", write_count);
    end

endmodule
