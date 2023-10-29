import sys
import math
from mido import MidiFile, tempo2bpm


class Note:
    def __init__(
        self,
        amplitude: int,
        instrument: int,
        tone: int,
        user_played: int,
    ):
        self.amplitude = amplitude
        self.instrument = instrument
        self.tone = tone
        self.user_played = user_played


class Sixteenth:
    def __init__(
        self,
        note_indexes: list[int],
    ):
        self.number_of_notes = len(note_indexes)
        self.note_indexes = note_indexes


class Song:
    def __init__(
        self,
        bpm: int,
        length_in_measures: int,
        sixteenth_indexes: list[int],
        unique_sixteenths: list[Sixteenth],
        unique_notes: list[Note]
    ):
        self.bpm = bpm
        self.length_in_measures = length_in_measures
        self.number_of_unique_sixteenths = len(unique_sixteenths)
        self.number_of_unique_notes = len(unique_notes)
        self.sixteenth_indexes = sixteenth_indexes
        self.unique_sixteenths = unique_sixteenths
        self.unique_notes = unique_notes


def ticks_to_sixteenths(ticks_per_beat: int, ticks: int):
    return (ticks / ticks_per_beat) * 4


def midiToIR(filename: str):
    mid = MidiFile(filename)

    # All notes we have encountered during the song
    notes: list[Note] = []

    # First we get all notes in the song, along with their play times

    # Structure to hold when a Note is played. (index, start_sixteenth, stop_sixteenth)
    # Sixteehths are relative to start of song
    note_play_times: list[tuple[int, int, int]] = []

    # Structures to quickly see if we already have encountered a identical note
    note_indexes: dict[tuple[int, int, int], int] = {}

    bpm = 0

    # First track is control track
    for msg in mid.tracks[0]:
        if msg.type == "set_tempo":
            bpm = tempo2bpm(msg.tempo)

    for i, track in enumerate(mid.tracks[1:]):
        try:
            # The track name decides the instrument. "Player" is special, as it decides what notes should be played by the person playing
            if track.name == "Player":
                instrument = 0
            else:
                instrument = int(track.name)
        except ValueError:
            print(
                f"Rename track {track.name} if it is supposed to be mapped to an instrument")
            continue
        current_time = 0

        #[index, start_sixteenth]
        notes_currently_playing: map[int, int] = {}

        for msg in track:
            current_time += msg.time
            nearest_sixteenth = round(ticks_to_sixteenths(
                mid.ticks_per_beat, current_time))
            if msg.type not in ["note_on", "note_off"]:
                continue
            note_data = (msg.velocity, instrument, msg.note)
            if msg.type == "note_on":
                # Start note
                if note_data not in note_indexes:
                    # Create new notes
                    # Notes played by the user will map to one of the 5 rows (msg.note % 5)
                    notes.append(Note(msg.velocity, instrument, msg.note,
                                 0 if instrument > 0 else msg.note % 5))
                    note_indexes[note_data] = len(notes) - 1
                notes_currently_playing[
                    note_indexes[note_data]] = nearest_sixteenth
            elif msg.type == "note_off":
                # End note
                note_index = note_indexes[note_data]

                if note_index in notes_currently_playing:
                    start_sixteenth = notes_currently_playing[note_index]
                    end_sixteenth = nearest_sixteenth
                    note_play_times.append(
                        (note_index, start_sixteenth, end_sixteenth))

    length_in_measures = math.ceil(
        max([end for _, _, end in note_play_times]) / 16)

    # Unique sixteenths
    sixteenths: list[Sixteenth] = []

    sixteenth_indexes_in_song: list[int] = []

    for progress in range(length_in_measures * 16):
        # Find notes that should be playing at a given point
        playing_notes = [note[0]
                         for note in note_play_times if note[1] <= progress < note[2]]
        for i in range(len(sixteenths)):
            # If the combination of notes has been played before, add its index
            if sixteenths[i].note_indexes == playing_notes:
                sixteenth_indexes_in_song.append(i)
                break
        else:
            # If the combination has not been played, add it as a sixteenth
            sixteenth_indexes_in_song.append(len(sixteenths))
            sixteenths.append(Sixteenth(playing_notes))

    return Song(bpm, length_in_measures, sixteenth_indexes_in_song, sixteenths, notes)


def IRToHeader(song: Song, filename: str):
    class Out:
        def __init__(self):
            self.text = ""

        def add(self, text): self.text += text

        def addLn(self, line: str): self.text += line + "\n"

    out = Out()

    out.addLn('#include "mini_midi.h" \n')
    out.addLn("// Notes")

    for i, note in enumerate(song.unique_notes):
        out.addLn(f"note_t note{i} = {'{'}")
        out.addLn(f"  {note.amplitude},")
        out.addLn(f"  {note.instrument},")
        out.addLn(f"  {note.tone},")
        out.addLn(f"  {note.user_played}")
        out.addLn("};")

    out.add("note_t* unique_notes[] = {")
    indexes = list(range(song.number_of_unique_notes))
    out.add(",".join([f"&note{i}" for i in indexes]))
    out.addLn("};")

    out.addLn("// Sixteenths")

    for i, sixteenth in enumerate(song.unique_sixteenths):
        out.addLn(f"sixteenth_t sixteenth{i} = {'{'}")
        out.addLn(f"  {sixteenth.number_of_notes},")
        out.add(f"  (uint16_t[]){'{'}")
        out.add(",".join([str(i) for i in sixteenth.note_indexes]))
        out.addLn("}")
        out.addLn("};")

    out.add("sixteenth_t* unique_sixteenths[] = {")
    indexes = list(range(song.number_of_unique_sixteenths))
    out.add(",".join([f"&sixteenth{i}" for i in indexes]))
    out.addLn("};")

    out.addLn("// Song")
    out.add("uint16_t sixteenth_indexes[] = {")
    out.add(",".join(map(str, song.sixteenth_indexes)))
    out.addLn("};")
    out.addLn("song_t song = {")
    out.addLn(f"  {song.bpm},")
    out.addLn(f"  {song.length_in_measures},")
    out.addLn(f"  {song.number_of_unique_sixteenths},")
    out.addLn(f"  {song.number_of_unique_notes},")
    out.addLn("  sixteenth_indexes,")
    out.addLn("  unique_sixteenths,")
    out.addLn("  unique_notes")
    out.addLn("};")

    with open(filename, "w") as file:
        file.write(out.text)


def main():
    song = midiToIR(sys.argv[1] if len(sys.argv) >
                    1 else "GuitarHeroMCU/miniMIDIGeneration/all_star_w_player.mid")
    IRToHeader(song, "all_star.h")


if __name__ == "__main__":
    main()
