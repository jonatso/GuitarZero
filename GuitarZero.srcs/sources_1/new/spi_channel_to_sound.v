// Splits the spi data on this channel into midi_enable, midi_data, amplitude and instrument_select
// and sends it further down to output sound_data

module spi_channel_to_sound (
    input wire clk,
    input wire [15:0] spi_channel,
    output wire [15:0] sound_data
);

    // Split spi channel into correct sound signals
    wire midi_enable = spi_channel[2:0] == 3'b000 ? 0 : 1; // midi signal is disabled by choosing instrument 0
    wire [6:0] midi_data = spi_channel[15:9];
    wire [7:0] amplitude = {spi_channel[8:3], 2'b00}; // only 6 bit from SPI, need to pad 2 0s
    wire [2:0] instrument_select = spi_channel[2:0];

    instrument_selector i0 (
        .clk(clk),
        .midi_enable(midi_enable),
        .midi_data(midi_data),
        .amplitude(amplitude),
        .instrument_select(instrument_select),
        .sound_data(sound_data)
    );

endmodule