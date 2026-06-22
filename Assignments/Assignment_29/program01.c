/* Accept Character from user and check whether it is alphabet or not (A-Z  a-z)
Input   : F
Output  : TRUE

Input   : &
Output  : FALSE
*/

#include<stdio.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL chkAlpha(char ch)
{
    if((ch >='A' && ch<='Z') || (ch >='a' && ch<='z'))
    {
        return TRUE;
    }
    else
    {
        return FALSE;
    }
}

int main()
{
    char cValue ='\0';
    BOOL bRet = FALSE;

    printf("Enter the character :");
    scanf("%c",&cValue);

    bRet =chkAlpha(cValue);

    if(bRet == TRUE)
    {
        printf("It is Character");
    }
    else
    {
        printf("It is Not a Character");
    }

    return 0;
}