#include<stdio.h>

int RangeSum(int iStart, int iEnd)
{
    int iSum = 0;
    if(iStart > iEnd)
    {
        printf("Invalid Range");
    }

    for(int i = iStart ; i <= iEnd ; i++)
    {
        iSum = iSum + i;
    }

    return iSum;
}

int main()
{
    int iValue1 = 0;
    int iValue2 = 0;
    int iRet = 0;

    printf("Enter Starting Point : ");
    scanf("%d",&iValue1);

    printf("Enter Ending Point : ");
    scanf("%d",&iValue2);

    iRet = RangeSum(iValue1,iValue2);

    printf("Addition is %d",iRet);

    return 0;
}