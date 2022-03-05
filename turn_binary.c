#include <REGX52.H>

void Delay200ms(unsigned int xms)		//@12.000MHz
{
	unsigned char i, j, k;
	while(xms--)
	{
	i = 2;
	j = 134;
	k = 20;
	do
	{
		do
		{
			while (--k);
		} while (--j);
	} while (--i);
}
	}


void main(){
  unsigned char ledNumber=0;
	while(1)
	{
	if(P3_1==0)
	{
	Delay200ms(400);
		while(P3_1==0);
		Delay200ms(400);
		
		// 0000 0000start --1000 0000end
		ledNumber++;
		P2=~ledNumber;
	}
	}
}
