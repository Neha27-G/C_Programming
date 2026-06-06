/*Accept N numbers from user and return difference betn summation of even
elemnets and summation od odd elements */

#include<stdio.h>
#include<stdlib.h>

int Difference(int Arr[], int iSize)
{
    int iCnt = 0 , iSumEven = 0, iSumOdd = 0;
    int iDiff = 0;

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        if(Arr[iCnt] % 2 == 0)
        {
            iSumEven = iSumEven + Arr[iCnt];
        }
        else
        {
            iSumOdd = iSumOdd + Arr[iCnt];
        }
    }
    return (iDiff = iSumEven - iSumOdd);

}

int main()
{
    int iRet = 0, iCnt = 0;
    int *p = NULL;
    int iLength = 0;

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
    printf("Result is %d",iRet);

    free(p);

    return 0;
}