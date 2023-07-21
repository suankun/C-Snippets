#include <stdio.h>
#include <stdlib.h>

#define SIZE 8

int main() {
    int sourceArr[SIZE] = {0, 2, 0, 1, 0, 0, 2, 0};
    int counterArr[3] = {0};

    for (int i = 0; i < SIZE; i++) {
        counterArr[sourceArr[i]]++;
    }

    printf("0: %d\n1: %d\n2: %d\n", counterArr[0], counterArr[1], counterArr[2]);

    return 0;
}
