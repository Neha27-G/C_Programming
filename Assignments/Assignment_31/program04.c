/* Write a program which accept string from user and Check whether it contains vowels in it or not.

Input  : "Marvellous"
Output : TRUE

Input  : "xyz"
Output : FALSE
*/

#include<stdio.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL ChkVowels(const char *str)
{
    int iCount = 0;

    while(*str != '\0')
    {
        if(*str == 'a' || *str == 'e' || *str == 'i' || *str == 'o' || *str == 'u'||
           *str == 'A' || *str == 'E' || *str == 'I' || *str == 'O' || *str == 'U')             
        {
            return TRUE;
        }
        str++;
    }
    return FALSE;
}

int main()
{
    char Arr[20];
    BOOL bRet = FALSE;

    printf("Enter a string :");
    scanf("%[^'\n']s",Arr);

    bRet = ChkVowels(Arr);

    if(bRet == TRUE)
    {
        printf("Contains vowel\n");
    }
    else
    {
        printf("There is no vowels\n");
    }
    return 0;
}