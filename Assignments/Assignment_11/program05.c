//Write a program which accept range from user and display all numbers in betn that range in reverse.
//Time Complexity :O(n)

#include<stdio.h>

void RangeDisplayRev(int iStart , int iEnd)
{
    if(iStart > iEnd)
    {
        printf("Invalid range\n");
        return;
    }
    int iCnt = 0;

    for(iCnt = iEnd; iCnt >=iStart; iCnt--)
    {
        printf("%d ",iCnt);
    }
    
}

int main()
{
    int iValue1 = 0, iValue2 = 0;
    
    
    printf("Enter Starting point :");
    scanf("%d", &iValue1);

    printf("Enter ending point :");
    scanf("%d", &iValue2);

    RangeDisplayRev(iValue1,iValue2);
    
    return 0;
}