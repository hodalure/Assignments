// Write a program which accept width & height of rectangle from user and calculate its area(Area = width *height)

#include<stdio.h>

double RectArea(float fWidth, float fHeight)
{
    float fAns = 0.0f;

    fAns = fWidth * fHeight;
    return fAns;
}

int main()
{
    float fValue1 = 0.0, fValue2 = 0.0;
    double dRet = 0.0;
    
    printf("Enter width");
    scanf("%f", &fValue1);

    printf("Enter height");
    scanf("%f", &fValue2);

    dRet = RectArea(fValue1,fValue2);

    printf("Area of rectangle is: %f\n", dRet);
}