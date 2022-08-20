#include <stdio.h>
#include <stdlib.h>

typedef struct person
{
    int id;
    char name[20];
    struct person* test;
} person;


int main()
{
    person p1 = {1, "Edmont"};

    printf("%d. %s\n", p1.id, p1.name);

    return 0;
}