//Write a program which accept radius of circle from user and calculate its area.
//consider value of PI as 3.14 (Area = PI * Radius * Radius)
//Time Complexity :O(1)

#include<stdio.h>

double CircleArea(float fRadius)
{
    double PI = 3.14;
    double Area = 0.0;

    Area = PI * fRadius * fRadius;

    return Area;
}

int main()
{
    float fValue = 0.0;
    double dRet = 0.0;

    printf("Enter radius :");
    scanf("%f", &fValue);

    dRet = CircleArea(fValue);

    printf("Area of Circle is :%lf",dRet);

    return 0;
}



