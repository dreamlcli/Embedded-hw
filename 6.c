#include <stdio.h>
int main()
{
	short n=4,Max;
	short x[]={0xA484,0x71AC,0x32F1};
	Max=x[0];
	short i=1;
	for(i;i<n;i++)
	{
		if(x[i]>Max)
			Max=x[i];
	}
		printf("Max=0x%hX\n",Max);
	return 0;
}
/* 
尋找最大值
目的 : 在一串數目中找出最大的元素。此串數目的元素個數存於 n
中,資料本身由 x 開始,把最大的元素存於 Max 內。 範例:
short n = 4; short Max;
short x[]={0xA484, 0x71AC, 0xE57A, 0x32F1};
結果: Max = 0x71AC
*/
