/* Write a program which accept 2 strings from user and concat second string after string.(Implement strcat() function).

Input  :  Marvellous Infosystems
          Logical Building
          
Output  : Marvellous Infosystems Logical Building

*/

#include<stdio.h>

void strCatX(char *src, char *dest)
{
    //filter
    while(*src != '\0')     // Traverse first string till end
    {
        src++;   
    }
    while(*dest!= '\0')     // Copy contents of destination in source
    {
        *src = *dest;

        src++;
        dest++;   
    }
    *src = '\0';
}

int main()
{
    char Arr[30] = "Marvellous Infosystems ";
    char Brr[30] = "Logic Building";

    strCatX(Arr,Brr);
    printf("%s\n",Arr);
    
    return 0;
}