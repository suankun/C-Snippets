// Напишете програма за търсене на определен елемент в даден масив,
// използвайки указатели. Дали дадено число се среща в елементите на
// масива.

#include <stdio.h>
#include <stdbool.h>

int main() {
    // arr and pointer initialization
    int arr[] = {2, 4, 6, 8, 10};
    int *p = arr;

    // user input of the searched number
    int searchedNumber = 0;
    printf("Enter the number you have searched for: ");
    scanf("%d", &searchedNumber);

    // itteration through the loop to search for the number
    bool isFound = false;
    int len = sizeof(arr)/sizeof(arr[0]);
    for (size_t i = 0; i < len; i++)
    {
        if (*(p+i) == searchedNumber)
        {
            isFound = true;
            break;
        }
    }
    
    // printing the result
    isFound == true ? printf("Yes\n") : printf("No\n");

    return 0;
}