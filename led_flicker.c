#include <REGX52.H>
void Delay100ms()		//@12.000MHz
{
	unsigned char i, j;

	i = 195;
	j = 138;
	do
	{
		while (--j);
	} while (--i);
}



void main(){
	while(1){
	P2=0xFE;  //1111 1110
	Delay100ms();
	P2=0XFF;  //1111 1111
	Delay100ms();
	}
}