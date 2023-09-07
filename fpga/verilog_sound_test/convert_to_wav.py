import numpy as np
from scipy.io.wavfile import write

# Read sound data from the file
with open('sound_data.txt', 'r') as f:
    data = [int(line.strip()) // 2 for line in f.readlines()]

    # Convert the data to a numpy array
    data = np.array(data, dtype=np.int16)


        # Parameters for the WAV file
    rate = 44100  # samples per second

    # Save the data to a WAV file
    write('output.wav', rate, data)
