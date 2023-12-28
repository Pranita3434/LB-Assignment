#include<stdio.h>

typedef unsigned int UINT;

UINT ToggleBit(UINT iNo, int iPos)
{
    int iMask = 0x00000001;
    int iResult = 0;
    iMask = iMask << (iPos -1);
    
   
    iResult = iNo ^ iMask;

    return iResult;
   
}

int main()
{
    int iNo = 0;
    int iPos = 0;
    printf("Enter The number : ");
    scanf("%d", &iNo);

    printf("Enter The Position : ");
    scanf("%d", &iPos);

    int iRet = 0;
    iRet = ToggleBit(iNo, iPos);
        
    printf("Modified Number is : %d", iRet);
    return 0;
}