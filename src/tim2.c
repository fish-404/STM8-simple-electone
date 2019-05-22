#include "tim2.h"
#include "iostm8s105c6.h"

/*
* 函数名：TIM2_OC1_Init()
* 功能描述：TIM2 CC1T通道 初始化
*       CCMR1:
*               CC1S[1:0] - 01  CC1通道配置为输出
*               OC1P:[3]  - 1   开启TIM2_CCR1预装载
                OC1M[6:4] - 110 PWM模式1
*       CCER1:
*               CC1E[0]   - 1 CC1通道使能输出OC1信号
*               CC1P[1]   - 0 高电平有效
*/
void TIM2_OC1_Init()
{
  /* 信号输出引脚 PD4 初始化为推挽输出*/
  PD_DDR_DDR4 = 1;      // 输出
  PD_CR1_C14 = 1;      // 推挽输出
  
  TIM2_CCMR1 = 0X68;
  TIM2_CCER1 |= 0x01;   // CC1通道使能输出
  TIM2_CCER1 &= 0XFD;   // 高电平有效
  
  /* CCR1 预装载 */
  TIM2_CCR1H = (unsigned char)(100>>8);
  TIM2_CCR1L = (unsigned char)(100);
}

