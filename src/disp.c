#include "oled.h"
#include "disp.h"
#include "bmp.h"

/* 主界面显示函数 */
void DisplayMain()
{
  OLED_Clear(); // 清屏
  OLED_ShowString(32, 0, "ELECTONE");
  OLED_DrawBMP(40, 2, 87, 5, keyboard);
  OLED_ShowString(16, 6, "Play");
  OLED_ShowString(80, 6, "Song");
}

/* 演奏界面显示函数 */
void DisplayPlay()
{
  OLED_Clear();
  OLED_ShowString(48, 0, "Play");
  OLED_DrawBMP(40, 2, 87, 5, keyboard);
}
                 
/* 选曲界面显示函数 */
void DisplaySong()
{
  OLED_Clear();
  OLED_ShowString(8, 0, "1.Birthday");
  OLED_ShowString(8, 2, "2.Christmas");
  OLED_ShowString(8, 4, "3.New Year");
  OLED_ShowString(8, 6, "4.Joy");
}

/* 曲目选择演奏显示函数 */
void DisplayBirthday()
{
 OLED_Clear();
 OLED_ShowString(0, 3, "Happy Birthday!"); 
}

void DisplayChristmas()
{
  OLED_Clear(); 
  OLED_ShowString(0, 3, "Happy Christmas!");
}

void DisplayNewyear()
{
  OLED_Clear(); 
  OLED_ShowString(0, 3, "Happy new year!");
}

void DisplayJoy()
{
  OLED_Clear(); 
  OLED_ShowString(0, 3, "Have a good day!");
}

/* 弹奏模式对应音显示函数 */
void Display_C4()
{ 
  OLED_Clear();
  DisplayPlay();
  OLED_ShowString(56, 6, "C4");
}

void Display_D4()
{ 
  OLED_Clear();
  DisplayPlay();
  OLED_ShowString(56, 6, "D4");
}

void Display_E4()
{ 
  OLED_Clear();
  DisplayPlay();
  OLED_ShowString(56, 6, "E4");
}

void Display_F4()
{ 
  OLED_Clear();
  DisplayPlay();
  OLED_ShowString(56, 6, "F4");
}

void Display_G4()
{ 
  OLED_Clear();
  DisplayPlay();
  OLED_ShowString(56, 6, "G4");
}

void Display_A4()
{ 
  OLED_Clear();
  DisplayPlay();
  OLED_ShowString(56, 6, "A4");
}

void Display_B4()
{ 
  OLED_Clear();
  DisplayPlay();
  OLED_ShowString(56, 6, "B4");
}

void Display_C5()
{ 
  OLED_Clear();
  DisplayPlay();
  OLED_ShowString(56, 6, "C5");
}

void Display_D5()
{ 
  OLED_Clear();
  DisplayPlay();
  OLED_ShowString(56, 6, "D5");
}

void Display_F5()
{ 
  OLED_Clear();
  DisplayPlay();
  OLED_ShowString(56, 6, "F5");
}

void Display_E5()
{ 
  OLED_Clear();
  DisplayPlay();
  OLED_ShowString(56, 6, "E5");
}

void Display_G5()
{ 
  OLED_Clear();
  DisplayPlay();
  OLED_ShowString(56, 6, "G5");
}

void Display_A5()
{ 
  OLED_Clear();
  DisplayPlay();
  OLED_ShowString(56, 6, "A5");
}

void Display_B5()
{ 
  OLED_Clear();
  DisplayPlay();
  OLED_ShowString(56, 6, "B5");
}

