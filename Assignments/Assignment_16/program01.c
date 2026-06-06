//Accept N numbers from user and return the largest number.

#include<stdio.h>
#include<stdlib.h>

int Maxinum(int Arr[], int iSize)
{
    int iCnt = 0;
    int iMax = 0;

    iMax = Arr[0];

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        if(Arr[iCnt] > iMax )
        {
            iMax = Arr[iCnt]; 
        }
    }
    return iMax;
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

    iRet = Maxinum(p ,iLength);
    printf("Largest Number is %d",iRet);

    free(p);

    return 0;
}