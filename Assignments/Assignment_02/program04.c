//Accept two numbers from user and display first number in second number of times
// ex: Input : 12 5
//     output : 12 12 12 12 12


#include<stdio.h>

void Display(int iNo , int iFrequency)
{
    int iCnt= 0;

    for(iCnt = 1 ;iCnt <=iFrequency ; iCnt++ )
    {
        printf("%d ", iNo);
    }
}

int main()
{
    int iValue = 0 ;
    int iCount = 0;
    
    printf("Enter Number :");
    scanf("%d",&iValue);

    printf("Enter Frequency :");
    scanf("%d",&iCount);

    Display(iValue , iCount);
    
    return 0;
}