#include<stdio.h>

int MultiFact(int iNo)
{
    auto int iCnt = 0;
    auto int iMul = 1;
    
    for(iCnt = 1; iCnt <= (iNo/2); iCnt++)
    {
        if((iNo % iCnt) == 0)
        {
            iMul = iMul * iCnt;
        }
    }
    return iMul;

}

int main()
{
    auto int iValue = 0;
    auto int iRet = 0;

    printf("Enter Number\n");
    scanf("%d",&iValue);

    iRet = MultiFact(iValue);

    printf("%d",iRet);

    return 0;
}



