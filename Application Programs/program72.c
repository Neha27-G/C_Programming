#include<stdio.h>
#include<stdbool.h>

bool CheckPallindrome(int iNo)
{
    int iDigit = 0;
    int iRev = 0;
    int temp = 0;

    temp = iNo;

    while(iNo != 0)
    {
        iDigit = iNo % 10;
        iRev = (iRev * 10) + iDigit;
        iNo = iNo / 10;
    }
    
    if(temp == iRev)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter the Number : ");
    scanf("%d",&iValue);

    iRet = CheckPallindrome(iValue);

    if(iRet == true)
    {
        printf("Number is Pallindrome");
    }
    else
    {
        printf("Number is Not Pallindrome");
    }
 
    return 0;
}