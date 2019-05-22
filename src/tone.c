#include "iostm8s105c6.h"
#include "tone.h"
#include "delay.h"

extern int notes[]; // 外部调用音符频率数组

/*
 * 函数名：note
 * 参数： 
 *      int noteName - 音符 C4-B5
 * 功能： TIM2 分频 实现不同的频率
 */
void note(int noteName)
{
  TIM2_ARRH = (unsigned char)(notes[noteName]>>8);
  TIM2_ARRL = (unsigned char)(notes[noteName]);
}

/*
 * 函数名: noteRhythems
 * 参数： 
 *      相关宏定义于 tone.h 中
 *      int noteName - 音符 
 *      int Rhythms - 节拍 
 * 功能： 指定音符指定节拍
 */
void noteRhythms(int noteName, int Rhythms)
{
  int t;
  
  AUDIO_ON;
  note(noteName);
  for (t = 0; t < Rhythms; t++) 
    PITCH;
  AUDIO_OFF;
}

/*
 * 函数名：song
 * 参数：
 *      song[][2]
 * 功能： 给定一个包含音名和节拍的二维数组作为曲目输出
 */
void song(int song[][2])
{
  int i;
  
  for (i = 0; song[i][0] != -1; i++){
    noteRhythms(song[i][0], song[i][1]);
    delay_ms(50); // 每个音符短暂间隔
  }
}
