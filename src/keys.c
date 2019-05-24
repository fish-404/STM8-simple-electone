#include "keys.h"
#include "iostm8s105c6.h"

/*
* �������� Keys_Init()
* ���ܣ� 
*       �ټ���ʼ��, ������IO����Ϊʹ���ⲿ�жϵ���������ģʽ
* ����ֵ����
*/
void Keys_Init()
{
  PC_DDR &= 0X01;       // PC1-PC7Ϊ����ģʽ
  PC_CR1 |= 0XFE;       // PC1-PC7Ϊ��������
  PC_CR2 |= 0XFE;       // PC1-PC7ʹ���ⲿ�ж�
  
  PB_DDR = 0X00;       // PB0-PB7Ϊ����ģʽ
  PB_CR1 = 0XFF;       // PB0-PB7Ϊ��������
  PB_CR2 = 0XFF;       // PB0-PB7ʹ���ⲿ�ж�
}

/*
* �������� KeysMode_Init()
* ���ܣ� 
*       ���ư�����ʼ��, ������IO����Ϊʹ���ⲿ�жϵ���������ģʽ
* ����ֵ����
*/
void KeysMode_Init()
{
  PA_DDR &= 0X8F;       // PA4-PA6Ϊ����ģʽ
  PA_CR1 |= 0X70;       // PA4-PA6Ϊ��������
  PA_CR2 |= 0X70;       // PA4-PA6ʹ���ⲿ�ж�
}

