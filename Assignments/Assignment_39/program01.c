//Consider Singly Linear LinkedList to solve problems
// 1. Search an element..   check whether a number is present

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

bool Search(PNODE First, int iNo)
{
    while(First != NULL)
    {
        if(First->data == iNo)
        {
            return true;
        }

        First = First ->next;
    }
    return false;
}

int main()
{
    PNODE head = NULL;
    int iValue = 0;
    bool bRet = false;


    InsertLast(&head,11);
    InsertLast(&head,21);
    InsertLast(&head,51);
    InsertLast(&head,101);
    InsertLast(&head,111);

    Display(head);

    printf("Enter the element to search : ");
    scanf("%d",&iValue);

    bRet = Search(head,iValue);

    if(bRet == true)
    {
        printf("Element found\n");
    }
    else
    {
        printf("Element not found\n");
    }

    return 0;
}