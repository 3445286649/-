#include <REGX52.H>
#include "Delay1ms.h"

void main()
{
	while(1)
	{
		if(P3_1 == 0)
		{
			Delay1ms(20);
			while(P3_1 == 0)
			{
				
			}
			Delay1ms(20);
			P2_0 =~ P2_0;
		}
	}
}
