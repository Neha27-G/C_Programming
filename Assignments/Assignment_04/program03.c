//Write a program which accept number from user and display its non factors 
#include<stdio.h>

void NonFact(int iNo)
{
    int iCnt =0;

    printf("Non Factors are : \n");

    for(iCnt = 1; iCnt < iNo; iCnt++)
    {
        if((iNo % iCnt) != 0)
        {
            printf("%d ",iCnt);
        }
    }
    
}

int main()
{
    int iValue = 0;

    printf("Enter number :");
    scanf("%d",&iValue);

    NonFact(iValue);

    return 0;
}