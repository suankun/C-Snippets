#include "stack.h"

Stack * init(){
    Stack * currentNode = (Stack*)malloc(sizeof(Stack));
    currentNode->top = NULL;

    return currentNode;
}

void push(struct Stack * currentStack,int data){
    struct stackNode * tmp = (stackNode*)malloc(sizeof(stackNode));
    tmp->data = data;
    if(currentStack->top == NULL){
        currentStack->top = tmp;
        tmp->prev = NULL;
        
        return;
    }
    tmp->prev = currentStack->top;
    currentStack->top = tmp;
}

void pop(struct Stack * currentStack){
   struct stackNode * tmp = currentStack->top;
    if(currentStack == NULL){
        printf("The stack is empty");
        return;
    }
    currentStack->top = tmp->prev;
    free(tmp);
}

void display(struct Stack * currentStack){
   struct stackNode * tmp = currentStack->top;
    while(tmp != NULL){
        printf("%d ",tmp->data);
        tmp = tmp->prev;
    }
    printf("\n");
}