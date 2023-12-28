#include<stdio.h>

double CircleArea(float fRadius)
{
    double iArea = 0.0;

    iArea = ((double)fRadius * fRadius) * 3.14 ;
   
    return iArea;
}

int main()
{
    float fValue = 0.0;
    double dRet = 0.0;

    printf("Enter Radius : ");
    scanf("%f",&fValue);

    dRet = CircleArea(fValue);

    printf("Area of Circle is : %f",dRet);
    
    return 0;
}

