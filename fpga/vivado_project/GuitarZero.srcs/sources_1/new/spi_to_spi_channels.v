// Splits the spi data into 8 channels
// This module is basically just an advanced counter: first channel 0 is sent over spi, then channel 2, etc
// We just save them into the registers here

module spi_to_spi_channels (
    input clk,
    input [15:0] spi_data,
    input spi_done,
    output reg [15:0] spi_channel_0,
    output reg [15:0] spi_channel_1,
    output reg [15:0] spi_channel_2,
    output reg [15:0] spi_channel_3,
    output reg [15:0] spi_channel_4,
    output reg [15:0] spi_channel_5,
    output reg [15:0] spi_channel_6,
    output reg [15:0] spi_channel_7
);

reg [2:0] counter = 3'b000;
reg spi_done_prev = 0;

initial begin 
    spi_channel_0 <= 0;
    spi_channel_1 <= 0;
    spi_channel_2 <= 0;
    spi_channel_3 <= 0;
    spi_channel_4 <= 0;
    spi_channel_5 <= 0;
    spi_channel_6 <= 0;
    spi_channel_7 <= 0;
end

// Update the counter and the right spi_channel on spi_done signal transition from low to high
always @(posedge clk) begin
    if (spi_done && !spi_done_prev) begin
        case (counter)
            3'b000: spi_channel_0 <= spi_data;
            3'b001: spi_channel_1 <= spi_data;
            3'b010: spi_channel_2 <= spi_data;
            3'b011: spi_channel_3 <= spi_data;
            3'b100: spi_channel_4 <= spi_data;
            3'b101: spi_channel_5 <= spi_data;
            3'b110: spi_channel_6 <= spi_data;
            3'b111: spi_channel_7 <= spi_data;
        endcase
        counter <= counter + 1;
    end
    spi_done_prev <= spi_done;
end

endmodule
