#include <stdio.h>
#include <stdlib.h>
#include <string.h>

union info {
    char firstName[20];
    int age;
};

int main() {
    union info myVariable1;
    myVariable1.age = 30;
    printf("myVariable.age = %d\n", myVariable1.age);
    strcpy(myVariable1.firstName, "Edmont");
    printf("myVariable1.firstName = %s\n", myVariable1.firstName);
    printf("myVariable.age = %d\n", myVariable1.age);

    return 0;
}
