/* Accept Character from user and check whether it is special symbol or not (! , @, $,#,%,^,&,*)
Input   : %
Output  : TRUE

Input   : d
Output  : FALSE
*/

#include<stdio.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL chkSpecial(char ch)
{
    if((ch >= 33 && ch<= 47)|| 
       (ch >= 58 && ch<= 64) ||
       (ch >= 91 && ch<= 96) || 
       (ch >= 123 && ch<= 127))
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

    bRet =chkSpecial(cValue);

    if(bRet == TRUE)
    {
        printf("It is Special Character\n");
    }
    else
    {
        printf("It is Not a Special Caracter\n");
    }
    
    return 0;
}