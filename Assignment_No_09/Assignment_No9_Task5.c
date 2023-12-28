#include<stdio.h>

double SquareMeter(int iValue)
{
    double iMeter = 0;
    iMeter = ((double)iValue) * 0.0929;
    return iMeter;
}

int main()
{
    int iValue = 0;
    double dRet = 0.0;

    printf("Enter Area in Square Feet : ");
    scanf("%d",&iValue);

    dRet = SquareMeter(iValue);

    printf("Factorial of number is %f",dRet);
    
    return 0;
}