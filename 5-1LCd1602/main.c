#include <REGX52.H>
#include "Delay1ms.h"
#include "LCD1602.h"

void main()
{
	LCD_Init();
	LCD_ShowNum(2,1,22,2);
	LCD_ShowString(1,1,"HELLO");
}
