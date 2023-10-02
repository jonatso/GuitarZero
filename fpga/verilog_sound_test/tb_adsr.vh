`timescale 1ns/1ps

module tb_adsr_generator;

    reg clk;
    reg gate;
    reg [3:0] a, d, s, r;
    wire [7:0] amplitude;

    // Instantiate the adsr_generator module
    adsr_generator #(
        .SAMPLE_CLK_FREQ(44100),
        .ACCUMULATOR_BITS(26)
    ) uut (
        .clk(clk),
        .gate(gate),
        .a(a),
        .d(d),
        .s(s),
        .r(r),
        .amplitude(amplitude),
        .rst(1'b0) // Not connected to reset in your module
    );

    // Clock generation
    always begin
        #5 clk = ~clk;
    end

    integer file_descriptor;


    // Testbench stimulus
    initial begin
        // Initialize
        clk = 0;
        gate = 0;
        a = 4'd10;
        d = 4'd10;
        s = 4'd10;
        r = 4'd10;

        file_descriptor = $fopen("output/amplitude_output.txt", "w");

        // Apply test vectors
        #10000 gate = 1; // Start the envelope (Attack phase)
        // #10000 a = 4'd3; d = 4'd3; s = 4'd4; r = 4'd3; // Modify the ADSR parameters
        #20000 gate = 0; // Release the envelope (Release phase)
        #40000 gate = 1; // Start the envelope again (Attack phase)
        #50000 gate = 0; // Release the envelope (Release phase)
        #600000 $finish; // End the simulation
    end

    always @(posedge clk) begin
        $fwrite(file_descriptor, "%d\n", amplitude);
    end

endmodule
