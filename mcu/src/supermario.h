#include "mini_midi.h"
#include <stdbool.h>

// Notes
note_t super_mario_note0 = {
  67,
  0,
  76,
  2,
  false
};
note_t super_mario_note1 = {
  67,
  0,
  72,
  3,
  false
};
note_t super_mario_note2 = {
  67,
  0,
  79,
  5,
  false
};
note_t super_mario_note3 = {
  67,
  0,
  67,
  3,
  false
};
note_t super_mario_note4 = {
  67,
  0,
  64,
  5,
  false
};
note_t super_mario_note5 = {
  67,
  0,
  69,
  5,
  false
};
note_t super_mario_note6 = {
  67,
  0,
  71,
  2,
  false
};
note_t super_mario_note7 = {
  67,
  0,
  70,
  1,
  false
};
note_t super_mario_note8 = {
  67,
  0,
  81,
  2,
  false
};
note_t super_mario_note9 = {
  67,
  0,
  77,
  3,
  false
};
note_t super_mario_note10 = {
  67,
  0,
  74,
  5,
  false
};
note_t super_mario_note11 = {
  67,
  0,
  78,
  4,
  false
};
note_t super_mario_note12 = {
  67,
  0,
  75,
  1,
  false
};
note_t super_mario_note13 = {
  67,
  0,
  68,
  4,
  false
};
note_t super_mario_note14 = {
  67,
  0,
  84,
  5,
  false
};
note_t super_mario_note15 = {
  67,
  4,
  76,
  0,
  true
};
note_t super_mario_note16 = {
  67,
  4,
  72,
  0,
  true
};
note_t super_mario_note17 = {
  67,
  4,
  79,
  0,
  true
};
note_t super_mario_note18 = {
  67,
  4,
  67,
  0,
  true
};
note_t super_mario_note19 = {
  67,
  4,
  64,
  0,
  true
};
note_t super_mario_note20 = {
  67,
  4,
  69,
  0,
  true
};
note_t super_mario_note21 = {
  67,
  4,
  71,
  0,
  true
};
note_t super_mario_note22 = {
  67,
  4,
  70,
  0,
  true
};
note_t super_mario_note23 = {
  67,
  4,
  81,
  0,
  true
};
note_t super_mario_note24 = {
  67,
  4,
  77,
  0,
  true
};
note_t super_mario_note25 = {
  67,
  4,
  74,
  0,
  true
};
note_t super_mario_note26 = {
  67,
  4,
  78,
  0,
  true
};
note_t super_mario_note27 = {
  67,
  4,
  75,
  0,
  true
};
note_t super_mario_note28 = {
  67,
  4,
  68,
  0,
  true
};
note_t super_mario_note29 = {
  67,
  4,
  84,
  0,
  true
};
note_t super_mario_note30 = {
  67,
  3,
  66,
  0,
  false
};
note_t super_mario_note31 = {
  67,
  3,
  71,
  0,
  false
};
note_t super_mario_note32 = {
  67,
  3,
  67,
  0,
  false
};
note_t super_mario_note33 = {
  67,
  3,
  64,
  0,
  false
};
note_t super_mario_note34 = {
  67,
  3,
  60,
  0,
  false
};
note_t super_mario_note35 = {
  67,
  3,
  55,
  0,
  false
};
note_t super_mario_note36 = {
  67,
  3,
  62,
  0,
  false
};
note_t super_mario_note37 = {
  67,
  3,
  61,
  0,
  false
};
note_t super_mario_note38 = {
  67,
  3,
  72,
  0,
  false
};
note_t super_mario_note39 = {
  67,
  3,
  69,
  0,
  false
};
note_t super_mario_note40 = {
  67,
  3,
  65,
  0,
  false
};
note_t super_mario_note41 = {
  67,
  3,
  76,
  0,
  false
};
note_t super_mario_note42 = {
  67,
  3,
  75,
  0,
  false
};
note_t super_mario_note43 = {
  67,
  3,
  74,
  0,
  false
};
note_t super_mario_note44 = {
  67,
  3,
  77,
  0,
  false
};
note_t super_mario_note45 = {
  67,
  3,
  68,
  0,
  false
};
note_t super_mario_note46 = {
  67,
  3,
  70,
  0,
  false
};
note_t super_mario_note47 = {
  72,
  2,
  50,
  0,
  false
};
note_t super_mario_note48 = {
  72,
  2,
  67,
  0,
  false
};
note_t super_mario_note49 = {
  72,
  2,
  55,
  0,
  false
};
note_t super_mario_note50 = {
  72,
  2,
  52,
  0,
  false
};
note_t super_mario_note51 = {
  72,
  2,
  48,
  0,
  false
};
note_t super_mario_note52 = {
  72,
  2,
  53,
  0,
  false
};
note_t super_mario_note53 = {
  72,
  2,
  54,
  0,
  false
};
note_t super_mario_note54 = {
  72,
  2,
  60,
  0,
  false
};
note_t super_mario_note55 = {
  72,
  2,
  64,
  0,
  false
};
note_t super_mario_note56 = {
  72,
  2,
  65,
  0,
  false
};
note_t super_mario_note57 = {
  72,
  2,
  62,
  0,
  false
};
note_t super_mario_note58 = {
  72,
  2,
  57,
  0,
  false
};
note_t super_mario_note59 = {
  72,
  2,
  59,
  0,
  false
};
note_t super_mario_note60 = {
  72,
  2,
  79,
  0,
  false
};
note_t super_mario_note61 = {
  72,
  2,
  56,
  0,
  false
};
note_t super_mario_note62 = {
  72,
  2,
  58,
  0,
  false
};
note_t super_mario_note63 = {
  72,
  2,
  44,
  0,
  false
};
note_t super_mario_note64 = {
  72,
  2,
  51,
  0,
  false
};
note_t super_mario_note65 = {
  72,
  2,
  43,
  0,
  false
};
note_t* super_mario_unique_notes[] = {&super_mario_note0,&super_mario_note1,&super_mario_note2,&super_mario_note3,&super_mario_note4,&super_mario_note5,&super_mario_note6,&super_mario_note7,&super_mario_note8,&super_mario_note9,&super_mario_note10,&super_mario_note11,&super_mario_note12,&super_mario_note13,&super_mario_note14,&super_mario_note15,&super_mario_note16,&super_mario_note17,&super_mario_note18,&super_mario_note19,&super_mario_note20,&super_mario_note21,&super_mario_note22,&super_mario_note23,&super_mario_note24,&super_mario_note25,&super_mario_note26,&super_mario_note27,&super_mario_note28,&super_mario_note29,&super_mario_note30,&super_mario_note31,&super_mario_note32,&super_mario_note33,&super_mario_note34,&super_mario_note35,&super_mario_note36,&super_mario_note37,&super_mario_note38,&super_mario_note39,&super_mario_note40,&super_mario_note41,&super_mario_note42,&super_mario_note43,&super_mario_note44,&super_mario_note45,&super_mario_note46,&super_mario_note47,&super_mario_note48,&super_mario_note49,&super_mario_note50,&super_mario_note51,&super_mario_note52,&super_mario_note53,&super_mario_note54,&super_mario_note55,&super_mario_note56,&super_mario_note57,&super_mario_note58,&super_mario_note59,&super_mario_note60,&super_mario_note61,&super_mario_note62,&super_mario_note63,&super_mario_note64,&super_mario_note65};
// Sixteenths
sixteenth_t super_mario_sixteenth0 = {
  4,
  (uint16_t[]){0,15,30,47}
};
sixteenth_t super_mario_sixteenth1 = {
  0,
  (uint16_t[]){}
};
sixteenth_t super_mario_sixteenth2 = {
  4,
  (uint16_t[]){1,16,30,47}
};
sixteenth_t super_mario_sixteenth3 = {
  4,
  (uint16_t[]){1,15,30,47}
};
sixteenth_t super_mario_sixteenth4 = {
  4,
  (uint16_t[]){2,17,31,48}
};
sixteenth_t super_mario_sixteenth5 = {
  4,
  (uint16_t[]){3,18,32,49}
};
sixteenth_t super_mario_sixteenth6 = {
  4,
  (uint16_t[]){3,16,33,49}
};
sixteenth_t super_mario_sixteenth7 = {
  4,
  (uint16_t[]){3,18,34,50}
};
sixteenth_t super_mario_sixteenth8 = {
  4,
  (uint16_t[]){4,19,35,51}
};
sixteenth_t super_mario_sixteenth9 = {
  4,
  (uint16_t[]){5,20,34,52}
};
sixteenth_t super_mario_sixteenth10 = {
  4,
  (uint16_t[]){6,21,36,49}
};
sixteenth_t super_mario_sixteenth11 = {
  4,
  (uint16_t[]){7,22,37,53}
};
sixteenth_t super_mario_sixteenth12 = {
  4,
  (uint16_t[]){7,20,34,52}
};
sixteenth_t super_mario_sixteenth13 = {
  4,
  (uint16_t[]){7,18,34,50}
};
sixteenth_t super_mario_sixteenth14 = {
  4,
  (uint16_t[]){7,15,32,54}
};
sixteenth_t super_mario_sixteenth15 = {
  1,
  (uint16_t[]){7}
};
sixteenth_t super_mario_sixteenth16 = {
  4,
  (uint16_t[]){8,23,38,56}
};
sixteenth_t super_mario_sixteenth17 = {
  4,
  (uint16_t[]){9,24,39,57}
};
sixteenth_t super_mario_sixteenth18 = {
  4,
  (uint16_t[]){9,17,31,55}
};
sixteenth_t super_mario_sixteenth19 = {
  4,
  (uint16_t[]){9,15,39,54}
};
sixteenth_t super_mario_sixteenth20 = {
  4,
  (uint16_t[]){9,16,33,58}
};
sixteenth_t super_mario_sixteenth21 = {
  4,
  (uint16_t[]){10,25,40,59}
};
sixteenth_t super_mario_sixteenth22 = {
  4,
  (uint16_t[]){10,21,36,49}
};
sixteenth_t super_mario_sixteenth23 = {
  4,
  (uint16_t[]){10,16,33,49}
};
sixteenth_t super_mario_sixteenth24 = {
  4,
  (uint16_t[]){10,18,34,50}
};
sixteenth_t super_mario_sixteenth25 = {
  4,
  (uint16_t[]){10,19,35,51}
};
sixteenth_t super_mario_sixteenth26 = {
  4,
  (uint16_t[]){10,20,34,52}
};
sixteenth_t super_mario_sixteenth27 = {
  4,
  (uint16_t[]){10,22,37,53}
};
sixteenth_t super_mario_sixteenth28 = {
  4,
  (uint16_t[]){10,15,32,54}
};
sixteenth_t super_mario_sixteenth29 = {
  1,
  (uint16_t[]){10}
};
sixteenth_t super_mario_sixteenth30 = {
  4,
  (uint16_t[]){10,23,38,56}
};
sixteenth_t super_mario_sixteenth31 = {
  4,
  (uint16_t[]){10,24,39,57}
};
sixteenth_t super_mario_sixteenth32 = {
  4,
  (uint16_t[]){10,17,31,55}
};
sixteenth_t super_mario_sixteenth33 = {
  4,
  (uint16_t[]){10,15,39,54}
};
sixteenth_t super_mario_sixteenth34 = {
  4,
  (uint16_t[]){10,16,33,58}
};
sixteenth_t super_mario_sixteenth35 = {
  1,
  (uint16_t[]){51}
};
sixteenth_t super_mario_sixteenth36 = {
  3,
  (uint16_t[]){10,17,41}
};
sixteenth_t super_mario_sixteenth37 = {
  4,
  (uint16_t[]){11,26,42,49}
};
sixteenth_t super_mario_sixteenth38 = {
  3,
  (uint16_t[]){11,24,43}
};
sixteenth_t super_mario_sixteenth39 = {
  3,
  (uint16_t[]){12,27,31}
};
sixteenth_t super_mario_sixteenth40 = {
  1,
  (uint16_t[]){54}
};
sixteenth_t super_mario_sixteenth41 = {
  3,
  (uint16_t[]){12,15,38}
};
sixteenth_t super_mario_sixteenth42 = {
  1,
  (uint16_t[]){52}
};
sixteenth_t super_mario_sixteenth43 = {
  3,
  (uint16_t[]){13,28,33}
};
sixteenth_t super_mario_sixteenth44 = {
  3,
  (uint16_t[]){13,20,40}
};
sixteenth_t super_mario_sixteenth45 = {
  4,
  (uint16_t[]){13,16,32,54}
};
sixteenth_t super_mario_sixteenth46 = {
  3,
  (uint16_t[]){13,20,34}
};
sixteenth_t super_mario_sixteenth47 = {
  4,
  (uint16_t[]){13,16,33,52}
};
sixteenth_t super_mario_sixteenth48 = {
  3,
  (uint16_t[]){13,25,40}
};
sixteenth_t super_mario_sixteenth49 = {
  3,
  (uint16_t[]){13,17,41}
};
sixteenth_t super_mario_sixteenth50 = {
  4,
  (uint16_t[]){13,26,42,50}
};
sixteenth_t super_mario_sixteenth51 = {
  3,
  (uint16_t[]){13,24,43}
};
sixteenth_t super_mario_sixteenth52 = {
  3,
  (uint16_t[]){13,27,31}
};
sixteenth_t super_mario_sixteenth53 = {
  1,
  (uint16_t[]){49}
};
sixteenth_t super_mario_sixteenth54 = {
  4,
  (uint16_t[]){13,15,38,54}
};
sixteenth_t super_mario_sixteenth55 = {
  4,
  (uint16_t[]){14,29,44,60}
};
sixteenth_t super_mario_sixteenth56 = {
  3,
  (uint16_t[]){14,17,41}
};
sixteenth_t super_mario_sixteenth57 = {
  4,
  (uint16_t[]){14,26,42,49}
};
sixteenth_t super_mario_sixteenth58 = {
  3,
  (uint16_t[]){14,24,43}
};
sixteenth_t super_mario_sixteenth59 = {
  3,
  (uint16_t[]){14,27,31}
};
sixteenth_t super_mario_sixteenth60 = {
  3,
  (uint16_t[]){14,15,38}
};
sixteenth_t super_mario_sixteenth61 = {
  3,
  (uint16_t[]){14,28,33}
};
sixteenth_t super_mario_sixteenth62 = {
  3,
  (uint16_t[]){14,20,40}
};
sixteenth_t super_mario_sixteenth63 = {
  4,
  (uint16_t[]){14,16,32,54}
};
sixteenth_t super_mario_sixteenth64 = {
  3,
  (uint16_t[]){14,20,34}
};
sixteenth_t super_mario_sixteenth65 = {
  4,
  (uint16_t[]){14,16,33,52}
};
sixteenth_t super_mario_sixteenth66 = {
  3,
  (uint16_t[]){14,25,40}
};
sixteenth_t super_mario_sixteenth67 = {
  4,
  (uint16_t[]){14,27,45,61}
};
sixteenth_t super_mario_sixteenth68 = {
  4,
  (uint16_t[]){14,25,40,62}
};
sixteenth_t super_mario_sixteenth69 = {
  4,
  (uint16_t[]){14,16,33,54}
};
sixteenth_t super_mario_sixteenth70 = {
  4,
  (uint16_t[]){14,26,42,50}
};
sixteenth_t super_mario_sixteenth71 = {
  4,
  (uint16_t[]){14,15,38,54}
};
sixteenth_t super_mario_sixteenth72 = {
  4,
  (uint16_t[]){14,16,45,63}
};
sixteenth_t super_mario_sixteenth73 = {
  3,
  (uint16_t[]){14,16,45}
};
sixteenth_t super_mario_sixteenth74 = {
  4,
  (uint16_t[]){14,16,45,64}
};
sixteenth_t super_mario_sixteenth75 = {
  4,
  (uint16_t[]){14,25,46,61}
};
sixteenth_t super_mario_sixteenth76 = {
  4,
  (uint16_t[]){14,15,32,49}
};
sixteenth_t super_mario_sixteenth77 = {
  3,
  (uint16_t[]){14,16,33}
};
sixteenth_t super_mario_sixteenth78 = {
  4,
  (uint16_t[]){14,20,33,51}
};
sixteenth_t super_mario_sixteenth79 = {
  3,
  (uint16_t[]){14,18,34}
};
sixteenth_t super_mario_sixteenth80 = {
  1,
  (uint16_t[]){65}
};
sixteenth_t super_mario_sixteenth81 = {
  3,
  (uint16_t[]){14,15,32}
};
sixteenth_t super_mario_sixteenth82 = {
  4,
  (uint16_t[]){14,15,30,47}
};
sixteenth_t super_mario_sixteenth83 = {
  4,
  (uint16_t[]){14,16,30,47}
};
sixteenth_t super_mario_sixteenth84 = {
  4,
  (uint16_t[]){14,17,31,48}
};
sixteenth_t super_mario_sixteenth85 = {
  2,
  (uint16_t[]){32,49}
};
sixteenth_t super_mario_sixteenth86 = {
  4,
  (uint16_t[]){14,16,33,49}
};
sixteenth_t super_mario_sixteenth87 = {
  4,
  (uint16_t[]){14,18,34,50}
};
sixteenth_t super_mario_sixteenth88 = {
  4,
  (uint16_t[]){14,19,35,51}
};
sixteenth_t super_mario_sixteenth89 = {
  4,
  (uint16_t[]){14,20,34,52}
};
sixteenth_t super_mario_sixteenth90 = {
  4,
  (uint16_t[]){14,21,36,49}
};
sixteenth_t super_mario_sixteenth91 = {
  4,
  (uint16_t[]){14,22,37,53}
};
sixteenth_t super_mario_sixteenth92 = {
  4,
  (uint16_t[]){14,15,32,54}
};
sixteenth_t super_mario_sixteenth93 = {
  1,
  (uint16_t[]){14}
};
sixteenth_t super_mario_sixteenth94 = {
  4,
  (uint16_t[]){14,23,38,56}
};
sixteenth_t super_mario_sixteenth95 = {
  4,
  (uint16_t[]){14,24,39,57}
};
sixteenth_t super_mario_sixteenth96 = {
  4,
  (uint16_t[]){14,17,31,55}
};
sixteenth_t super_mario_sixteenth97 = {
  4,
  (uint16_t[]){14,15,39,54}
};
sixteenth_t super_mario_sixteenth98 = {
  4,
  (uint16_t[]){14,16,33,58}
};
sixteenth_t super_mario_sixteenth99 = {
  4,
  (uint16_t[]){14,25,40,59}
};
sixteenth_t super_mario_sixteenth100 = {
  4,
  (uint16_t[]){14,15,38,51}
};
sixteenth_t super_mario_sixteenth101 = {
  3,
  (uint16_t[]){14,16,39}
};
sixteenth_t super_mario_sixteenth102 = {
  4,
  (uint16_t[]){14,18,33,53}
};
sixteenth_t super_mario_sixteenth103 = {
  4,
  (uint16_t[]){14,28,33,54}
};
sixteenth_t super_mario_sixteenth104 = {
  4,
  (uint16_t[]){14,20,40,52}
};
sixteenth_t super_mario_sixteenth105 = {
  3,
  (uint16_t[]){14,24,38}
};
sixteenth_t super_mario_sixteenth106 = {
  4,
  (uint16_t[]){14,20,40,54}
};
sixteenth_t super_mario_sixteenth107 = {
  4,
  (uint16_t[]){14,21,32,47}
};
sixteenth_t super_mario_sixteenth108 = {
  3,
  (uint16_t[]){14,23,44}
};
sixteenth_t super_mario_sixteenth109 = {
  2,
  (uint16_t[]){14,52}
};
sixteenth_t super_mario_sixteenth110 = {
  4,
  (uint16_t[]){14,23,44,49}
};
sixteenth_t super_mario_sixteenth111 = {
  1,
  (uint16_t[]){59}
};
sixteenth_t super_mario_sixteenth112 = {
  4,
  (uint16_t[]){14,15,38,49}
};
sixteenth_t super_mario_sixteenth113 = {
  4,
  (uint16_t[]){14,18,33,54}
};
sixteenth_t super_mario_sixteenth114 = {
  4,
  (uint16_t[]){14,21,32,49}
};
sixteenth_t super_mario_sixteenth115 = {
  4,
  (uint16_t[]){14,24,43,49}
};
sixteenth_t super_mario_sixteenth116 = {
  4,
  (uint16_t[]){14,15,38,58}
};
sixteenth_t super_mario_sixteenth117 = {
  1,
  (uint16_t[]){33}
};
sixteenth_t super_mario_sixteenth118 = {
  2,
  (uint16_t[]){34,51}
};
sixteenth_t* super_mario_unique_sixteenths[] = {&super_mario_sixteenth0,&super_mario_sixteenth1,&super_mario_sixteenth2,&super_mario_sixteenth3,&super_mario_sixteenth4,&super_mario_sixteenth5,&super_mario_sixteenth6,&super_mario_sixteenth7,&super_mario_sixteenth8,&super_mario_sixteenth9,&super_mario_sixteenth10,&super_mario_sixteenth11,&super_mario_sixteenth12,&super_mario_sixteenth13,&super_mario_sixteenth14,&super_mario_sixteenth15,&super_mario_sixteenth16,&super_mario_sixteenth17,&super_mario_sixteenth18,&super_mario_sixteenth19,&super_mario_sixteenth20,&super_mario_sixteenth21,&super_mario_sixteenth22,&super_mario_sixteenth23,&super_mario_sixteenth24,&super_mario_sixteenth25,&super_mario_sixteenth26,&super_mario_sixteenth27,&super_mario_sixteenth28,&super_mario_sixteenth29,&super_mario_sixteenth30,&super_mario_sixteenth31,&super_mario_sixteenth32,&super_mario_sixteenth33,&super_mario_sixteenth34,&super_mario_sixteenth35,&super_mario_sixteenth36,&super_mario_sixteenth37,&super_mario_sixteenth38,&super_mario_sixteenth39,&super_mario_sixteenth40,&super_mario_sixteenth41,&super_mario_sixteenth42,&super_mario_sixteenth43,&super_mario_sixteenth44,&super_mario_sixteenth45,&super_mario_sixteenth46,&super_mario_sixteenth47,&super_mario_sixteenth48,&super_mario_sixteenth49,&super_mario_sixteenth50,&super_mario_sixteenth51,&super_mario_sixteenth52,&super_mario_sixteenth53,&super_mario_sixteenth54,&super_mario_sixteenth55,&super_mario_sixteenth56,&super_mario_sixteenth57,&super_mario_sixteenth58,&super_mario_sixteenth59,&super_mario_sixteenth60,&super_mario_sixteenth61,&super_mario_sixteenth62,&super_mario_sixteenth63,&super_mario_sixteenth64,&super_mario_sixteenth65,&super_mario_sixteenth66,&super_mario_sixteenth67,&super_mario_sixteenth68,&super_mario_sixteenth69,&super_mario_sixteenth70,&super_mario_sixteenth71,&super_mario_sixteenth72,&super_mario_sixteenth73,&super_mario_sixteenth74,&super_mario_sixteenth75,&super_mario_sixteenth76,&super_mario_sixteenth77,&super_mario_sixteenth78,&super_mario_sixteenth79,&super_mario_sixteenth80,&super_mario_sixteenth81,&super_mario_sixteenth82,&super_mario_sixteenth83,&super_mario_sixteenth84,&super_mario_sixteenth85,&super_mario_sixteenth86,&super_mario_sixteenth87,&super_mario_sixteenth88,&super_mario_sixteenth89,&super_mario_sixteenth90,&super_mario_sixteenth91,&super_mario_sixteenth92,&super_mario_sixteenth93,&super_mario_sixteenth94,&super_mario_sixteenth95,&super_mario_sixteenth96,&super_mario_sixteenth97,&super_mario_sixteenth98,&super_mario_sixteenth99,&super_mario_sixteenth100,&super_mario_sixteenth101,&super_mario_sixteenth102,&super_mario_sixteenth103,&super_mario_sixteenth104,&super_mario_sixteenth105,&super_mario_sixteenth106,&super_mario_sixteenth107,&super_mario_sixteenth108,&super_mario_sixteenth109,&super_mario_sixteenth110,&super_mario_sixteenth111,&super_mario_sixteenth112,&super_mario_sixteenth113,&super_mario_sixteenth114,&super_mario_sixteenth115,&super_mario_sixteenth116,&super_mario_sixteenth117,&super_mario_sixteenth118};
// Song
uint16_t super_mario_sixteenth_indexes[] = {0,0,1,0,1,2,3,1,4,1,1,1,5,1,1,1,6,1,1,7,1,1,8,1,1,9,1,10,1,11,12,1,13,14,1,15,16,1,17,18,1,19,1,20,21,22,1,1,23,1,1,24,1,1,25,1,1,26,1,22,1,27,26,1,24,28,1,29,30,1,31,32,1,33,1,34,21,22,1,1,35,1,36,37,38,39,40,41,42,43,44,45,40,46,47,48,35,1,49,50,51,52,53,54,1,55,1,55,55,1,53,1,35,1,56,57,58,59,40,60,42,61,62,63,40,64,65,66,35,1,67,1,1,68,1,1,69,1,1,53,53,1,35,1,35,1,56,57,58,59,40,60,42,61,62,63,40,64,65,66,35,1,56,70,58,59,53,71,1,55,1,55,55,1,53,1,35,1,56,57,58,59,40,60,42,61,62,63,40,64,65,66,35,1,67,1,1,68,1,1,69,1,1,53,53,1,35,1,72,73,1,74,1,73,75,1,76,77,1,78,79,1,80,1,72,73,1,74,1,73,75,81,53,1,1,35,1,1,80,1,72,73,1,74,1,73,75,1,76,77,1,78,79,1,80,1,82,82,1,82,1,83,82,1,84,1,1,1,85,1,1,1,86,1,1,87,1,1,88,1,1,89,1,90,1,91,89,1,87,92,1,93,94,1,95,96,1,97,1,98,99,90,1,1,86,1,1,87,1,1,88,1,1,89,1,90,1,91,89,1,87,92,1,93,94,1,95,96,1,97,1,98,99,90,1,1,100,101,1,102,53,1,103,1,104,105,42,105,106,40,42,1,107,108,1,109,110,56,111,93,112,101,53,62,113,40,53,1,100,101,1,102,53,1,103,1,104,105,42,105,106,40,42,1,114,115,1,115,115,116,1,93,63,117,53,117,118,1,1,1,100,101,1,102,53,1,103,1,104,105,42,105,106,40,42,1,107,108,1,109,110,56,111,93,112,101,53,62,113,40,53,1,100,101,1,102,53,1,103,1,104,105,42,105,106,40,42,1,114,115,1,115,115,116,1,93,63,117,53,117,118,1,1,1,72,73,1,74,1,73,75,1,76,77,1,78,79,1,80,1,72,73,1,74,1,73,75,81,53,1,1,35,1,1,80,1,72,73,1,74,1,73,75,1,76,77,1,78,79,1,80,1,82,82,1,82,1,83,82,1,84,1,1,1,85,1,1,1,100,101,1,102,53,1,103,1,104,105,42,105,106,40,42,1,107,108,1,109,110,56,111,93,112,101,53,62,113,40,53,1,100,101,1,102,53,1,103,1,104,105,42,105,106,40,42,1,114,115,1,115,115,116,1,93,63,117,53,117,118,1,1,1};
song_t super_mario_song = {
  "SUPER MARIO",
  90,
  37,
  119,
  66,
  super_mario_sixteenth_indexes,
  super_mario_unique_sixteenths,
  super_mario_unique_notes
};
