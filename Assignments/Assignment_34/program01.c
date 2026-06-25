/* Write a program which accept string from user and copy the content of string into another
string.(Implement strcpy() function)

Input  :  Marvellous Multi OS
Output  : Marvellous Multi OS

*/

#include<stdio.h>

void strCpyX(char *src, char *dest )
{
    //filter
    while(*src != '\0')
    {
        *dest = *src;
        src++;
        dest++; 
    }
    *dest = '\0';
}

int main()
{
    char Arr[30] = "Marvellous Multi OS";
    char Brr[30];  //Empty string

    strCpyX(Arr,Brr);
    printf("Copied string is:%s\n",Brr);
    
    return 0;
}