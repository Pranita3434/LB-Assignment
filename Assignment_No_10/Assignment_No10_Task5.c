#include<stdio.h>

void RangeDisplayRev(int iStart, int iEnd)
{
    int iSum = 0;
    if(iStart > iEnd)
    {
        printf("Invalid Range");
    }

    for(int i = iEnd ; i >= iStart ; i--)
    {
        printf("%d\t",i);
       
    }
}


int main()
{
    int iValue1 = 0;
    int iValue2 = 0;

    printf("Enter Starting Point : ");
    scanf("%d",&iValue1);

    printf("Enter Ending Point : ");
    scanf("%d",&iValue2);

    RangeDisplayRev(iValue1,iValue2);

    return 0;
}