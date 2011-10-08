#include <stdio.h>
int main()
{
    int i=0,Len=0;
    char Start[]="Hello 101+-*/, this is my first PROGRAM.";
    for(i=0;Start[i]!='\0';i++)
        {
            if(Start[i]>=65 && Start[i]<=90)
            {Start[i]=Start[i]+32;  }
        }
    for(i=0;Start[i]!='\0';i++)
    {
        printf("%c",Start[i]);;
    }
    printf("\n");


	return 0;
}
//
//9. 字串轉小寫
//目的:將一串 ASCII 字串中的大寫字母轉換為小寫字母。字串所存放的開始位址為 Start,字串的結束字元為'\0'
//範例:
//char Start[]="Hello 101+-*/, this is my first PROGRAM."; 
//結果:
//char Start[]="hello 101+-*/, this is my first program."; 