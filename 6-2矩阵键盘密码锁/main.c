#include <REGX52.H>
#include "Delay1ms.h"
#include "LCD1602.h"
#include "MatrixKey.h"

unsigned char KeyNum;
unsigned int Password,count;

void main()
{
	LCD_Init();
	LCD_ShowString(1,1,"Password");
	while(1)
	{
		KeyNum = MatrixKey();
		if(KeyNum<=10)
		{
			if(count<4)
			{
				if(KeyNum != 0)
				{
					Password *= 10;
					Password += KeyNum%10;
					count++;
				}
			}		
			LCD_ShowNum(2,1,Password,4);
		}
		if(KeyNum == 10)
		{
			Password = 0;
			count = 0;
			LCD_ShowNum(2,1,Password,4);
		}
		if(KeyNum == 11)
			{
				if(Password == 2345)
				{
					LCD_ShowString(1,13,"ok  ");
					Password = 0;
					count = 0;
					LCD_ShowNum(2,1,Password,4);
				}
				else
				{
					LCD_ShowString(1,13,"Erro");
					Password = 0;
					count = 0;
					LCD_ShowNum(2,1,Password,4);
				}
			}
		if(KeyNum==12)
		{
			Password = 0;
			count = 0;
			LCD_ShowNum(2,1,Password,4);
		}				
	}
		
	
	
}