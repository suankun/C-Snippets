// https://www.codewars.com/kata/56170e844da7c6f647000063/train/c
#include <stdio.h>

const char *people_with_age_drink(unsigned age) {
    if (age < 14) {
        return "drink toddy";
    } else if (age < 18) {
        return "drink coke";
    } else if (age < 21) {
        return "drink beer";
    } else {
        return "drink whisky";
    }
}

int main() {
    unsigned age;
    printf("Enter your age: ");
    scanf("%d", &age);
    const char* drink = people_with_age_drink(age);
    printf("You should %s.\n", drink);
    return 0;
}
//
const char *people_with_age_drink(unsigned age) {
    const char *drinks[5] = { "drink toddy",
                              "drink coke",
                              "drink beer",
                              "drink whisky",
                              "drink absinthe" };
    return drinks[ (age > 13) + (age > 17) + (age > 20) ];
}
