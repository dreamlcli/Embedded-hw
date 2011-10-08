#include <stdio.h>
int main()
{
	int n=3,sum=0,i=0;
	int x[]={2040,-1222,242};

	for(i;i<n;i++)
	{
		sum=sum+x[i];
	}
	
	printf("%d",sum);

	return 0;
}
/*
4. 資料總和
目的 : 計算一串 32 位元數目之總和,此串數目的個數在 n 中,
數目本身由 x 開始。把此串數目內元素之總和存於 sum 中。 範例:
int n=3; // 資料元素的個數 int sum; // 儲存總和的位置 int x[]={2040,-1222,242};
結果:
sum = 2040 - 1222 + 242;
// 資料由此開始
*/
