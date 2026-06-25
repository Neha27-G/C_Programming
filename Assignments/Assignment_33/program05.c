/* Write a program which accept string from user and reverse that string in place

Input  :  abcd
Output  : dcba

Input  :  abba         
Output  : abba
*/

#include<stdio.h>

void strRevX(char *str )
{
    char *Start = NULL;
    char *End = NULL;
    char temp ='\0';

    Start = str;

    while(*str != '\0')
    {
        str++; 
    }
    str--;

    End = str;
    while(Start <= End)
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
    char Arr[20];

    printf("Enter a string :");
    scanf("%[^'\n']s",Arr);

    strRevX(Arr);
    printf("Modified string is:%s\n",Arr);
    
    return 0;
}