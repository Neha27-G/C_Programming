//Write program which accept number from user and return multiplication of all digits.
//Input  : 2395
//Output : 270
// Time Complexity : O(d) or O(log n)    d=no of digits in the number

#include<stdio.h>

int MultDigits(int iNo)
{
    int iDigit = 0;
    int iCnt = 1;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    while(iNo != 0)
    {
        iDigit = iNo % 10;
        iCnt = iCnt * iDigit;
        iNo = iNo / 10;
    }
    return iCnt;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter number :");
    scanf("%d",&iValue);

    iRet = MultDigits(iValue);

    printf("%d",iRet);

    return 0;
}