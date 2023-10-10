module simple_reverb #(
  parameter DATA_BITS = 16,
  parameter DELAY_LENGTH = 1024 // Define the delay length (can be adjusted for more/less reverb)
) (
  input wire clk,
  input wire enable,
  input [7:0] reverb_alpha,  // Weighting factor for the delayed sample
  input wire [DATA_BITS-1:0] din,   
  output reg [DATA_BITS-1:0] dout
);

  reg [DATA_BITS-1:0] delay_line [0:DELAY_LENGTH-1];
  reg [$clog2(DELAY_LENGTH)-1:0] delay_line_pointer;
  integer i;

  always @(posedge clk) begin
    if(enable) begin
      // Update the delay line at the current delay_line_pointer
      delay_line[delay_line_pointer] <= din;

      // Produce the reverb output by mixing the input and delayed sample
      dout <= din + (reverb_alpha * delay_line[(delay_line_pointer + DELAY_LENGTH - 1) % DELAY_LENGTH] >> 8);

      // Update the delay_line_pointer for the next cycle
      delay_line_pointer <= (delay_line_pointer + 1) % DELAY_LENGTH;
    end
    else begin
      // If the reverb is disabled, just pass the input through
      dout <= din;
    end
  end

  // Initialization to avoid X values
  initial begin
    dout = 0;
    delay_line_pointer = 0;
    for (i = 0; i < DELAY_LENGTH; i = i + 1) begin
      delay_line[i] = 0;
    end
  end

endmodule
