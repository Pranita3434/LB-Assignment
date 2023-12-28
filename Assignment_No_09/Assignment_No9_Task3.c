#include<stdio.h>

int KMtoMeter(int iNo)
{
    int iMeter = 0;
    iMeter = iNo * 1000;
    return iMeter;
}

int main()
{
    int iValue1 = 0;
    int iRet = 0.0;

    printf("Enter Distance : ");
    scanf("%d",&iValue1);

    iRet = KMtoMeter(iValue1);

    printf("Factorial of number is %d",iRet);
    
    return 0;
}