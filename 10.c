#include<stdio.h>
int main()
{
    
    char number=0x5a;
    
    char Start[8];
    
    int i,c;
    
    for(i=7;i>=0;i--)
        
    {
        
        Start[i]=number&1;
        
        number=number>>1;
        
    }    
    
    for(i=0;i<8;i++)
        
    {
        
        c=Start[i]+'0';
        
        printf("Start[%d]=0x%x\n",i,c);
        
    }

    return 0;
    
}
/*
10. 二進位數目轉成 ASCII 字串
目的:把在記憶體 number 內的 8 位元數目,轉換為 8 個字 ASCII 字元(ASCII 0 或 ASCII 1)。將結果存於從 Start 開始的記憶體內。 number 的最高效位元之 ASCII 字元存於 Start 內, 最低效位元之 ASCII 字元存於 Start+7 內。
範例:
char number = 0x5a; char Start[8];
結果:
Start[0]=0x30;  //0
Start[1]=0x31;  //1
Start[2]=0x30;  //0
Start[3]=0x31;  //1
Start[4]=0x31;  //1
Start[5]=0x30;  //0
Start[6]=0x31;  //1
Start[7]=0x30;  //0
*/
