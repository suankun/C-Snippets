#include <stdio.h>
#include <stdlib.h>

#include <stddef.h>


int adjacentElementsProduct(int inputArray[], size_t input_size) 
{  
    int maxSum = inputArray[0] * inputArray[1];
    for (int i = 0; i < input_size-1; i++) {
        if (inputArray[i] * inputArray[i+1] > maxSum)
            maxSum = inputArray[i] * inputArray[i+1];
    }
    return maxSum;
}

int main() {
    int arr[] = {1,5,10,9};
    int res = adjacentElementsProduct(arr, 4); // 90
    printf("%d\n", res);

    return 0;
}
