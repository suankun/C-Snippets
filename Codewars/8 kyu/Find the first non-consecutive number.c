// https://www.codewars.com/kata/58f8a3a27a5c28d92e000144/train/c
#include <stdbool.h>

bool firstNonConsecutive(const int arr[], const int length, int *first) {
    for (int i = 1; i < length; i++) {
        if (arr[i] != arr[i - 1] + 1) {
            *first = arr[i];
            return true;
        }
    }
    
    return false;
}
