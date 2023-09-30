`include "voice.vh"

module midi_player #(
  parameter FREQ_BITS = 16,
  parameter PULSEWIDTH_BITS = 12,
  parameter OUTPUT_BITS = 16,
  parameter ACCUMULATOR_BITS = 24,
  parameter AMPLITUDE_BITS = 8
) (
    input wire clk,
    input wire [7:0] midi_data,
    input wire midi_valid,
    output wire [OUTPUT_BITS-1:0] sound_data,
    output reg sound_valid
);

    voice #(
        .PULSEWIDTH_BITS(PULSEWIDTH_BITS),
        .OUTPUT_BITS(OUTPUT_BITS),
        .ACCUMULATOR_BITS(ACCUMULATOR_BITS),
        .FREQ_BITS(FREQ_BITS),
        .AMPLITUDE_BITS(AMPLITUDE_BITS)
    ) voice1(
        .clk(clk),
        .midi_data(midi_data),
        .enable(midi_valid),
        .dout(sound_data),
        .waveform_select(2'b00)
    );

    always @(posedge clk) begin
        if (midi_valid) begin
            sound_valid <= 1;
        end else begin
            sound_valid <= 0;
        end
    end

endmodule

