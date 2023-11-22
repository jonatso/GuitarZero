scaling_factor = 2 ** 24 / 44100.0

verilog_function = "function [23:0] midi_note_to_tone_freq;\n"
verilog_function += "    input [6:0] midi_note;\n"
verilog_function += "    begin\n"
verilog_function += "        case (midi_note)\n"

for midi_note in range(128):
    frequency = 440.0 * 2 ** ((midi_note - 69) / 12.0)
    scaled_frequency = int(frequency * scaling_factor)
    verilog_function += f"            7'd{midi_note}: midi_note_to_tone_freq = 24'd{scaled_frequency};\n"

verilog_function += "            default: midi_note_to_tone_freq = 24'd0;\n"
verilog_function += "        endcase\n"
verilog_function += "    end\n"
verilog_function += "endfunction\n"

print(verilog_function)