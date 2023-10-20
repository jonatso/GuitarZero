#!/bin/bash

mkdir output

# Compile the Verilog module and testbench
iverilog -o output/instrument_tb instrument_1.v instrument_2.v instrument_3.v two_into_one_mixer.v tb_instrument.v

# Run the simulation
vvp output/instrument_tb

# Execute the Python script to convert sound_data.txt to output.wav
python3 convert_to_wav.py

echo "Simulation and conversion completed, playing sound!"

# Play the sound
afplay output/output.wav
