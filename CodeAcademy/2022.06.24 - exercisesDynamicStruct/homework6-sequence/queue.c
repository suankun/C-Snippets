// Дадена е следната поредица:
// S1 = N;
// S2 = S1 + 1; S3 = 2*S1 + 1; S4 = S1 + 2;
// S5 = S2 + 1; S6 = 2*S2 + 1; S7 = S2 + 2; ...
// Използвайки Queue напишете програма,
// която по дадено N отпечатва на конзолата първите 50 числа от тази поредица.
// Пример: N=2
// 2, 3, 5, 4, 4, 7, 5, 5, 9, 6, 6, 11, 7...

#include "queue.h"

// Enqueue operation
void enqueue(struct Queue *myQueue, int x)
{
    struct Node *temp;
    temp = malloc(sizeof(struct Node));
    temp->data = x;
    temp->next = NULL;

    if (myQueue->front == NULL && myQueue->rear == NULL) // empty
    {
        myQueue->front = myQueue->rear = temp;
        return;
    }

    myQueue->rear->next = temp;
    myQueue->rear = temp;
}

void dequeue(struct Queue *myQueue)
{
    struct Node *temp = myQueue->front;
    if (myQueue->front == NULL) return; // empty
    if (myQueue->front == myQueue->rear)
    {
        myQueue->front = myQueue->rear = NULL;
    }
    else
    {
        myQueue->front = myQueue->front->next;
    }

    free(temp);
}

void display(struct Queue *myQueue)
{
    struct Node *tmp = myQueue->front;
    while (tmp)
    {
        printf("%d\n", tmp->data);
        tmp = tmp->next;
    }
    
}

struct Queue *QueueInit()
{
    struct Queue *thisQueue = malloc(sizeof * thisQueue);
    thisQueue->front = NULL;
    thisQueue->rear = NULL;
    return thisQueue;
}

int main()
{
    struct Queue *firstQueue;
    firstQueue = QueueInit();
    
    int S1 = 2;
    enqueue(firstQueue, S1);
    for (int i = 0; i < 5; i++)
    {
        enqueue(firstQueue, (S1 + i) + 1);
        enqueue(firstQueue, 2 * (S1 + i) + 1);
        enqueue(firstQueue, (S1 + i) + 2);
    }
    display(firstQueue);

    return 0;

}
