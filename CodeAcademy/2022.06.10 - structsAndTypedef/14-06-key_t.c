// Задача 6. Напишете структура с потребителски тип key_t, която съдържа
// символен низ и число. Създайте променлива от новия тип, като
// инициализирате символния низ с динамично заделена памет за него.
// Принтирайте съдържанието на структурата.

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
    char *s;
    int id;
} key_t;

int main() {
    key_t employee;
    employee.s = malloc(sizeof(char) * 20);
    strcpy(employee.s, "Edmont");
    employee.id = 1;

    printf("%d, %s\n", employee.id, employee.s);

    free(employee.s);

    return 0;
}
