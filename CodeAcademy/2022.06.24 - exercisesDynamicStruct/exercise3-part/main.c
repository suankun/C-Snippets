#include "stack.h"

float calculate(int a, int b, char op)
{
    switch (op)
    {
    case '+': return a + b; break;
    case '-': return a - b; break;
    case '*': return a * b; break;
    case '/': return a*1. / b; break;
    default: return 0;
    }
}

int main()
{
    char *s = (char *)malloc(50);
    scanf("%s", s);

    struct Stack *numbers, *operations;
    numbers = init();
    operations = init();

    int n = 0, br = 0;
    for (int i = 0; s[i] != '\0'; i++)
    {

        n = 0; br = 0;
        while (s[i] != '\0' && s[i] >= '0' && s[i] <= '9')
        {
            n = n * 10 + s[i] - '0';
            i++; br++;
        }
        
        push(numbers, n);
        push(operations, s[i]);
    }

    int b = pop(numbers);
    int a = pop(numbers);
    char op = (char)pop(operations);

    printf("%d\t%d\t", a, b);
    printf("")

    // display(numbers);
    // display(operations);

    return 0;
}
