/* Write a program which accept string from user and return differnce between frequency
of small characters and frequency of capital characters

Input  : "MarvellouS"

Output : 6        --> (8 -2)
*/

#include<stdio.h>
int Difference(const char *str)
{
    int iSmall = 0 , iCapital = 0;

    while(*str != '\0')
    {
        if(*str >='A' && *str<= 'Z')
        {
            iCapital++;
        }
        else if(*str >='a' && *str<= 'z')
        {
            iSmall++;
        }
        str++;
    }
    return iCapital-iSmall;
}

int main()
{
    char Arr[20];
    int iRet = 0;

    printf("Enter a string :");
    scanf("%[^'\n']s",Arr);

    iRet = Difference(Arr);
    printf("Differnece is :%d\n",iRet);

    return 0;
}