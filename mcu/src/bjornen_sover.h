#include "mini_midi.h"
#include <stdbool.h>

// Notes
note_t bjornen_sover_note0 = {
  68,
  2,
  52,
  0,
  false
};
note_t bjornen_sover_note1 = {
  68,
  2,
  48,
  0,
  false
};
note_t bjornen_sover_note2 = {
  68,
  2,
  55,
  0,
  false
};
note_t bjornen_sover_note3 = {
  75,
  2,
  47,
  0,
  false
};
note_t bjornen_sover_note4 = {
  75,
  2,
  50,
  0,
  false
};
note_t bjornen_sover_note5 = {
  75,
  2,
  55,
  0,
  false
};
note_t bjornen_sover_note6 = {
  74,
  2,
  55,
  0,
  false
};
note_t bjornen_sover_note7 = {
  74,
  2,
  52,
  0,
  false
};
note_t bjornen_sover_note8 = {
  74,
  2,
  48,
  0,
  false
};
note_t bjornen_sover_note9 = {
  77,
  2,
  47,
  0,
  false
};
note_t bjornen_sover_note10 = {
  77,
  2,
  50,
  0,
  false
};
note_t bjornen_sover_note11 = {
  77,
  2,
  55,
  0,
  false
};
note_t bjornen_sover_note12 = {
  76,
  2,
  55,
  0,
  false
};
note_t bjornen_sover_note13 = {
  76,
  2,
  52,
  0,
  false
};
note_t bjornen_sover_note14 = {
  76,
  2,
  48,
  0,
  false
};
note_t bjornen_sover_note15 = {
  72,
  2,
  55,
  0,
  false
};
note_t bjornen_sover_note16 = {
  72,
  2,
  52,
  0,
  false
};
note_t bjornen_sover_note17 = {
  72,
  2,
  48,
  0,
  false
};
note_t bjornen_sover_note18 = {
  92,
  2,
  55,
  0,
  false
};
note_t bjornen_sover_note19 = {
  92,
  2,
  50,
  0,
  false
};
note_t bjornen_sover_note20 = {
  92,
  2,
  47,
  0,
  false
};
note_t bjornen_sover_note21 = {
  79,
  2,
  48,
  0,
  false
};
note_t bjornen_sover_note22 = {
  79,
  2,
  52,
  0,
  false
};
note_t bjornen_sover_note23 = {
  79,
  2,
  55,
  0,
  false
};
note_t bjornen_sover_note24 = {
  69,
  4,
  60,
  0,
  true
};
note_t bjornen_sover_note25 = {
  77,
  4,
  60,
  0,
  true
};
note_t bjornen_sover_note26 = {
  75,
  4,
  60,
  0,
  true
};
note_t bjornen_sover_note27 = {
  84,
  4,
  64,
  0,
  true
};
note_t bjornen_sover_note28 = {
  72,
  4,
  62,
  0,
  true
};
note_t bjornen_sover_note29 = {
  77,
  4,
  62,
  0,
  true
};
note_t bjornen_sover_note30 = {
  75,
  4,
  62,
  0,
  true
};
note_t bjornen_sover_note31 = {
  79,
  4,
  65,
  0,
  true
};
note_t bjornen_sover_note32 = {
  76,
  4,
  64,
  0,
  true
};
note_t bjornen_sover_note33 = {
  70,
  4,
  62,
  0,
  true
};
note_t bjornen_sover_note34 = {
  74,
  4,
  60,
  0,
  true
};
note_t bjornen_sover_note35 = {
  89,
  4,
  64,
  0,
  true
};
note_t bjornen_sover_note36 = {
  75,
  4,
  64,
  0,
  true
};
note_t bjornen_sover_note37 = {
  77,
  4,
  64,
  0,
  true
};
note_t bjornen_sover_note38 = {
  69,
  4,
  64,
  0,
  true
};
note_t bjornen_sover_note39 = {
  83,
  4,
  67,
  0,
  true
};
note_t bjornen_sover_note40 = {
  77,
  4,
  65,
  0,
  true
};
note_t bjornen_sover_note41 = {
  76,
  4,
  62,
  0,
  true
};
note_t bjornen_sover_note42 = {
  83,
  4,
  65,
  0,
  true
};
note_t bjornen_sover_note43 = {
  70,
  4,
  64,
  0,
  true
};
note_t bjornen_sover_note44 = {
  65,
  4,
  60,
  0,
  true
};
note_t bjornen_sover_note45 = {
  79,
  4,
  62,
  0,
  true
};
note_t bjornen_sover_note46 = {
  86,
  4,
  65,
  0,
  true
};
note_t bjornen_sover_note47 = {
  74,
  4,
  64,
  0,
  true
};
note_t bjornen_sover_note48 = {
  69,
  4,
  62,
  0,
  true
};
note_t bjornen_sover_note49 = {
  69,
  0,
  60,
  1,
  false
};
note_t bjornen_sover_note50 = {
  77,
  0,
  60,
  1,
  false
};
note_t bjornen_sover_note51 = {
  75,
  0,
  60,
  1,
  false
};
note_t bjornen_sover_note52 = {
  84,
  0,
  64,
  5,
  false
};
note_t bjornen_sover_note53 = {
  72,
  0,
  62,
  3,
  false
};
note_t bjornen_sover_note54 = {
  77,
  0,
  62,
  3,
  false
};
note_t bjornen_sover_note55 = {
  75,
  0,
  62,
  3,
  false
};
note_t bjornen_sover_note56 = {
  79,
  0,
  65,
  1,
  false
};
note_t bjornen_sover_note57 = {
  76,
  0,
  64,
  5,
  false
};
note_t bjornen_sover_note58 = {
  70,
  0,
  62,
  3,
  false
};
note_t bjornen_sover_note59 = {
  74,
  0,
  60,
  1,
  false
};
note_t bjornen_sover_note60 = {
  89,
  0,
  64,
  5,
  false
};
note_t bjornen_sover_note61 = {
  75,
  0,
  64,
  5,
  false
};
note_t bjornen_sover_note62 = {
  77,
  0,
  64,
  5,
  false
};
note_t bjornen_sover_note63 = {
  69,
  0,
  64,
  5,
  false
};
note_t bjornen_sover_note64 = {
  83,
  0,
  67,
  3,
  false
};
note_t bjornen_sover_note65 = {
  77,
  0,
  65,
  1,
  false
};
note_t bjornen_sover_note66 = {
  76,
  0,
  62,
  3,
  false
};
note_t bjornen_sover_note67 = {
  83,
  0,
  65,
  1,
  false
};
note_t bjornen_sover_note68 = {
  70,
  0,
  64,
  5,
  false
};
note_t bjornen_sover_note69 = {
  65,
  0,
  60,
  1,
  false
};
note_t bjornen_sover_note70 = {
  79,
  0,
  62,
  3,
  false
};
note_t bjornen_sover_note71 = {
  86,
  0,
  65,
  1,
  false
};
note_t bjornen_sover_note72 = {
  74,
  0,
  64,
  5,
  false
};
note_t bjornen_sover_note73 = {
  69,
  0,
  62,
  3,
  false
};
note_t* bjornen_sover_unique_notes[] = {&bjornen_sover_note0,&bjornen_sover_note1,&bjornen_sover_note2,&bjornen_sover_note3,&bjornen_sover_note4,&bjornen_sover_note5,&bjornen_sover_note6,&bjornen_sover_note7,&bjornen_sover_note8,&bjornen_sover_note9,&bjornen_sover_note10,&bjornen_sover_note11,&bjornen_sover_note12,&bjornen_sover_note13,&bjornen_sover_note14,&bjornen_sover_note15,&bjornen_sover_note16,&bjornen_sover_note17,&bjornen_sover_note18,&bjornen_sover_note19,&bjornen_sover_note20,&bjornen_sover_note21,&bjornen_sover_note22,&bjornen_sover_note23,&bjornen_sover_note24,&bjornen_sover_note25,&bjornen_sover_note26,&bjornen_sover_note27,&bjornen_sover_note28,&bjornen_sover_note29,&bjornen_sover_note30,&bjornen_sover_note31,&bjornen_sover_note32,&bjornen_sover_note33,&bjornen_sover_note34,&bjornen_sover_note35,&bjornen_sover_note36,&bjornen_sover_note37,&bjornen_sover_note38,&bjornen_sover_note39,&bjornen_sover_note40,&bjornen_sover_note41,&bjornen_sover_note42,&bjornen_sover_note43,&bjornen_sover_note44,&bjornen_sover_note45,&bjornen_sover_note46,&bjornen_sover_note47,&bjornen_sover_note48,&bjornen_sover_note49,&bjornen_sover_note50,&bjornen_sover_note51,&bjornen_sover_note52,&bjornen_sover_note53,&bjornen_sover_note54,&bjornen_sover_note55,&bjornen_sover_note56,&bjornen_sover_note57,&bjornen_sover_note58,&bjornen_sover_note59,&bjornen_sover_note60,&bjornen_sover_note61,&bjornen_sover_note62,&bjornen_sover_note63,&bjornen_sover_note64,&bjornen_sover_note65,&bjornen_sover_note66,&bjornen_sover_note67,&bjornen_sover_note68,&bjornen_sover_note69,&bjornen_sover_note70,&bjornen_sover_note71,&bjornen_sover_note72,&bjornen_sover_note73};
// Sixteenths
sixteenth_t bjornen_sover_sixteenth0 = {
  5,
  (uint16_t[]){0,1,2,24,49}
};
sixteenth_t bjornen_sover_sixteenth1 = {
  4,
  (uint16_t[]){0,1,2,24}
};
sixteenth_t bjornen_sover_sixteenth2 = {
  5,
  (uint16_t[]){0,1,2,25,50}
};
sixteenth_t bjornen_sover_sixteenth3 = {
  4,
  (uint16_t[]){0,1,2,25}
};
sixteenth_t bjornen_sover_sixteenth4 = {
  5,
  (uint16_t[]){0,1,2,26,51}
};
sixteenth_t bjornen_sover_sixteenth5 = {
  4,
  (uint16_t[]){0,1,2,26}
};
sixteenth_t bjornen_sover_sixteenth6 = {
  5,
  (uint16_t[]){0,1,2,27,52}
};
sixteenth_t bjornen_sover_sixteenth7 = {
  4,
  (uint16_t[]){0,1,2,27}
};
sixteenth_t bjornen_sover_sixteenth8 = {
  5,
  (uint16_t[]){5,4,3,28,53}
};
sixteenth_t bjornen_sover_sixteenth9 = {
  4,
  (uint16_t[]){5,4,3,28}
};
sixteenth_t bjornen_sover_sixteenth10 = {
  5,
  (uint16_t[]){5,4,3,29,54}
};
sixteenth_t bjornen_sover_sixteenth11 = {
  4,
  (uint16_t[]){5,4,3,29}
};
sixteenth_t bjornen_sover_sixteenth12 = {
  5,
  (uint16_t[]){5,4,3,30,55}
};
sixteenth_t bjornen_sover_sixteenth13 = {
  4,
  (uint16_t[]){5,4,3,30}
};
sixteenth_t bjornen_sover_sixteenth14 = {
  5,
  (uint16_t[]){5,4,3,31,56}
};
sixteenth_t bjornen_sover_sixteenth15 = {
  4,
  (uint16_t[]){5,4,3,31}
};
sixteenth_t bjornen_sover_sixteenth16 = {
  5,
  (uint16_t[]){6,7,8,32,57}
};
sixteenth_t bjornen_sover_sixteenth17 = {
  4,
  (uint16_t[]){6,7,8,32}
};
sixteenth_t bjornen_sover_sixteenth18 = {
  5,
  (uint16_t[]){9,11,10,28,57}
};
sixteenth_t bjornen_sover_sixteenth19 = {
  4,
  (uint16_t[]){9,11,10,28}
};
sixteenth_t bjornen_sover_sixteenth20 = {
  5,
  (uint16_t[]){9,11,10,33,58}
};
sixteenth_t bjornen_sover_sixteenth21 = {
  4,
  (uint16_t[]){9,11,10,33}
};
sixteenth_t bjornen_sover_sixteenth22 = {
  5,
  (uint16_t[]){12,13,14,34,59}
};
sixteenth_t bjornen_sover_sixteenth23 = {
  4,
  (uint16_t[]){12,13,14,34}
};
sixteenth_t bjornen_sover_sixteenth24 = {
  5,
  (uint16_t[]){15,17,16,35,60}
};
sixteenth_t bjornen_sover_sixteenth25 = {
  4,
  (uint16_t[]){15,17,16,35}
};
sixteenth_t bjornen_sover_sixteenth26 = {
  5,
  (uint16_t[]){15,17,16,36,61}
};
sixteenth_t bjornen_sover_sixteenth27 = {
  4,
  (uint16_t[]){15,17,16,36}
};
sixteenth_t bjornen_sover_sixteenth28 = {
  5,
  (uint16_t[]){15,17,16,37,62}
};
sixteenth_t bjornen_sover_sixteenth29 = {
  4,
  (uint16_t[]){15,17,16,37}
};
sixteenth_t bjornen_sover_sixteenth30 = {
  5,
  (uint16_t[]){15,17,16,38,63}
};
sixteenth_t bjornen_sover_sixteenth31 = {
  4,
  (uint16_t[]){15,17,16,38}
};
sixteenth_t bjornen_sover_sixteenth32 = {
  5,
  (uint16_t[]){20,18,19,39,64}
};
sixteenth_t bjornen_sover_sixteenth33 = {
  4,
  (uint16_t[]){20,18,19,39}
};
sixteenth_t bjornen_sover_sixteenth34 = {
  5,
  (uint16_t[]){20,18,19,40,65}
};
sixteenth_t bjornen_sover_sixteenth35 = {
  4,
  (uint16_t[]){20,18,19,40}
};
sixteenth_t bjornen_sover_sixteenth36 = {
  5,
  (uint16_t[]){11,9,10,28,65}
};
sixteenth_t bjornen_sover_sixteenth37 = {
  4,
  (uint16_t[]){11,9,10,28}
};
sixteenth_t bjornen_sover_sixteenth38 = {
  5,
  (uint16_t[]){11,9,10,33,65}
};
sixteenth_t bjornen_sover_sixteenth39 = {
  4,
  (uint16_t[]){11,9,10,33}
};
sixteenth_t bjornen_sover_sixteenth40 = {
  5,
  (uint16_t[]){11,9,10,41,66}
};
sixteenth_t bjornen_sover_sixteenth41 = {
  4,
  (uint16_t[]){11,9,10,41}
};
sixteenth_t bjornen_sover_sixteenth42 = {
  5,
  (uint16_t[]){11,9,10,29,66}
};
sixteenth_t bjornen_sover_sixteenth43 = {
  4,
  (uint16_t[]){11,9,10,29}
};
sixteenth_t bjornen_sover_sixteenth44 = {
  5,
  (uint16_t[]){23,22,21,42,67}
};
sixteenth_t bjornen_sover_sixteenth45 = {
  4,
  (uint16_t[]){23,22,21,42}
};
sixteenth_t bjornen_sover_sixteenth46 = {
  5,
  (uint16_t[]){23,22,21,43,68}
};
sixteenth_t bjornen_sover_sixteenth47 = {
  4,
  (uint16_t[]){23,22,21,43}
};
sixteenth_t bjornen_sover_sixteenth48 = {
  5,
  (uint16_t[]){6,7,8,44,69}
};
sixteenth_t bjornen_sover_sixteenth49 = {
  4,
  (uint16_t[]){6,7,8,44}
};
sixteenth_t bjornen_sover_sixteenth50 = {
  5,
  (uint16_t[]){6,7,8,34,69}
};
sixteenth_t bjornen_sover_sixteenth51 = {
  4,
  (uint16_t[]){6,7,8,34}
};
sixteenth_t bjornen_sover_sixteenth52 = {
  5,
  (uint16_t[]){6,7,8,25,69}
};
sixteenth_t bjornen_sover_sixteenth53 = {
  4,
  (uint16_t[]){6,7,8,25}
};
sixteenth_t bjornen_sover_sixteenth54 = {
  5,
  (uint16_t[]){6,7,8,27,69}
};
sixteenth_t bjornen_sover_sixteenth55 = {
  4,
  (uint16_t[]){6,7,8,27}
};
sixteenth_t bjornen_sover_sixteenth56 = {
  5,
  (uint16_t[]){10,11,9,28,69}
};
sixteenth_t bjornen_sover_sixteenth57 = {
  4,
  (uint16_t[]){10,11,9,28}
};
sixteenth_t bjornen_sover_sixteenth58 = {
  5,
  (uint16_t[]){10,11,9,45,70}
};
sixteenth_t bjornen_sover_sixteenth59 = {
  4,
  (uint16_t[]){10,11,9,45}
};
sixteenth_t bjornen_sover_sixteenth60 = {
  5,
  (uint16_t[]){10,11,9,29,70}
};
sixteenth_t bjornen_sover_sixteenth61 = {
  4,
  (uint16_t[]){10,11,9,29}
};
sixteenth_t bjornen_sover_sixteenth62 = {
  5,
  (uint16_t[]){10,11,9,46,71}
};
sixteenth_t bjornen_sover_sixteenth63 = {
  4,
  (uint16_t[]){10,11,9,46}
};
sixteenth_t bjornen_sover_sixteenth64 = {
  5,
  (uint16_t[]){23,22,21,47,72}
};
sixteenth_t bjornen_sover_sixteenth65 = {
  4,
  (uint16_t[]){23,22,21,47}
};
sixteenth_t bjornen_sover_sixteenth66 = {
  5,
  (uint16_t[]){23,22,21,36,72}
};
sixteenth_t bjornen_sover_sixteenth67 = {
  4,
  (uint16_t[]){23,22,21,36}
};
sixteenth_t bjornen_sover_sixteenth68 = {
  5,
  (uint16_t[]){11,9,10,48,73}
};
sixteenth_t bjornen_sover_sixteenth69 = {
  4,
  (uint16_t[]){11,9,10,48}
};
sixteenth_t bjornen_sover_sixteenth70 = {
  5,
  (uint16_t[]){11,9,10,45,73}
};
sixteenth_t bjornen_sover_sixteenth71 = {
  4,
  (uint16_t[]){11,9,10,45}
};
sixteenth_t bjornen_sover_sixteenth72 = {
  5,
  (uint16_t[]){15,16,17,24,73}
};
sixteenth_t bjornen_sover_sixteenth73 = {
  4,
  (uint16_t[]){15,16,17,24}
};
sixteenth_t* bjornen_sover_unique_sixteenths[] = {&bjornen_sover_sixteenth0,&bjornen_sover_sixteenth1,&bjornen_sover_sixteenth2,&bjornen_sover_sixteenth3,&bjornen_sover_sixteenth4,&bjornen_sover_sixteenth5,&bjornen_sover_sixteenth6,&bjornen_sover_sixteenth7,&bjornen_sover_sixteenth8,&bjornen_sover_sixteenth9,&bjornen_sover_sixteenth10,&bjornen_sover_sixteenth11,&bjornen_sover_sixteenth12,&bjornen_sover_sixteenth13,&bjornen_sover_sixteenth14,&bjornen_sover_sixteenth15,&bjornen_sover_sixteenth16,&bjornen_sover_sixteenth17,&bjornen_sover_sixteenth18,&bjornen_sover_sixteenth19,&bjornen_sover_sixteenth20,&bjornen_sover_sixteenth21,&bjornen_sover_sixteenth22,&bjornen_sover_sixteenth23,&bjornen_sover_sixteenth24,&bjornen_sover_sixteenth25,&bjornen_sover_sixteenth26,&bjornen_sover_sixteenth27,&bjornen_sover_sixteenth28,&bjornen_sover_sixteenth29,&bjornen_sover_sixteenth30,&bjornen_sover_sixteenth31,&bjornen_sover_sixteenth32,&bjornen_sover_sixteenth33,&bjornen_sover_sixteenth34,&bjornen_sover_sixteenth35,&bjornen_sover_sixteenth36,&bjornen_sover_sixteenth37,&bjornen_sover_sixteenth38,&bjornen_sover_sixteenth39,&bjornen_sover_sixteenth40,&bjornen_sover_sixteenth41,&bjornen_sover_sixteenth42,&bjornen_sover_sixteenth43,&bjornen_sover_sixteenth44,&bjornen_sover_sixteenth45,&bjornen_sover_sixteenth46,&bjornen_sover_sixteenth47,&bjornen_sover_sixteenth48,&bjornen_sover_sixteenth49,&bjornen_sover_sixteenth50,&bjornen_sover_sixteenth51,&bjornen_sover_sixteenth52,&bjornen_sover_sixteenth53,&bjornen_sover_sixteenth54,&bjornen_sover_sixteenth55,&bjornen_sover_sixteenth56,&bjornen_sover_sixteenth57,&bjornen_sover_sixteenth58,&bjornen_sover_sixteenth59,&bjornen_sover_sixteenth60,&bjornen_sover_sixteenth61,&bjornen_sover_sixteenth62,&bjornen_sover_sixteenth63,&bjornen_sover_sixteenth64,&bjornen_sover_sixteenth65,&bjornen_sover_sixteenth66,&bjornen_sover_sixteenth67,&bjornen_sover_sixteenth68,&bjornen_sover_sixteenth69,&bjornen_sover_sixteenth70,&bjornen_sover_sixteenth71,&bjornen_sover_sixteenth72,&bjornen_sover_sixteenth73};
// Song
uint16_t bjornen_sover_sixteenth_indexes[] = {0,1,1,1,2,3,3,3,4,5,5,5,6,7,7,7,8,9,9,9,10,11,11,11,12,13,13,13,14,15,15,15,16,17,17,17,16,17,17,17,18,19,19,19,20,21,21,21,22,23,23,23,23,23,23,23,23,23,23,23,23,23,23,23,24,25,25,25,26,27,27,27,28,29,29,29,30,31,31,31,32,33,33,33,33,33,33,33,34,35,35,35,35,35,35,35,36,37,37,37,38,39,39,39,40,41,41,41,42,43,43,43,44,45,45,45,45,45,45,45,46,47,47,47,47,47,47,47,48,49,49,49,50,51,51,51,52,53,53,53,54,55,55,55,56,57,57,57,58,59,59,59,60,61,61,61,62,63,63,63,64,65,65,65,66,67,67,67,68,69,69,69,70,71,71,71,72,73,73,73,73,73,73,73,73,73,73,73,73,73,73,73};
song_t bjornen_sover_song = {
  "BJORNEN SOVER",
  100,
  12,
  74,
  74,
  bjornen_sover_sixteenth_indexes,
  bjornen_sover_unique_sixteenths,
  bjornen_sover_unique_notes
};
