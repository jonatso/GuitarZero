// Outputs 3 different clocks at the frequencies needed for the DAC

`timescale 1ns / 1ps

module dac_clock_generator (
    input clk_in,          // Input clock: 16.93798 MHz, optimal would be 16.93440
    output lr_clk_out,     // Output clock: 44.10932kHz = 1.00021*44.1kHz
    output b_clk_out,      // Output clock: 1.4125MHz = 48.01014739 * 44.1kHz
    output sys_clk_out     // Output clock: 16.93798 MHz = 384.08 * 44.1kHz
);

// We use a word length of 24bit (16bit audio padded with 8 zeros), which gives us the following desired clock frequencies
// sampling feksvens = fs = 44.1 KHz
// left right clock = fs
// bit clock = 48*fs
// system clock = fs = 384*fs

// With an input clock of 16.93798 MHz, we get
// system clock: 16.93798 MHz is veeery close to 384*44.1kHz, so we use this as our system clock, and then we generate the other clock from it
// bit clock: should be 8 times as slow as system clock, so we switch the clock at a counter of 4
// left right clock: should be 384 times as slow as system clock, so we switch the clock at a counter of 192


parameter COUNT_LR = 192;    // Count for when to flip the left right clock
parameter COUNT_B = 4;       // Count for when to flip the bit clock

reg [7:0] lr_counter = 0;    // lr_counter, since 2^7 = 128
reg [1:0]  b_counter = 0;    // b_counter, since 2^2 = 4

reg lr_clk_reg = 0;
reg b_clk_reg = 0;

always @(posedge clk_in) begin

    if (lr_counter == COUNT_LR - 1) begin 
        lr_clk_reg = ~lr_clk_reg;         // Toggle the clock output
        lr_counter = 0;                   // Reset the clock
    end else 
        lr_counter = lr_counter + 1;      // Increment the clock
    
    if (b_counter == COUNT_B - 1) begin
        b_clk_reg = ~b_clk_reg;
        b_counter = 0;
    end else
        b_counter = b_counter + 1;
end

assign lr_clk_out = lr_clk_reg; 
assign b_clk_out = b_clk_reg; 
assign sys_clk_out = clk_in; 

endmodule

