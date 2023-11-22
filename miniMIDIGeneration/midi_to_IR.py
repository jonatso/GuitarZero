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
        lead: bool,
    ):
        self.amplitude = amplitude
        self.instrument = instrument
        self.tone = tone
        self.user_played = user_played
        self.lead = lead


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
        name: str,
        bpm: int,
        length_in_measures: int,
        sixteenth_indexes: list[int],
        unique_sixteenths: list[Sixteenth],
        unique_notes: list[Note],
    ):
        self.name = name
        self.bpm = bpm
        self.length_in_measures = length_in_measures
        self.number_of_unique_sixteenths = len(unique_sixteenths)
        self.number_of_unique_notes = len(unique_notes)
        self.sixteenth_indexes = sixteenth_indexes
        self.unique_sixteenths = unique_sixteenths
        self.unique_notes = unique_notes


def ticks_to_sixteenths(ticks_per_beat: int, ticks: int):
    return (ticks / ticks_per_beat) * 4


def midiToIR(filename: str, name: str):
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
            bpm = round(tempo2bpm(msg.tempo))

    for i, track in enumerate(mid.tracks):
        lead = False
        try:
            # The track name decides the instrument. "Player" is special, as it decides what notes should be played by the person playing
            if track.name == "Player":
                instrument = 0
            elif track.name.startswith("l"):
                lead = True
                instrument = int(track.name[1:])
            else:
                instrument = int(track.name)
        except ValueError:
            print(
                f"Rename track {track.name} if it is supposed to be mapped to an instrument"
            )
            continue
        current_time = 0

        # [index, start_sixteenth]
        notes_currently_playing: map[int, int] = {}

        for msg in track:
            current_time += msg.time
            nearest_sixteenth = round(
                ticks_to_sixteenths(mid.ticks_per_beat, current_time)
            )
            if msg.type not in ["note_on", "note_off"]:
                continue
            note_data = (msg.velocity, instrument, msg.note)
            if msg.type == "note_on":
                # Start note
                if note_data not in note_indexes:
                    # Create new notes
                    # Notes played by the user will map to one of the 5 rows (msg.note % 5)
                    notes.append(
                        Note(
                            msg.velocity,
                            instrument,
                            msg.note,
                            0 if instrument > 0 else (msg.note % 5 + 1),
                            lead,
                        )
                    )
                    note_indexes[note_data] = len(notes) - 1
                # Notes played by the user are cut down to one sixteenth
                if instrument > 0:
                    notes_currently_playing[note_indexes[note_data]] = nearest_sixteenth
                else:
                    note_play_times.append(
                        (len(notes) - 1, nearest_sixteenth, nearest_sixteenth + 1)
                    )
            elif msg.type == "note_off" and instrument > 0:
                # End note
                note_index = note_indexes[note_data]

                if note_index in notes_currently_playing:
                    start_sixteenth = notes_currently_playing[note_index]
                    end_sixteenth = nearest_sixteenth
                    note_play_times.append((note_index, start_sixteenth, end_sixteenth))

    length_in_measures = math.ceil(max([end for _, _, end in note_play_times]) / 16)

    # Unique sixteenths
    sixteenths: list[Sixteenth] = []

    sixteenth_indexes_in_song: list[int] = []

    for progress in range(length_in_measures * 16):
        # Find notes that should be playing at a given point
        playing_notes = [
            note[0] for note in note_play_times if note[1] <= progress < note[2]
        ]
        for i in range(len(sixteenths)):
            # If the combination of notes has been played before, add its index
            if sixteenths[i].note_indexes == playing_notes:
                sixteenth_indexes_in_song.append(i)
                break
        else:
            # If the combination has not been played, add it as a sixteenth
            sixteenth_indexes_in_song.append(len(sixteenths))
            sixteenths.append(Sixteenth(playing_notes))

    return Song(
        name, bpm, length_in_measures, sixteenth_indexes_in_song, sixteenths, notes
    )


def IRToHeader(song: Song, filename: str):
    prefix = song.name.lower().replace(" ", "_")

    class Out:
        def __init__(self):
            self.text = ""

        def add(self, text):
            self.text += text

        def addLn(self, line: str):
            self.text += line + "\n"

    out = Out()

    out.addLn('#include "mini_midi.h"')
    out.addLn("#include <stdbool.h>\n")
    out.addLn("// Notes")

    for i, note in enumerate(song.unique_notes):
        out.addLn(f"note_t {prefix}_note{i} = {'{'}")
        out.addLn(f"  {note.amplitude},")
        out.addLn(f"  {note.instrument},")
        out.addLn(f"  {note.tone},")
        out.addLn(f"  {note.user_played},")
        out.addLn(f"  {'true' if note.lead else 'false'}")
        out.addLn("};")

    out.add(f"note_t* {prefix}_unique_notes[] = {'{'}")
    indexes = list(range(song.number_of_unique_notes))
    out.add(",".join([f"&{prefix}_note{i}" for i in indexes]))
    out.addLn("};")

    out.addLn("// Sixteenths")

    for i, sixteenth in enumerate(song.unique_sixteenths):
        out.addLn(f"sixteenth_t {prefix}_sixteenth{i} = {'{'}")
        out.addLn(f"  {sixteenth.number_of_notes},")
        out.add(f"  (uint16_t[]){'{'}")
        out.add(",".join([str(i) for i in sixteenth.note_indexes]))
        out.addLn("}")
        out.addLn("};")

    out.add(f"sixteenth_t* {prefix}_unique_sixteenths[] = {'{'}")
    indexes = list(range(song.number_of_unique_sixteenths))
    out.add(",".join([f"&{prefix}_sixteenth{i}" for i in indexes]))
    out.addLn("};")

    out.addLn("// Song")
    out.add(f"uint16_t {prefix}_sixteenth_indexes[] = {'{'}")
    out.add(",".join(map(str, song.sixteenth_indexes)))
    out.addLn("};")
    out.addLn(f"song_t {prefix}_song = {'{'}")
    out.addLn(f'  "{song.name}",')
    out.addLn(f"  {song.bpm},")
    out.addLn(f"  {song.length_in_measures},")
    out.addLn(f"  {song.number_of_unique_sixteenths},")
    out.addLn(f"  {song.number_of_unique_notes},")
    out.addLn(f"  {prefix}_sixteenth_indexes,")
    out.addLn(f"  {prefix}_unique_sixteenths,")
    out.addLn(f"  {prefix}_unique_notes")
    out.addLn("};")

    with open(filename, "w") as file:
        file.write(out.text)


def main():
    if len(sys.argv) > 1:
        song = midiToIR(sys.argv[1], sys.argv[2])
    else:
        song = midiToIR(
            "GuitarHeroMCU/miniMIDIGeneration/all_star_w_player.mid", "All Star"
        )
    IRToHeader(
        song,
        song.name.lower().replace(" ", "_") + ".h"
        if len(sys.argv) > 2
        else "all_star.h",
    )


if __name__ == "__main__":
    main()
