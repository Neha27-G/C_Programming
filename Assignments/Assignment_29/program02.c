/* Accept Character from user and check whether it is Capital or not (A-Z)
Input   : F
Output  : TRUE

Input   : d
Output  : FALSE
*/

#include<stdio.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL chkCapital(char ch)
{
    if(ch >='A' && ch<='Z')
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

    bRet =chkCapital(cValue);

    if(bRet == TRUE)
    {
        printf("It is Capital Character");
    }
    else
    {
        printf("It is Not a Capital Character");
    }
    return 0;
}