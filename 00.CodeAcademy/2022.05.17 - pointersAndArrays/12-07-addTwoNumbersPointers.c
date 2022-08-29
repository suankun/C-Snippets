// Напишете програма, която събира две числа, използвайки указатели.

#include <stdio.h>

int swap(int *a, int *b) {
    return *a + *b;
}

int main() {
    int a = 2;
    int b = 3;
    int *pA = &a;
    int *pB = &b;
    
    printf("%d\n", swap(pA, pB));

    return 0;
}