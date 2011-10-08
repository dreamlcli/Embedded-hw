#include <stdio.h>
int main()
{
	char Value = 0x49,_High,_Low;
	_High=(Value&0xF0)>>4;
	_Low=Value&0x0F;	

	printf("_High = 0x%.2x \n_Low  = 0x%.2x\n",_High,_Low);

	return 0;
}
/*
1. 資料分解
目的 : 將 Value 內的 8 位元資料分解為兩部份，每部份佔 4 個
       位元，將此二部份的值分別存於 _High 與 _Low。將 Value 的
       最高效4個位元存於 _High 之低階 4 個位元內，將 Value 的
       最低效4個位元存於 _Low 之低階 4 個位元內。將 _High 與
       _Low 內最高效 4 個位元皆清為 0 。
範例:
	char Value = 0x49;   	char _High, _Low;
結果:
	_High = 0x04;   	_Low = 0x09;
*/
