#include "tim2.h"
#include "iostm8s105c6.h"

/*
* ��������TIM2_OC1_Init()
* ����������TIM2 CC1Tͨ�� ��ʼ��
*       CCMR1:
*               CC1S[1:0] - 01  CC1ͨ������Ϊ���
*               OC1P:[3]  - 1   ����TIM2_CCR1Ԥװ��
                OC1M[6:4] - 110 PWMģʽ1
*       CCER1:
*               CC1E[0]   - 1 CC1ͨ��ʹ�����OC1�ź�
*               CC1P[1]   - 0 �ߵ�ƽ��Ч
*/
void TIM2_OC1_Init()
{
  /* �ź�������� PD4 ��ʼ��Ϊ�������*/
  PD_DDR_DDR4 = 1;      // ���
  PD_CR1_C14 = 1;      // �������
  
  TIM2_CCMR1 = 0X68;
  TIM2_CCER1 |= 0x01;   // CC1ͨ��ʹ�����
  TIM2_CCER1 &= 0XFD;   // �ߵ�ƽ��Ч
  
  /* CCR1 Ԥװ�� */
  TIM2_CCR1H = (unsigned char)(100>>8);
  TIM2_CCR1L = (unsigned char)(100);
}

