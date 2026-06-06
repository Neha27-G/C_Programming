//Accept N numbers from user and display all such elements which are divisible by 3 and 5 

#include<stdio.h>
#include<stdlib.h>

void Display(int Arr[], int iSize)
{
    int iCnt = 0;

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        if(Arr[iCnt] % 3 == 0 && Arr[iCnt] % 5 == 0)
        {
            printf("%d\t", Arr[iCnt]);
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

    Display(p ,iLength);

    free(p);

    return 0;
}