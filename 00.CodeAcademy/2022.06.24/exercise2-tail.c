#include <stdio.h>
#include <stdlib.h>

#define MAX 20

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

void displayQ()
{
    int arrUnder10[20], indexUnder10 = 0;
    int arrBet10and50[20], indexBet10and50 = 0;
    int arrOver50[20], indexOver50 = 0;
    int i = 0;

    if (front == rear)
    {
        printf("\n\n\t Queue is Empty");
        return;
    }
    else
    {
        printf("\n Elements in Queue are: ");
        
        for (i = front; i < rear; i++)
        {
            if (Q[i] < 10)
            {
                arrUnder10[indexUnder10] = Q[i];
                indexUnder10++;
            }
            else if (Q[i] >= 10 && Q[i] < 50)
            {
                arrBet10and50[indexBet10and50] = Q[i];
                indexBet10and50++;
            }
            else
            {
                arrOver50[indexOver50] = Q[i];
                indexOver50++;
            }
            
        }

        for (i = 0; i < indexUnder10; i++)
            printf("%d\t", arrUnder10[i]);

        for (i = 0; i < indexBet10and50; i++)
            printf("%d\t", arrBet10and50[i]);

        for (i = 0; i < indexOver50; i++)
        printf("%d\t", arrOver50[i]);
    }
}

int menu()
{
    int ch;
    //system("clear"); //clrscr();
    printf("\n ... Queue operation using ARRAY...");
    printf("\n--------*************--------------\n");
    printf("\n 1.Push ");
    printf("\n 2.Display ");
    printf("\n 3.Quit ");
    printf("\n Enter your choice: ");

    scanf("%d", &ch);
    return ch;
}

int main()
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
        case 2: displayQ(); break;
        case 3: exit(0);

        char c = getchar();
        }
    } while (1);
    
    return 0;
}