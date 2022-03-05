#include <REGX52.H>
#include "Delay.h"
unsigned char LapTable[]={0x3F,0x06,0x5B,0x4F,0x66,0x6D,0x7D,0x07,0x7F,0x6F};

void LapNum(unsigned char Location,Number)
{
	switch(Location)
{
	case1:P2_4=1;P2_3=1;P2_2=1;break; 
	case2:P2_4=1;P2_3=1;P2_2=0;break;
	case3:P2_4=1;P2_3=0;P2_2=1;break;
	case4:P2_4=1;P2_3=0;P2_2=0;break;
	case5:P2_4=0;P2_3=1;P2_2=1;break;
	case6:P2_4=0;P2_3=1;P2_2=0;break;
	case7:P2_4=0;P2_3=0;P2_2=1;break;
	case8:P2_4=0;P2_3=0;P2_2=0;break;
}
//
	P0=LapTable[Number];
//消影
	Delay(1);
	P0=0x00;
}

