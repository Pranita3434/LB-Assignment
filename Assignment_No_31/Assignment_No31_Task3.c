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

void DisplayProduct(PNODE Head)
{
    int iCnt = 0;
    int Temp = 1;

    while(Head != NULL)
    {
        while((Head-> data) != 0)
        {
            iCnt = (Head-> data) %10;
            if(iCnt == 0)
            {
                iCnt = 1;
            }
            Temp = iCnt * Temp;
            Head-> data = Head-> data /10;
        }
        printf("%d\t", Temp);
        Temp = 1;
        Head = Head -> next;
    }
}

int main()
{
    PNODE First = NULL;

    InsertFirst(&First, 41);
    InsertFirst(&First, 32);
    InsertFirst(&First, 20);
    InsertFirst(&First, 11);

    DisplayProduct(First);
    return 0;
}