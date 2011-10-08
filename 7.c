#include <stdio.h>
int main()
{
 	int i=0,n=6,Pos=0,Zero=0,Negg=0;
 	short Start[]={0x7602, 0x8D48, 0x2120, 0, 0xE605, 4};
	for(i;i<n;i++)
	{	
		if(Start[i]>>15==-1)
			{ Negg++;}
		else if(Start[i]==0)
			{Zero++;}
		else if(Start[i]>>15==0)
			{Pos++;}
	}
		printf("Pos=%d Zero=%d Negg=%d\n",Pos,Zero,Negg);
       
	return 0;
}
/*
7. 零、正數、與負數的個數
目的 : 決定一串數目中,零、正數(最高效位元為 0,其餘不全
為 0)、與負數(最高效位元為 1)的個數。此串數目的個數存 於 n 中,且數目本身由 Start 開始。把零、正數、與負數的 個數分別存於 Zero、Pos 與 Negg 中。
範例:
int n = 6;
int Pos; int Zero; int Negg;
short Start[]={0x7602, 0x8D48, 0x2120, 0, 0xE605, 4}; 結果:
Pos = 3(4,如果0算正數) Zero =1 Negg=2
*/
