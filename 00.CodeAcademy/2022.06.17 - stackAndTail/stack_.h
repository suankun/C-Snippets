#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *ptr;
};

typedef struct Node Stack;
typedef Stack *stackPtr;

void push(stackPtr *top, int x);
int pop(stackPtr *top);
int checkEmpty(stackPtr top);
void printValue(stackPtr showPtr);