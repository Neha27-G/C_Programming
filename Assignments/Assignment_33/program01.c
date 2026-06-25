/* Write a program which accept string from user and accept one character.check whether that
character is present in string or not.

Input  :  Marvellous Multi OS
          e
Output  : TRUE

Input  :  Marvellous Multi OS
          w
Output  : FALSE
*/

#include<stdio.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL ChkChar(char *str , char ch)
{
    while(*str != '\0')
    {
        if(*str == ch)
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
    char cValue = '\0';
    BOOL bRet = FALSE;

    printf("Enter a string :");
    scanf("%[^'\n']s",Arr);

    printf("Enter a Character:");
    scanf(" %c",&cValue);

    bRet = ChkChar(Arr, cValue);
    
    if(bRet == TRUE)
    {
        printf("Character Found\n");
    }
    else
    {
        printf("Character Not Found\n");
    }

    return 0;
}