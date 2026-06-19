/*
 Algorithm 1

START
        Accept number as No
        If No is completely divisible by 2
            then print Even
        Otherwiae
            print Odd
STOP

Algorithm 2

START
        Accept number as No
        divide No by 2
        If remainder is 0
            then print as Even
        otherwise
            print odd
STOP

*/ 
#include<stdio.h>
int main()
{
    int iValue = 0;
    int iRemainder =0;

    printf("Enter a Number :\n");
    scanf("%d",&iValue);

    iRemainder = iValue % 2;

    if(iRemainder == 0)
    {
        printf("Number is Even\n");
    }
    else
    {
        printf("Number is Odd\n");

    }


    return 0;
}