#include <stdio.h>
#include <stdlib.h>

#define SIZE 8

int main() {
    int sourceArr[SIZE] = {7, 5, 6, 9, 6, 7, 10, 7};
    int counterArr[6] = {0};
    int i = 0;
    for (i = 0; i < SIZE; i++) {
        counterArr[sourceArr[i]-5]++;
    }

    int maxIndex = 0;
    for (i = 0; i < 6; i++) {
        if (counterArr[i] > counterArr[maxIndex]) {
            maxIndex = i;
        }
    }

    printf("The value of %d appeared most of the times. Total of %d appearances", maxIndex+5, counterArr[maxIndex]);

    return 0;
}
