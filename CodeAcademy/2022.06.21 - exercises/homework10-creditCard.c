// Да се напише програма, която проверява дали дадена кредитна карта от
// определен тип — VISA или MasterCard, има валиден номер. За валидиране на номера
// на кредитните карти, да се използва следното описание:
// Номерата на кредитните карти са 16-цифрени в групи по четири.
// Например, да проверим дали следната кредитна карта е валидна:
// 4 2 0 4 – 5 8 7 6 – 9 0 1 2 – 5 2 3 4
// 1) Обръщаме цифрите на номера и получаваме:
// 4 3 2 5 2 1 0 9 6 7 8 5 4 0 2 4
// 2) Удвояваме цифрите, стоящи на четна позиция, и получаваме:
// 4 6 2 10 2 2 0 18 6 14 8 10 4 0 2 8
// 3) Ако получим събираеми, по-големи от 9, ги разделяме на две отделни цифри.
// Събираме така получените цифри:
// 4 + 6 + 2 + 1 + 0 + 2 + 2 + 0 + 1 + 8 + 6 + 1 + 4 + 8 + 1 + 0 + 4 + 0 + 2 + 8 = 60
// 4) Ако сборът се дели на 10 без остатък, то кредитната карта е валидна.
// Ако номерът започва с 4, то типът ѝ е VISA, а ако има префикс 51–55, тя е MasterCard.

#include <stdio.h>
#include <stdlib.h>

int reverse(int *arr, int size);
int doubleEvenPositions(int *arr, int size);
int separateNumbersOverNine(int *arr, int size, int digit1, int digit2);
int totalSum(int *arr, int size);


int main()
{
    int i = 0;
    int cardNumber[16];

    printf ("Enter your card number(no longer than 16 digits: ");
    for (int i = 0; i < 16; i++)
    {
        scanf ("%d", &cardNumber[i]);
    }
    reverse(cardNumber, 16);
    doubleEvenPositions(cardNumber, 16);

    for (i = 0; i < 16; i++)
    {
        printf("%d ", cardNumber[i]);
    }
    printf("\n");

    int sum = totalSum(cardNumber, 16);

    if (sum % 10 == 0)
    {
        printf("Yes\n");
    }
    else
    {
        printf("No\n");
    }

    return 0;
}

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