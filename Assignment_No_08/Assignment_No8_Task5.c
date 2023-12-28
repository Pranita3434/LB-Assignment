#include<stdio.h>

int FactorialDiff(int iNo)
{
    int i = 0;
    int iFact1 = 1;
    int iFact2 = 1;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    for(i = 1; i <= iNo; i++)
    {   
        if((i % 2) == 0)
        {
            iFact1 = iFact1 * i;
        }
    }
    for(i = 1; i <= iNo; i++)
    {   
        if((i % 2) != 0)
        {
            iFact2 = iFact2 * i;
        }
    }
    return iFact1-iFact2;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter Number : ");
    scanf("%d",&iValue);

    iRet = FactorialDiff(iValue);

    printf("Factorial of number is %d",iRet);
    
    return 0;
}