//taken and modified from https://github.com/gundy/tiny-synth/blob/develop/hdl/eight_bit_exponential_decay_lookup.vh

module eight_bit_exponential_decay_lookup (
   input wire [7:0] din,
   output wire [7:0] dout
 );

 reg [0:7] exp_lookup [0:255];
 initial $readmemh("data/exp_lookup_table.mem", exp_lookup);

 assign dout = exp_lookup[din];

endmodule

