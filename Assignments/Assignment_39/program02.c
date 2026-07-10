//Consider Singly Linear LinkedList to solve problems
// 2. Count Even Numbers..   check nodes cointaining even values.

#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

struct node
{
    int data;
    struct node *next;
};

typedef struct node NODE;
typedef struct node* PNODE;
typedef struct node** PPNODE;

void Display(PNODE first)
{
    while (first != NULL)                                            //type 1                                           
    {
        printf(" | %d | -> ",first->data);
        first = first->next;                            
    }
    printf("NULL\n");
}

void InsertLast(PPNODE first, int iNo)
{
    PNODE newn = NULL;
    PNODE temp = NULL;

    newn = (PNODE)malloc(sizeof(NODE));
    
    newn->data = iNo;
    newn->next = NULL;

    if(*first == NULL)
    {
        *first = newn;
    }
    else
    {
        temp = *first;

        while(temp->next != NULL)
        {
            temp = temp-> next;
        }
        temp->next = newn;
    }
}

int CountEven(PNODE First)
{
    int iCount = 0;

    while(First != NULL)
    {
        if((First->data % 2) == 0)
        {
            iCount++;
        }

        First = First ->next;
    }
    return iCount;
}

int main()
{
    PNODE head = NULL;
    int iRet = 0;


    InsertLast(&head,11);
    InsertLast(&head,20);
    InsertLast(&head,51);
    InsertLast(&head,100);
    InsertLast(&head,111);

    Display(head);

    iRet = CountEven(head);
    printf("Number of Even Elements are : %d\n",iRet);

    return 0;
}