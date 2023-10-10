iverilog -o output/asdr_tb adsr_generator tb_adsr.v
vvp output/asdr_tb
python3 plot_amplitude.py
