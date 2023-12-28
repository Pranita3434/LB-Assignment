#include<stdio.h>

int DollarToINR(int iNo)
{
    int iNo1 = iNo*70;
    return iNo1;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter Number : ");
    scanf("%d",&iValue);

    iRet = DollarToINR(iValue);

    printf("Value is INR %d",iRet);
    
    return 0;
}