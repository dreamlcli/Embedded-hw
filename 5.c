#include <stdio.h>
int main()
{
	int n=3,cnt=0;
	short x[]={0x0f1D,0x7E0A,0x824B};
	int i=0;
	for(i;i<n;i++)
	{
		if((x[i]>>15)&1==1)
			{cnt++;}
	}
		printf("cnt=%d\n",cnt);

	return 0;
}

/*
5. 負值元素的個數
目的 : 計算一串資料中負值元素(最高效位元為 1)的個數。
此串資料的個數存於 n 內,資料本身由 x 開始,將負值元素
的個數存於 cnt 中。 範例:
int n=3; // 資料元素之個數 int cnt; // 儲存負數個數
short x[]={0x0f1D, 0x7E0A, 0x824B} // 資料 結果: cnt = 1
*/
