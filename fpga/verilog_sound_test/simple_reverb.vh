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
  integer i;

  always @(posedge clk) begin
    if(enable) begin
      // Shift samples in the delay line
      for (i = DELAY_LENGTH-1; i > 0; i = i - 1) begin
        delay_line[i] <= delay_line[i - 1];
      end
      delay_line[0] <= din;

      // Produce the reverb output by mixing the input and delayed sample
      dout <= din + (reverb_alpha * delay_line[DELAY_LENGTH-1] >> 8);
    end
  end

  // Initialization to avoid X values
  initial begin
    dout = 0;
    for (i = 0; i < DELAY_LENGTH; i = i + 1) begin
      delay_line[i] = 0;
    end
  end

endmodule
