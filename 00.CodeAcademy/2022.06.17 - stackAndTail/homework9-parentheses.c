/* 
 * Като използвате стек, напишете програма, която проверява
 * дали в едни аритметичен израз, записан чрез стринг, на всяка
 * отваряща скоба отговаря затваряща. Проверете за трите вида
 * скоби ( ), [ ], { }
 */

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <limits.h>

#define QUEUE_EMPTY CHAR_MIN

typedef struct node
{
    char par;
    struct node *next;
} node;

typedef struct
{
    node *head;
    node *tail;
} queue;

void init_queue(queue *queueNode);
bool enqueue(queue *queueNode, char data);
int dequeue(queue *queueNode);
bool checkAreBalancedParentheses(queue *queueNode, size_t queueSize);
void printQueue(queue *queueNode);

int main()
{
    queue myQueue;
    init_queue(&myQueue);

    const size_t testSize = 6;
    const size_t testCount = 6;
    const char test[][6] = {
        {'(', '{', '[', ']', '}', ')'}, // balanced
        {'(', ')', '[', ']', '{', '}'}, // balanced
        {'(', '[', ']', ')', '{', '}'}, // balanced
        {'(', '{', '[', '}', ']', ')'}, // not
        {'(', '(', '[', ']', '}', ')'}, // not
        {')', '{', '[', ']', '}', ')'}, // not
    };

    for (size_t i = 0; i < testCount; i++)
    {
        for (size_t j = 0; j < testSize; j++)
        {
            enqueue(&myQueue, test[i][j]);
        }

        (checkAreBalancedParentheses(&myQueue, testSize)) ?
            printf("\nParentheses are balanced!\n") :
            printf("\nParentheses are NOT balanced!\n");
    }

    return 0;
}

bool checkAreBalancedParentheses(queue *queueNode, size_t queueSize)
{
    size_t counter = 0;
    size_t parenthesesCount = queueSize;
    char first = 0;
    char second = 0;

    if (parenthesesCount % 2 != 0)
    {
        return false;
    }

    while ((first = dequeue(queueNode)) != QUEUE_EMPTY)
    {
        second = queueNode->head->par;

        if (first == '(')
        {
            if (second == ')')
            {
                dequeue(queueNode);
                parenthesesCount -= 2;
                counter = 0;
                continue;
            }
            else
            {
                enqueue(queueNode, first);
            }
        }
        else if (first == '{')
        {
            if (second == '}')
            {
                dequeue(queueNode);
                parenthesesCount -= 2;
                counter = 0;
                continue;
            }
            else
            {
                enqueue(queueNode, first);
            }
        }
        else if (first == '[')
        {
            if (second == ']')
            {
                dequeue(queueNode);
                parenthesesCount -= 2;
                counter = 0;
                continue;
            }
            else
            {
                enqueue(queueNode, first);
            }
        }
        else
        {
                enqueue(queueNode, first);
        }
        counter++;

        if (parenthesesCount == counter)
        {
            return false;
        }
    }
    
    return true;
}

bool enqueue(queue *queueNode, char data)
{
    node *newNode = malloc(sizeof(node));

    if (newNode == NULL)
    {
        return false;
    }

    newNode->par = data;
    newNode->next = NULL;
    if (queueNode->tail != NULL)
    {
        queueNode->tail->next = newNode;
    }

    queueNode->tail = newNode;

    if (queueNode->head == NULL)
    {
        queueNode->head = newNode;
    }

    return true;
}

int dequeue(queue *queueNode)
{
    node *tempNode = NULL;
    char result = 0;
    if (queueNode->head == NULL)
    {
        return QUEUE_EMPTY;
    }

    tempNode = queueNode->head;
    result = tempNode->par;

    queueNode->head = queueNode->head->next;

    if (queueNode->head == NULL)
    {
        queueNode->tail = NULL;
    }

    free(tempNode);
    return result;
}

void init_queue(queue *queueNode)
{
    queueNode->head = NULL;
    queueNode->tail = NULL;
}

void printQueue(queue *queueNode)
{
    int dequeueValue = 0;

    printf("\n");
    while ((dequeueValue = dequeue(queueNode)) != QUEUE_EMPTY) 
    {
        printf("%c ", dequeueValue);
    }
    printf("\n");
}