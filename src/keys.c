#include "keys.h"
#include "iostm8s105c6.h"

/*
* 函数名： Keys_Init()
* 功能： 
*       琴键初始化, 将输入IO配置为使能外部中断的上拉输入模式
* 返回值：无
*/
void Keys_Init()
{
  PC_DDR &= 0X01;       // PC1-PC7为输入模式
  PC_CR1 |= 0XFE;       // PC1-PC7为上拉输入
  PC_CR2 |= 0XFE;       // PC1-PC7使能外部中断
  
  PB_DDR = 0X00;       // PB0-PB7为输入模式
  PB_CR1 = 0XFF;       // PB0-PB7为上拉输入
  PB_CR2 = 0XFF;       // PB0-PB7使能外部中断
}

/*
* 函数名： KeysMode_Init()
* 功能： 
*       控制按键初始化, 将输入IO配置为使能外部中断的上拉输入模式
* 返回值：无
*/
void KeysMode_Init()
{
  PA_DDR &= 0X8F;       // PA4-PA6为输入模式
  PA_CR1 |= 0X70;       // PA4-PA6为上拉输入
  PA_CR2 |= 0X70;       // PA4-PA6使能外部中断
}

