#include "funcVisa.h"

int reverse(int *arr, int size)
{
    int i = 0;
    int temp;
    for(i = 0; i < size/2; i++){
        temp = arr[i];
        arr[i] = arr[size - i - 1];
        arr[size - i - 1] = temp;
    }

    return *arr;
}

int doubleEvenPositions(int *arr, int size)
{
    int i = 0;
    for (i = 0; i < size; i++)
    {
        if (i % 2 != 0)
            arr[i] *= 2;
    }

    return *arr;
}

int totalSum(int *arr, int size)
{
    int i = 0, num1 = 0, num2 = 0, count = 0;
    for (i = 0; i < size; i++)
    {
        if (arr[i] > 9)
        {
            num1 = arr[i] / 10;
            num2 = arr[i] % 10;
            count += (num1 + num2);
        } else
        {
            count += arr[i];
        }
    }

    return count;
}

int valid(int *arr)
{
    int cardType = 0;
    if (arr[0] == 4)
    {
        cardType = 0;
    }
    if (arr[0] == 5)
    {
        if (arr[1] >= 1 && arr[1] <= 5)
        {
            cardType = 1;
        }
    }

    return cardType;
}

int scanArray(int *arr)
{
    int i = 0;
    printf ("Enter your card number (no longer than 16 digits): ");
    for (int i = 0; i < SIZE; i++)
    {
        scanf ("%d", &arr[i]);
    }
    return *arr;
}

void printArray(int *arr)
{
    for (int i = 0; i < SIZE; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

void printResult(int sum, int cardType)
{
    if (sum % 10 == 0)
    {
        if (cardType == 0)
            printf("Visa - Valid!\n");
        else if (cardType == 1)
            printf("Master card - Valid!\n");
        else
            printf("Valid card!");
    }
    else
    {
        printf("No valid!\n");
    }
}