`timescale 1ns/1ps
module main_spi_mcu (

    // MCU-SPI
    input wire mcu_clck,
    input wire mcu_mosi,
    output wire mcu_miso,
    input wire mcu_cs,

    // DAC-I2S
    output wire dac_data,
    output wire dac_lrclck,
    output wire dac_sysclck,
    output wire dac_bclck,

    // DEBUG-LEDS
    output wire led1,
    output wire led2,

    // Oscillator
    input wire osc
);


    // Create all needed variables

    wire [15:0] sound_data; // sound data generated from the spi
    wire signed [15:0] signed_sound_data; // sound data, but converted to signed numbers
    wire signed_ound_data_bit; // one bit at a time from signed_sound_data, to send to the DAC
    
    reg [15:0] reg_led_counter = 0; // just used to see that the FPGA is flashed with the right program
    
    wire lr_clk;    // 44.1 kHz: both sampling clock and left right clock to DAC
    wire b_clk;     // 1.41MHz: bit clock to DAC
    wire sys_clk;   // 16.9MHz: system clock to DAC


    // Assign the outputto the right variables
    assign dac_data = signed_ound_data_bit;
    assign dac_bclck = b_clk;
    assign dac_lrclck = lr_clk;
    assign dac_sysclck = sys_clk;

    assign led1 = reg_led_counter[15];
    assign led2 = reg_led_counter[14];
    

    // Generate a high frequency clock with clock wizard
    clk_wiz_1 clock (
        .clk_out1(clk_out1),
        .reset(0), // input reset
        .clk_in1(osc) // input clk_in1
    );
    
    // Generate right clock frequencies for DAC and sampling
    dac_clock_generator sound_clock (
        .clk_in(clk_out1),
        .lr_clk_out(lr_clk),
        .b_clk_out(b_clk),
        .sys_clk_out(sys_clk)
    );
    
    // Receive data from MCU over SPI
    wire [15:0] spi_output;
    wire spi_done;
    spi_slave spi (
        .clk(clk_out1),
        .rst(0),
        .ss(mcu_cs),
        .mosi(mcu_mosi),
        .miso(mcu_miso), // no need for miso as we don't send data back to master
        .sck(mcu_clck),
        .done(spi_done),
        .din(8'd0),
        .dout(spi_output)
    );

    // Divide spi data into 8 channels
    wire [15:0] spi_channel_0;
    wire [15:0] spi_channel_1;
    wire [15:0] spi_channel_2;
    wire [15:0] spi_channel_3;
    wire [15:0] spi_channel_4;
    wire [15:0] spi_channel_5;
    wire [15:0] spi_channel_6;
    wire [15:0] spi_channel_7;
    spi_to_spi_channels spi_to_spi_channels1 (
        .clk(clk_out1),
        .spi_data(spi_output),
        .spi_done(spi_done),
        .spi_channel_0(spi_channel_0),
        .spi_channel_1(spi_channel_1),
        .spi_channel_2(spi_channel_2),
        .spi_channel_3(spi_channel_3),
        .spi_channel_4(spi_channel_4),
        .spi_channel_5(spi_channel_5),
        .spi_channel_6(spi_channel_6),
        .spi_channel_7(spi_channel_7)
    );

    // Generate sound data from each spi channel and mix to one outputted sound data
    spi_channels_to_sound_data spi_channels_to_sound_data1 (
        .clk(lr_clk),
        .spi_channel_0(spi_channel_0),
        .spi_channel_1(spi_channel_1),
        .spi_channel_2(spi_channel_2),
        .spi_channel_3(spi_channel_3),
        .spi_channel_4(spi_channel_4),
        .spi_channel_5(spi_channel_5),
        .spi_channel_6(spi_channel_6),
        .spi_channel_7(spi_channel_7),
        .sound_data(sound_data)
    );

    // Scale the sound data to use signed numbers
    scale_unsigned_to_signed scale_unsigned_to_signed1 (
        .unsigned_data(sound_data),
        .signed_data(signed_sound_data)
    );

    // Send the sound data to DAC over I2S
    i2s_sender i2s_sender1 (
        .b_clk(b_clk),
        .sound_data_in(signed_sound_data),
        .sound_data_out(signed_ound_data_bit)
    );

    // Increment the led counter, to make the leds blink:)
    always @(posedge lr_clk) begin
        reg_led_counter <= reg_led_counter + 1;
    end

endmodule
