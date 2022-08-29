// Дадени са числа N и M и следните операции:
// N = N+1
// N = N+2
// N = N*2
// Напишете програма, която намира най-кратката поредица от посочените операции, която
// започва от N и завършва в M. Използвайте опашка.
// Пример: N = 5, M = 16
// Поредицата е: 5 7 8 16

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
    
    int N = 5, M = 16;
    enqueue(firstQueue, N);
    for (int i = N; i <= M; i++)
    {
        N = N + 2;
        enqueue(firstQueue, N);
        N = N + 1;
        enqueue(firstQueue, N);
        N = N * 2;
        enqueue(firstQueue, N);
        i = N;
    }
    display(firstQueue);

    return 0;

}
