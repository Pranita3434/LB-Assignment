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

void DisplaySmall(PNODE Head)
{
    int iCnt = 0;
    
    while(Head != NULL)
    {
        int temp = 9;
        while((Head-> data) != 0)
        {
            iCnt = (Head-> data) % 10;
            if(temp > iCnt)
            {
                temp = iCnt;
            }
            Head-> data = Head-> data / 10;
        }
        printf("%d\t", temp);
        Head = Head -> next;
    }
    
}

int main()
{
    PNODE First = NULL;

    InsertFirst(&First, 415);
    InsertFirst(&First, 532);
    InsertFirst(&First, 250);
    InsertFirst(&First, 11);

    DisplaySmall(First);
    return 0;
}