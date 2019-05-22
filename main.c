#include "iostm8s105c6.h"
#include "intrinsics.h" // 总中断头文件
#include "oled.h"
#include "keys.h"
#include "tim2.h"
#include "interrupt.h"
#include "disp.h"

void main()
{
  OLED_Init();          // OLED初始化
  Keys_Init();          // 琴键初始化
  KeysMode_Init();      // 控制按键初始化
  
  OLED_Display_On();    // OLED开启显示
  DisplayMain();        // 显示主界面
  
  TIM2_OC1_Init();
  
  /* PORT C PORTB PORTA 中断触发位置为 10 ，仅下降沿触发 */
  EXTI_CR1_PAIS = 2;
  EXTI_CR1_PBIS = 2;
  EXTI_CR1_PCIS = 2;
  
  __enable_interrupt(); // 开启总中断
    
  while(1){
    
  }
}