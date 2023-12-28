#include<stdio.h>

typedef int BOOL;

#define TRUE 1
#define FALSE 0

BOOL ChkVowel(char cValue)
{   
    if((cValue == 'A')||(cValue == 'E')||(cValue == 'I')||(cValue == 'O')||(cValue == 'U')||(cValue == 'a')||(cValue == 'e')||(cValue == 'i')||(cValue == 'o')||(cValue == 'u'))
    {
        return TRUE;
    }
    else
    {
        return FALSE;
    }
}

int main()
{
    auto char cValue = '\0';
    auto BOOL bRet = FALSE;

    printf("Enter Character:");
    scanf("%c",&cValue);

    bRet = ChkVowel(cValue);

    if(bRet == TRUE)
    {
        printf("IT IS VOWEL.");
    }
    else
    {
        printf("IT IS NOT VOWEL.");
    }

    return 0;
}
