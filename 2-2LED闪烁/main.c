#include <REGX52.H>
#include "Delay1ms.h"
#include <INTRINS.H>
void main()
{
	while(1)
		
	{
		P2_0 = 0;//P2=0xFE;
		Delay1ms(500);
		P2_0 =1;//P2=0xFF;
		Delay1ms(500);
	}
}
