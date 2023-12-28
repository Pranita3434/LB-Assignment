#include<stdio.h>
#include<stdlib.h>

int Difference(int Arr[], int iLength)
{
    int iCnt = 0;
    int iMax = Arr[0],iMin = Arr[0];

    for (iCnt = 0; iCnt < iLength; iCnt++)
    {
        if (Arr[iCnt] > iMax)
        {
            iMax= Arr[iCnt];
        }

        if(Arr[iCnt] < iMin)
        {
            iMin = Arr[iCnt];
        }  
    }
    return iMax - iMin;
    
}

int main()
{
    int iSize = 0,iRet = 0, iCnt = 0;
    int *p = NULL;

    printf("Enter The Number Of elements : ");
    scanf("%d",&iSize);

    p = (int *) malloc(iSize * sizeof(int));

    if(p== NULL)
    {
        printf("Unable to allocate memory ");
        return -1;
    }
    printf("Enter %d elements\n", iSize);

    for(iCnt =  0; iCnt < iSize; iCnt++)
    {
        printf("Enter elements %d : ", iCnt+1);
        scanf("%d", &p[iCnt]);
    }

    iRet = Difference(p , iSize);
    printf("Difference is %d ",iRet);


    free(p);

    return 0;
}