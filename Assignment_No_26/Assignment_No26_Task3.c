#include<stdio.h>

int Difference(char *str)
{
    int iCnt = 0;
    int lowercaseCount = 0;
    int uppercaseCount = 0;

    while (*str != '\0') 
    {
        if ((*str >= 'a') && (*str <= 'z'))
        {
            lowercaseCount++;
        } 
        else if ((*str >= 'A') && (*str <= 'Z')) {
            uppercaseCount++;
        }
        str++;
    }

    iCnt = lowercaseCount - uppercaseCount;
    return iCnt;
}



int main()
{
    char arr[20];
    int iRet = 0;

    printf("Enter String : ");
    scanf("%[^'\n']s", arr);

    iRet = Difference(arr);

    printf("%d", iRet);

    return 0;
}