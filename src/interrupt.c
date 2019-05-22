#include "oled.h"
#include "iostm8s105c6.h"
#include "tim2.h"
#include "disp.h"
#include "keys.h"
#include "tone.h"

/* 状态宏定义*/
#define HOME 0          // 主界面   
#define PLAY 1          // 弹奏
#define SONG 2          // 播放

/* 外部调用曲目数组*/
extern int Birthday[][2];
extern int Christmas[][2];
extern int Newyear[][2];
extern int Joy[][2];

int status = HOME;      // 初始状态为主界面

/* 
 * 控制按键中断服务函数：
 *      KEY1 - 返回主界面
 *      KEY0 - 在主界面状态下进入弹奏模式
 *      KEY2 - 在主界面状态下进入播放选曲模式
 */
#pragma vector = 5      // 端口A外部中断向量号为3， +2
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
 * PORTC 琴键处理函数：
 *      PC1 - PC7 分别为中央C起的一个八度区间琴键
 *      其中 PC1 PC2 PC3 PC4 在播放模式下作为选曲按键
 */
#pragma vector =  7 // 端口C外部中断向量号为5，+2
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
 * PORTB 琴键处理函数：
 *      PB0- PB6 分别为中央C高一个八度起的一个八度区间琴键
 */
#pragma vector =  6 // 端口B外部中断向量号为4，+2
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