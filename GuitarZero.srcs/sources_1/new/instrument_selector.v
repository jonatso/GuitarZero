// Selects an instrument given by instrument_select
// and sends the input further down to output sound_data from that instrument

module instrument_selector(
    input wire clk,
    input wire [6:0] midi_data,
    input wire midi_enable,
    input wire [7:0] amplitude,
    input wire [2:0] instrument_select,
    output wire [15:0] sound_data
    );

    wire [15:0] output0;
    wire [15:0] output1;
    wire [15:0] output2;
    wire [15:0] output3;
    wire [15:0] output4;

    wire [15:0] silent = 2**15;
    
    /*instrument_0 instr0 (
        .clk(clk),
        .midi_data(midi_data),
        .midi_enable(midi_enable),
        .amplitude(amplitude),
        .sound_data(output0)
    );*/

    instrument_1 instr1 (
        .clk(clk),
        .midi_data(midi_data),
        .midi_enable(midi_enable),
        .amplitude(amplitude),
        .sound_data(output1)
    );

    instrument_2 instr2 (
        .clk(clk),
        .midi_data(midi_data),
        .midi_enable(midi_enable),
        .amplitude(amplitude),
        .sound_data(output2)
    );

    instrument_3 instr3 ( 
        .clk(clk),
        .midi_data(midi_data),
        .midi_enable(midi_enable),
        .amplitude(amplitude),
        .sound_data(output3)
    );

    instrument_4 instr4 ( 
        .clk(clk),
        .midi_data(midi_data),
        .midi_enable(midi_enable),
        .amplitude(amplitude),
        .sound_data(output4)
    );

    assign sound_data = instrument_select == 0 ? silent : 
                        instrument_select == 1 ? output1 :
                        instrument_select == 2 ? output1 :
                        instrument_select == 3 ? output2 :
                        instrument_select == 4 ? output3 :
                        instrument_select == 5 ? output4 :
                        instrument_select == 6 ? output0 :
                        output1;
endmodule
