#include "oled.h"
#include "iostm8s105c6.h"
#include "tim2.h"
#include "disp.h"
#include "keys.h"
#include "tone.h"

/* ״̬�궨��*/
#define HOME 0          // ������   
#define PLAY 1          // ����
#define SONG 2          // ����

/* �ⲿ������Ŀ����*/
extern int Birthday[][2];
extern int Christmas[][2];
extern int Newyear[][2];
extern int Joy[][2];

int status = HOME;      // ��ʼ״̬Ϊ������

/* 
 * ���ư����жϷ�������
 *      KEY1 - ����������
 *      KEY0 - ��������״̬�½��뵯��ģʽ
 *      KEY2 - ��������״̬�½��벥��ѡ��ģʽ
 */
#pragma vector = 5      // �˿�A�ⲿ�ж�������Ϊ3�� +2
__interrupt void EXTI_PORTE_IRQHandler0()
{
  if (KEY0 == 0) { 
    if (status == HOME) {
      DisplayPlay();
      status = PLAY;
    }
  }
  else if (KEY2 == 0) { 
    if (status == HOME) {
      DisplaySong();
      status = SONG;
    }
  }
  else if (KEY1 == 0) { 
    DisplayMain();
    status = HOME;
  }
}

/* 
 * PORTC �ټ���������
 *      PC1 - PC7 �ֱ�Ϊ����C���һ���˶������ټ�
 *      ���� PC1 PC2 PC3 PC4 �ڲ���ģʽ����Ϊѡ������
 */
#pragma vector =  7 // �˿�C�ⲿ�ж�������Ϊ5��+2
__interrupt void EXTI_PORTE_IRQHandler3()
{
  if (KEY_C4 == 0) { 
    if (status == PLAY) {
      note(C4);
      Display_C4();
      AUDIO_ON;
      while (KEY_C4 == 0);
      AUDIO_OFF;
    }
    else if (status == SONG) {
      DisplayBirthday();
      song(Birthday);
      DisplaySong();
    }
  }
  else if (KEY_D4 == 0) { 
    if (status == PLAY) {
      note(D4);
      Display_D4();
      AUDIO_ON;
      while (KEY_D4 == 0);
      AUDIO_OFF;
    }
    else if (status == SONG) {
      DisplayChristmas();
      song(Christmas);  
      DisplaySong();
    }
  }
  else if (KEY_E4 == 0) { 
    if (status == PLAY) {
      note(E4);
      Display_E4();
      AUDIO_ON;
      while (KEY_E4 == 0);
      AUDIO_OFF;
    }
    else if (status == SONG) {
      DisplayNewyear();
      song(Newyear);  
      DisplaySong();
    }
  }
  else if (KEY_F4 == 0) { 
    if (status == PLAY) {
      note(F4);
      Display_F4();
      AUDIO_ON;
      while (KEY_F4 == 0);
      AUDIO_OFF;
    }
    else if (status == SONG) {
      DisplayJoy();
      song(Joy);  
      DisplaySong();
    }
  }
  else if (KEY_G4 == 0) { 
    note(G4);
    Display_G4();
    AUDIO_ON;
    while (KEY_G4 == 0);
    AUDIO_OFF;
  }
  else if (KEY_A4 == 0) { 
    note(A4);
    Display_A4();
    AUDIO_ON; 
    while (KEY_A4 == 0);
    AUDIO_OFF;
  }
  else if (KEY_B4 == 0) {
    note(B4);
    Display_B4();
    AUDIO_ON;
    while (KEY_B4 == 0);
    AUDIO_OFF;
  }
}

/* 
 * PORTB �ټ���������
 *      PB0- PB6 �ֱ�Ϊ����C��һ���˶����һ���˶������ټ�
 */
#pragma vector =  6 // �˿�B�ⲿ�ж�������Ϊ4��+2
__interrupt void EXTI_PORTE_IRQHandler2(void)
{
  if (KEY_C5 == 0) { 
    note(C5);
    Display_C5();
    AUDIO_ON;
    while (KEY_C5 == 0);
    AUDIO_OFF;
  }
  else if (KEY_D5 == 0) { 
      note(D5);
      Display_D5();
      AUDIO_ON;
      while (KEY_D5 == 0);
      AUDIO_OFF;
  }
  else if (KEY_E5 == 0) { 
    note(E5);
    Display_E5();
    AUDIO_ON;
    while (KEY_E5 == 0);
    AUDIO_OFF;
  }
  else if (KEY_F5 == 0) { 
    note(F5);
    Display_F5();
    AUDIO_ON;
    while (KEY_F5 == 0);
    AUDIO_OFF;
  }
  else if (KEY_G5 == 0) { 
    note(G5);
    Display_G5();
    AUDIO_ON;
    while (KEY_G5 == 0);
    AUDIO_OFF;
  }
  else if (KEY_A5 == 0) { 
    note(A5);
    Display_A5();
    AUDIO_ON; 
    while (KEY_A5 == 0);
    AUDIO_OFF;
  }
  else if (KEY_B5 == 0) {
    note(B5);
    Display_B5();
    AUDIO_ON;
    while (KEY_B5 == 0);
    AUDIO_OFF;
  }
}