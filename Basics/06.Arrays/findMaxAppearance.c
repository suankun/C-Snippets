#include <stdio.h>
#include <stdlib.h>

#define SIZE 20

int main() {
    int sourceArr[SIZE] = {0, 5, 4, 9, 5, 8, 2, 3, 1, 5, 4, 9, 5, 5, 2, 7, 6, 5, 4, 1};
    int counterArr[10] = {0};
    int i = 0;
    for (i = 0; i < SIZE; i++) {
        counterArr[sourceArr[i]]++;
    }

    int ind = 0;
    for (i = 0; i < 10; i++) {
        if (counterArr[i] > counterArr[ind]) {
            ind = i;
        }
    }

    printf("Number with max appearance is: %d", ind);

    return 0;
}
