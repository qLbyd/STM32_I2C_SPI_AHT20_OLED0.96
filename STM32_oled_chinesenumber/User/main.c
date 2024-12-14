#include "stm32f10x.h"                  // Device header
#include "Delay.h"
#include "OLED.h"

/**
  * 坐标轴定义：
  * 左上角为(0, 0)点
  * 横向向右为X轴，取值范围：0~127
  * 纵向向下为Y轴，取值范围：0~63
  * 
  *       0             X轴           127 
  *      .------------------------------->
  *    0 |
  *      |
  *      |
  *      |
  *  Y轴 |
  *      |
  *      |
  *      |
  *   63 |
  *      v
  * 
  */

int main(void)
{
	/*OLED初始化*/
		OLED_Init();
	
	/*OLED显示中文和字符串*/
		OLED_ShowChinese(25, 16, "青莲不夜灯");
		OLED_ShowString(10,32,"ID:m0_74343458",OLED_8X16);
		OLED_Update();
	
}