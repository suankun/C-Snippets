// 2.--(преговор често използвани функции) Напишете следните функции:

// Функция, която проверявя дали едно число е просто

// Функция, която връща най
// големия общ делител на две числа

// Функция, която използва горната функция и по даден като параметър
// масив от цели числа, връща НОД на елементите от масива

#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

bool isPrime(int number)
{
    int i = 0;
    
    // 0 and 1 are not prime numbers
    if (number == 0 || number == 1)
        return false;

    for (i = 2; i <= number / 2; ++i)
    {
        // if number is divisible by i, then n is not prime
        if (number % i == 0)
        {
            return false;
        }
    }

    return true;
}

void gcd(int num1, int num2)
{
    int i = 0, gcd = 0;

    for(i = 1; i <= num1 && i <= num2; ++i)
    {
        // Checks if i is factor of both integers
        if (num1 % i == 0 && num2 % i == 0)
            gcd = i;
    }

    printf("G.C.D of %d and %d is %d\n", num1, num2, gcd);
}

int main()
{
    int choice = 0;
    int num1 = 0, num2 = 0;
    int arr[2] = {0};
    do
    {
        printf("Enter your choice: \n");
        printf("1 - Check is the number is prime\n");
        printf("2 - Check GCD of two numbers\n");
        printf("3 - Check GCD of all numbers in an array\n");
        printf("0 - Exit\n");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            printf("Enter a positive integer: ");
            scanf("%d", &num1);
            printf("%s\n", isPrime(num1) ? "true" : "false");
            break;
        case 2:
            printf("Enter two positive integer: ");
            scanf("%d %d", &num1, &num2);
            gcd(num1, num2);
            break;
        case 3:
            printf("Enter two elements for the array: ");
            scanf("%d %d", &arr[0], &arr[1]);
            gcd(arr[0], arr[1]);
            break;
        }
    } while (choice != 0);

    return 0;
}