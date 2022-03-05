#include <REGX52.H>
#include "LCD1602.h"
void main(){

	LCD_Init();
	LCD_ShowChar(1,2,'A');
	LCD_ShowString(1,3,"hello world!");
	LCD_ShowNum(1,2,125,5);
	LCD_ShowSignedNum(1,4,-15);
	LCD_ShowHexNum(1,5,0xA8,5);
	LCD_ShowBinNum(2,6,0XAA,8);
	while(1){
		
					}
}
