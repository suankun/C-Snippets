#include <stdio.h>


int main()
{
    int mult;
    int i;

    printf("Enter a number: ");
    scanf("%d", &mult);

    for (i = 1; i < 11; i++)
    {
        printf("%d * %d = %d\n", i, mult, i * mult);
    }
    
    return 0;
}