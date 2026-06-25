/* Write a program which accept string from user and toggle the  case.
Input  :  Marvellous Multi OS

Output  : mARVELLOUS mULTI os
*/

#include<stdio.h>

void strToggleX(char *str)
{
    while(*str != '\0')
    {
        if(*str >= 'a' && *str <= 'z')
        {
            *str = *str - 32 ;
        }
        else if((*str >= 'A' && *str <= 'Z'))
        {
            *str = *str + 32;
        }
        str++;
    }
}

int main()
{
    char Arr[20];

    printf("Enter a string :\n");
    scanf("%[^'\n']s",Arr);

    strToggleX(Arr);

    printf("Modified String is : %s",Arr);

    return 0;
}