#include <stdio.h>
#include <stdlib.h>

typedef struct test
{
    char str[20];
    int num;
}key_t;


int main()
{
    key_t key_tab[] =
    {
        {"auto", malloc(5 * sizeof(char))},
    };

    printf("%s", key_tab[0]);
    
    return 0;
}