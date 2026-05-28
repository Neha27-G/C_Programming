//Write a program which accept range from user and display all even numbers in betn that range.
//Time Complexity :O(n)

#include<stdio.h>

void RangeDisplayEven(int iStart , int iEnd)
{
    if(iStart > iEnd)
    {
        printf("Invalid range\n");
        return;
    }
    int iCnt = 0;

    for(iCnt = iStart; iCnt<=iEnd; iCnt++)
    {
        if((iCnt % 2)==0)
        {
            printf("%d ",iCnt);
        }
    }
    
}

int main()
{
    int iValue1 = 0, iValue2 = 0;
    
    
    printf("Enter Starting point :");
    scanf("%d", &iValue1);

    printf("Enter ending point :");
    scanf("%d", &iValue2);

    RangeDisplayEven(iValue1,iValue2);
    
    return 0;
}