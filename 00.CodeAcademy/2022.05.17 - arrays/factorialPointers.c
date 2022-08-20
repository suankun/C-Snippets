#include <stdio.h>

long fact(int *pn)
{
    long result = 1;
    int i;

    for (i = 1; i <= *pn; i++)
    {
        result *= i;
    }

    return result;
}

int main()
{
    int number;
    int *p = &number;

    printf("Enter a number: ");
    scanf("%d", p);
    
    long factoriel = fact(p);

    printf("%ld\n", factoriel);

    return 0;
}

// long fact(int n)
// {
//     long result = 1;
//     int i;

//     for (i = 1; i <= n; i++)
//     {
//         result *= i;
//     }

//     return result;
// }

// int main()
// {
//     int number;
//     printf("Enter a number: ");
//     scanf("%d", &number);
    
//     long factoriel = fact(number);

//     printf("%ld\n", factoriel);

//     return 0;
// }