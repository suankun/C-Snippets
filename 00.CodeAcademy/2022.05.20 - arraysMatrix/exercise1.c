#include <stdio.h>

void film(int, char[]);

int main()
{
    int i = 5;

    char x[] = "you and me";
    printf("i = %d, x = %s\n", i, x);
    film(i, x);
    printf("i = %d, x = %s\n", i, x);
    
    return 0;
}

void film(int i, char[])
{
    printf("\nIn the film, i = %d, z = %s\n", i, z);
    i = 0;
    z[0] = 'Y';
    printf("In the film, i = %d, z = %s\n", i, z);
}