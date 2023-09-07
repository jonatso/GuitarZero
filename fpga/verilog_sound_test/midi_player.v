module midi_player(
    input wire clk,
    input wire [7:0] midi_data,
    input wire midi_valid,
    output reg [15:0] sound_data,
    output reg sound_valid
);

    reg [15:0] note_freq [127:0];

    initial begin
        note_freq[60] = 500; // Middle C
        note_freq[61] = 450; // C#
        note_freq[62] = 400; // D
    end

    reg [15:0] current_freq = 0;
    reg [15:0] counter = 0;

    always @(posedge clk) begin
        if (midi_valid) begin
            current_freq <= note_freq[midi_data];
        end

        if (counter < current_freq) begin
            counter <= counter + 1;
            sound_valid <= 0;
        end else if (counter < 2*current_freq) begin
            counter <= counter + 1;
            sound_valid <= 1;
        end else begin
            counter <= 0;
        end
    end

    always @(sound_valid or counter) begin
        if (sound_valid) 
            sound_data <= 16'hFFFF; // Max volume square wave
        else
            sound_data <= 16'h0000;
    end

endmodule

