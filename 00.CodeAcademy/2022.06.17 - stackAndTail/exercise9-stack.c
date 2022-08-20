#include <stdio.h>
#include <stdlib.h>

typedef struct Stack
{
    int *array;
    int max_size;
    int top;
} Stack;

Stack *constructor(int max_size)
{
    Stack *stack = (Stack*)malloc(sizeof(Stack));
    stack->max_size = max_size;
    stack->top = -1;
    stack->array = (int*)malloc(stack->max_size * sizeof(max_size));
    return stack;
}

void push(Stack *stack, int item)
{
    if (stack->top == stack->max_size)
    {
        return;
    }
    stack->array[++stack->top] = item;
}

int pop(Stack *stack)
{
    if (stack->top == -1)
    {
        return -1;
    }
    return stack->array[stack->top--];
}

int peek(Stack *stack)
{
    if (stack->top == -1)
    {
        return 0;
    }
    return stack->array[stack->top];
}

int main()
{
    Stack *stack = constructor(100);
    int new_item = 0;

    do
    {
        printf("Input new item: ");
        scanf("%d", &new_item);

        if (new_item != 0)
        {
            push(stack, new_item);
        }
    } while (new_item != 0);

    while (stack->top != 0)
    {
        printf("The top element is: %d\n", peek(stack));
        pop(stack);
    }

    free(stack->array);

    free(stack);
    
    return 0;
}