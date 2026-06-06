//Accept N numbers from user and display all such numbers which contains 3 digits in it.

#include<stdio.h>
#include<stdlib.h>

void Digits(int Arr[], int iSize)
{
    int iCnt = 0;
    int iDigitCount = 0;
    int iTemp= 0;
  
    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        iDigitCount = 0;

        iTemp= Arr[iCnt];

        if(iTemp < 0)
        {
            iTemp = -iTemp;
        }

        while (iTemp > 0)
        {
            iTemp = iTemp / 10;
            iDigitCount++;
        }

        if(iDigitCount == 3)
        {
            printf("%d\t",Arr[iCnt]);
        }
    }
    printf("\n"); 
}

int main()
{
    int iCnt = 0;
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

    Digits(p ,iLength);

    free(p);

    return 0;
}