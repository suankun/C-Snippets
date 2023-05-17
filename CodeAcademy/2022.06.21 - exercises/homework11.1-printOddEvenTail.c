// (преговор списъци) Да се състави програма, чрез която се въвеждат N
// броя естествени числа от интервала [1..101].
// Броят на въведените числа не се знае предварително определя се от
// потребителя.
// Чрез използване на структура от тип опашка да се изведе въведената редица
// естествени числа като:
// а) първо се извеждат всички нечетни числа;
// б) след тях се извеждат всички четни числа;
// в) извеждането на числата съответства на реда на въвеждането им.
// Пример: 11, 12, 15, 17, 19, 21, 23, 9, 10, 16, 18, 20
// Изход: 11, 15, 17, 19, 21, 23, 9, 12, 10, 16, 18, 20

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
    int arrOdd[20], indexOdd = 0;
    int arrEven[20], indexEven = 0;
    int i = 0;

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
            if (Q[i] % 2 == 0)
            {
                arrEven[indexEven] = Q[i];
                indexEven++;
            }
            else
            {
                arrOdd[indexOdd] = Q[i];
                indexOdd++;
            }
        }

        for (i = 0; i < indexOdd; i++)
            printf("%d\t", arrOdd[i]);

        for (i = 0; i < indexEven; i++)
            printf("%d\t", arrEven[i]);
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
        case 2: displayQ(); break;
        case 3: exit(0);

        char c = getchar();
        }
    } while (1);
    
}