#include "mini_midi.h"
#include <stdbool.h>

// Notes
note_t megalovania_note0 = {
  100,
  4,
  62,
  0,
  true
};
note_t megalovania_note1 = {
  100,
  4,
  74,
  0,
  true
};
note_t megalovania_note2 = {
  100,
  4,
  69,
  0,
  true
};
note_t megalovania_note3 = {
  100,
  4,
  68,
  0,
  true
};
note_t megalovania_note4 = {
  100,
  4,
  67,
  0,
  true
};
note_t megalovania_note5 = {
  100,
  4,
  65,
  0,
  true
};
note_t megalovania_note6 = {
  100,
  4,
  60,
  0,
  true
};
note_t megalovania_note7 = {
  100,
  4,
  59,
  0,
  true
};
note_t megalovania_note8 = {
  100,
  4,
  58,
  0,
  true
};
note_t megalovania_note9 = {
  100,
  4,
  72,
  0,
  true
};
note_t megalovania_note10 = {
  100,
  4,
  64,
  0,
  true
};
note_t megalovania_note11 = {
  100,
  4,
  73,
  0,
  true
};
note_t megalovania_note12 = {
  100,
  4,
  53,
  0,
  true
};
note_t megalovania_note13 = {
  100,
  4,
  55,
  0,
  true
};
note_t megalovania_note14 = {
  100,
  4,
  57,
  0,
  true
};
note_t megalovania_note15 = {
  100,
  4,
  61,
  0,
  true
};
note_t megalovania_note16 = {
  100,
  4,
  63,
  0,
  true
};
note_t megalovania_note17 = {
  100,
  4,
  77,
  0,
  true
};
note_t megalovania_note18 = {
  100,
  4,
  76,
  0,
  true
};
note_t megalovania_note19 = {
  100,
  4,
  52,
  0,
  true
};
note_t megalovania_note20 = {
  100,
  4,
  48,
  0,
  true
};
note_t megalovania_note21 = {
  100,
  4,
  50,
  0,
  true
};
note_t megalovania_note22 = {
  100,
  4,
  45,
  0,
  true
};
note_t megalovania_note23 = {
  100,
  0,
  62,
  3,
  false
};
note_t megalovania_note24 = {
  100,
  0,
  74,
  5,
  false
};
note_t megalovania_note25 = {
  100,
  0,
  69,
  5,
  false
};
note_t megalovania_note26 = {
  100,
  0,
  68,
  4,
  false
};
note_t megalovania_note27 = {
  100,
  0,
  67,
  3,
  false
};
note_t megalovania_note28 = {
  100,
  0,
  65,
  1,
  false
};
note_t megalovania_note29 = {
  100,
  0,
  60,
  1,
  false
};
note_t megalovania_note30 = {
  100,
  0,
  59,
  5,
  false
};
note_t megalovania_note31 = {
  100,
  0,
  58,
  4,
  false
};
note_t megalovania_note32 = {
  100,
  0,
  72,
  3,
  false
};
note_t megalovania_note33 = {
  100,
  0,
  73,
  4,
  false
};
note_t megalovania_note34 = {
  100,
  0,
  53,
  4,
  false
};
note_t megalovania_note35 = {
  100,
  0,
  55,
  1,
  false
};
note_t megalovania_note36 = {
  100,
  0,
  57,
  3,
  false
};
note_t megalovania_note37 = {
  100,
  0,
  64,
  5,
  false
};
note_t megalovania_note38 = {
  100,
  0,
  61,
  2,
  false
};
note_t megalovania_note39 = {
  100,
  0,
  63,
  4,
  false
};
note_t megalovania_note40 = {
  100,
  0,
  77,
  3,
  false
};
note_t megalovania_note41 = {
  100,
  0,
  76,
  2,
  false
};
note_t megalovania_note42 = {
  100,
  3,
  72,
  0,
  false
};
note_t megalovania_note43 = {
  100,
  3,
  77,
  0,
  false
};
note_t megalovania_note44 = {
  100,
  3,
  76,
  0,
  false
};
note_t megalovania_note45 = {
  100,
  3,
  74,
  0,
  false
};
note_t megalovania_note46 = {
  100,
  3,
  79,
  0,
  false
};
note_t megalovania_note47 = {
  100,
  3,
  80,
  0,
  false
};
note_t megalovania_note48 = {
  100,
  3,
  81,
  0,
  false
};
note_t megalovania_note49 = {
  100,
  3,
  84,
  0,
  false
};
note_t megalovania_note50 = {
  100,
  3,
  86,
  0,
  false
};
note_t megalovania_note51 = {
  100,
  3,
  70,
  0,
  false
};
note_t megalovania_note52 = {
  100,
  3,
  71,
  0,
  true
};
note_t megalovania_note53 = {
  100,
  3,
  85,
  0,
  true
};
note_t megalovania_note54 = {
  100,
  3,
  65,
  0,
  true
};
note_t megalovania_note55 = {
  100,
  3,
  67,
  0,
  true
};
note_t megalovania_note56 = {
  100,
  3,
  69,
  0,
  true
};
note_t megalovania_note57 = {
  100,
  3,
  73,
  0,
  true
};
note_t megalovania_note58 = {
  100,
  3,
  75,
  0,
  true
};
note_t megalovania_note59 = {
  100,
  3,
  89,
  0,
  true
};
note_t megalovania_note60 = {
  100,
  3,
  88,
  0,
  true
};
note_t megalovania_note61 = {
  100,
  3,
  64,
  0,
  true
};
note_t megalovania_note62 = {
  100,
  3,
  60,
  0,
  true
};
note_t megalovania_note63 = {
  100,
  3,
  62,
  0,
  true
};
note_t megalovania_note64 = {
  100,
  3,
  57,
  0,
  true
};
note_t megalovania_note65 = {
  100,
  3,
  78,
  0,
  true
};
note_t megalovania_note66 = {
  100,
  2,
  38,
  0,
  false
};
note_t megalovania_note67 = {
  100,
  2,
  50,
  0,
  false
};
note_t megalovania_note68 = {
  100,
  2,
  48,
  0,
  false
};
note_t megalovania_note69 = {
  100,
  2,
  36,
  0,
  false
};
note_t megalovania_note70 = {
  100,
  2,
  35,
  0,
  false
};
note_t megalovania_note71 = {
  100,
  2,
  47,
  0,
  false
};
note_t megalovania_note72 = {
  100,
  2,
  46,
  0,
  false
};
note_t megalovania_note73 = {
  100,
  2,
  34,
  0,
  false
};
note_t megalovania_note74 = {
  100,
  2,
  49,
  0,
  false
};
note_t megalovania_note75 = {
  100,
  2,
  37,
  0,
  false
};
note_t megalovania_note76 = {
  100,
  2,
  51,
  0,
  false
};
note_t megalovania_note77 = {
  100,
  2,
  39,
  0,
  false
};
note_t megalovania_note78 = {
  100,
  2,
  53,
  0,
  false
};
note_t megalovania_note79 = {
  100,
  2,
  52,
  0,
  false
};
note_t megalovania_note80 = {
  100,
  1,
  46,
  0,
  false
};
note_t megalovania_note81 = {
  100,
  1,
  53,
  0,
  false
};
note_t megalovania_note82 = {
  100,
  1,
  52,
  0,
  false
};
note_t megalovania_note83 = {
  100,
  1,
  50,
  0,
  false
};
note_t* megalovania_unique_notes[] = {&megalovania_note0,&megalovania_note1,&megalovania_note2,&megalovania_note3,&megalovania_note4,&megalovania_note5,&megalovania_note6,&megalovania_note7,&megalovania_note8,&megalovania_note9,&megalovania_note10,&megalovania_note11,&megalovania_note12,&megalovania_note13,&megalovania_note14,&megalovania_note15,&megalovania_note16,&megalovania_note17,&megalovania_note18,&megalovania_note19,&megalovania_note20,&megalovania_note21,&megalovania_note22,&megalovania_note23,&megalovania_note24,&megalovania_note25,&megalovania_note26,&megalovania_note27,&megalovania_note28,&megalovania_note29,&megalovania_note30,&megalovania_note31,&megalovania_note32,&megalovania_note33,&megalovania_note34,&megalovania_note35,&megalovania_note36,&megalovania_note37,&megalovania_note38,&megalovania_note39,&megalovania_note40,&megalovania_note41,&megalovania_note42,&megalovania_note43,&megalovania_note44,&megalovania_note45,&megalovania_note46,&megalovania_note47,&megalovania_note48,&megalovania_note49,&megalovania_note50,&megalovania_note51,&megalovania_note52,&megalovania_note53,&megalovania_note54,&megalovania_note55,&megalovania_note56,&megalovania_note57,&megalovania_note58,&megalovania_note59,&megalovania_note60,&megalovania_note61,&megalovania_note62,&megalovania_note63,&megalovania_note64,&megalovania_note65,&megalovania_note66,&megalovania_note67,&megalovania_note68,&megalovania_note69,&megalovania_note70,&megalovania_note71,&megalovania_note72,&megalovania_note73,&megalovania_note74,&megalovania_note75,&megalovania_note76,&megalovania_note77,&megalovania_note78,&megalovania_note79,&megalovania_note80,&megalovania_note81,&megalovania_note82,&megalovania_note83};
// Sixteenths
sixteenth_t megalovania_sixteenth0 = {
  4,
  (uint16_t[]){0,23,23,23}
};
sixteenth_t megalovania_sixteenth1 = {
  1,
  (uint16_t[]){0}
};
sixteenth_t megalovania_sixteenth2 = {
  4,
  (uint16_t[]){1,24,24,24}
};
sixteenth_t megalovania_sixteenth3 = {
  0,
  (uint16_t[]){}
};
sixteenth_t megalovania_sixteenth4 = {
  4,
  (uint16_t[]){2,25,25,25}
};
sixteenth_t megalovania_sixteenth5 = {
  4,
  (uint16_t[]){3,26,26,26}
};
sixteenth_t megalovania_sixteenth6 = {
  4,
  (uint16_t[]){4,27,27,27}
};
sixteenth_t megalovania_sixteenth7 = {
  4,
  (uint16_t[]){5,28,28,28}
};
sixteenth_t megalovania_sixteenth8 = {
  1,
  (uint16_t[]){5}
};
sixteenth_t megalovania_sixteenth9 = {
  1,
  (uint16_t[]){4}
};
sixteenth_t megalovania_sixteenth10 = {
  4,
  (uint16_t[]){6,28,28,28}
};
sixteenth_t megalovania_sixteenth11 = {
  1,
  (uint16_t[]){6}
};
sixteenth_t megalovania_sixteenth12 = {
  4,
  (uint16_t[]){1,28,28,28}
};
sixteenth_t megalovania_sixteenth13 = {
  4,
  (uint16_t[]){2,28,28,28}
};
sixteenth_t megalovania_sixteenth14 = {
  4,
  (uint16_t[]){3,28,28,28}
};
sixteenth_t megalovania_sixteenth15 = {
  4,
  (uint16_t[]){4,28,28,28}
};
sixteenth_t megalovania_sixteenth16 = {
  2,
  (uint16_t[]){7,28}
};
sixteenth_t megalovania_sixteenth17 = {
  1,
  (uint16_t[]){7}
};
sixteenth_t megalovania_sixteenth18 = {
  2,
  (uint16_t[]){1,28}
};
sixteenth_t megalovania_sixteenth19 = {
  2,
  (uint16_t[]){2,28}
};
sixteenth_t megalovania_sixteenth20 = {
  2,
  (uint16_t[]){3,28}
};
sixteenth_t megalovania_sixteenth21 = {
  2,
  (uint16_t[]){4,28}
};
sixteenth_t megalovania_sixteenth22 = {
  2,
  (uint16_t[]){5,28}
};
sixteenth_t megalovania_sixteenth23 = {
  2,
  (uint16_t[]){8,28}
};
sixteenth_t megalovania_sixteenth24 = {
  1,
  (uint16_t[]){8}
};
sixteenth_t megalovania_sixteenth25 = {
  2,
  (uint16_t[]){0,28}
};
sixteenth_t megalovania_sixteenth26 = {
  2,
  (uint16_t[]){6,28}
};
sixteenth_t megalovania_sixteenth27 = {
  4,
  (uint16_t[]){7,28,28,28}
};
sixteenth_t megalovania_sixteenth28 = {
  4,
  (uint16_t[]){8,28,28,28}
};
sixteenth_t megalovania_sixteenth29 = {
  7,
  (uint16_t[]){0,28,45,45,50,66,67}
};
sixteenth_t megalovania_sixteenth30 = {
  5,
  (uint16_t[]){0,50,45,45,67}
};
sixteenth_t megalovania_sixteenth31 = {
  5,
  (uint16_t[]){1,28,50,66,67}
};
sixteenth_t megalovania_sixteenth32 = {
  1,
  (uint16_t[]){67}
};
sixteenth_t megalovania_sixteenth33 = {
  5,
  (uint16_t[]){2,28,48,66,67}
};
sixteenth_t megalovania_sixteenth34 = {
  2,
  (uint16_t[]){66,67}
};
sixteenth_t megalovania_sixteenth35 = {
  5,
  (uint16_t[]){3,28,47,66,67}
};
sixteenth_t megalovania_sixteenth36 = {
  5,
  (uint16_t[]){4,28,46,66,67}
};
sixteenth_t megalovania_sixteenth37 = {
  5,
  (uint16_t[]){5,28,43,66,67}
};
sixteenth_t megalovania_sixteenth38 = {
  4,
  (uint16_t[]){5,43,66,67}
};
sixteenth_t megalovania_sixteenth39 = {
  4,
  (uint16_t[]){0,45,66,67}
};
sixteenth_t megalovania_sixteenth40 = {
  4,
  (uint16_t[]){4,46,67,66}
};
sixteenth_t megalovania_sixteenth41 = {
  7,
  (uint16_t[]){6,28,50,45,42,69,68}
};
sixteenth_t megalovania_sixteenth42 = {
  5,
  (uint16_t[]){6,45,50,42,68}
};
sixteenth_t megalovania_sixteenth43 = {
  5,
  (uint16_t[]){1,28,50,69,68}
};
sixteenth_t megalovania_sixteenth44 = {
  1,
  (uint16_t[]){68}
};
sixteenth_t megalovania_sixteenth45 = {
  5,
  (uint16_t[]){2,28,48,69,68}
};
sixteenth_t megalovania_sixteenth46 = {
  2,
  (uint16_t[]){69,68}
};
sixteenth_t megalovania_sixteenth47 = {
  5,
  (uint16_t[]){3,28,47,69,68}
};
sixteenth_t megalovania_sixteenth48 = {
  5,
  (uint16_t[]){4,28,46,69,68}
};
sixteenth_t megalovania_sixteenth49 = {
  5,
  (uint16_t[]){5,28,43,69,68}
};
sixteenth_t megalovania_sixteenth50 = {
  4,
  (uint16_t[]){5,43,69,68}
};
sixteenth_t megalovania_sixteenth51 = {
  4,
  (uint16_t[]){0,45,69,68}
};
sixteenth_t megalovania_sixteenth52 = {
  4,
  (uint16_t[]){4,46,69,68}
};
sixteenth_t megalovania_sixteenth53 = {
  7,
  (uint16_t[]){7,28,50,45,52,70,71}
};
sixteenth_t megalovania_sixteenth54 = {
  5,
  (uint16_t[]){7,45,52,50,71}
};
sixteenth_t megalovania_sixteenth55 = {
  5,
  (uint16_t[]){1,28,50,70,71}
};
sixteenth_t megalovania_sixteenth56 = {
  1,
  (uint16_t[]){71}
};
sixteenth_t megalovania_sixteenth57 = {
  5,
  (uint16_t[]){2,28,48,70,71}
};
sixteenth_t megalovania_sixteenth58 = {
  2,
  (uint16_t[]){70,71}
};
sixteenth_t megalovania_sixteenth59 = {
  5,
  (uint16_t[]){3,28,47,70,71}
};
sixteenth_t megalovania_sixteenth60 = {
  5,
  (uint16_t[]){4,28,46,70,71}
};
sixteenth_t megalovania_sixteenth61 = {
  5,
  (uint16_t[]){5,28,43,70,71}
};
sixteenth_t megalovania_sixteenth62 = {
  4,
  (uint16_t[]){5,43,70,71}
};
sixteenth_t megalovania_sixteenth63 = {
  4,
  (uint16_t[]){0,45,70,71}
};
sixteenth_t megalovania_sixteenth64 = {
  4,
  (uint16_t[]){4,46,70,71}
};
sixteenth_t megalovania_sixteenth65 = {
  7,
  (uint16_t[]){8,28,50,45,51,73,72}
};
sixteenth_t megalovania_sixteenth66 = {
  5,
  (uint16_t[]){8,51,50,45,72}
};
sixteenth_t megalovania_sixteenth67 = {
  5,
  (uint16_t[]){1,28,50,73,72}
};
sixteenth_t megalovania_sixteenth68 = {
  1,
  (uint16_t[]){72}
};
sixteenth_t megalovania_sixteenth69 = {
  5,
  (uint16_t[]){2,28,48,73,72}
};
sixteenth_t megalovania_sixteenth70 = {
  2,
  (uint16_t[]){73,72}
};
sixteenth_t megalovania_sixteenth71 = {
  5,
  (uint16_t[]){3,28,47,73,72}
};
sixteenth_t megalovania_sixteenth72 = {
  4,
  (uint16_t[]){4,46,68,69}
};
sixteenth_t megalovania_sixteenth73 = {
  9,
  (uint16_t[]){0,28,28,28,50,45,45,66,67}
};
sixteenth_t megalovania_sixteenth74 = {
  7,
  (uint16_t[]){1,28,28,28,50,66,67}
};
sixteenth_t megalovania_sixteenth75 = {
  7,
  (uint16_t[]){2,28,28,28,48,66,67}
};
sixteenth_t megalovania_sixteenth76 = {
  7,
  (uint16_t[]){3,28,28,28,47,66,67}
};
sixteenth_t megalovania_sixteenth77 = {
  7,
  (uint16_t[]){4,28,28,28,46,66,67}
};
sixteenth_t megalovania_sixteenth78 = {
  7,
  (uint16_t[]){5,28,28,28,43,66,67}
};
sixteenth_t megalovania_sixteenth79 = {
  4,
  (uint16_t[]){4,46,66,67}
};
sixteenth_t megalovania_sixteenth80 = {
  9,
  (uint16_t[]){6,28,28,28,42,45,50,69,68}
};
sixteenth_t megalovania_sixteenth81 = {
  5,
  (uint16_t[]){6,50,45,42,68}
};
sixteenth_t megalovania_sixteenth82 = {
  7,
  (uint16_t[]){1,28,28,28,50,69,68}
};
sixteenth_t megalovania_sixteenth83 = {
  7,
  (uint16_t[]){2,28,28,28,48,69,68}
};
sixteenth_t megalovania_sixteenth84 = {
  7,
  (uint16_t[]){3,28,28,28,47,69,68}
};
sixteenth_t megalovania_sixteenth85 = {
  7,
  (uint16_t[]){4,28,28,28,46,69,68}
};
sixteenth_t megalovania_sixteenth86 = {
  7,
  (uint16_t[]){5,28,28,28,43,69,68}
};
sixteenth_t megalovania_sixteenth87 = {
  7,
  (uint16_t[]){7,28,50,52,45,70,71}
};
sixteenth_t megalovania_sixteenth88 = {
  5,
  (uint16_t[]){7,50,52,45,71}
};
sixteenth_t megalovania_sixteenth89 = {
  4,
  (uint16_t[]){4,46,71,70}
};
sixteenth_t megalovania_sixteenth90 = {
  5,
  (uint16_t[]){8,51,45,50,72}
};
sixteenth_t megalovania_sixteenth91 = {
  5,
  (uint16_t[]){5,42,43,69,68}
};
sixteenth_t megalovania_sixteenth92 = {
  5,
  (uint16_t[]){0,42,45,69,68}
};
sixteenth_t megalovania_sixteenth93 = {
  5,
  (uint16_t[]){4,42,46,68,69}
};
sixteenth_t megalovania_sixteenth94 = {
  3,
  (uint16_t[]){43,66,67}
};
sixteenth_t megalovania_sixteenth95 = {
  2,
  (uint16_t[]){43,67}
};
sixteenth_t megalovania_sixteenth96 = {
  3,
  (uint16_t[]){44,66,67}
};
sixteenth_t megalovania_sixteenth97 = {
  3,
  (uint16_t[]){45,66,67}
};
sixteenth_t megalovania_sixteenth98 = {
  2,
  (uint16_t[]){43,68}
};
sixteenth_t megalovania_sixteenth99 = {
  3,
  (uint16_t[]){46,69,68}
};
sixteenth_t megalovania_sixteenth100 = {
  3,
  (uint16_t[]){47,69,68}
};
sixteenth_t megalovania_sixteenth101 = {
  2,
  (uint16_t[]){47,68}
};
sixteenth_t megalovania_sixteenth102 = {
  3,
  (uint16_t[]){43,69,68}
};
sixteenth_t megalovania_sixteenth103 = {
  3,
  (uint16_t[]){45,69,68}
};
sixteenth_t megalovania_sixteenth104 = {
  3,
  (uint16_t[]){43,70,71}
};
sixteenth_t megalovania_sixteenth105 = {
  2,
  (uint16_t[]){43,71}
};
sixteenth_t megalovania_sixteenth106 = {
  3,
  (uint16_t[]){46,70,71}
};
sixteenth_t megalovania_sixteenth107 = {
  3,
  (uint16_t[]){47,70,71}
};
sixteenth_t megalovania_sixteenth108 = {
  3,
  (uint16_t[]){48,70,71}
};
sixteenth_t megalovania_sixteenth109 = {
  3,
  (uint16_t[]){49,70,71}
};
sixteenth_t megalovania_sixteenth110 = {
  3,
  (uint16_t[]){50,73,72}
};
sixteenth_t megalovania_sixteenth111 = {
  3,
  (uint16_t[]){48,73,72}
};
sixteenth_t megalovania_sixteenth112 = {
  2,
  (uint16_t[]){50,72}
};
sixteenth_t megalovania_sixteenth113 = {
  3,
  (uint16_t[]){49,73,72}
};
sixteenth_t megalovania_sixteenth114 = {
  2,
  (uint16_t[]){49,68}
};
sixteenth_t megalovania_sixteenth115 = {
  3,
  (uint16_t[]){49,69,68}
};
sixteenth_t megalovania_sixteenth116 = {
  3,
  (uint16_t[]){49,68,69}
};
sixteenth_t megalovania_sixteenth117 = {
  5,
  (uint16_t[]){0,28,48,66,67}
};
sixteenth_t megalovania_sixteenth118 = {
  2,
  (uint16_t[]){0,67}
};
sixteenth_t megalovania_sixteenth119 = {
  4,
  (uint16_t[]){1,28,66,67}
};
sixteenth_t megalovania_sixteenth120 = {
  2,
  (uint16_t[]){48,67}
};
sixteenth_t megalovania_sixteenth121 = {
  4,
  (uint16_t[]){2,28,66,67}
};
sixteenth_t megalovania_sixteenth122 = {
  3,
  (uint16_t[]){48,66,67}
};
sixteenth_t megalovania_sixteenth123 = {
  5,
  (uint16_t[]){3,28,48,66,67}
};
sixteenth_t megalovania_sixteenth124 = {
  5,
  (uint16_t[]){5,28,46,66,67}
};
sixteenth_t megalovania_sixteenth125 = {
  4,
  (uint16_t[]){5,46,66,67}
};
sixteenth_t megalovania_sixteenth126 = {
  4,
  (uint16_t[]){0,46,66,67}
};
sixteenth_t megalovania_sixteenth127 = {
  5,
  (uint16_t[]){6,29,48,69,68}
};
sixteenth_t megalovania_sixteenth128 = {
  2,
  (uint16_t[]){6,68}
};
sixteenth_t megalovania_sixteenth129 = {
  5,
  (uint16_t[]){1,29,48,69,68}
};
sixteenth_t megalovania_sixteenth130 = {
  2,
  (uint16_t[]){48,68}
};
sixteenth_t megalovania_sixteenth131 = {
  4,
  (uint16_t[]){2,29,69,68}
};
sixteenth_t megalovania_sixteenth132 = {
  3,
  (uint16_t[]){48,69,68}
};
sixteenth_t megalovania_sixteenth133 = {
  5,
  (uint16_t[]){3,29,46,69,68}
};
sixteenth_t megalovania_sixteenth134 = {
  5,
  (uint16_t[]){4,29,48,69,68}
};
sixteenth_t megalovania_sixteenth135 = {
  5,
  (uint16_t[]){5,29,50,69,68}
};
sixteenth_t megalovania_sixteenth136 = {
  3,
  (uint16_t[]){5,69,68}
};
sixteenth_t megalovania_sixteenth137 = {
  4,
  (uint16_t[]){0,48,69,68}
};
sixteenth_t megalovania_sixteenth138 = {
  4,
  (uint16_t[]){5,46,69,68}
};
sixteenth_t megalovania_sixteenth139 = {
  5,
  (uint16_t[]){7,30,50,70,71}
};
sixteenth_t megalovania_sixteenth140 = {
  2,
  (uint16_t[]){7,71}
};
sixteenth_t megalovania_sixteenth141 = {
  5,
  (uint16_t[]){1,30,48,70,71}
};
sixteenth_t megalovania_sixteenth142 = {
  5,
  (uint16_t[]){2,30,46,70,71}
};
sixteenth_t megalovania_sixteenth143 = {
  4,
  (uint16_t[]){3,30,70,71}
};
sixteenth_t megalovania_sixteenth144 = {
  2,
  (uint16_t[]){49,71}
};
sixteenth_t megalovania_sixteenth145 = {
  4,
  (uint16_t[]){4,30,70,71}
};
sixteenth_t megalovania_sixteenth146 = {
  2,
  (uint16_t[]){46,71}
};
sixteenth_t megalovania_sixteenth147 = {
  4,
  (uint16_t[]){5,30,70,71}
};
sixteenth_t megalovania_sixteenth148 = {
  3,
  (uint16_t[]){0,70,71}
};
sixteenth_t megalovania_sixteenth149 = {
  4,
  (uint16_t[]){5,44,70,71}
};
sixteenth_t megalovania_sixteenth150 = {
  3,
  (uint16_t[]){4,70,71}
};
sixteenth_t megalovania_sixteenth151 = {
  5,
  (uint16_t[]){8,31,51,73,72}
};
sixteenth_t megalovania_sixteenth152 = {
  2,
  (uint16_t[]){8,72}
};
sixteenth_t megalovania_sixteenth153 = {
  5,
  (uint16_t[]){1,31,45,73,72}
};
sixteenth_t megalovania_sixteenth154 = {
  2,
  (uint16_t[]){44,72}
};
sixteenth_t megalovania_sixteenth155 = {
  4,
  (uint16_t[]){2,31,73,72}
};
sixteenth_t megalovania_sixteenth156 = {
  3,
  (uint16_t[]){43,73,72}
};
sixteenth_t megalovania_sixteenth157 = {
  5,
  (uint16_t[]){3,31,49,73,72}
};
sixteenth_t megalovania_sixteenth158 = {
  5,
  (uint16_t[]){4,31,49,69,68}
};
sixteenth_t megalovania_sixteenth159 = {
  5,
  (uint16_t[]){5,31,49,69,68}
};
sixteenth_t megalovania_sixteenth160 = {
  4,
  (uint16_t[]){5,49,69,68}
};
sixteenth_t megalovania_sixteenth161 = {
  4,
  (uint16_t[]){0,49,69,68}
};
sixteenth_t megalovania_sixteenth162 = {
  4,
  (uint16_t[]){4,49,68,69}
};
sixteenth_t megalovania_sixteenth163 = {
  2,
  (uint16_t[]){31,72}
};
sixteenth_t megalovania_sixteenth164 = {
  3,
  (uint16_t[]){31,73,72}
};
sixteenth_t megalovania_sixteenth165 = {
  2,
  (uint16_t[]){72,73}
};
sixteenth_t megalovania_sixteenth166 = {
  6,
  (uint16_t[]){4,31,46,46,69,68}
};
sixteenth_t megalovania_sixteenth167 = {
  6,
  (uint16_t[]){5,31,43,43,69,68}
};
sixteenth_t megalovania_sixteenth168 = {
  5,
  (uint16_t[]){4,46,46,69,68}
};
sixteenth_t megalovania_sixteenth169 = {
  4,
  (uint16_t[]){4,46,46,68}
};
sixteenth_t megalovania_sixteenth170 = {
  3,
  (uint16_t[]){31,69,68}
};
sixteenth_t megalovania_sixteenth171 = {
  5,
  (uint16_t[]){2,48,48,69,68}
};
sixteenth_t megalovania_sixteenth172 = {
  6,
  (uint16_t[]){9,32,49,49,66,67}
};
sixteenth_t megalovania_sixteenth173 = {
  3,
  (uint16_t[]){32,66,67}
};
sixteenth_t megalovania_sixteenth174 = {
  4,
  (uint16_t[]){3,47,47,67}
};
sixteenth_t megalovania_sixteenth175 = {
  5,
  (uint16_t[]){5,43,43,66,67}
};
sixteenth_t megalovania_sixteenth176 = {
  2,
  (uint16_t[]){32,67}
};
sixteenth_t megalovania_sixteenth177 = {
  5,
  (uint16_t[]){10,44,44,66,67}
};
sixteenth_t megalovania_sixteenth178 = {
  5,
  (uint16_t[]){5,32,43,43,67}
};
sixteenth_t megalovania_sixteenth179 = {
  5,
  (uint16_t[]){4,32,46,46,67}
};
sixteenth_t megalovania_sixteenth180 = {
  6,
  (uint16_t[]){2,32,48,48,66,67}
};
sixteenth_t megalovania_sixteenth181 = {
  6,
  (uint16_t[]){11,33,53,53,75,74}
};
sixteenth_t megalovania_sixteenth182 = {
  4,
  (uint16_t[]){11,53,53,74}
};
sixteenth_t megalovania_sixteenth183 = {
  6,
  (uint16_t[]){3,33,47,47,75,74}
};
sixteenth_t megalovania_sixteenth184 = {
  1,
  (uint16_t[]){74}
};
sixteenth_t megalovania_sixteenth185 = {
  5,
  (uint16_t[]){4,46,46,75,74}
};
sixteenth_t megalovania_sixteenth186 = {
  5,
  (uint16_t[]){5,33,43,43,74}
};
sixteenth_t megalovania_sixteenth187 = {
  6,
  (uint16_t[]){4,33,46,46,74,75}
};
sixteenth_t megalovania_sixteenth188 = {
  4,
  (uint16_t[]){4,46,46,76}
};
sixteenth_t megalovania_sixteenth189 = {
  5,
  (uint16_t[]){4,46,46,77,76}
};
sixteenth_t megalovania_sixteenth190 = {
  5,
  (uint16_t[]){4,46,46,76,77}
};
sixteenth_t megalovania_sixteenth191 = {
  5,
  (uint16_t[]){12,34,54,73,72}
};
sixteenth_t megalovania_sixteenth192 = {
  5,
  (uint16_t[]){13,35,55,73,72}
};
sixteenth_t megalovania_sixteenth193 = {
  5,
  (uint16_t[]){14,36,56,73,72}
};
sixteenth_t megalovania_sixteenth194 = {
  4,
  (uint16_t[]){5,36,43,72}
};
sixteenth_t megalovania_sixteenth195 = {
  4,
  (uint16_t[]){10,37,44,72}
};
sixteenth_t megalovania_sixteenth196 = {
  4,
  (uint16_t[]){10,44,73,72}
};
sixteenth_t megalovania_sixteenth197 = {
  3,
  (uint16_t[]){10,44,72}
};
sixteenth_t megalovania_sixteenth198 = {
  5,
  (uint16_t[]){0,37,45,73,72}
};
sixteenth_t megalovania_sixteenth199 = {
  4,
  (uint16_t[]){0,45,73,72}
};
sixteenth_t megalovania_sixteenth200 = {
  5,
  (uint16_t[]){10,37,44,69,68}
};
sixteenth_t megalovania_sixteenth201 = {
  3,
  (uint16_t[]){10,44,68}
};
sixteenth_t megalovania_sixteenth202 = {
  4,
  (uint16_t[]){10,44,69,68}
};
sixteenth_t megalovania_sixteenth203 = {
  5,
  (uint16_t[]){5,37,43,69,68}
};
sixteenth_t megalovania_sixteenth204 = {
  3,
  (uint16_t[]){5,43,68}
};
sixteenth_t megalovania_sixteenth205 = {
  4,
  (uint16_t[]){4,37,46,68}
};
sixteenth_t megalovania_sixteenth206 = {
  3,
  (uint16_t[]){4,46,68}
};
sixteenth_t megalovania_sixteenth207 = {
  5,
  (uint16_t[]){2,37,48,66,67}
};
sixteenth_t megalovania_sixteenth208 = {
  3,
  (uint16_t[]){2,48,67}
};
sixteenth_t megalovania_sixteenth209 = {
  4,
  (uint16_t[]){2,48,66,67}
};
sixteenth_t megalovania_sixteenth210 = {
  3,
  (uint16_t[]){47,66,67}
};
sixteenth_t megalovania_sixteenth211 = {
  3,
  (uint16_t[]){65,66,67}
};
sixteenth_t megalovania_sixteenth212 = {
  6,
  (uint16_t[]){15,38,57,57,75,74}
};
sixteenth_t megalovania_sixteenth213 = {
  4,
  (uint16_t[]){15,57,57,74}
};
sixteenth_t megalovania_sixteenth214 = {
  5,
  (uint16_t[]){15,57,57,75,74}
};
sixteenth_t megalovania_sixteenth215 = {
  2,
  (uint16_t[]){74,75}
};
sixteenth_t megalovania_sixteenth216 = {
  5,
  (uint16_t[]){16,39,58,58,76}
};
sixteenth_t megalovania_sixteenth217 = {
  5,
  (uint16_t[]){16,58,58,77,76}
};
sixteenth_t megalovania_sixteenth218 = {
  4,
  (uint16_t[]){16,58,58,76}
};
sixteenth_t megalovania_sixteenth219 = {
  2,
  (uint16_t[]){39,72}
};
sixteenth_t megalovania_sixteenth220 = {
  3,
  (uint16_t[]){39,73,72}
};
sixteenth_t megalovania_sixteenth221 = {
  6,
  (uint16_t[]){4,39,46,46,69,68}
};
sixteenth_t megalovania_sixteenth222 = {
  6,
  (uint16_t[]){5,39,43,43,69,68}
};
sixteenth_t megalovania_sixteenth223 = {
  3,
  (uint16_t[]){39,69,68}
};
sixteenth_t megalovania_sixteenth224 = {
  5,
  (uint16_t[]){2,48,48,68,69}
};
sixteenth_t megalovania_sixteenth225 = {
  6,
  (uint16_t[]){9,39,49,49,66,67}
};
sixteenth_t megalovania_sixteenth226 = {
  3,
  (uint16_t[]){39,66,67}
};
sixteenth_t megalovania_sixteenth227 = {
  2,
  (uint16_t[]){39,67}
};
sixteenth_t megalovania_sixteenth228 = {
  5,
  (uint16_t[]){5,39,43,43,67}
};
sixteenth_t megalovania_sixteenth229 = {
  5,
  (uint16_t[]){4,39,46,46,67}
};
sixteenth_t megalovania_sixteenth230 = {
  6,
  (uint16_t[]){2,39,48,48,66,67}
};
sixteenth_t megalovania_sixteenth231 = {
  2,
  (uint16_t[]){67,66}
};
sixteenth_t megalovania_sixteenth232 = {
  6,
  (uint16_t[]){11,39,53,53,75,74}
};
sixteenth_t megalovania_sixteenth233 = {
  6,
  (uint16_t[]){3,39,47,47,75,74}
};
sixteenth_t megalovania_sixteenth234 = {
  5,
  (uint16_t[]){5,39,43,43,74}
};
sixteenth_t megalovania_sixteenth235 = {
  6,
  (uint16_t[]){4,39,46,46,74,75}
};
sixteenth_t megalovania_sixteenth236 = {
  5,
  (uint16_t[]){12,39,54,73,72}
};
sixteenth_t megalovania_sixteenth237 = {
  5,
  (uint16_t[]){13,39,55,73,72}
};
sixteenth_t megalovania_sixteenth238 = {
  5,
  (uint16_t[]){14,39,56,73,72}
};
sixteenth_t megalovania_sixteenth239 = {
  4,
  (uint16_t[]){5,39,43,72}
};
sixteenth_t megalovania_sixteenth240 = {
  4,
  (uint16_t[]){10,39,44,72}
};
sixteenth_t megalovania_sixteenth241 = {
  5,
  (uint16_t[]){0,39,45,73,72}
};
sixteenth_t megalovania_sixteenth242 = {
  5,
  (uint16_t[]){10,39,44,69,68}
};
sixteenth_t megalovania_sixteenth243 = {
  5,
  (uint16_t[]){5,39,43,69,68}
};
sixteenth_t megalovania_sixteenth244 = {
  4,
  (uint16_t[]){4,39,46,68}
};
sixteenth_t megalovania_sixteenth245 = {
  5,
  (uint16_t[]){2,39,48,66,67}
};
sixteenth_t megalovania_sixteenth246 = {
  6,
  (uint16_t[]){15,39,57,57,75,74}
};
sixteenth_t megalovania_sixteenth247 = {
  2,
  (uint16_t[]){75,74}
};
sixteenth_t megalovania_sixteenth248 = {
  4,
  (uint16_t[]){73,72,72,80}
};
sixteenth_t megalovania_sixteenth249 = {
  3,
  (uint16_t[]){72,72,80}
};
sixteenth_t megalovania_sixteenth250 = {
  4,
  (uint16_t[]){73,72,78,81}
};
sixteenth_t megalovania_sixteenth251 = {
  4,
  (uint16_t[]){72,73,78,81}
};
sixteenth_t megalovania_sixteenth252 = {
  4,
  (uint16_t[]){69,68,79,82}
};
sixteenth_t megalovania_sixteenth253 = {
  3,
  (uint16_t[]){68,79,82}
};
sixteenth_t megalovania_sixteenth254 = {
  3,
  (uint16_t[]){68,67,83}
};
sixteenth_t megalovania_sixteenth255 = {
  4,
  (uint16_t[]){69,68,67,83}
};
sixteenth_t megalovania_sixteenth256 = {
  4,
  (uint16_t[]){70,71,78,81}
};
sixteenth_t megalovania_sixteenth257 = {
  3,
  (uint16_t[]){71,78,81}
};
sixteenth_t megalovania_sixteenth258 = {
  4,
  (uint16_t[]){68,69,67,83}
};
sixteenth_t megalovania_sixteenth259 = {
  4,
  (uint16_t[]){66,67,67,83}
};
sixteenth_t megalovania_sixteenth260 = {
  3,
  (uint16_t[]){67,67,83}
};
sixteenth_t megalovania_sixteenth261 = {
  6,
  (uint16_t[]){0,39,73,72,72,80}
};
sixteenth_t megalovania_sixteenth262 = {
  4,
  (uint16_t[]){0,72,72,80}
};
sixteenth_t megalovania_sixteenth263 = {
  6,
  (uint16_t[]){1,39,73,72,72,80}
};
sixteenth_t megalovania_sixteenth264 = {
  6,
  (uint16_t[]){2,39,73,72,72,80}
};
sixteenth_t megalovania_sixteenth265 = {
  6,
  (uint16_t[]){3,39,73,72,72,80}
};
sixteenth_t megalovania_sixteenth266 = {
  6,
  (uint16_t[]){4,39,73,72,72,80}
};
sixteenth_t megalovania_sixteenth267 = {
  6,
  (uint16_t[]){5,39,73,72,72,80}
};
sixteenth_t megalovania_sixteenth268 = {
  5,
  (uint16_t[]){5,73,72,78,81}
};
sixteenth_t megalovania_sixteenth269 = {
  5,
  (uint16_t[]){0,73,72,78,81}
};
sixteenth_t megalovania_sixteenth270 = {
  5,
  (uint16_t[]){4,73,72,78,81}
};
sixteenth_t megalovania_sixteenth271 = {
  6,
  (uint16_t[]){6,39,69,68,79,82}
};
sixteenth_t megalovania_sixteenth272 = {
  4,
  (uint16_t[]){6,68,79,82}
};
sixteenth_t megalovania_sixteenth273 = {
  6,
  (uint16_t[]){1,39,69,68,79,82}
};
sixteenth_t megalovania_sixteenth274 = {
  6,
  (uint16_t[]){2,39,69,68,79,82}
};
sixteenth_t megalovania_sixteenth275 = {
  6,
  (uint16_t[]){3,39,69,68,79,82}
};
sixteenth_t megalovania_sixteenth276 = {
  6,
  (uint16_t[]){4,39,69,68,67,83}
};
sixteenth_t megalovania_sixteenth277 = {
  6,
  (uint16_t[]){5,39,69,68,67,83}
};
sixteenth_t megalovania_sixteenth278 = {
  5,
  (uint16_t[]){5,69,68,67,83}
};
sixteenth_t megalovania_sixteenth279 = {
  5,
  (uint16_t[]){0,69,68,67,83}
};
sixteenth_t megalovania_sixteenth280 = {
  5,
  (uint16_t[]){4,69,68,67,83}
};
sixteenth_t megalovania_sixteenth281 = {
  6,
  (uint16_t[]){7,39,70,71,78,81}
};
sixteenth_t megalovania_sixteenth282 = {
  4,
  (uint16_t[]){7,71,78,81}
};
sixteenth_t megalovania_sixteenth283 = {
  6,
  (uint16_t[]){1,39,70,71,78,81}
};
sixteenth_t megalovania_sixteenth284 = {
  6,
  (uint16_t[]){2,39,70,71,78,81}
};
sixteenth_t megalovania_sixteenth285 = {
  6,
  (uint16_t[]){3,39,70,71,78,81}
};
sixteenth_t megalovania_sixteenth286 = {
  6,
  (uint16_t[]){4,39,70,71,78,81}
};
sixteenth_t megalovania_sixteenth287 = {
  6,
  (uint16_t[]){5,39,70,71,78,81}
};
sixteenth_t megalovania_sixteenth288 = {
  5,
  (uint16_t[]){5,70,71,78,81}
};
sixteenth_t megalovania_sixteenth289 = {
  5,
  (uint16_t[]){0,70,71,78,81}
};
sixteenth_t megalovania_sixteenth290 = {
  5,
  (uint16_t[]){4,70,71,78,81}
};
sixteenth_t megalovania_sixteenth291 = {
  6,
  (uint16_t[]){8,39,70,71,78,81}
};
sixteenth_t megalovania_sixteenth292 = {
  4,
  (uint16_t[]){8,71,78,81}
};
sixteenth_t megalovania_sixteenth293 = {
  5,
  (uint16_t[]){4,68,69,67,83}
};
sixteenth_t megalovania_sixteenth294 = {
  12,
  (uint16_t[]){17,5,12,12,40,43,59,54,66,67,67,83}
};
sixteenth_t megalovania_sixteenth295 = {
  12,
  (uint16_t[]){19,18,10,19,41,60,44,61,66,67,67,83}
};
sixteenth_t megalovania_sixteenth296 = {
  12,
  (uint16_t[]){9,6,20,20,41,49,42,62,66,67,67,83}
};
sixteenth_t megalovania_sixteenth297 = {
  12,
  (uint16_t[]){10,18,19,19,41,44,60,61,66,67,67,83}
};
sixteenth_t megalovania_sixteenth298 = {
  12,
  (uint16_t[]){1,0,21,21,41,50,45,63,66,67,67,83}
};
sixteenth_t megalovania_sixteenth299 = {
  11,
  (uint16_t[]){22,22,14,2,48,56,64,66,67,67,83}
};
sixteenth_t megalovania_sixteenth300 = {
  11,
  (uint16_t[]){6,20,9,20,49,42,62,66,67,67,83}
};
sixteenth_t megalovania_sixteenth301 = {
  11,
  (uint16_t[]){1,0,21,21,45,50,63,66,67,67,83}
};
sixteenth_t megalovania_sixteenth302 = {
  12,
  (uint16_t[]){5,17,12,12,41,59,54,43,66,67,67,83}
};
sixteenth_t megalovania_sixteenth303 = {
  12,
  (uint16_t[]){19,19,18,10,41,60,44,61,66,67,67,83}
};
sixteenth_t megalovania_sixteenth304 = {
  12,
  (uint16_t[]){9,20,20,6,41,42,62,49,66,67,67,83}
};
sixteenth_t megalovania_sixteenth305 = {
  12,
  (uint16_t[]){10,18,19,19,41,60,44,61,66,67,67,83}
};
sixteenth_t megalovania_sixteenth306 = {
  12,
  (uint16_t[]){0,1,21,21,41,50,45,63,66,67,67,83}
};
sixteenth_t megalovania_sixteenth307 = {
  11,
  (uint16_t[]){22,22,14,2,48,64,56,66,67,67,83}
};
sixteenth_t megalovania_sixteenth308 = {
  11,
  (uint16_t[]){9,6,20,20,49,42,62,66,67,67,83}
};
sixteenth_t megalovania_sixteenth309 = {
  11,
  (uint16_t[]){0,1,21,21,50,45,63,67,66,67,83}
};
sixteenth_t megalovania_sixteenth310 = {
  2,
  (uint16_t[]){0,41}
};
sixteenth_t megalovania_sixteenth311 = {
  2,
  (uint16_t[]){1,41}
};
sixteenth_t megalovania_sixteenth312 = {
  2,
  (uint16_t[]){2,41}
};
sixteenth_t megalovania_sixteenth313 = {
  2,
  (uint16_t[]){3,41}
};
sixteenth_t megalovania_sixteenth314 = {
  2,
  (uint16_t[]){4,41}
};
sixteenth_t megalovania_sixteenth315 = {
  2,
  (uint16_t[]){5,41}
};
sixteenth_t megalovania_sixteenth316 = {
  2,
  (uint16_t[]){8,41}
};
sixteenth_t megalovania_sixteenth317 = {
  2,
  (uint16_t[]){6,41}
};
sixteenth_t megalovania_sixteenth318 = {
  0,
  (uint16_t[]){}
};
sixteenth_t* megalovania_unique_sixteenths[] = {&megalovania_sixteenth0,&megalovania_sixteenth1,&megalovania_sixteenth2,&megalovania_sixteenth3,&megalovania_sixteenth4,&megalovania_sixteenth5,&megalovania_sixteenth6,&megalovania_sixteenth7,&megalovania_sixteenth8,&megalovania_sixteenth9,&megalovania_sixteenth10,&megalovania_sixteenth11,&megalovania_sixteenth12,&megalovania_sixteenth13,&megalovania_sixteenth14,&megalovania_sixteenth15,&megalovania_sixteenth16,&megalovania_sixteenth17,&megalovania_sixteenth18,&megalovania_sixteenth19,&megalovania_sixteenth20,&megalovania_sixteenth21,&megalovania_sixteenth22,&megalovania_sixteenth23,&megalovania_sixteenth24,&megalovania_sixteenth25,&megalovania_sixteenth26,&megalovania_sixteenth27,&megalovania_sixteenth28,&megalovania_sixteenth29,&megalovania_sixteenth30,&megalovania_sixteenth31,&megalovania_sixteenth32,&megalovania_sixteenth33,&megalovania_sixteenth34,&megalovania_sixteenth35,&megalovania_sixteenth36,&megalovania_sixteenth37,&megalovania_sixteenth38,&megalovania_sixteenth39,&megalovania_sixteenth40,&megalovania_sixteenth41,&megalovania_sixteenth42,&megalovania_sixteenth43,&megalovania_sixteenth44,&megalovania_sixteenth45,&megalovania_sixteenth46,&megalovania_sixteenth47,&megalovania_sixteenth48,&megalovania_sixteenth49,&megalovania_sixteenth50,&megalovania_sixteenth51,&megalovania_sixteenth52,&megalovania_sixteenth53,&megalovania_sixteenth54,&megalovania_sixteenth55,&megalovania_sixteenth56,&megalovania_sixteenth57,&megalovania_sixteenth58,&megalovania_sixteenth59,&megalovania_sixteenth60,&megalovania_sixteenth61,&megalovania_sixteenth62,&megalovania_sixteenth63,&megalovania_sixteenth64,&megalovania_sixteenth65,&megalovania_sixteenth66,&megalovania_sixteenth67,&megalovania_sixteenth68,&megalovania_sixteenth69,&megalovania_sixteenth70,&megalovania_sixteenth71,&megalovania_sixteenth72,&megalovania_sixteenth73,&megalovania_sixteenth74,&megalovania_sixteenth75,&megalovania_sixteenth76,&megalovania_sixteenth77,&megalovania_sixteenth78,&megalovania_sixteenth79,&megalovania_sixteenth80,&megalovania_sixteenth81,&megalovania_sixteenth82,&megalovania_sixteenth83,&megalovania_sixteenth84,&megalovania_sixteenth85,&megalovania_sixteenth86,&megalovania_sixteenth87,&megalovania_sixteenth88,&megalovania_sixteenth89,&megalovania_sixteenth90,&megalovania_sixteenth91,&megalovania_sixteenth92,&megalovania_sixteenth93,&megalovania_sixteenth94,&megalovania_sixteenth95,&megalovania_sixteenth96,&megalovania_sixteenth97,&megalovania_sixteenth98,&megalovania_sixteenth99,&megalovania_sixteenth100,&megalovania_sixteenth101,&megalovania_sixteenth102,&megalovania_sixteenth103,&megalovania_sixteenth104,&megalovania_sixteenth105,&megalovania_sixteenth106,&megalovania_sixteenth107,&megalovania_sixteenth108,&megalovania_sixteenth109,&megalovania_sixteenth110,&megalovania_sixteenth111,&megalovania_sixteenth112,&megalovania_sixteenth113,&megalovania_sixteenth114,&megalovania_sixteenth115,&megalovania_sixteenth116,&megalovania_sixteenth117,&megalovania_sixteenth118,&megalovania_sixteenth119,&megalovania_sixteenth120,&megalovania_sixteenth121,&megalovania_sixteenth122,&megalovania_sixteenth123,&megalovania_sixteenth124,&megalovania_sixteenth125,&megalovania_sixteenth126,&megalovania_sixteenth127,&megalovania_sixteenth128,&megalovania_sixteenth129,&megalovania_sixteenth130,&megalovania_sixteenth131,&megalovania_sixteenth132,&megalovania_sixteenth133,&megalovania_sixteenth134,&megalovania_sixteenth135,&megalovania_sixteenth136,&megalovania_sixteenth137,&megalovania_sixteenth138,&megalovania_sixteenth139,&megalovania_sixteenth140,&megalovania_sixteenth141,&megalovania_sixteenth142,&megalovania_sixteenth143,&megalovania_sixteenth144,&megalovania_sixteenth145,&megalovania_sixteenth146,&megalovania_sixteenth147,&megalovania_sixteenth148,&megalovania_sixteenth149,&megalovania_sixteenth150,&megalovania_sixteenth151,&megalovania_sixteenth152,&megalovania_sixteenth153,&megalovania_sixteenth154,&megalovania_sixteenth155,&megalovania_sixteenth156,&megalovania_sixteenth157,&megalovania_sixteenth158,&megalovania_sixteenth159,&megalovania_sixteenth160,&megalovania_sixteenth161,&megalovania_sixteenth162,&megalovania_sixteenth163,&megalovania_sixteenth164,&megalovania_sixteenth165,&megalovania_sixteenth166,&megalovania_sixteenth167,&megalovania_sixteenth168,&megalovania_sixteenth169,&megalovania_sixteenth170,&megalovania_sixteenth171,&megalovania_sixteenth172,&megalovania_sixteenth173,&megalovania_sixteenth174,&megalovania_sixteenth175,&megalovania_sixteenth176,&megalovania_sixteenth177,&megalovania_sixteenth178,&megalovania_sixteenth179,&megalovania_sixteenth180,&megalovania_sixteenth181,&megalovania_sixteenth182,&megalovania_sixteenth183,&megalovania_sixteenth184,&megalovania_sixteenth185,&megalovania_sixteenth186,&megalovania_sixteenth187,&megalovania_sixteenth188,&megalovania_sixteenth189,&megalovania_sixteenth190,&megalovania_sixteenth191,&megalovania_sixteenth192,&megalovania_sixteenth193,&megalovania_sixteenth194,&megalovania_sixteenth195,&megalovania_sixteenth196,&megalovania_sixteenth197,&megalovania_sixteenth198,&megalovania_sixteenth199,&megalovania_sixteenth200,&megalovania_sixteenth201,&megalovania_sixteenth202,&megalovania_sixteenth203,&megalovania_sixteenth204,&megalovania_sixteenth205,&megalovania_sixteenth206,&megalovania_sixteenth207,&megalovania_sixteenth208,&megalovania_sixteenth209,&megalovania_sixteenth210,&megalovania_sixteenth211,&megalovania_sixteenth212,&megalovania_sixteenth213,&megalovania_sixteenth214,&megalovania_sixteenth215,&megalovania_sixteenth216,&megalovania_sixteenth217,&megalovania_sixteenth218,&megalovania_sixteenth219,&megalovania_sixteenth220,&megalovania_sixteenth221,&megalovania_sixteenth222,&megalovania_sixteenth223,&megalovania_sixteenth224,&megalovania_sixteenth225,&megalovania_sixteenth226,&megalovania_sixteenth227,&megalovania_sixteenth228,&megalovania_sixteenth229,&megalovania_sixteenth230,&megalovania_sixteenth231,&megalovania_sixteenth232,&megalovania_sixteenth233,&megalovania_sixteenth234,&megalovania_sixteenth235,&megalovania_sixteenth236,&megalovania_sixteenth237,&megalovania_sixteenth238,&megalovania_sixteenth239,&megalovania_sixteenth240,&megalovania_sixteenth241,&megalovania_sixteenth242,&megalovania_sixteenth243,&megalovania_sixteenth244,&megalovania_sixteenth245,&megalovania_sixteenth246,&megalovania_sixteenth247,&megalovania_sixteenth248,&megalovania_sixteenth249,&megalovania_sixteenth250,&megalovania_sixteenth251,&megalovania_sixteenth252,&megalovania_sixteenth253,&megalovania_sixteenth254,&megalovania_sixteenth255,&megalovania_sixteenth256,&megalovania_sixteenth257,&megalovania_sixteenth258,&megalovania_sixteenth259,&megalovania_sixteenth260,&megalovania_sixteenth261,&megalovania_sixteenth262,&megalovania_sixteenth263,&megalovania_sixteenth264,&megalovania_sixteenth265,&megalovania_sixteenth266,&megalovania_sixteenth267,&megalovania_sixteenth268,&megalovania_sixteenth269,&megalovania_sixteenth270,&megalovania_sixteenth271,&megalovania_sixteenth272,&megalovania_sixteenth273,&megalovania_sixteenth274,&megalovania_sixteenth275,&megalovania_sixteenth276,&megalovania_sixteenth277,&megalovania_sixteenth278,&megalovania_sixteenth279,&megalovania_sixteenth280,&megalovania_sixteenth281,&megalovania_sixteenth282,&megalovania_sixteenth283,&megalovania_sixteenth284,&megalovania_sixteenth285,&megalovania_sixteenth286,&megalovania_sixteenth287,&megalovania_sixteenth288,&megalovania_sixteenth289,&megalovania_sixteenth290,&megalovania_sixteenth291,&megalovania_sixteenth292,&megalovania_sixteenth293,&megalovania_sixteenth294,&megalovania_sixteenth295,&megalovania_sixteenth296,&megalovania_sixteenth297,&megalovania_sixteenth298,&megalovania_sixteenth299,&megalovania_sixteenth300,&megalovania_sixteenth301,&megalovania_sixteenth302,&megalovania_sixteenth303,&megalovania_sixteenth304,&megalovania_sixteenth305,&megalovania_sixteenth306,&megalovania_sixteenth307,&megalovania_sixteenth308,&megalovania_sixteenth309,&megalovania_sixteenth310,&megalovania_sixteenth311,&megalovania_sixteenth312,&megalovania_sixteenth313,&megalovania_sixteenth314,&megalovania_sixteenth315,&megalovania_sixteenth316,&megalovania_sixteenth317,&megalovania_sixteenth318};
// Song
uint16_t megalovania_sixteenth_indexes[] = {318,318,318,318,318,318,318,318,318,318,0,1,2,3,4,3,3,5,3,6,3,7,8,1,8,9,10,11,12,3,13,3,3,14,3,15,3,7,8,1,8,9,16,17,18,3,19,3,3,20,3,21,3,22,8,1,8,9,23,24,18,3,19,3,3,20,3,21,3,22,8,1,8,9,25,1,18,3,19,3,3,20,3,21,3,22,8,1,8,9,26,11,18,3,19,3,3,20,3,21,3,22,8,1,8,9,27,17,12,3,13,3,3,14,3,15,3,7,8,1,8,9,28,24,12,3,13,3,3,14,3,15,3,7,8,1,8,9,29,30,31,32,33,34,32,35,32,36,32,37,38,39,38,40,41,42,43,44,45,46,44,47,44,48,44,49,50,51,50,52,53,54,55,56,57,58,56,59,56,60,56,61,62,63,62,64,65,66,67,68,69,70,68,71,44,48,44,49,50,51,50,72,73,30,74,32,75,34,32,76,32,77,32,78,38,39,38,79,80,81,82,44,83,46,44,84,44,85,44,86,50,51,50,52,87,88,55,56,57,58,56,59,56,60,56,61,62,63,62,89,65,90,67,68,69,70,68,71,44,48,44,49,91,92,91,93,94,32,34,95,34,96,32,94,32,97,32,97,97,97,97,97,46,44,46,98,46,99,44,100,101,102,44,103,102,99,46,46,104,56,104,105,58,106,56,107,56,108,56,109,58,108,108,108,110,68,70,68,110,111,112,113,114,115,114,115,115,115,115,116,117,118,119,120,121,122,32,123,32,36,32,124,125,126,125,79,127,128,129,130,131,132,44,133,44,134,44,135,136,137,138,52,139,140,141,56,142,58,105,143,144,145,146,147,62,148,149,150,151,152,153,154,155,156,68,157,114,158,114,159,160,161,160,162,70,68,70,68,70,70,68,70,163,70,163,70,164,70,164,165,166,44,167,44,166,168,169,168,169,168,169,168,168,168,170,171,172,32,173,174,173,175,176,177,178,34,179,34,180,34,172,34,181,182,183,184,183,185,186,187,188,189,188,189,189,189,189,190,191,68,192,68,193,70,194,70,195,196,197,196,198,199,199,199,200,201,202,201,203,50,204,50,205,52,206,52,200,202,202,202,207,208,209,208,209,209,208,34,32,210,32,211,34,96,34,97,212,213,214,213,214,214,213,215,216,217,218,217,217,217,217,217,70,68,70,68,70,70,68,70,219,70,219,70,220,70,220,70,221,44,222,44,221,168,169,168,169,168,169,168,168,168,223,224,225,32,226,174,226,175,227,177,228,34,229,34,230,34,225,231,232,182,233,184,233,185,234,235,188,189,188,189,189,189,189,189,236,68,237,68,238,70,239,70,240,196,197,196,241,199,199,199,242,201,202,201,243,50,204,50,244,52,206,52,242,202,202,202,245,208,209,208,209,209,208,34,32,210,32,211,34,96,34,97,246,213,214,213,214,214,213,247,216,217,218,217,217,217,217,217,248,249,248,249,248,248,249,248,249,248,249,248,250,250,250,251,252,253,252,253,252,252,253,252,254,255,254,255,255,255,255,255,256,257,256,257,256,256,257,256,257,256,257,256,256,256,256,256,256,257,256,257,256,256,257,256,257,256,257,256,256,256,256,256,248,249,248,249,248,248,249,248,249,248,249,248,250,250,250,250,252,253,252,253,252,252,253,252,254,255,254,255,255,255,255,258,259,260,259,260,259,259,260,259,260,259,260,259,259,259,259,259,259,260,259,260,259,259,260,259,260,259,260,259,259,259,259,259,261,262,263,249,264,248,249,265,249,266,249,267,268,269,268,270,271,272,273,253,274,252,253,275,254,276,254,277,278,279,278,280,281,282,283,257,284,256,257,285,257,286,257,287,288,289,288,290,291,292,283,257,284,256,257,285,257,286,257,287,288,289,288,290,261,262,263,249,264,248,249,265,249,266,249,267,268,269,268,270,271,272,273,253,274,252,253,275,254,276,254,277,278,279,278,293,259,260,294,260,295,259,260,296,260,297,260,298,259,299,300,301,259,260,302,260,303,259,260,304,260,305,260,306,259,307,308,309,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,310,310,311,3,312,3,3,313,3,314,3,315,8,310,315,314,310,310,311,3,312,3,3,313,3,314,3,315,8,310,315,314,316,316,311,3,312,3,3,313,3,314,3,315,8,310,315,314,317,317,311,3,312,3,3,313,3,314,3,315,8,310,315,314,310,310,311,3,312,3,3,313,3,314,3,315,8,310,315,314,310,310,311,3,312,3,3,313,3,314,3,315,8,310,315,314,316,316,311,3,312,3,3,313,3,314,3,315,8,310,315,314,317,317,311,3,312,3,3,313,3,314,3,315,8,310,315,314};
song_t megalovania_song = {
  "MEGALOVANIA",
  120,
  78,
  318,
  84,
  megalovania_sixteenth_indexes,
  megalovania_unique_sixteenths,
  megalovania_unique_notes
};
