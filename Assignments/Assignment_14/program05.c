//Accept N numbers from user and accept one number as No, return frequency of No from it.

#include<stdio.h>
#include<stdlib.h>

int Frequency(int Arr[], int iSize, int iNo)
{
    int iCnt = 0;
    int iCount = 0;

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        if(Arr[iCnt] == iNo)
        {
            iCount++;  
        }
    }
    return iCount++;
}

int main()
{
    int iCnt = 0;
    int iRet = 0;
    int *p = NULL;
    int iLength = 0;
    int iValue = 0;

    printf("Enter the number of elements :");
    scanf("%d",&iLength);

    p = (int *)malloc(sizeof(int) * iLength);

    if(p == NULL)
    {
        printf("Unable to alocate memory");
        return -1;
    }

    printf("Enter %d elements :\n",iLength);

    for(iCnt = 0; iCnt <iLength; iCnt++)
    {
        printf("Enter the elements %d:",iCnt+1);
        scanf("%d",&p[iCnt]);
    }

    printf("Enter the number to count frequency :");
    scanf("%d",&iValue);

    iRet = Frequency(p ,iLength,iValue);
    printf("%d",iRet);

    free(p);

    return 0;
}