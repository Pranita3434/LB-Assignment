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

void SumDigit(PNODE Head)
{
    int iCnt = 0;
    int Temp = 0;

    while(Head != NULL)
    {
        while((Head-> data) != 0)
        {
            iCnt = (Head-> data) %10;
            Temp = iCnt + Temp;
            Head-> data = Head-> data /10;
        }
        printf("%d\t", Temp);
        Temp = 0;
        Head = Head -> next;
    }
}

int main()
{
    PNODE First = NULL;
    int iRet = 0;
    int iNo = 0;

    InsertFirst(&First, 640);
    InsertFirst(&First, 240);
    InsertFirst(&First, 20);
    InsertFirst(&First, 230);
    InsertFirst(&First, 110);

    SumDigit(First);
    return 0;
}