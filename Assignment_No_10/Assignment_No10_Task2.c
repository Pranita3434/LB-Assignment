#include<stdio.h>

void RangeDisplay(int iStart, int iEnd)
{
    if(iStart > iEnd)
    {
        printf("Invalid Range");
    }

    for(int i = iStart ; i <= iEnd ; i++)
    {
        if((i%2) == 0)
        {
            printf("%d\t",i);
        }
       
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

    RangeDisplay(iValue1,iValue2);

    return 0;
}