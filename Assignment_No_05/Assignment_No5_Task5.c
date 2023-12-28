#include<stdio.h>

float Percenatge(int iNo1, int iNo2)
{
    float fPer = 0.0f;

    if(iNo2 != 0)
    {
        fPer = ((float)iNo2/iNo1)*100;
    }
    else{
        return 0;
    }

    return fPer;
}

int main()
{
    int iValue1 = 0;
    int iValue2 = 0;

    float fRet = 0.0f;

    printf("Please ENter Total Marks : ");
    scanf("%d",&iValue1);

    printf("Please ENter Obtained Marks : ");
    scanf("%d",&iValue2);

    fRet = Percenatge(iValue1, iValue2);

    printf("Percentage is %f",fRet);

    return 0;

}