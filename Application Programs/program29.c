#include<stdio.h>

int main()
{
    char sName[50];                     //Character Array
    int iAge = 0;
    float fMarks = 0.0f;

    printf("Enter your Name :");
    scanf("%s",&sName);

    printf("Enter your Age :");
    scanf("%d",&iAge);

    printf("Enter your Marks:");
    scanf("%f",&fMarks);

    printf("\nName : %s",sName);
    printf("\nAge : %d",iAge);
    printf("\nMarks : %f",fMarks);

    return 0;
}