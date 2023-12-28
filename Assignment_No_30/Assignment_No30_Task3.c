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

int AdditionEven(PNODE Head)
{
    int Addition = 0;
    while(Head != NULL)
    {
        if(Head->data % 2 == 0)
            {
                Addition = Addition + Head->data;
            }
        Head = Head -> next;
    }
    return Addition;
    
}


int main()
{
    PNODE First = NULL;
    int iRet = 0;
    InsertFirst(&First, 41);
    InsertFirst(&First, 32);
    InsertFirst(&First, 20);
    InsertFirst(&First, 11);

    
    iRet = AdditionEven(First);
    printf("Addition of even number is %d" , iRet);
    return 0;
}