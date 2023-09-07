module midi_player(
    input wire clk,
    input wire [7:0] midi_data,
    input wire midi_valid,
    output reg [15:0] sound_data,
    output reg sound_valid
);

    reg [15:0] note_duration [127:0];

    initial begin
        // note_duration[60] = 500; // Middle C
        // note_duration[61] = 450; // C#
        // note_duration[62] = 400; // D
        note_duration[0] = 16'd15990;
        note_duration[1] = 16'd15103;
        note_duration[2] = 16'd14248;
        note_duration[3] = 16'd13456;
        note_duration[4] = 16'd12699;
        note_duration[5] = 16'd11989;
        note_duration[6] = 16'd11314;
        note_duration[7] = 16'd10677;
        note_duration[8] = 16'd10077;
        note_duration[9] = 16'd9512;
        note_duration[10] = 16'd8977;
        note_duration[11] = 16'd8477;
        note_duration[12] = 16'd8000;
        note_duration[13] = 16'd7551;
        note_duration[14] = 16'd7128;
        note_duration[15] = 16'd6724;
        note_duration[16] = 16'd6349;
        note_duration[17] = 16'd5991;
        note_duration[18] = 16'd5657;
        note_duration[19] = 16'd5338;
        note_duration[20] = 16'd5038;
        note_duration[21] = 16'd4756;
        note_duration[22] = 16'd4488;
        note_duration[23] = 16'd4237;
        note_duration[24] = 16'd4000;
        note_duration[25] = 16'd3774;
        note_duration[26] = 16'd3563;
        note_duration[27] = 16'd3363;
        note_duration[28] = 16'd3174;
        note_duration[29] = 16'd2996;
        note_duration[30] = 16'd2828;
        note_duration[31] = 16'd2669;
        note_duration[32] = 16'd2519;
        note_duration[33] = 16'd2378;
        note_duration[34] = 16'd2244;
        note_duration[35] = 16'd2118;
        note_duration[36] = 16'd1999;
        note_duration[37] = 16'd1887;
        note_duration[38] = 16'd1781;
        note_duration[39] = 16'd1681;
        note_duration[40] = 16'd1587;
        note_duration[41] = 16'd1498;
        note_duration[42] = 16'd1414;
        note_duration[43] = 16'd1334;
        note_duration[44] = 16'd1260;
        note_duration[45] = 16'd1189;
        note_duration[46] = 16'd1122;
        note_duration[47] = 16'd1059;
        note_duration[48] = 16'd1000;
        note_duration[49] = 16'd943;
        note_duration[50] = 16'd891;
        note_duration[51] = 16'd840;
        note_duration[52] = 16'd793;
        note_duration[53] = 16'd749;
        note_duration[54] = 16'd707;
        note_duration[55] = 16'd667;
        note_duration[56] = 16'd629;
        note_duration[57] = 16'd594;
        note_duration[58] = 16'd561;
        note_duration[59] = 16'd529;
        note_duration[60] = 16'd500;
        note_duration[61] = 16'd471;
        note_duration[62] = 16'd445;
        note_duration[63] = 16'd420;
        note_duration[64] = 16'd396;
        note_duration[65] = 16'd374;
        note_duration[66] = 16'd353;
        note_duration[67] = 16'd333;
        note_duration[68] = 16'd314;
        note_duration[69] = 16'd297;
        note_duration[70] = 16'd280;
        note_duration[71] = 16'd264;
        note_duration[72] = 16'd249;
        note_duration[73] = 16'd235;
        note_duration[74] = 16'd222;
        note_duration[75] = 16'd210;
        note_duration[76] = 16'd198;
        note_duration[77] = 16'd187;
        note_duration[78] = 16'd176;
        note_duration[79] = 16'd166;
        note_duration[80] = 16'd157;
        note_duration[81] = 16'd148;
        note_duration[82] = 16'd140;
        note_duration[83] = 16'd132;
        note_duration[84] = 16'd124;
        note_duration[85] = 16'd117;
        note_duration[86] = 16'd111;
        note_duration[87] = 16'd105;
        note_duration[88] = 16'd99;
        note_duration[89] = 16'd93;
        note_duration[90] = 16'd88;
        note_duration[91] = 16'd83;
        note_duration[92] = 16'd78;
        note_duration[93] = 16'd74;
        note_duration[94] = 16'd70;
        note_duration[95] = 16'd66;
        note_duration[96] = 16'd62;
        note_duration[97] = 16'd58;
        note_duration[98] = 16'd55;
        note_duration[99] = 16'd52;
        note_duration[100] = 16'd49;
        note_duration[101] = 16'd46;
        note_duration[102] = 16'd44;
        note_duration[103] = 16'd41;
        note_duration[104] = 16'd39;
        note_duration[105] = 16'd37;
        note_duration[106] = 16'd35;
        note_duration[107] = 16'd33;
        note_duration[108] = 16'd31;
        note_duration[109] = 16'd29;
        note_duration[110] = 16'd27;
        note_duration[111] = 16'd26;
        note_duration[112] = 16'd24;
        note_duration[113] = 16'd23;
        note_duration[114] = 16'd22;
        note_duration[115] = 16'd20;
        note_duration[116] = 16'd19;
        note_duration[117] = 16'd18;
        note_duration[118] = 16'd17;
        note_duration[119] = 16'd16;
        note_duration[120] = 16'd15;
        note_duration[121] = 16'd14;
        note_duration[122] = 16'd13;
        note_duration[123] = 16'd13;
        note_duration[124] = 16'd12;
        note_duration[125] = 16'd11;
        note_duration[126] = 16'd11;
        note_duration[127] = 16'd10;
    end

    reg [15:0] current_freq = 0;
    reg [15:0] counter = 0;

    always @(posedge clk) begin
        if (midi_valid) begin
            current_freq <= note_duration[midi_data];
        end

        if (counter < current_freq) begin
            counter <= counter + 1;
            sound_valid <= 0;
        end else if (counter < 2*current_freq) begin
            counter <= counter + 1;
            sound_valid <= 1;
        end else begin
            counter <= 0;
        end
    end

    always @(sound_valid or counter) begin
        if (sound_valid) 
            sound_data <= 16'hFFFF; // Max volume square wave
        else
            sound_data <= 16'h0000;
    end

endmodule

