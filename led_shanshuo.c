#include <REGX52.H>
#include <INTRINS.H>

void Delay1000us()		//@12.000MHz
	{
		unsigned char i, j;

		i = 2;
		j = 239;
		do
		{
			while (--j);
		} while (--i);
	}
	
void main(){
 
	while(1){
	P2=0xFE; //1111 1110
	Delay1000ms();
  P2=0xFF; //1111 1111
	Delay1000ms();
	}
	
}