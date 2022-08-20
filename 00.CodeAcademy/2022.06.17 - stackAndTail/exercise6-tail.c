#include <stdio.h>
#include <stdlib.h>

#define MAX 6
int Q[MAX];
int front = 0, rear = 0;
int size = 0;

void enqueue(int data)
{
    if (size == MAX)
    {
        printf("\n Linear Queue is full");
        return;
    }
    else
    {
        Q[rear] = data;
        rear = (rear + 1) % MAX;
        size++;
        printf("\n Data Inserted in the Queue ");
    }
}

void dequeue()
{
    if (rear == front)
    {
        printf("\n\n Queue is Empty..");
        return;
    }
    else
    {
        printf("\n Deleted element from Queue is %d", Q[front]);
        front = (front + 1) % MAX;
        size--;
    }
}

void displayQ()
{
    int i;
    if (front == rear)
    {
        printf("\n\n\t Queue is Empty");
        return;
    }
    else
    {
        printf("\n Elements in Queue are: ");
        // if (rear < front)  0 до rear & front до MAX
        for (i = front; i < rear; i++)
        {
            printf("%d\t", Q[i]);
        }
    }
}

int menu()
{
    int ch;
    //system("clear"); //clrscr();
    printf("\n ... Queue operation using ARRAY...");
    printf("\n--------*************--------------\n");
    printf("\n 1.Push ");
    printf("\n 2.Pop ");
    printf("\n 3.Display ");
    printf("\n 4.Quit ");
    printf("\n Enter your choice: ");

    scanf("%d", &ch);
    return ch;
}

void main()
{   
    int data;
    int ch;

    do
    {
        ch = menu();
        switch (ch)
        {
        case 1:
            printf("\n\nEnter data: ");
            scanf("%d", &data);
            enqueue(data);
            break;
        case 2: dequeue(); break;
        case 3: displayQ(); break;
        case 4: exit(0);

        char c = getchar();
        }
    } while (1);
    
}