#include<stdio.h>

void CountEvenOddDigits(int iNo)
{
    int iDigit = 0;
    int iCountEven = 0;
    int iCountOdd = 0;

    while(iNo != 0)
    {
        iDigit = iNo % 10;
        
        if((iDigit % 2)==0)
        {
            iCountEven++;
        }
        else
        {
            iCountOdd++;
        }
        iNo= iNo / 10;
    }
    printf("Count of Even Numbers : %d\n",iCountEven);
    printf("Count of Odd Numbers : %d\n",iCountOdd);
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter the Number : ");
    scanf("%d",&iValue);

    CountEvenOddDigits(iValue);
 
    return 0;
}