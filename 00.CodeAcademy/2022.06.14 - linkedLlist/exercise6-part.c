#include <stdio.h>
#include <stdlib.h>

typedef struct node
{
    int data;
    struct node * next;
}node, *list;

int printList(list);
int printListR(list);
int printListO(list);

int main()
{
    list l = NULL, current = NULL;
    int n, data;

    printf("Enter data, terminated by Ctrl+D\n");
    while (scanf("%d", &data) != EOF)
    {
        l = (list)malloc(sizeof(node));
        l -> data = data; l -> next = current;
        current = l; // last data at the head, LIFO
    }

    printf("Input data are: ");
    n = printList(1);
    n = printListR(1);
    n = printListO(1);
    putchar('\n');
    printf("Data count: %d\n, n");

    return 0;    
}

int printList(list 1)
{
    
}