#include <stdio.h>
#include <stdlib.h>

#define SIZE 8
#define CNT_SIZE 23

int main() {
    char sourceArr[SIZE] = {'k', 'i', 'b', 'r', 'c', 'k', 'z', 'm'};
    int counterArr[CNT_SIZE] = {0};
    int i = 0;
    for (i = 0; i < SIZE; i++) {
        counterArr[sourceArr[i]-'a']++;  // counterArr[sourceArr[i]-97]++;
    }

    // for (i = 0; i<SIZE; i++) printf("%c ", sourceArr[i]);
    // printf("\n");
    // for (i = 0; i<CNT_SIZE; i++) printf("%d ", counterArr[i]);

    int maxIndex = 0;
    for (i = 0; i<CNT_SIZE; i++) {
        if (counterArr[i] > counterArr[maxIndex]) {
            maxIndex = i;
        }
    }

    printf("The value of %c appeared most of the times. Total of %d appearances",maxIndex+'a', counterArr[maxIndex]);

    return 0;
}
