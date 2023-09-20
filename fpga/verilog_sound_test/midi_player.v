`include "tone_generator_saw.vh"
`include "tone_generator_triangle.vh"
`include "tone_generator_pulse.vh"
`include "tone_generator_sine.vh"

module midi_player #(
  parameter FREQ_BITS = 16,
  parameter PULSEWIDTH_BITS = 12,
  parameter OUTPUT_BITS = 16,
  parameter ACCUMULATOR_BITS = 24
) (
    input wire clk,
    input wire [7:0] midi_data,
    input wire midi_valid,
    output wire [OUTPUT_BITS-1:0] sound_data,
    output reg sound_valid
);

    `include "midi_note_to_tone_freq.vh"

    wire [15:0] tone_freq;
    assign tone_freq = midi_note_to_tone_freq(midi_data) * 4;


    reg [ACCUMULATOR_BITS-1:0] accumulator;
    reg [ACCUMULATOR_BITS-1:0] prev_accumulator;



    reg [15:0] current_freq = 0;
    reg [15:0] counter = 0;

    // wire [OUTPUT_BITS-1:0] saw_dout;
    tone_generator_saw #(
        .ACCUMULATOR_BITS(ACCUMULATOR_BITS),
        .OUTPUT_BITS(OUTPUT_BITS)
    ) tone_gen_very_cool(
        .accumulator(accumulator),
        .dout(sound_data)
        );

    initial begin
        accumulator = 0;
        prev_accumulator = 0;
        sound_valid = 1;
    end

    always @(posedge clk) begin
        prev_accumulator <= accumulator;
        accumulator <= accumulator + tone_freq;
    end

    // always @(sound_valid) begin
    //         sound_data <= saw_dout;
    // end

endmodule

