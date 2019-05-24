# STM8 课设 - 简易电子琴

* 主控芯片：STM8S105C6T6
* 开发环境：IAR(Series 3.10.1) *旧版可能无法打开工程`.eww`文件*
* 功能：
  * 弹奏模式： 2个八度 共14个音 OLED显示音名
  * 选曲模式：4首简单曲目

* 硬件连接：
  * 声音输出：
    * TIM2_OC1 - PD4 输出不同频率的方波
  * OLED 部分：
    * VCC - 3.3V
    * SCL - PE1
    * SDA - PE2
  * 控制按键部分：
    * KEY0 - PA4 用作弹奏模式选择键
    * KEY1 - PA5 用作返回主界面键
    * KEY2 - PA6 用作播放模式选择键
  * 弹奏键盘部分：
    * KEY_C4 - PC1 播放模式下作为选择键1
    * KEY_D4 - PC2 播放模式下作为选择键2
    * KEY_E4 - PC3 播放模式下作为选择键3
    * KEY_F4 - PC4 播放模式下作为选择键4
    * KEY_G4 - PC5
    * KEY_A4 - PC6
    * KEY_B4 - PC7
    * KEY_C5 - PB0
    * KEY_D5 - PB1
    * KEY_E5 - PB2
    * KEY_F5 - PB3
    * KEY_G5 - PB4
    * KEY_A5 - PB5
    * KEY_B5 - PB7