#include<stdio.h>

void DisplayDigits(int iNo)
{
    while(iNo > 0)
    {
        printf("%d\n",iNo % 10);
        iNo = iNo / 10;
    }
}
int main()
{
    int iValue = 0;

    printf("Enter the Number : ");
    scanf("%d",&iValue);

    DisplayDigits(iValue);
    
    return 0;
}