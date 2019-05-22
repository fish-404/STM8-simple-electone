#include "iostm8s105c6.h"
#include "tone.h"
#include "delay.h"

extern int notes[]; // �ⲿ��������Ƶ������

/*
 * ��������note
 * ������ 
 *      int noteName - ���� C4-B5
 * ���ܣ� TIM2 ��Ƶ ʵ�ֲ�ͬ��Ƶ��
 */
void note(int noteName)
{
  TIM2_ARRH = (unsigned char)(notes[noteName]>>8);
  TIM2_ARRL = (unsigned char)(notes[noteName]);
}

/*
 * ������: noteRhythems
 * ������ 
 *      ��غ궨���� tone.h ��
 *      int noteName - ���� 
 *      int Rhythms - ���� 
 * ���ܣ� ָ������ָ������
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
 * ��������song
 * ������
 *      song[][2]
 * ���ܣ� ����һ�����������ͽ��ĵĶ�ά������Ϊ��Ŀ���
 */
void song(int song[][2])
{
  int i;
  
  for (i = 0; song[i][0] != -1; i++){
    noteRhythms(song[i][0], song[i][1]);
    delay_ms(50); // ÿ���������ݼ��
  }
}
