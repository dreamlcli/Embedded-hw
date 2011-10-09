#include <stdio.h>
int main()
{
	short n1,n2,n3,Min;
	scanf("%hx, %hx, %hx",&n1,&n2,&n3);

    if(n1<n2 && n1<n3)
        {Min = n1;}
    if(n2<n1 && n2<n3)
        {Min = n2;}
    if(n3<n1 && n3<n2)
        {Min = n3;}

	printf("Min=0x%hx ",Min);	

	return 0;
}
/*
3. 找出三數中的較小者
目的 : 把 n1、n2 與 n3 內的數值最小者存於 Min 內。
範例:
short n1 = 0x9156; short n2 = 0x1023;
short n3 = 0x7849; short Min;
結果: Min = 0x9156;
*/
