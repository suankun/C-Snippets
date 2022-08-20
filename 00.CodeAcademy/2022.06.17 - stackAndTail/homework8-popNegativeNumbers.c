/* 
 * В стек са записани няколко думи, чийто брой не е известен. Да се напише
 * програма, която прочита дума, въведена от клавиатурата и проверавя дали
 * тази дума е записана в стека
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define N 100

typedef int element;

typedef struct
{
    element data[N];
    int top;
} Node;

stack CreateStack()
{
    stack p;
    p.top = -1;
    return p;
}

int isEmptyStack(stack p)
{
    return (p.top == -1);
}

int isFullStack(stack p)
{
    return (p.top == N - 1);
}

int Push(stack *p, element e)
{
    if (isFullStack(*p)) return 0;
    p->data[++p->top] = e;
    return 1;
}

int Pop(stack *p)
{
    if (isEmptyStack(*p)) return 0;
    p->top--;
    return 1;
}

int Top(stack p, element *e)
{
    if (isEmptyStack(p)) return 0;
    *e = p.data[p.top];
    return 1;
}

void printstack(stack s)
{
    element e;
    while (Top(s, &e))
    {
        Pop(&s);
        printf("|%5d|\n", e);
    }
    printf("|_____|\n");
}

void PositiveStack(stack *s)
{
    stack aux;
    element e;
    aux = CreateStack();
    while (Top(*s, &e))
    {
        Pop(s);
        if (e >= 0)
        {
            Push(&aux, e);
        }
    }

    while (Top(aux, &e))
    {
        Pop(&aux);
        Push(s, e);
    }   
}

int main()
{
    stack s1;
    s1 = CreateStack();
    Push(&s1, 4);
    Push(&s1, 8);
    Push(&s1, -7);
    Push(&s1, 0);
    Push(&s1, -1);
    Push(&s1, 3);
    Push(&s1, 3);
    Push(&s1, -2);
    Push(&s1, 1);

    printstack(s1);
    PositiveStack(&s1);
    printstack(s1);

    return 0;
}