#include<stdio.h>

double FhtoCs(int fTemp)
{
    double dCelc = 0.0;

    dCelc = ((double)(fTemp - 32) * 5/9);

    return dCelc;
}

int main()
{
    int iValue1 = 0;
    double dRet = 0.0;

    printf("Enter Temperature in Fahrenheit : ");
    scanf("%d",&iValue1);

    dRet = FhtoCs(iValue1);

    printf("Factorial of number is %f",dRet);
    
    return 0;
}