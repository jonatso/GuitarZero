/*
 * mini_midi_transfer.h
 *
 *  Created on: Oct 18, 2023
 *      Author: vetle
 */

#ifndef SRC_MINI_MIDI_TRANSFER_H_
#define SRC_MINI_MIDI_TRANSFER_H_

void reorder_note_array(note_t **note_array, note_t **prev_notes, int *included,
                        int *reserved);
void send_notes(song_t song, int progress_in_milliseconds);
#endif /* SRC_MINI_MIDI_TRANSFER_H_ */
