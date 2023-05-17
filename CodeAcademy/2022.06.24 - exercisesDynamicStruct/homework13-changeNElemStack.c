// Да се състави програма която създава динамичен стек S след което
// променя N-я от дъното елемент със стойност A, а първите N-1 елемента от
// дъното запазват своите стойности.

#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};

struct node *top = NULL;

void display();
void push(int);
void pop();
void changeElement(int, int, int);

int main()
{
    int n = 0, ch = 0, pos = 0, posCount = 0;
    do
    {
        printf("\n\nStack Menu\n1. Push \n2. Pop\n3. Change Element\n4. Display\n0. Exit");
        printf("\nEnter Choice 0-4? : ");
        scanf("%d", &ch);
        switch (ch)
        {
            case 1:
                printf("\nEnter number ");
                scanf("%d", &n);
                push(n);
                posCount++;
                break;
            case 2:
                pop();
                break;
            case 3:
                printf("\nEnter position: ");
                scanf("%d", &pos);
                printf("\nEnter number: ");
                scanf("%d", &n);
                changeElement(pos, n, posCount);
            case 4:
                display();
                break;
        }
    }while (ch != 0);
}

void push(int item)
{
    struct node *nptr = malloc(sizeof(struct node));
    nptr->data = item;
    nptr->next = top;
    top = nptr;
}

void display()
{
    struct node *temp;
    temp = top;
    while (temp != NULL)
    {
        printf("%d\t", temp->data);
        temp = temp->next;
    }
}

void pop()
{
    if (top == NULL)
    {
        printf("\n\nStack is empty ");
    }
    else
    {
        struct node *temp;
        temp = top;
        top = top->next;
        printf("\n\n%d deleted", temp->data);
        free(temp);
    }
}

void changeElement(int pos, int num, int posCount)
{
    int tempPopCount = posCount - pos + 1;
    for (int i = 0; i < tempPopCount; i++)
    {
        pop();
    }
    push(num);
}