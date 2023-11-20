// Generate a sound data for all the 8 spi channels
// and mix them to get one output sound data

module spi_channels_to_sound_data (
    input wire clk,
    input wire [15:0] spi_channel_0,
    input wire [15:0] spi_channel_1,
    input wire [15:0] spi_channel_2,
    input wire [15:0] spi_channel_3,
    input wire [15:0] spi_channel_4,
    input wire [15:0] spi_channel_5,
    input wire [15:0] spi_channel_6,
    input wire [15:0] spi_channel_7,
    output wire [15:0] sound_data
);

    wire [15:0] sound_data_out_0;
    wire [15:0] sound_data_out_1;
    wire [15:0] sound_data_out_2;
    wire [15:0] sound_data_out_3;
    wire [15:0] sound_data_out_4;
    wire [15:0] sound_data_out_5;
    wire [15:0] sound_data_out_6;
    wire [15:0] sound_data_out_7;

    // Instrument Selector for each spi_channel
    spi_channel_to_sound i0 (
        .clk(clk),
        .spi_channel(spi_channel_0),
        .sound_data(sound_data_out_0)
    );

    spi_channel_to_sound i1 (
        .clk(clk),
        .spi_channel(spi_channel_1),
        .sound_data(sound_data_out_1)
    );

    spi_channel_to_sound i2 (
        .clk(clk),
        .spi_channel(spi_channel_2),
        .sound_data(sound_data_out_2)
    );

    spi_channel_to_sound i3 (
        .clk(clk),
        .spi_channel(spi_channel_3),
        .sound_data(sound_data_out_3)
    );

    spi_channel_to_sound i4 (
        .clk(clk),
        .spi_channel(spi_channel_4),
        .sound_data(sound_data_out_4)
    );

    spi_channel_to_sound i5 (
        .clk(clk),
        .spi_channel(spi_channel_5),
        .sound_data(sound_data_out_5)
    );

    spi_channel_to_sound i6 (
        .clk(clk),
        .spi_channel(spi_channel_6),
        .sound_data(sound_data_out_6)
    );

    spi_channel_to_sound i7 (
        .clk(clk),
        .spi_channel(spi_channel_7),
        .sound_data(sound_data_out_7)
    );

    eight_channel_mixer mixer (
        .a(sound_data_out_0),
        .b(sound_data_out_1),
        .c(sound_data_out_2),
        .d(sound_data_out_3),
        .e(sound_data_out_4),
        .f(sound_data_out_5),
        .g(sound_data_out_6),
        .h(sound_data_out_7),
        .dout(sound_data)
    );

endmodule