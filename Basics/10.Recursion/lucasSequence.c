/*
 * LUCAS!
 * Lucas Sequence..
 * 2 1 3 4 7 11 ...
 */

#include <stdio.h>

int lucasRecusive(int n)
{
    if(n == 0)
        return 2;
    if(n == 1)
        return 1;
        
    return lucasRecusive(n - 1) + lucasRecusive(n - 2);
}

int lucasNotRecursive(int n)
{
    int i;
    int previous = 2;
    int current = 1;
    int temp;
    if(n == 0)
        return 2;
    if(n == 1)
        return 1;
    for(i = 2; i <= n; i++)
    {
        temp = previous + current;
        previous = current;
        current = temp;
    }
    return current;
}

int main()
{
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    printf("Lucas value at Index %d = %d\n", num, lucasRecusive(num));

    return 0;
}