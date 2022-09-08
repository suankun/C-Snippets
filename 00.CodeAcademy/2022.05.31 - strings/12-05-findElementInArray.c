// 5. Напишете програма за търсене на определен елемент в даден масив, използвайки указатели.

#include <stdio.h>
#include <stdlib.h>

#define SIZE 5

int getElement() {
    int elementInArray = 0;
    printf("Enter element which you are searching for: ");
    scanf("%d", &elementInArray);
    return elementInArray;
}

void findElementInArray(int *pArr, int elem) {
    for (size_t i = 0; i < SIZE; i++)
    {
        if (elem == *(pArr+i)) {
            printf("Element %d is at index %d.", elem, i);
        }
    }
    printf("\n");
}

void arrayPrint(int *pArr) {
    for (size_t i = 0; i < SIZE; i++)
    {
        printf("%d ", *(pArr+i));
    }
    printf("\n");
}

int main()
{
    // initialization
    int arr[SIZE] = {1, 2, 3, 4, 5};
    int *pArr = arr;

    // get element from user input
    int element = getElement();

    // print array
    arrayPrint(pArr);

    // find element
    findElementInArray(pArr, element);

    // free memory
    free(pArr);

    return(0);
}
