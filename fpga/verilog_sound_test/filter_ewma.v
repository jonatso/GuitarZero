module filter_ewma 
(
    input clk,
    input wire [7:0] alpha,          // Scaling factor in fixed-point format
    input wire [15:0] din,   // unfiltered data in
    output reg [15:0] dout   // filtered data out
);

reg [15:0] prev_dout; // Stores the previous output value
reg [23:0] mult1, mult2; // Temporary variables for multiplications
reg [7:0] inv_alpha;

initial begin
    prev_dout = 0;
    dout = 0;
end

always @(posedge clk) begin
    // Calculate: alpha * din
    mult1 = alpha * din; 

    // Calculate: (1-alpha) * prev_dout
    inv_alpha = 8'b1111_1111 - alpha;
    mult2 = inv_alpha * prev_dout;

    // Sum both results and shift to get the correct precision
    dout = (mult1 + mult2) >> 8;
    prev_dout = dout; // Store the current output for the next iteration
end

endmodule
