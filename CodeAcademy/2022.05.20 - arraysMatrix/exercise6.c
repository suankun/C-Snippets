#include <stdio.h>
#include <stdlib.h>

void res(char[]);

int main(void)
{
    res("abrakadabra");
    printf("\n");

    return 0;
}

void res(char x[])
{
    int j;
    printf("Enter an integer: ");
    scanf("%d", &j);
    printf("In res(), x =  %s\n", x + j);
}