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

void DisplayPalindrom(PNODE Head)
{

    while(Head != NULL)
    {
        int iCnt = 0;
        int iRev = 0;
        int Temp = Head-> data;
        while((Temp) != 0)
        {
            iCnt = Temp %10;
            Temp = Temp /10;
            iRev = (iRev *10) + iCnt;
        }
        if((Head-> data) == iRev)
        {
            printf("%d\t", Head-> data);
        }
        
        Head = Head -> next;
    }
}

int main()
{
    PNODE First = NULL;

    InsertFirst(&First, 89);
    InsertFirst(&First, 6);
    InsertFirst(&First, 414);
    InsertFirst(&First, 17);
    InsertFirst(&First, 28);
    InsertFirst(&First, 11);

    DisplayPalindrom(First);
    return 0;
}