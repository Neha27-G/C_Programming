/* Write a program which accept string from user and convert it into Upper case.
Input  :  marvellous multi os

Output  : "MARVELLOUS MULTI OS"
*/

#include<stdio.h>

void strUprX(char *str)
{
    while(*str != '\0')
    {
        if(*str >= 'a' && *str <= 'z')
        {
            *str = *str - 32 ;
        }
        str++;
    }
}

int main()
{
    char Arr[20];

    printf("Enter a string :\n");
    scanf("%[^'\n']s",Arr);

    strUprX(Arr);

    printf("Modified String is : %s",Arr);

    return 0;
}