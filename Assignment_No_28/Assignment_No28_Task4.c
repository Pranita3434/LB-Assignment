#include<stdio.h>

int LastChar(char *str,char ch)
{
    //logic
}

int main()
{
    char arr[20];
    char cValue;
    int iRet = 0;

    printf("Enter String : ");
    scanf("%[^'\n']", &arr);

    printf("Enter The Character : ");
    scanf("%c", &cValue);

    iRet = LastChar(arr, cValue);

    printf("Character location is %d",iRet);
   
    return 0;
}

