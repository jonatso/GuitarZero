iverilog -o output/asdr_tb adsr_generator.vh tb_adsr.vh
vvp output/asdr_tb
python3 plot_amplitude.py
