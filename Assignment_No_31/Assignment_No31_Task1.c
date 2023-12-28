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

void Reverse(PNODE Head)
{
    int iCnt = 0;
    
    int iRev = 0;

    while(Head != NULL)
    {
        while((Head-> data) != 0)
        {
            iCnt = (Head-> data) %10;
            Head-> data = Head-> data /10;
            iRev = (iRev *10) + iCnt;
        }
        printf("%d\t", iRev);
        iRev = 0;
        Head = Head -> next;
    }
}

int main()
{
    PNODE First = NULL;

    InsertFirst(&First, 98);
    InsertFirst(&First, 6);
    InsertFirst(&First, 41);
    InsertFirst(&First, 17);
    InsertFirst(&First, 28);
    InsertFirst(&First, 11);

    Reverse(First);
    return 0;
}