#include <REGX52.H>
#include "Timer0.h"
#include "Key.h"
#include "INTRINS.h"
unsigned char Keynum,LedMode;
void main()
{
	P2 = 0xFE;
	Timer0_Init();
	while(1)
	{
		Keynum = Key();
		if(Keynum != 0)
		{
			if(Keynum == 1)
			{
				LedMode++;
				if(LedMode>=2)
				{
					LedMode = 0;
				}
			}
			
		}
	}
}

void Timer0_Routine() interrupt 1
{
	static unsigned T0Count;
	TL0 = 0x18;				
	TH0 = 0xFC;	
	T0Count++;
	if(T0Count >= 500)
	{
		T0Count = 0;
		if(LedMode == 0)
		{
			P2 = _crol_(P2,1);
		}
		if(LedMode == 1)
		{
			P2 = _cror_(P2,1);
		}
	}
}