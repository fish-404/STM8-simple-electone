#include "oled.h"
#include "disp.h"
#include "bmp.h"

/* ��������ʾ���� */
void DisplayMain()
{
  OLED_Clear(); // ����
  OLED_ShowString(32, 0, "ELECTONE");
  OLED_DrawBMP(40, 2, 87, 5, keyboard);
  OLED_ShowString(16, 6, "Play");
  OLED_ShowString(80, 6, "Song");
}

/* ���������ʾ���� */
void DisplayPlay()
{
  OLED_Clear();
  OLED_ShowString(48, 0, "Play");
  OLED_DrawBMP(40, 2, 87, 5, keyboard);
}
                 
/* ѡ��������ʾ���� */
void DisplaySong()
{
  OLED_Clear();
  OLED_ShowString(8, 0, "1.Birthday");
  OLED_ShowString(8, 2, "2.Christmas");
  OLED_ShowString(8, 4, "3.New Year");
  OLED_ShowString(8, 6, "4.Joy");
}

/* ��Ŀѡ��������ʾ���� */
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

/* ����ģʽ��Ӧ����ʾ���� */
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

