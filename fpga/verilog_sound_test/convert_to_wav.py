import matplotlib.pyplot as plt
import numpy as np
from scipy.io.wavfile import write


# Read sound data from the file
with open('output/sound_data.txt', 'r') as f:
    data = [int(line.strip()) - 32768 for line in f.readlines()]

    # Convert the data to a numpy array
    data = np.array(data, dtype=np.int16)


        # Parameters for the WAV file
    rate = 44100  # samples per second

    # Save the data to a WAV file
    write('output/output.wav', rate, data)

    # # plot first 4096 samples
    # plt.plot(data[:4096])

    # # Plot a line at midpoint, and upper and lower bounds
    # plt.plot([0, 4096], [0, 0], color='black', linestyle='--')
    # plt.plot([0, 4096], [2**15, 2**15], color='black', linestyle='--')
    # plt.plot([0, 4096], [-2**15, -2**15], color='black', linestyle='--')

    # plt.ylabel("Amplitude")
    # plt.xlabel("Time")
    # plt.title("Sample Wav")
    # plt.show()

    
