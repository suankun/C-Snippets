#include "UI.h"
#include "Queue.h"
#include "FileHandler.h"
#include "Types.h"

#include <assert.h>
#include <stdlib.h>
#include <string.h>
/* STAGE 2 ONLY */

/* Empty initialization */
struct contentQueue *emptyInit()
{
    // allocate and initialize
    struct contentQueue *contentQueue = malloc(sizeof(struct contentQueue));
    assert(contentQueue != NULL);

    contentQueue->head = NULL;
    contentQueue->tail = NULL;

    return contentQueue;
}

/* Caller is responsible for dealocating memory! */
void enQueueContent(struct contentQueue *myContentQueue, int row, char file[], char textLine[])
{
    struct Node *newNode = malloc(sizeof(struct Node));
    assert(newNode != NULL);
    newNode->row = row;
    strcpy(newNode->line, textLine);
    strcpy(newNode->file, file);
    newNode->next = NULL;

    if (myContentQueue->head == NULL && myContentQueue->tail == NULL)
    {
        myContentQueue->head = myContentQueue->tail = newNode;
        return;
    }

    myContentQueue->tail->next = newNode;
    myContentQueue->tail = newNode;
}

void deeQueueContent(struct contentQueue *myContentQueue)
{
    struct Node *temp = myContentQueue->head;

    if (myContentQueue->head == NULL)
    {
        return;
    }
    if (myContentQueue->head == myContentQueue->tail)
    {
        myContentQueue->head = myContentQueue->tail = NULL;
    }
    else
    {
        myContentQueue->head = myContentQueue->head->next;
    }
    free(temp);
}

// Return the number of nodes
size_t queueLength(struct contentQueue *myContentQueue)
{
    size_t count = 0;
    struct Node *current;
    for (current = myContentQueue->head; current != NULL; current = current->next)
    {
        count++;
    }
    return count;
}
