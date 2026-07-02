#include<stdio.h>
#include<stdlib.h>

int main()
{
    char *sName = NULL;
    int iAge = 0;
    float fMarks = 0.0f;

    sName =(char *)malloc(50 * sizeof(char));

    if(sName == NULL)
    {
        printf("Memory Allocation failed");
        return -1;
    }

    printf("Enter your Name :");
    scanf(" %[^\n]",sName);

    printf("Enter your Age :");
    scanf("%d",&iAge);

    printf("Enter your Marks:");
    scanf("%f",&fMarks);

    printf("\nName : %s",sName);
    printf("\nAge : %d",iAge);
    printf("\nMarks : %f",fMarks);

    free(sName);

    return 0;
}