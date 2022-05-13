#include <stdio.h>


int main()
{
    int x;
    int num;

    for (num = 10; num < 100; num++)
    {
        x = 10 * (num % 10) + (num / 10);

        printf("%d\t", x);
    }
    
    return 0;
}