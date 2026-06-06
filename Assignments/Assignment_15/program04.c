//Accept N numbers from user and accept Range , Display all elements from that range.

#include<stdio.h>
#include<stdlib.h>

void Range(int Arr[], int iSize, int iStart, int iEnd)
{
    int iCnt = 0;

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        if((Arr[iCnt] >= iStart) && (Arr[iCnt] <=iEnd))
        {
            printf("%d\t",Arr[iCnt]); 
        }
    }
}

int main()
{
    int iCnt = 0;
    int *p = NULL;
    int iLength = 0;
    int iValue1 = 0 ,iValue2 = 0;


    printf("Enter the number of elements :");
    scanf("%d",&iLength);

    printf("Enter the Starting point :");
    scanf("%d",&iValue1);

    printf("Enter the Ending point :");
    scanf("%d",&iValue2);

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

    Range(p ,iLength,iValue1,iValue2);

    free(p);

    return 0;
}