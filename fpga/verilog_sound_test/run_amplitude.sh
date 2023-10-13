iverilog -o output/asdr_tb adsr_generator.v tb_adsr.v
vvp output/asdr_tb
python3 plot_amplitude.py
