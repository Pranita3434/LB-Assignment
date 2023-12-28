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

int SearchLastNode(PNODE Head , int iNo)
{
    int iCnt = 0;
    int Temp = 0;

    while(Head != NULL)
    {
        iCnt++;
        if((Head -> data) == iNo)
        {
            Temp = iCnt;
        }
        Head = Head -> next;
    }
    return Temp;
}

int main()
{
    PNODE First = NULL;
    int iRet = 0;
    int iNo = 0;

    InsertFirst(&First ,70);
    InsertFirst(&First, 30);
    InsertFirst(&First, 50);
    InsertFirst(&First, 40);
    InsertFirst(&First, 30);
    InsertFirst(&First, 20);
    InsertFirst(&First, 10);

    printf("Number Which you Want to find: \t");
    scanf("%d",&iNo);

    iRet = SearchLastNode(First,iNo);
    printf("Print Last Occurence Of %d  is :%d\n", iNo, iRet);

    return 0;
}