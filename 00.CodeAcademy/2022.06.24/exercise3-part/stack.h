#include <stdio.h>
#include <stdlib.h>

typedef struct stackNode{
    int data;
    struct stackNode * prev;
}stackNode;

typedef struct Stack{
    struct stackNode * top;
}Stack;

Stack* init();
void push(struct Stack * currentStack,int data);
int pop(struct Stack * currentStack);
void display(struct Stack * currentStack);