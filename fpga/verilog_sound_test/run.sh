#!/bin/bash

mkdir output

# Compile the Verilog module and testbench
iverilog -o output/midi_player_tb midi_player.v tb_midi_player.v

# Run the simulation
vvp output/midi_player_tb

# Execute the Python script to convert sound_data.txt to output.wav
python3 convert_to_wav.py

echo "Simulation and conversion completed, playing sound!"

# Play the sound
afplay output/output.wav
