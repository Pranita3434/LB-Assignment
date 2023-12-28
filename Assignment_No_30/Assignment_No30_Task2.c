#include<stdio.h>
#include<stdlib.h>

struct Node
{
    int data;
    struct Node *next;    
};

typedef struct Node NODE;
typedef struct Node * PNODE;
typedef struct Node ** PPNODE;

void InsertFirst(PPNODE Head , int No)
{
    PNODE newn = NULL;

    newn = (PNODE)malloc(sizeof(NODE));

    newn -> data = No;
    newn -> next = NULL;

    if(*Head == NULL)
    {
        *Head = newn;
    }
    else
    {
        newn -> next = *Head;
        *Head = newn;
    }
}

void DisplayPrime(PNODE Head)
{
    while(Head != NULL)
    {
        int i = 0;
        
        if((Head->data % 2) != 0)
        {
            printf("Prime Num is %d\n",Head -> data);
        }
        Head = Head -> next;
    }
}

int main()
{
    PNODE First = NULL;
    
    InsertFirst(&First, 89);
    InsertFirst(&First, 22);
    InsertFirst(&First, 41);
    InsertFirst(&First, 17);
    InsertFirst(&First, 20);
    InsertFirst(&First, 11);

    DisplayPrime(First);
    return 0;
}