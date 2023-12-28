#include<stdio.h>

int FactDiff(int iNo)
{
    auto int iCnt = 0;
    auto int iSumFact = 0;
    auto int iSumNFact = 0;

    auto int FactDi = 0;
    
    for(iCnt = 1; iCnt <= (iNo/2); iCnt++)
    {
        if((iNo % iCnt) == 0)
        {
            iSumFact = iSumFact + iCnt;
        }
    }
    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        if((iNo % iCnt) != 0)
        {
            iSumNFact = iSumNFact + iCnt;
        }
    }

    FactDi =  iSumFact - iSumNFact;
    return FactDi;

}

int main()
{
    auto int iValue = 0;
    auto int iRet = 0;

    printf("Enter Number\n");
    scanf("%d",&iValue);

    iRet = FactDiff(iValue);

    printf("%d",iRet);

    return 0;
}