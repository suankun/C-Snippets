#include <stdio.h>
#include <stdlib.h>

#include <stddef.h>

int find_max_product(size_t length, const int array[length]) {
    int max_product = -100;
    int temp_sum = 1;
    for (size_t i = 0; i < length; i++) {
        for (size_t j = i; j < length; j += (i+1)) {
            temp_sum *= array[j];
        }
        if (temp_sum > max_product) {
            max_product = temp_sum;
        }
        temp_sum = 1;
    }
    return max_product;
}

int main() {
    const int arr[] = {11, 6, -2, 0, 5, -4, 2};
    int len = sizeof(arr)/sizeof(arr[0]);
    printf("%d\n", find_max_product(len, arr)); // expected 8

    return 0;
}
