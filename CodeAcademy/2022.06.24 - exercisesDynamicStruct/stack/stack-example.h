#ifndef STACK_H
#define STACK_H

#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *next;
};

typedef struct Node *ptrStack;

struct Stack
{
    ptrStack head;
};

struct Stack *StackInit();

void push(struct Stack *myStack, int x);
void pop(struct Stack *myStack);
void display(struct Stack *myStack);

#endif