#include<stdio.h>

void DispalyConvert(char cValue)
{
    
    auto char cValue2 = 'A';
    auto char cValue3 = 'd';
    

    if(cValue == 'a')
    {
        printf("%c",cValue2);
    }
    else if(cValue == 'D')
    {
        printf("%c",cValue3);
    }
}

int main()
{
    auto char cValue = '\0';

    printf("ENter character\n");
    scanf("%c",&cValue); 

    DispalyConvert(cValue);

    return 0;
}