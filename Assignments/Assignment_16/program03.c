//Accept N numbers from user and return differnece betn largest and smallest number.

#include<stdio.h>
#include<stdlib.h>

int Difference(int Arr[], int iSize)
{
    int iCnt = 0;
    int iMin = 0;
    int iMax = 0;
    int Diff = 0;

    iMin = Arr[0];

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        if(Arr[iCnt] > iMax )
        {
            iMax = Arr[iCnt]; 
        }
        else
        {
            iMin = Arr[iCnt];
        }
    }
    return (Diff = iMax - iMin);
}

int main()
{
    int iCnt = 0;
    int *p = NULL;
    int iLength = 0;
    int iRet = 0;
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

    iRet = Difference(p ,iLength);
    printf("Differnce is %d",iRet);

    free(p);

    return 0;
}