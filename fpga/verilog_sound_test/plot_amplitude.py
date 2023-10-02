import matplotlib.pyplot as plt
import numpy as np

with open('output/amplitude_output.txt', 'r') as f:
    # Read the data from the file
    data = [int(line.strip()) for line in f.readlines()]

    # plot all samples
    plt.plot(data)
    plt.ylabel("Amplitude")
    plt.xlabel("Time")
    plt.title("Amplitude")
    plt.show()
