#include<stdio.h>

void Display(int iNo,int iFreuency)
{
    auto int iCnt = 0;

    for(iCnt = 1; iCnt <= iFreuency; iCnt++)
    {
        printf("%d\t",iNo);
    }
}
int main()
{
    auto int iValue = 0;
    auto int iCount = 0;

    printf("Enter Number: ");
    scanf("%d",&iValue);

    printf("Enter Frequency: ");
    scanf("%d",&iCount);

    Display(iValue,iCount);

    return 0;

}