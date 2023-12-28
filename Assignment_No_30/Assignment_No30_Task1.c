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

void DisplayPerfect(PNODE Head)
{
   

    while(Head != NULL)
    {
         int iCnt = 0;
    int Num = Head->data;
        for(int i = 1; i <= Num/2; i++)
        {
            if(Num % i == 0)
            {
                iCnt = iCnt + i;
            }
        }
        if(Num == iCnt)
        {
            printf("Perfect Num is %d\n",Num);
        }
        Head = Head -> next;
    }
}

int main()
{
    PNODE First = NULL;
    int iRet = 0;

    InsertFirst(&First, 89);
    InsertFirst(&First, 6);
    InsertFirst(&First, 41);
    InsertFirst(&First, 17);
    InsertFirst(&First, 28);
    InsertFirst(&First, 11);

    DisplayPerfect(First);
    return 0;
}