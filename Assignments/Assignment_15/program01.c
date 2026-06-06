//Accept N numbers from user and accept one number as No,Check whether No is present or not.

#include<stdio.h>
#include<stdlib.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL Check(int Arr[], int iSize, int iNo)
{
    int iCnt = 0;

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        if(Arr[iCnt] == iNo)
        {
            break;  
        }
    }
    if(iCnt < iSize)
    {
        return TRUE;
    } 
    else
    {
        return FALSE;
    }
}

int main()
{
    int iCnt = 0;
    BOOL bRet = 0;
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

    bRet = Check(p ,iLength,iValue);

    if(bRet == TRUE)
    {
        printf("Number is present");
    }
    else
    {
        printf("Number is not Present");
    }
    free(p);

    return 0;
}