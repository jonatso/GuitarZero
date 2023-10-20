`include "tone_generator_saw.v"
`include "tone_generator_triangle.v"
`include "tone_generator_pulse.v"
`include "tone_generator_sine_lut.v"

module tone_generator (
    input wire clk,
    input wire [19:0] tone_freq,
    input wire [7:0] amplitude,
    input wire [1:0] waveform_select,
    input wire [11:0] pulse_width,
    output wire [15:0] dout
);

    reg [23:0] accumulator;

    wire [15:0] saw_dout;
    tone_generator_saw #(
    ) saw(
        .accumulator(accumulator),
        .dout(saw_dout)
        );

    wire [15:0] triangle_dout;
    tone_generator_triangle #(
    ) triangle(
        .accumulator(accumulator),
        .dout(triangle_dout)
        );

    wire [15:0] pulse_dout;
    tone_generator_pulse #(
    ) pulse(
        .accumulator(accumulator),
        .dout(pulse_dout),
        .pulse_width(pulse_width)
        );

    wire [15:0] sine_dout;
    tone_generator_sine_lut #(
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

