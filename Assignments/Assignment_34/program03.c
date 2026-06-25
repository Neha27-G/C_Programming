/* Write a program which accept string from user and copy capital character of that string into another
string.

Input  :  Marvellous Multi OS
          
Output  : MMOS

*/

#include<stdio.h>

void strCpyCap(char *src, char *dest)
{
    //filter
    while(*src != '\0')
    {
        if((*src >= 'A') && (*src <= 'Z'))
        {
            *dest = *src;  
            dest++;
        }
        src++;   
    }
    *dest = '\0';
}

int main()
{
    char Arr[30] = "Marvellous Multi OS";
    char Brr[30];  //Empty string

    strCpyCap(Arr,Brr);
    printf("%s\n",Brr);
    
    return 0;
}