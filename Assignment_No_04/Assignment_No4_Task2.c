#include<stdio.h>

void FactRev(int iNo)
{
   auto int iCnt = 0;
     
    for(iCnt = (iNo/2); iCnt >= 1; iCnt--)
    {
        if((iNo % iCnt) == 0)
        {
            printf("%d\t",iCnt);
        }
    }

}

int main()
{
    auto int iValue = 0;

    printf("Enter Number\n");
    scanf("%d",&iValue);

    FactRev(iValue);

    return 0;
}