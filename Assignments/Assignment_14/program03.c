//Accept N numbers from user check whether that numbers contains 11 in it or not.

#include<stdio.h>
#include<stdlib.h>

#define TRUE 1
# define FALSE 0

typedef int bool;

bool Check(int Arr[], int iSize)
{
    int iCnt = 0;

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        if(Arr[iCnt] == 11)
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
    bool bRet = FALSE;
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

    bRet = Check(p ,iLength);

    if(bRet == TRUE)
    {
        printf("11 is present");
    }
    else
    {
        printf("11 is absent");
    }

    free(p);

    return 0;
}