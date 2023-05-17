#include <stdio.h>
#include <stdlib.h>

/* doubly linked list */
typedef struct TDListNode {
    int m_nValue;
    struct TDListNode* m_pNextNode;
    struct TDListNode* m_pPrevNode;
} TDListNode;

void print(TDListNode * s);

int main()
{
    TDListNode *start = NULL;
    TDListNode *current;
    for(int i = 0; i < 3; i++)
    {
        current = (TDListNode *)malloc(sizeof(TDListNode));
        if (current == NULL)
        {
            printf("No memmory");
            return 1;
        }
        if (start == NULL) // empty list
        {
            current -> m_nValue = i + 5;
            current -> m_pNextNode = NULL;
            current -> m_pPrevNode = NULL;
            start = current;
        }
        else
        {
            TDListNode * tmp = start;
            while (tmp->m_pNextNode != NULL)
            {
                tmp = tmp->m_pNextNode;
            }
            current -> m_nValue = i + 5;
            current -> m_pNextNode = NULL;
            current -> m_pPrevNode = tmp;
            tmp -> m_pNextNode = current;
        }
    }

    print(start);
    }

void print(TDListNode * s)
{
    for(TDListNode * tmp =s; tmp != NULL; tmp = tmp->m_pNextNode)
    {
        printf("%d\n", tmp -> m_nValue);
    }
}
