//Write a program which accept area in square feet and convert it into square meter(1 square feet = 0.0929 square meter)
//Time Complexity :O(1)

#include<stdio.h>

double SquareMeter(int iValue)
{
    double dSquarefeet=0.0;

    dSquarefeet = iValue * 0.0929;

    return dSquarefeet;
}

int main()
{
    int iValue = 0;
    double dRet = 0.0;
    
    printf("Enter area in square feet :");
    scanf("%d", &iValue);

    dRet = SquareMeter(iValue);

    printf("Area in square meter is :%lf",dRet);

    return 0;
}