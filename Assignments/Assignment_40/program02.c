//Consider Singly Linear LinkedList to solve problems
// 2. First Occurance Position..     return Position of First Occurance

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

int FirstOccur(PNODE First, int iNo)
{
    int iPos = 1;

    while(First != NULL)
    {
        if(First->data == iNo)
        {
            return iPos;
        }
        iPos++;

        First = First ->next;
    }
    return -1;
  
}

int main()
{
    PNODE head = NULL;
    int iRet = 0;
    int iValue = 0;


    InsertLast(&head,11);
    InsertLast(&head,20);
    InsertLast(&head,51);
    InsertLast(&head,100);
    InsertLast(&head,20);

    Display(head);

    printf("Enter the element to search : ");
    scanf("%d",&iValue);

    iRet = FirstOccur(head,iValue);

    if(iRet == -1)
    {
        printf("Element not found\n");
    }
    else
    {
        printf("First Occurance of %d is at Position %d\n",iValue,iRet);
    }

    return 0;
}