#include<stdio.h>
#include<stdlib.h>
//nahi jmteee
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

int Maximum(PNODE Head)
{
    int iCnt = 0;
    int Temp = (Head)-> data;

    while(Head != NULL)
    {
        if((Head-> data) > Temp)
        {
            Temp = Head-> data;
        }
        Head = Head -> next;
    }
    return Temp;
}

int main()
{
    PNODE First = NULL;
    int iRet = 0;

    InsertFirst(&First, 110);
    InsertFirst(&First, 230);
    InsertFirst(&First, 320);
    InsertFirst(&First, 240);

    iRet = Maximum(First);
    printf("Maximum node is %d",iRet);

    return 0;
}