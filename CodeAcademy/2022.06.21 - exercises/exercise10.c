#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int count(char * bin, int n)
{
    int counter = 0;
    for (int i = 0; i < n; i++)
    {
        counter += bin[i] - '0';
    }

    return counter * (counter - 1) / 2;
}

int main()
{
    char * s;
    s = malloc(20 * sizeof(char));
    scanf("%s", s);
    printf("%d\n", count(s, strlen(s)));

    return 0;
}