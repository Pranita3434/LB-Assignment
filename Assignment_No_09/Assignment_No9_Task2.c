#include<stdio.h>

double RectArea(float fWidth, float fHeight)
{
    double dArea = 0.0;
    dArea = (double)(fWidth * fHeight);
    return dArea;
}

int main()
{
    float fValue1 = 0.0;
    float fValue2 = 0.0;
    double dRet = 0.0;

    printf("Enter Width : ");
    scanf("%f",&fValue1);

    printf("Enter height : ");
    scanf("%f",&fValue2);

    dRet = RectArea(fValue1,fValue2);

    printf("Factorial of number is %f",dRet);
    
    return 0;
}