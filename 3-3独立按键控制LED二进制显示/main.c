#include <REGX52.H>
#include "Delay1ms.h"

void main()
{
	unsigned char LEDNum = 0;
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
			P2 =~ LEDNum;
		}
	}
}
