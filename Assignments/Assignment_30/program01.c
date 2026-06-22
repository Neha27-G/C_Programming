/* Write a program which displays ASCII table.Table contains symbol,Decimal,Hexadecimal
and Octal representation of every member from  0 to 225.
*/

#include<stdio.h>

void DisplayASCII()
{
    int i = 0;

    printf("Symbol\tDecimal\tHexadecimal\tOctal\n");

    for(i = 0; i <=225; i++)
    {
        if(i >= 32 && i<= 126)
        {
            printf("%c\t%d\t%x\t\t%o\n",i,i,i,i);
        }
        else
        {
            printf(" \t%d\t%x\t\t%o\n",i,i,i,i);
        }
        
    }
    
}

int main()
{

    DisplayASCII();

    return 0;
}