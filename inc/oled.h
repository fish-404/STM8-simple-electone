#ifndef __OLED_H
#define __OLED_H
#include "iostm8s105c6.h"

#define uint32 unsigned int
#define uint16 unsigned short int 

#define OLED_CMD  0//写命令
#define OLED_DATA 1//写数据
#define OLED_MODE  0
/****************时钟*********************/
#define OLED_SCLK_PORT  (PE)  //PE1口控制OLED的SCL口
#define OLED_SCLK_PINS  (1)

/****************数据*********************/
#define OLED_SDIN_PORT  (PE)  //PE2口控制OLED的SDA口
#define OLED_SDIN_PINS  (2)

#define OLED_SCLK_Clr() PE_ODR_ODR1=0 //定义电平拉高降低时的符号
#define OLED_SCLK_Set() PE_ODR_ODR1=1

#define OLED_SDIN_Clr() PE_ODR_ODR2=0 //定义电平拉高降低时的符号
#define OLED_SDIN_Set() PE_ODR_ODR2=1

/****************复位*********************/
#define OLED_RST_PORT  (PE)    //无用的，不用管
#define OLED_RST_PINS  (3)

#define OLED_RST_Clr() PE_ODR_ODR3=0  //无用的，不用管
#define OLED_RST_Set() PE_ODR_ODR3=1


//OLED模式设置
//0:4线串行模式
//1:并行8080模式

#define SIZE 16
#define XLevelL		0x02
#define XLevelH		0x10
#define Max_Column	128
#define Max_Row		64
#define	Brightness	0xFF 
#define X_WIDTH 	128
#define Y_WIDTH 	64	    						  
//-----------------OLED端口定义----------------  					   
#define uint8  unsigned char	     

//OLED控制用函数
void OLED_WR_Byte(uint8 dat,uint8 cmd);	    
void OLED_Display_On(void);             
void OLED_Display_Off(void);	   							   		    
void OLED_Init(void);
void OLED_Clear(void);
void OLED_DrawPoint(uint8 x,uint8 y,uint8 t);
void OLED_Fill(uint8 x1,uint8 y1,uint8 x2,uint8 y2,uint8 dot);
void OLED_ShowChar(uint8 x,uint8 y,uint8 chr);
void OLED_ShowNum(uint8 x,uint8 y,uint16 num,uint8 len,uint8 size2);
void OLED_ShowString(uint8 x,uint8 y, uint8 *p);	 
void OLED_Set_Pos(unsigned char x, unsigned char y);
void OLED_DrawBMP(unsigned char x0, unsigned char y0,unsigned char x1, unsigned char y1,unsigned char BMP[]);
void LED_ON(void);
void LED_OFF(void);
// void OLED_Show_Chinese(uint8 x,uint8 y,uint8 index);
#endif  
	 