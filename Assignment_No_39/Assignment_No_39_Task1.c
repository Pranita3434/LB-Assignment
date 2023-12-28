

#include<stdio.h>

typedef int BOOL;
typedef unsigned int UINT;
#define TRUE 1
#define FALSE 0

BOOL ChkBit(UINT iNo, int iPos)
{
   int iMask = 0x00000001;
    int iResult = 0;

    iMask = iMask << (iPos -1);
        
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
    int iPos = 0;
    printf("Enter The number : ");
    scanf("%d", &iNo);

    printf("Enter The Position : ");
    scanf("%d", &iPos);

    BOOL bRet = FALSE;
    bRet = ChkBit(iNo, iPos);
        
    if(bRet == TRUE)
    {
        printf("TRUE");
    }
    else
    {
        printf("FALSE");
    }

    
    
    return 0;
}