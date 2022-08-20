// Напишете функция, която връща списък с всички прости числа в даден
// интервал [a,b].
// Числата a и b са параметри на функцията

#include <stdio.h>
#include <stdlib.h>

int isPrime(int n)
{
    int i, flag = 0;

    if (n == 0 || n == 1)
        flag = 1;

    for (i = 2; i <= n / 2; ++i)
    {
        if (n % i == 0)
        {
            flag = 1;
            break;
        }
    }
    return flag;
}

void displayQ(int start, int end)
{
    int arrPrime[20], index = 0;
    int i = 0;
    if (start == end)
    {
        printf("\n\tQueue is Empty");
        return;
    }
    else
    {
        printf("Prime numbers in the interval between %d and %d are: ", start, end);
        for (i = start; i < end; i++)
        {
            if (isPrime(i) == 0)
            {
                arrPrime[index] = i;
                index++;
            }
        }

        for (i = 0; i < index; i++)
            printf("%d\t", arrPrime[i]);
    }
    printf("\n");
}

int main()
{   
    int start = 0, end = 0;
    printf("Enter start and end number: ", start, end);
    scanf("%d %d", &start, &end);
    displayQ(start, end);

    return 0;
}