// Outputs one bit at a time at sound_data_out from sound_data_in at a clock rate of b_clk

module i2s_sender #(
)(
	input b_clk,
	input [15:0] sound_data_in,
	output wire sound_data_out
);

reg [4:0] bit_count;
reg sound_data_out_reg;

// set the audio as the MSB of 24 bit output signal
wire [23:0] sound_data = {sound_data_in, 8'b0};

assign sound_data_out = sound_data_out_reg;

always @(negedge b_clk) begin
	// send MSB one bit, starting with MSB first
	sound_data_out_reg = sound_data[23 - bit_count];
	 
	// Increment counter or reset it if all bits have been sent
	if (bit_count == 23) begin
		bit_count = 0;
	end else 
		bit_count = bit_count + 1;
end

endmodule