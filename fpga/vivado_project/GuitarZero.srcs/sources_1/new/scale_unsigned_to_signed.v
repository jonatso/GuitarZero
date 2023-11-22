// Outputs the input, but signed

module scale_unsigned_to_signed (
    input [15:0] unsigned_data,
    output signed [15:0] signed_data
);

assign signed_data = unsigned_data - 16'd32768;

endmodule