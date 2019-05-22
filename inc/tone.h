#ifndef __TONE_H
#define __TONE_H

#define AUDIO_ON TIM2_CR1 |= 0x01       // TIM2_CR1 CEN [0] 置为 1 使能计数器
#define AUDIO_OFF TIM2_CR1 &= 0XFE      //禁止计数器

#define PITCH delay_ms(300) // 最小节奏单位

// 音符次序宏定义
#define C4      0
#define D4      1
#define E4      2
#define F4      3
#define G4      4
#define A4      5
#define B4      6
#define C5      7
#define D5      8
#define E5      9
#define F5      10
#define G5      11
#define A5      12
#define B5      13
#define bB4     14      // 降B4
#define aF4     15      // 升F4
#define PAUSE   16      // 休止

/* 节拍宏定义 以八分音符作为最小单位 */
#define QUAVER                  1       // 八分音符
#define CROTCHET                2       // 四分音符
#define CROTCHET_DOTTED         3       // 四分附点音符
#define MINIM                   4       // 二分音符
#define MINIM_DOTTED            6       // 二分附点音符
#define SEMIBREVE               8       // 全音符

void note(int noteName);
void noteRhythms(int noteName, int Rhythms);
void song(int song[][2]);


#endif