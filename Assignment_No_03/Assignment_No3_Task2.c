#include<stdio.h>

void DisplayFacotr(int iNo)
{
    auto int i = 0;

    if(iNo <= 0)
    {
        iNo = -iNo;
    }
    for(i = 1;i <= (iNo/2) ;i++)
    {
        if(((iNo%i)==0)&&((i%2)==0)||(i==1))
        {
            printf("%d\t",i);
        }
    }
}

int main()
{
    int iValue = 0;
    printf("Enter Numeber\n");
    scanf("%d",&iValue);

    DisplayFacotr(iValue);
    return 0;
}