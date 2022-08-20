#include <stdio.h>

typedef char* p;

int main()
{
    p a;
    char name[] = "Ivan";
    a = name;

    printf("%s\n", a);

    return 0;
}