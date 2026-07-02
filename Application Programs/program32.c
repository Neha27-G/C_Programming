#include<stdio.h>

void CheckDivisible(int iNo)
{
    if((iNo % 3 == 0) && (iNo% 5 ==0))
    {
        printf("Number is Divisible by 3 and 5");
    }
    else
    {
        printf("Number is Not Divisible by 3 and 5");
    }
}

int main()
{
    int iValue = 0;

    printf("Enter the Number :");
    scanf("%d",&iValue);

    CheckDivisible(iValue);
    
    return 0;
}