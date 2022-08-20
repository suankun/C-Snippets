/*
 * Напишете функция, с която да да изтриете възел,
 * посочен с „p“ от едносвързан списък „L“.
 */

#include <stdio.h>
#include <stdlib.h>

struct node
{
    int number;
    struct node *next;
};

struct node *start = NULL;

void delete_pos()
{
    int i, pos;
    struct node *temp,*ptr;
    if (start == NULL)
    {
        printf("\nThe List is Empty:\n");
        exit(0);
    }
    else
    {
        printf("Enter the position of the node to be deleted: ");
        scanf("%d",&pos);
        if (pos == 0)
        {
            ptr = start;
            start = start->next ;
            printf("The deleted element is: %d\n", ptr->number);
            free(ptr);
        }
        else
        {
            ptr = start;
            for (i = 0; i < pos - 1; i++) { temp = ptr; ptr = ptr->next;
                if (ptr == NULL)
                {
                    printf("\nPosition not Found:\n");
                    return;
                }
            }
            temp->next = ptr->next ;
            printf("\nThe deleted element is: %d\n",ptr->number);
            free(ptr);
        }
    }
}

int main()
{
    struct node* current;
    struct node* previous;

    start = malloc(sizeof(struct node));
    start -> number = 1;
    start -> next = NULL;

    current = start;
    previous = current;

    for (int i = 2; i < 6; i++)
    {
        previous = current;
        current = malloc(sizeof(struct node));
        current -> number = i;
        current -> next = NULL;

        previous -> next = current; 
    }

    // print before the input of the new node
    for (struct node *p = start; p != NULL; p = p -> next)
    {
        printf("%d\n", p -> number);
    }

    delete_pos();

    // print after the input of the new node
    for (struct node *p = start; p != NULL; p = p -> next)
    {
        printf("%d\n", p -> number);
    }

    // free memory
    current = start;
    struct node * tmp;
    while (current)
    {
        tmp = current;
        current = current -> next;
        free(tmp);
    }

    return 0;
}