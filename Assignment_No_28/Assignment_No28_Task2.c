#include<stdio.h>

int CountChar(char *str,char ch)
{
     int count = 0;

    while (*str) {
        if (*str == ch) {
            count++;
        }
        str++;
    }

    return count;

}

int main()
{
    char arr[20];
    char cValue;
    int iRet = 0;

    printf("Enter String : ");
    scanf("%[^'\n']", &cValue);

    printf("Enter The Character : ");
    scanf(" %c", &cValue);

    iRet = CountChar(arr, cValue);

    printf("Character frequency is %d",iRet);
   
    return 0;
}

