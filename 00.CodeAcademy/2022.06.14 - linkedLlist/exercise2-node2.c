#include <stdio.h>
#include <stdlib.h>

struct node
{
    int number;
    struct node* next;
};

int main()
{
    struct node* head;
    struct node* current;
    struct node* previous;

    head = malloc(sizeof(struct node));
    head -> number = 0;
    head -> next = NULL;

    current = head;
    previous = current;

    for (int i = 0; i < 3; i++)
    {
        previous = current;
        current = malloc(sizeof(struct node));
        current->number = i + 1;
        current->next = NULL;

        previous->next = current; 
    }


    for (struct node *p = head; p != NULL; p = p->next)
    {
        printf("%d\n", p->number);
    }

    // free memory
    current = head;
    struct node * tmp;
    while (current)
    {
        tmp = current;
        current = current->next;
        free(tmp);
    }

    return 0;
}