/*
 * Modeling of the game "Count out": N children stand in a circle
 * and receive numbers from 1 to N. Starting with child 1, on
 * clockwise count M children. A child with number M comes out
 * from the round, after which a new countdown begins by the next child.
 * Continue until there is only one child left, whose number you need
 * is determined
 */

#include <stdio.h>
#include <stdlib.h>

struct node
{
    int number;
    struct node* next;
};

// Delete a kid
void deleteNode(struct node** head_ref, int key)
{
    // Store head node
    struct node *temp = *head_ref, *prev;
 
    // If head node itself holds the kid to be deleted
    if (temp != NULL && temp -> number == key) {
        *head_ref = temp -> next;
        free(temp);
        return;
    }
 
    // Search for the kid to be deleted
    while (temp != NULL && temp->number != key) {
        prev = temp;
        temp = temp->next;
    }
 
    // Unlink the node
    if (temp == NULL)
        return;

    prev -> next = temp -> next;
 
    free(temp);
}

int main()
{
    struct node* head;
    struct node* current;
    struct node* previous;

    int kidsNumber = 0;
    int countingOutNumber = 0;
    int i = 0;
    int countKids = 0;

    head = malloc(sizeof(struct node));
    head -> number = 1;
    head -> next = NULL;

    current = head;
    previous = current;

    printf("Enter the number of the kids: ");
    scanf("%d", &kidsNumber);
    for (i = 1; i < kidsNumber; i++)
    {
        previous = current;
        current = malloc(sizeof(struct node));
        current -> number = i + 1;
        current -> next = NULL;

        previous -> next = current; 
    }

    printf("Enter number 'M': " );
    scanf("%d", &countingOutNumber);

//// for edit - start //////////////
    while (countKids != 1)
    {
        deleteNode  (&head, countingOutNumber);
        countKids = 0;
        struct node *temp = head;
        while(temp != NULL)
        {
            temp = temp->next;
            countKids++;
        }

        printf("Total no. of nodes is %d\n",countKids);
    }
//// for edit - end //////////////

    for (struct node *p = head; p != NULL; p = p -> next)
    {
            printf("%d\n", p -> number);
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