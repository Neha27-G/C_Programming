//Consider Singly Linear LinkedList to solve problems
// 5. Display Only Even Elements..   print only even elements.

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

void DisplayEven(PNODE First)
{
    while(First != NULL)
    {
        if((First->data % 2) == 0)
        {
            printf("%d\t",First->data);
        }

        First = First ->next;
    }
  
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

    printf("Even Elements are : ");
    DisplayEven(head);

    return 0;
}