#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct
{
    int num;
    char name[20];
} Person;

void foo2(Person **one)
{
    (*one)->num += 2;
    strcpy((*one)->name, "EdmontManager");
}

void foo(Person *one)
{
    one->num += 2;
    strcpy(one->name, "EdmontMan");
    foo2(&one);
}

int main()
{
    Person one = {1, "Edmont"};

    foo(&one);

    printf("%d. %s\n", one.num, one.name);

    return 0;
}