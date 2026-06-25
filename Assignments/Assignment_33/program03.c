/* Write a program which accept string from user and accept one character.Return index of first
occurrence of that character.

Input  :  Marvellous Multi OS
          e
Output  : 4

Input  :  Marvellous Multi OS
          w
Output  : -1
*/

#include<stdio.h>

int FirstChar(char *str , char ch)
{
    int iIndex = 0;
    int iPos = -1;

    while(*str != '\0')
    {
        if(*str == ch)
        {
            iPos = iIndex;
            break;
        } 

        iIndex++;
        str++; 
    }
    return iPos;
}

int main()
{
    char Arr[20];
    char cValue = '\0';
    int iRet = 0;
   
    printf("Enter a string :");
    scanf("%[^'\n']s",Arr);

    printf("Enter a Character:");
    scanf(" %c",&cValue);

    iRet= FirstChar(Arr, cValue);
    printf("Character location is:%d\n",iRet);
    
    return 0;
}