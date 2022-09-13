#include <stdio.h>
#include <string.h>

typedef struct employee {
    char name[20];
    float age;
    int id;
} Employee;

int main() {
    Employee emp1;
    Employee emp2 = {"Jake", 24.5, 123};

    emp1 = emp2;

    // printf("Employee 1 name is %s\n", emp1.name);
    // printf("Employee 2 name is %s\n", emp2.name);

    strcpy(emp1.name, "John");
    emp1.id = 456;

    printf("Employee 1 name is %s\n", emp1.name);
    printf("Employee 2 name is %s\n", emp2.name);
    printf("Employee 1 id is %d\n", emp1.id);
    printf("Employee 2 id is %d\n", emp2.id);

    return 0;
}
