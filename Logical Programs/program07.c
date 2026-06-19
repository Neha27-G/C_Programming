#include<stdio.h>

int main()
{
    float fValue1 = 0.0f;                   //To store first input
    float fValue2 = 0.0f;                   //To store the second input
    float fResult = 0.0f;                   //To store the result
    

    printf("Enter first number :\n");
    scanf("%f", &fValue1);

    printf("Enter Second number :\n");
    scanf("%f", &fValue2);

    fResult = fValue1 + fValue2;            //perform the Addition

    printf("Addition is :%f\n",fResult);

}