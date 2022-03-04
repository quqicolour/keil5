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
  P2=0xFD; //1111 1101
	Delay1000ms();
	P2=0xFB; //1111 1011
	Delay1000ms();
  P2=0xF7; //1111 0111
	Delay1000ms();
	P2=0xEF; //1110 1111
	Delay1000ms();
  P2=0xDF; //1101 1111
	Delay1000ms();
	P2=0xBF; //1011 1111
	Delay1000ms();
  P2=0x7F; //0111 1111
	Delay1000ms();
		
	}
	
}