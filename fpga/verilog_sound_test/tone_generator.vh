`include "tone_generator_saw.vh"
`include "tone_generator_triangle.vh"
`include "tone_generator_pulse.vh"
`include "tone_generator_sine_lut.vh"
//`include "tone_generator_sine_baskara.vh"

module tone_generator #(
  parameter PULSEWIDTH_BITS = 12,
  parameter OUTPUT_BITS = 16,
  parameter ACCUMULATOR_BITS = 24,
  parameter FREQ_BITS = 16,
  parameter AMPLITUDE_BITS = 8
) (
    input wire clk,
    input wire [FREQ_BITS-1:0] tone_freq,
    input wire [AMPLITUDE_BITS-1:0] amplitude,
    input wire [1:0] waveform_select,
    input wire [PULSEWIDTH_BITS-1:0] pulse_width,
    output wire [OUTPUT_BITS-1:0] dout
);

    reg [ACCUMULATOR_BITS-1:0] accumulator;

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

    wire [OUTPUT_BITS-1:0] pulse_dout;
    tone_generator_pulse #(
        .ACCUMULATOR_BITS(ACCUMULATOR_BITS),
        .OUTPUT_BITS(OUTPUT_BITS),
        .PULSEWIDTH_BITS(PULSEWIDTH_BITS)
    ) pulse(
        .accumulator(accumulator),
        .dout(pulse_dout),
        .pulse_width(pulse_width)
        );

    wire [OUTPUT_BITS-1:0] sine_dout;
    tone_generator_sine_lut #(
        .ACCUMULATOR_BITS(ACCUMULATOR_BITS),
        .OUTPUT_BITS(OUTPUT_BITS)
    ) sine(
        .accumulator(accumulator),
        .dout(sine_dout)
        );

    assign dout = (waveform_select == 0) ? saw_dout : (waveform_select == 1) ? triangle_dout : (waveform_select == 2) ? pulse_dout : (waveform_select == 3) ? sine_dout : 0;

    initial begin
        accumulator = 0;
    end

    always @(posedge clk) begin
        accumulator <= accumulator + tone_freq;
    end

endmodule

