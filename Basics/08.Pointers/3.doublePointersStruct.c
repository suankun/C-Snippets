#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct manager {
    int idMan;
    char nameMan[20];
};

typedef struct{
    struct manager one;
    int id;
    int salary;
    char name[20];
} person;

void increaseSalaryAndChangeManager(person **first) {
    (*first)->salary += 500;
    strcpy((*first)->one.nameMan, "StarTrek");
}

void increaseSalary(person *first) {
    first->one.idMan = 9;
    strcpy(first->one.nameMan, "Patriot");
    first->salary += 500;
    increaseSalaryAndChangeManager(&first);
}

int main()
{
    // first initialization
    person first = {{7, "Ivan"}, 1, 1500, "Edmont"};
    printf("%d. %s - %d. Responsible %s with ID: %d\n",
    first.id, first.name, first.salary, first.one.nameMan, first.one.idMan);

    // increasing salary by pointers
    increaseSalary(&first);
    printf("%d. %s - %d. New responsible %s with ID: %d\n",
    first.id, first.name, first.salary, first.one.nameMan, first.one.idMan);    

    return 0;
}