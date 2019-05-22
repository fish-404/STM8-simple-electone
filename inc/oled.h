#ifndef __OLED_H
#define __OLED_H
#include "iostm8s105c6.h"

#define uint32 unsigned int
#define uint16 unsigned short int 

#define OLED_CMD  0//д����
#define OLED_DATA 1//д����
#define OLED_MODE  0
/****************ʱ��*********************/
#define OLED_SCLK_PORT  (PE)  //PE1�ڿ���OLED��SCL��
#define OLED_SCLK_PINS  (1)

/****************����*********************/
#define OLED_SDIN_PORT  (PE)  //PE2�ڿ���OLED��SDA��
#define OLED_SDIN_PINS  (2)

#define OLED_SCLK_Clr() PE_ODR_ODR1=0 //�����ƽ���߽���ʱ�ķ���
#define OLED_SCLK_Set() PE_ODR_ODR1=1

#define OLED_SDIN_Clr() PE_ODR_ODR2=0 //�����ƽ���߽���ʱ�ķ���
#define OLED_SDIN_Set() PE_ODR_ODR2=1

/****************��λ*********************/
#define OLED_RST_PORT  (PE)    //���õģ����ù�
#define OLED_RST_PINS  (3)

#define OLED_RST_Clr() PE_ODR_ODR3=0  //���õģ����ù�
#define OLED_RST_Set() PE_ODR_ODR3=1


//OLEDģʽ����
//0:4�ߴ���ģʽ
//1:����8080ģʽ

#define SIZE 16
#define XLevelL		0x02
#define XLevelH		0x10
#define Max_Column	128
#define Max_Row		64
#define	Brightness	0xFF 
#define X_WIDTH 	128
#define Y_WIDTH 	64	    						  
//-----------------OLED�˿ڶ���----------------  					   
#define uint8  unsigned char	     

//OLED�����ú���
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
	 