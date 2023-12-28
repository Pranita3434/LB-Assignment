#include<stdio.h>


typedef unsigned int UINT;

UINT OffBit(UINT iNo)
{
    int iMask = 0x00000240;
    int iResult = 0;
    iResult = iNo ^ iMask;

    return iResult;
}

int main()
{
    int iNo = 0;

    printf("Enter The number : ");
    scanf("%d", &iNo);

    int iRet = 0;
    iRet = OffBit(iNo);
        
    printf("Modified Number is : %d", iRet);
    return 0;
}