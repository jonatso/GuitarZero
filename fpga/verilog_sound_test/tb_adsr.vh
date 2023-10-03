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
        a = 4'h9;
        d = 4'h9;
        s = 4'hC;
        r = 4'h7;

        file_descriptor = $fopen("output/amplitude_output.txt", "w");

        // Apply test vectors
        gate = 1;
        #500000;
        gate = 0;
        #200000;

        gate = 1;
        #300000;
        gate = 0;
        #200000;

        gate = 1;
        #300000;
        gate = 0;
        #200;
        gate = 1;

        #500000;
        gate = 0;


        #200000 $finish; // End the simulation
    end

    always @(posedge clk) begin
        // $display("Amplitude: %d", amplitude);
        $fwrite(file_descriptor, "%d\n", amplitude);
    end

endmodule
