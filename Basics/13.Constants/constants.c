#include <stdio.h>
#include <stdlib.h>

int main() {
    // Constant variable, it cannot be changed.
    const int age = 30;

    // A pointer to a constant. Value we're pointing to CAN'T BE CHANGED. Pointer itself CAN BE CHANGED.
    const int *ptr = &age;

    // Constant pointer to int variable. Value we're pointing to CAN BE CHANGED. Pointer itself CAN'T BE CHANGED.
    int *const ptr = &age;

    // Constant pointer pointing to constant int. BOTH CAN'T BE CHANGED!
    const int *const ptr = &age;

    // Reasont to use constants: better performance, defence(to not change the variable), code readability

    return 0;
}
