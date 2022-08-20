/*
 * Make a linked list containing the numbers 1 to 14 and
 * print the fifth element from its end
 */

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
    head -> number = 1;
    head -> next = NULL;

    current = head;
    previous = current;

    for (int i = 1; i < 14; i++)
    {
        previous = current;
        current = malloc(sizeof(struct node));
        current -> number = i + 1;
        current -> next = NULL;

        previous -> next = current; 
    }

    // Print 5th element from the end
    int count = 0;
    for (struct node *p = head; p != NULL; p = p -> next)
    {
        count++;
        if (count == 9)
        {
            printf("%d\n", p -> number);
        }
    }

    // free memory
    current = head;
    struct node * tmp;
    while (current)
    {
        tmp = current;
        current = current -> next;
        free(tmp);
    }

    return 0;
}