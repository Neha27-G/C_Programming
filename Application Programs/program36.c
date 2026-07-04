#include<stdio.h>

void SumFactors(int iNo)
{
    int iCnt = 0;
    int iSum = 0;

    for(iCnt = 1; iCnt <= (iNo/2); iCnt++)        //reduce time complexity
    {
        if((iNo % iCnt)==0)
        {
            iSum = iSum + iCnt;
        }
    }
    printf("Summation of Factors : %d\n",iSum);
}

int main()
{
    int iValue = 0;

    printf("Enter the Number :");
    scanf("%d",&iValue);

    SumFactors(iValue);

    return 0;
}