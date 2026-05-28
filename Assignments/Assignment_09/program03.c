//Write program which accept number from user and return the count of digits in betn 3 & 7.
//Input  : 2395
//Output : 1
// Time Complexity : O(d) or O(log n)    d=no of digits in the number

#include<stdio.h>

int CountRange(int iNo)
{
    int iCnt = 0;
    int iDigit =0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    while(iNo != 0)
    {
        iDigit = iNo % 10;

        if(iDigit > 3 && iDigit < 7)
        {
            iCnt++;
        }
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

    iRet = CountRange(iValue);

    printf("%d",iRet);

    return 0;
}