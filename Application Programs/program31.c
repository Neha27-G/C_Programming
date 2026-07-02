#include<stdio.h>

int main()
{
    int iValue = 0;

    printf("Enter the Number :");
    scanf("%d",&iValue);

    if((iValue % 3 == 0) && (iValue % 5 == 0))
    {
        printf("Number is Divisible by 3 and 5");
    }
    else
    {
        printf("Number is Not Divisible by 3 and 5");
    }
    return 0;
}