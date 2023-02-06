#include <REGX52.H>
#include "Delay1ms.h"

void main()
{
	unsigned char LEDNum = 0;
	P2 =~ 0x01;
	while(1)
	{
		if(P3_1 == 0)
		{
			Delay1ms(20);
			while(P3_1 == 0)
			{
			
			}
			Delay1ms(20);
			LEDNum++;
			if(LEDNum > 7)
			{
				LEDNum = 0;
			}
			P2 =~ (0x01<<LEDNum);
		}
		if(P3_0 == 0)
		{
			Delay1ms(20);
			while(P3_0 == 0)
			{
				
			}
			Delay1ms(20);
			if(LEDNum == 0)
			{
				LEDNum = 7;
			}
			else
			{
				LEDNum--;
			}
			P2 =~ (0x01<<LEDNum);
		}
	}
}
