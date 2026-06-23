/* Write a program which accept string from user and display it in reverse order.

Input  : "MarvellouS"
Output : SuollevraM

*/

#include<stdio.h>

void Reverse(char *str)
{
    char *Start = NULL;
    char *End = NULL;
    char temp = '\0';

    Start = str;

    while(*str != '\0')
    {
        str++;
    }
    str--;

    End =str;

    while (Start < End)
    {
        temp = *Start;
        *Start = *End;
        *End = temp;

        Start++;
        End--;
    }
    
}

int main()
{
    char Arr[50] = {'\0'};

    printf("Enter String :\n");
    scanf("%[^'\n']s",Arr);

    Reverse(Arr);

    printf("Updated String is:%s\n",Arr);

    return 0;
}