#include <stdio.h>
int main()
{
    char Start[]="Hello, this is my first program";
    int Len;
    
    for(Len;Start[Len] != '\0';Len++)
    {}
    printf("Len=%d\n",Len);

	return 0;
}
/*
8. 字串長度 目的:計算一串ASCII字串的長度。字串所存放的開始位址為Start,
字串的結束字元為'\0'。將此字串的長度(字元數,不含結束
字元)求出,並存於記憶體位址Len內。 範例:
char Start[]="Hello, this is my first program";
int Len;
結果: Len=31;
*/
