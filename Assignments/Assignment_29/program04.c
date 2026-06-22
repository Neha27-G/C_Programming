/* Accept Character from user and check whether it is Small case or not (a - z)
Input   : g
Output  : TRUE

Input   : D
Output  : FALSE
*/

#include<stdio.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL chkSmall(char ch)
{
    if(ch >= 'a' && ch<= 'z')
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

    bRet =chkSmall(cValue);

    if(bRet == TRUE)
    {
        printf("It is Small Case Character");
    }
    else
    {
        printf("It is Not a Small Case Caracter");
    }
    
    return 0;
}