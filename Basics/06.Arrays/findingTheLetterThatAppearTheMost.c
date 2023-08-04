#include <stdio.h>
#include <stdlib.h>

#define SIZE 8
#define CNT_SIZE 52

int main() {
    char sourceArr[SIZE] = {'K', 'O', 'c', 'R', 'C', ' ', 'K', 'r'};
    int counterArr[CNT_SIZE] = {0};
    int i = 0;
    for (i = 0; i < SIZE; i++) {
        if (sourceArr[i] >= 'a' && sourceArr[i] <= 'z') counterArr[sourceArr[i]-'a']++;
        else if (sourceArr[i] >= 'A' && sourceArr[i] <= 'Z') counterArr[sourceArr[i]-'A'+26]++;
    }

    int maxIndex = 0;
    for (i = 0; i<CNT_SIZE; i++) {
        if (counterArr[i] > counterArr[maxIndex]) maxIndex = i;
    }

    if (maxIndex < 26)
        printf("The value of %c appeared most of the times. Total of %d appearances",maxIndex+'a', counterArr[maxIndex]);
    else
        printf("The value of %c appeared most of the times. Total of %d appearances",maxIndex-26+'A', counterArr[maxIndex]);

    return 0;
}
