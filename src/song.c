#include "tone.h"

/*
 * ������Ŀ�Ķ�Ӧ����
 * ����ÿ��������ĵ�һ���ʾ������һ���ʾʱֵ
 * ��һС�ڻ��б��ڲ鿴
 * �� {-1��-1} ��־����  
 */
int Birthday[][2] = {
  {C4, CROTCHET}, {C4, QUAVER}, 
  {D4, CROTCHET_DOTTED}, {C4, CROTCHET_DOTTED}, {F4, CROTCHET_DOTTED}, 
  {E4, MINIM_DOTTED}, {C4, CROTCHET}, {C4, QUAVER},
  {D4, CROTCHET_DOTTED}, {C4, CROTCHET_DOTTED}, {G4, CROTCHET_DOTTED},
  {F4, MINIM_DOTTED}, {C4, CROTCHET}, {C4, QUAVER},
  {C5, CROTCHET_DOTTED}, {A4, CROTCHET_DOTTED}, {F4, CROTCHET_DOTTED},
  {E4, CROTCHET_DOTTED}, {D4, CROTCHET_DOTTED}, {bB4, CROTCHET}, {bB4, QUAVER},
  {A4, CROTCHET_DOTTED}, {F4, CROTCHET_DOTTED}, {G4, CROTCHET_DOTTED}, {F4, MINIM_DOTTED}, {-1, -1}
};

int Christmas[][2] = {
  {D4, CROTCHET}, 
  {G4, CROTCHET}, {G4, QUAVER}, {A4, QUAVER}, {G4, QUAVER}, {aF4, QUAVER},
  {E4, CROTCHET}, {C4, CROTCHET}, {E4, CROTCHET},
  {A4, CROTCHET}, {A4, QUAVER}, {B4, QUAVER}, {A4, QUAVER}, {G4, QUAVER}, 
  {aF4, CROTCHET}, {D4, CROTCHET}, {D4, CROTCHET},
  {B4, CROTCHET}, {B4, QUAVER}, {C5, QUAVER}, {B4, QUAVER}, {A4, QUAVER},
  {G4, CROTCHET}, {E4, CROTCHET}, {D4, QUAVER}, {D4, QUAVER}, 
  {E4, CROTCHET}, {A4, CROTCHET}, {aF4, CROTCHET}, 
  {G4, MINIM}, {-1, -1}
};

int Newyear[][2] = {
  {F4, QUAVER}, {F4, QUAVER}, {F4, CROTCHET}, {C4, CROTCHET},
  {A4, QUAVER}, {A4, QUAVER}, {A4, CROTCHET}, {F4, CROTCHET},
  {F4, QUAVER}, {A4, QUAVER}, {C5, CROTCHET}, {C5, CROTCHET},
  {bB4, QUAVER}, {A4, QUAVER}, {G4, MINIM}, 
  {G4, QUAVER}, {A4, QUAVER}, {bB4, CROTCHET}, {bB4, CROTCHET}, 
  {A4, QUAVER}, {G4, QUAVER}, {A4, CROTCHET}, {F4, CROTCHET},
  {F4, QUAVER}, {A4, QUAVER}, {G4, CROTCHET}, {C4, CROTCHET}, 
  {E4, QUAVER}, {G4, QUAVER}, {F4, MINIM}, {-1, -1}
};

int Joy[][2] = {
  {E5, MINIM}, {F5, CROTCHET}, {G5, CROTCHET},
  {G5, CROTCHET}, {F5, CROTCHET}, {E5, CROTCHET}, {D5, CROTCHET},
  {C5, CROTCHET}, {C5, CROTCHET}, {D5, CROTCHET}, {E5, CROTCHET},
  {E5, MINIM}, {D5, MINIM},
  {E5, MINIM}, {F5, CROTCHET}, {G5, CROTCHET},
  {G5, CROTCHET}, {F5, CROTCHET}, {E5, CROTCHET}, {D5, CROTCHET}, 
  {C5, CROTCHET}, {C5, CROTCHET}, {D5, CROTCHET}, {E5, CROTCHET},
  {D5, MINIM}, {C5, MINIM},
  {D5, MINIM}, {E5, CROTCHET}, {C5, CROTCHET}, 
  {D5, CROTCHET}, {E5, QUAVER}, {F5, QUAVER}, {E5, CROTCHET}, {C5, CROTCHET}, 
  {D5, CROTCHET}, {E5, QUAVER}, {F5, QUAVER}, {E5, CROTCHET}, {D5, CROTCHET}, 
  {C5, CROTCHET}, {D5, CROTCHET}, {G4, MINIM},
  {E5, MINIM}, {F5, CROTCHET}, {G5, CROTCHET}, 
  {G5, CROTCHET}, {F5, CROTCHET}, {E5, CROTCHET}, {D5, CROTCHET}, 
  {C5, CROTCHET}, {C5, CROTCHET}, {D5, CROTCHET}, {E5, CROTCHET},
  {E5, MINIM}, {D5, MINIM},
  {E5, MINIM}, {F5, CROTCHET}, {G5, CROTCHET},
  {G5, CROTCHET}, {F5, CROTCHET}, {E5, CROTCHET}, {D5, CROTCHET},
  {C5, CROTCHET}, {C5, CROTCHET}, {D5, CROTCHET}, {E5, CROTCHET},
  {D5, MINIM}, {C5, MINIM}, {-1, -1}
};

/* ������Ӧ��Ƶֵ  = ��Ƶ��2M�� / Ƶ�� */
/* Ƶ�ʲο���http://newt.phys.unsw.edu.au/jw/notes.html */
const int notes[] = {
  7644,         // C4 261.63Hz
  6810,         // D4 293.67Hz
  6067,         // E4 329.63Hz
  5727,         // F4 349.23Hz
  5102,         // G4 392.00Hz
  4545,         // A4 440.00Hz
  4050,         // B4 493.88Hz
  3822,         // C5 523.25Hz
  3405,         // D5 587.33Hz
  3033,         // E5 659.26Hz
  2863,         // F5 698.46Hz
  2551,         // G5 783.99Hz
  2273,         // A5 880.00Hz
  2025,         // B5 987.77Hz
  4290,         // bB4 466.16Hz
  5406,         // aF4 369.99Hz
  0             // ��ֹ
};