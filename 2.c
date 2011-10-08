#include <stdio.h>
int main()
{
	short v1,v2,Max;
	scanf("%x ,%x",&v1,&v2);
	
	if(v1>v2)
		Max=v1;
	else
		Max=v2;
	printf("Max= 0x%x\n",Max);
	return 0;
}
/*
. 找出較大值
目的 : 找出兩數中的較大者,此兩數分別存於 v1 與 v2 內,將
較大者存於 Max 內。 範例:
short v1 = 0x7800; short v2 = 0x8010;
short Max;
結果: Max = 0x7800;
*/
