//Write a program which accept distance in Kilometre and convert it into meter.(1 lilometre = 1000 metre)
//Time Complexity :O(1)

#include<stdio.h>

int KMtoMeter(int iNo)
{
    int iMeter = 0;

    iMeter = iNo * 1000;

    return iMeter;
  
}

int main()
{
    int iValue = 0 , iRet = 0;
    
    printf("Enter Distance :");
    scanf("%d", &iValue);

    iRet = KMtoMeter(iValue);

    printf("Distance in meter is :%d",iRet);

    return 0;
}