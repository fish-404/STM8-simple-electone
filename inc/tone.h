#ifndef __TONE_H
#define __TONE_H

#define AUDIO_ON TIM2_CR1 |= 0x01       // TIM2_CR1 CEN [0] ��Ϊ 1 ʹ�ܼ�����
#define AUDIO_OFF TIM2_CR1 &= 0XFE      //��ֹ������

#define PITCH delay_ms(300) // ��С���൥λ

// ��������궨��
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
#define bB4     14      // ��B4
#define aF4     15      // ��F4
#define PAUSE   16      // ��ֹ

/* ���ĺ궨�� �԰˷�������Ϊ��С��λ */
#define QUAVER                  1       // �˷�����
#define CROTCHET                2       // �ķ�����
#define CROTCHET_DOTTED         3       // �ķָ�������
#define MINIM                   4       // ��������
#define MINIM_DOTTED            6       // ���ָ�������
#define SEMIBREVE               8       // ȫ����

void note(int noteName);
void noteRhythms(int noteName, int Rhythms);
void song(int song[][2]);


#endif