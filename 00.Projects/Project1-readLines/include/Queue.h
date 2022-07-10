#ifndef CODE_ACADEMY_DIFF_TOOL_QUEUE_H
#define CODE_ACADEMY_DIFF_TOOL_QUEUE_H
#include "Types.h"
#include <stdlib.h>

struct Node
{
    int row;
    char file[15];
    char line[150];
    struct Node *next;
};

struct contentQueue
{
    struct Node *head;
    struct Node *tail;
};

struct contentQueue *emptyInit(); // Initialize empty Queue
void enQueueContent(struct contentQueue *myContentQueue, int row, char file[], char data[]);
void deeQueueContent(struct contentQueue *myContentQueue);

size_t queueLength(struct contentQueue *myContentQueue); // Return the number of nodes

#endif // CODE_ACADEMY_DIFF_TOOL_QUEUE_H