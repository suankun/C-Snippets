#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct node
{
    int phone;
    char name[20];
    struct node *next;
};

int main()
{
    struct node *head;
    struct node *current;
    struct node *prev;

    head = malloc(sizeof(struct node));
    head -> phone = 454678;
    strcpy(head -> name, "Ivan");
    head -> next = NULL;
    current = head;

    for (int i = 0; i < 3; i++)
    {
        prev = current;
        current = malloc(sizeof(struct node));

        int temp_phone = 0;
        scanf("%d", &temp_phone);
        current -> phone = temp_phone;

        scanf("%d", current -> name);

        current -> next = NULL;
        prev -> next = current;
    }

    for (struct node *p = head; p != NULL; p = p -> next)
    {
        if (strcpy(p -> name, "Georgi") == 0)
        {
            printf("Phone number of Georgi: %d\n", p -> phone);
        }
    }

    return 0;
}
