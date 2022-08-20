#include "stack_.h"

stackPtr stackNewPtr = NULL;

void push(stackPtr *top, int x)
{
    stackPtr nodePtr;

    nodePtr = malloc(sizeof(Stack));

    if (nodePtr != NULL)
    {
        nodePtr -> data = x;
        nodePtr -> ptr = *top;
        *top = nodePtr;
    }
    else
    {
        printf("\nERROR !!! (Not enough space)");
    }
}

int pop(stackPtr *top)
{
    int pValue; // variable for value at the top
    stackPtr tempPtr; // temporary pointer

    tempPtr = *top;

    pValue = (*top) -> data;

    *top = (*top) -> ptr;

    free(tempPtr); // free temporaty poiter value

    return pValue;
}

void printValue(stackPtr showPtr)
{
    if (showPtr == NULL)
    {
        printf("\nNo value found.");
    }
    else
    {
        printf("\nData stored in stack:\n");

        while (showPtr != NULL)
        {
            printf("%d --> ", showPtr -> data);
            showPtr = showPtr -> ptr;
        }
        printf("NULL\n");        
    }
}

int checkEmpty(stackPtr top)
{
    return top == NULL;
}

int main()
{
    char option;
    int value;

    printf("\nPlease choose following option:\n");
    printf("1. PUSH\n");
    printf("2. POP\n");
    printf("3. EXIT\n");

    while (1)
    {
        option = getchar();

        switch (option)
        {
        case '1':
            printf("\nEnter value: ");
            scanf("%d", &value);
            push(&stackNewPtr, value);
            printValue(stackNewPtr);
            break;
        case '2':
            if (!checkEmpty(stackNewPtr))
            {
                printf("\nPopped Value: %d\n", pop(&stackNewPtr));
            }
            printValue(stackNewPtr);
            break;
        case '3':
            exit(0);
        }
    }
    
    return 0;
}