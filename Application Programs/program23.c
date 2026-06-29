#include<stdio.h>

void Display(int iNo)
{
    int iCnt = 0;

    //Updator
    if(iNo < 0)
    {
        iNo = -iNo;
    }

    for(iCnt = iNo; iCnt >= 1; iCnt--)
    {
        printf("Jay Ganesh...\n");
    }
}
int main()
{
    int iValue = 0;

    printf("Enter the Frequency :");
    scanf("%d",&iValue);

    Display(iValue);
    
    return 0;
}