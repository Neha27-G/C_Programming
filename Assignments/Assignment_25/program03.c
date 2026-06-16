/*
Accept number of rows and number of columns from user and display bellow pattern

Input : iRow = 5    iCol = 5

Output : a  b   c   d   e
         1  2   3   4   5
         a  b   c   d   e
         1  2   3   4   5
 */

 #include<stdio.h>

 void Pattern(int iRow , int iCol)
 {
    int i= 0, j = 0;
    char ch = '\0'; 

    for(i = 1; i <= iRow; i++)
    {
        ch= 'a';
        
        for(j = 1; j <= iCol; j++)
        {
            if(i % 2 != 0)
            {
                printf("%c\t",ch);
                ch++;
            }
            else
            {
                printf("%d\t",j);
            }
        }
        printf("\n");
    }
 }

 int main()
 {
    int iValue1 = 0, iValue2 = 0;

    printf("Enter the Number of Rows:");
    scanf("%d",&iValue1);

    printf("Enter the Number of Column:");
    scanf("%d",&iValue2);

    Pattern(iValue1,iValue2);

    return 0;
 }