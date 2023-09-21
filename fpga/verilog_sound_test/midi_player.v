`include "tone_generator_saw.vh"
`include "tone_generator_triangle.vh"
`include "tone_generator_pulse.vh"
`include "multi_channel_mixer.vh"
// `include "two_into_one_mixer.vh"

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

    wire [OUTPUT_BITS-1:0] saw_dout;
    tone_generator_saw #(
        .ACCUMULATOR_BITS(ACCUMULATOR_BITS),
        .OUTPUT_BITS(OUTPUT_BITS)
    ) saw(
        .accumulator(accumulator),
        .dout(saw_dout)
        );

    wire [OUTPUT_BITS-1:0] triangle_dout;
    tone_generator_triangle #(
        .ACCUMULATOR_BITS(ACCUMULATOR_BITS),
        .OUTPUT_BITS(OUTPUT_BITS)
    ) triangle(
        .accumulator(accumulator),
        .dout(triangle_dout)
        );
    
    // two_into_one_mixer #(
    //     .DATA_BITS(OUTPUT_BITS)
    // ) mixer(
    //     .a(triangle_dout),
    //     .b(triangle_dout),
    //     .dout(sound_data)
    // );

    multi_channel_mixer #(
        .DATA_BITS(OUTPUT_BITS),
        .ACTIVE_CHANNELS(2)
    ) mixer(
        .a(triangle_dout),
        .b(saw_dout),
        .c(0),
        .d(0),
        .e(0),
        .f(0),
        .g(0),
        .h(0),
        .i(0),
        .j(0),
        .k(0),
        .l(0),
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
        // $display("triangle_dout: %d", triangle_dout);
        // $display("saw_dout: %d", saw_dout);
        // $display("sound_data: %d", sound_data);
    end

endmodule

