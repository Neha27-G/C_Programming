//Accept N numbers from user and accept one another number as No, return index of last occurance of that No.

#include<stdio.h>
#include<stdlib.h>

int LastOcc(int Arr[], int iSize, int iNo)
{
    int iCnt = 0;

    for(iCnt = iSize; iCnt > 0; iCnt--)
    {
        if(Arr[iCnt] == iNo)
        {
            break;  
        }
    }
    if(iCnt < iSize)
    {
        return iCnt;
    }
    else
    {
        return -1;
    }
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

    printf("Enter the number to find Last Occurence :");
    scanf("%d",&iValue);

    iRet = LastOcc(p ,iLength,iValue);

    if(iRet == -1 )
    {
        printf("There is no such number");
    }
    else
    {
        printf("Last occurance of number is %d",iRet);
    }

    free(p);

    return 0;
}