#include<stdio.h>

int CountOddDigits(int iNo)
{
    int iDigit = 0;
    int iCount = 0;

    while(iNo != 0)
    {
        iDigit = iNo % 10;
        
        if((iDigit % 2)!=0)
        {
            iCount++;
        }
        iNo= iNo / 10;
    }
    return iCount;
}
int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter the Number : ");
    scanf("%d",&iValue);

    iRet = CountOddDigits(iValue);
    printf("Number of Odd Digits are : %d",iRet);
    
    return 0;
}