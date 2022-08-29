// Задача 7. Напишете програма за триене на Nтия
// елемент от края на двойносвързан списък.

#include <stdio.h>
#include <stdlib.h>

struct node {
    int num;
    struct node * preptr;
    struct node * nextptr;
} *stnode, *ennode;

void DlListcreation(int n);
void DlListDeleteFirstNode();
void DlListDeleteLastNode();
void DlListDeleteAnyNode(int pos);
void displayDlList(int a);

int main()
{
    int n, num1, a, insPlc;
    stnode = NULL;
    ennode = NULL;   	
    printf("Input the number of nodes (3 or more ): ");
    scanf("%d", &n);
    DlListcreation(n); 
    a = 1;
    displayDlList(a);
    printf(" Input the position ( 1 to %d ) to delete a node : ", n);
    scanf("%d", &insPlc);

    
if (insPlc < 1 || insPlc > n)
    {
        printf("Invalid position. Try again.\n ");
    }
	    if (insPlc >= 1 && insPlc <= n)
        {
            DlListDeleteAnyNode(insPlc);  
            a = 2;
            displayDlList(a);
        }    
    return 0;
}
 
void DlListcreation(int n)
{
    int i, num;
    struct node *fnNode;
 
    if (n >= 1)
    {
        stnode = malloc(sizeof(struct node));
 
        if (stnode != NULL)
        {
            printf("Input data for node 1 : ");
            scanf("%d", &num);
 
            stnode->num = num;
            stnode->preptr = NULL;
            stnode->nextptr = NULL;
            ennode = stnode;
            for (i = 2; i <= n; i++)
            {
                fnNode = (struct node *)malloc(sizeof(struct node));
                if(fnNode != NULL)
                {
                    printf(" Input data for node %d : ", i);
                    scanf("%d", &num);
                    fnNode->num = num;
                    fnNode->preptr = ennode;
                    fnNode->nextptr = NULL;
                    ennode->nextptr = fnNode;
                    ennode = fnNode;
                }
                else
                {
                    printf("Memory can not be allocated.");
                    break;
                }
            }
        }
        else
        {
            printf(" Memory can not be allocated.");
        }
    }
}

void DlListDeleteAnyNode(int pos)
{
    struct node *curNode;
    int i = 0;
 
    curNode = stnode;
    for (i = 1; i < pos && curNode != NULL; i++)
    {
        curNode = curNode->nextptr;
    }
 
    if (pos == 1)
    {
        DlListDeleteFirstNode();
    }
    else if (curNode == ennode)
    {
        DlListDeleteLastNode();
    }
    else if (curNode != NULL)
    {
        curNode->preptr->nextptr = curNode->nextptr;
        curNode->nextptr->preptr = curNode->preptr;
 
        free(curNode); //Delete the n node
    }
    else
    {
        printf("The given position is invalid!\n");
    }
} 

void DlListDeleteFirstNode()
{
    struct node * NodeToDel;
    if (stnode == NULL)
    {
        printf("Delete is not possible. No data in the list.\n");
    }
    else
    {
        NodeToDel = stnode;
        stnode = stnode->nextptr;
        stnode->preptr = NULL;
        free(NodeToDel);
    }
}

void DlListDeleteLastNode()
{
    struct node * NodeToDel;
 
    if (ennode == NULL)
    {
        printf(" Delete is not possible. No data in the list.\n");
    }
    else
    {
        NodeToDel = ennode;
        ennode = ennode->preptr;
        ennode->nextptr = NULL;
        free(NodeToDel);
    }
}
void displayDlList(int m)
{
    struct node * tmp;
    int n = 1;
    if (stnode == NULL)
    {
        printf(" No data found in the List yet.");
    }
    else
    {
        tmp = stnode;
        if (m == 1)
        {
        printf("\n Data entered in the list are :\n");
        }
        else
        {
         printf("\n After deletion the new list are :\n");   
        }
        while (tmp != NULL)
        {
            printf(" node %d : %d\n", n, tmp->num);
            n++;
            tmp = tmp->nextptr; // current pointer moves to the next node
        }
    }
}
