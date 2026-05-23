//Write a program which accept number from user and display its multiplication of factors.
#include<stdio.h>

int MultiFact(int iNo)
{
    int iCnt = 0;
    int iMult = 1;

    for(iCnt = 1; iCnt <= (iNo/2); iCnt++)
    {
        if((iNo % iCnt)==0)
        {
            iMult = iMult * iCnt;
        }
    }
    return iMult;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter number :");
    scanf("%d",&iValue);

    iRet = MultiFact(iValue);
    printf("Multiplication of Factor is : %d",iRet);

    return 0;
}