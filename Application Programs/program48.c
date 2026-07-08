#include<stdio.h>
#include<stdbool.h>

bool CheckPrime(int iNo)
{
    int iCnt = 0;

    for(iCnt = 2; iCnt <= iNo/2; iCnt++)
    {
        if((iNo % iCnt)== 0)
        {
            return false;                 //bad programming practice
        }                                 // for 2->  2<=1 false
    }
    return true;
}

int main()
{
    int iValue = 0;
    bool bRet = false;

    printf("Enter the Number :");
    scanf("%d",&iValue);

    bRet = CheckPrime(iValue);

    if(bRet == true)
    {
        printf("It is Prime Number\n");
    }
    else
    {
        printf("It is not Prime Number\n");
    }

    return 0;
}