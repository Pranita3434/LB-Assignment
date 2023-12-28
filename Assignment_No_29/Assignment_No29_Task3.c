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

int Addition(PNODE Head)
{
    int iCnt = 0;
    int Temp = 0;
    while(Head != NULL)
    {
        Temp = Temp + Head->data;
        Head = Head -> next;
    }
    return Temp;
}

int main()
{
    PNODE First = NULL;
    int iRet = 0;
    int iNo = 0;

    InsertFirst(&First, 40);
    InsertFirst(&First, 30);
    InsertFirst(&First, 20);
    InsertFirst(&First, 10);

    iRet = Addition(First);
    printf("Addition of all number in LL is %d",iRet);

    return 0;
}