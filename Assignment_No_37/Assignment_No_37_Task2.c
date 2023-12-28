#include<stdio.h>

typedef int BOOL;
typedef unsigned int UINT;
#define TRUE 1
#define FALSE 0

BOOL ChkBit(UINT iNo)
{
    int iMask = 0x00400100;
    int iResult = 0;

    iResult = iNo & iMask;

    if(iResult == iMask)
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
    int iNo = 0;

    printf("Enter The number : ");
    scanf("%d", &iNo);

    BOOL bRet = FALSE;
    bRet = ChkBit(iNo);
        
    if(bRet == TRUE)
    {
        printf("5th and 18th BIT is ON");
    }
    else
    {
        printf("5th and 18th BIT is OFF");
    }

    
    
    return 0;
}