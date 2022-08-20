#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *next;
};

typedef struct Node *ptrQueue;

struct Queue
{
    ptrQueue front, rear;
};

// create emtpy tail
struct Queue *QueueInit();

void enqueue(struct Queue *, int);
void dequeue(struct Queue *);
void display();
