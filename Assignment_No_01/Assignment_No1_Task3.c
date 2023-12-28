#include<stdio.h>

void Display()
{
    auto int i = 0;
    auto int iNo = 5;
    for(i = 1; i <= iNo; )
    {
        printf("%d\n",i);
        i++;
    }
}
int main()
{
    Display();

    return 0;
}