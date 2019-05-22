#include "iostm8s105c6.h"
#include "intrinsics.h" // ���ж�ͷ�ļ�
#include "oled.h"
#include "keys.h"
#include "tim2.h"
#include "interrupt.h"
#include "disp.h"

void main()
{
  OLED_Init();          // OLED��ʼ��
  Keys_Init();          // �ټ���ʼ��
  KeysMode_Init();      // ���ư�����ʼ��
  
  OLED_Display_On();    // OLED������ʾ
  DisplayMain();        // ��ʾ������
  
  TIM2_OC1_Init();
  
  /* PORT C PORTB PORTA �жϴ���λ��Ϊ 10 �����½��ش��� */
  EXTI_CR1_PAIS = 2;
  EXTI_CR1_PBIS = 2;
  EXTI_CR1_PCIS = 2;
  
  __enable_interrupt(); // �������ж�
    
  while(1){
    
  }
}