//Write a program which accept temperature in fahrenheit ad convert it into celsius.(1 celsius=(fahrenheit - 32)* (5/9))
//Time Complexity :O(1)

#include<stdio.h>

double FhtoCs(float fTemp)
{
    double dCelsius =0.0;

    dCelsius =(fTemp -32 )*(5.0 / 9.0);

    return dCelsius;
}

int main()
{
    float fValue = 0.0;
    double dRet = 0.0;
    
    printf("Enter temperature in Fahrenheit :");
    scanf("%f", &fValue);

    dRet = FhtoCs(fValue);

    printf("Temperature in Celsius is :%lf",dRet);

    return 0;
}