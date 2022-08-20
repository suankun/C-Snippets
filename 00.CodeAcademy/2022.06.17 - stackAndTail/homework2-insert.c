/*
 * Напишете функция, с която да вмъкнете възел „t“ преди възел,
 * посочен с „X“ в единичен свързан списък „L“.
 */

#include <stdio.h>
#include <stdlib.h>

struct node
{
    int number;
    struct node *next;
};

struct node *start = NULL;

void insert_pos()
{
    struct node *ptr,*temp;
    int i, pos;
    temp = (struct node *)malloc(sizeof(struct node));
    if (temp == NULL)
    {
        printf("\nOut of Memory Space:\n");
        return;
    }
    
    printf("Enter the position for the new node to be inserted: ");
    scanf("%d", &pos);
    printf("Enter the data value of the node: ");
    scanf("%d",&temp->number);

    temp->next = NULL;
    if (pos == 0)
    {
        temp->next = start;
        start = temp;
    }
    else
    {
        for (i = 0, ptr = start; i < pos - 1; i++)
        {
            ptr = ptr->next;
            if (ptr == NULL)
            {
                printf("\nPosition not found:\n");
                return;
            }
        }
        temp->next = ptr->next;
        ptr->next = temp;
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

    insert_pos();

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