#include<stdio.h>



void DisplayASCII()
{
    int iCnt = 0;

     for(iCnt = 0; iCnt <= 127; iCnt++)
    { 
        printf("%d\t%o\t%x\n",iCnt,iCnt,iCnt);
    }
}

int main()
{
    DisplayASCII();
    return 0;
}



    

