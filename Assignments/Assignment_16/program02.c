//Accept N numbers from user and return the Smallest number.

#include<stdio.h>
#include<stdlib.h>

int Mininum(int Arr[], int iSize)
{
    int iCnt = 0;
    int iMin = 0;

    iMin = Arr[0];

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        if(Arr[iCnt] < iMin )
        {
            iMin = Arr[iCnt]; 
        }
    }
    return iMin;
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

    iRet = Mininum(p ,iLength);
    printf("Smallest Number is %d",iRet);

    free(p);

    return 0;
}