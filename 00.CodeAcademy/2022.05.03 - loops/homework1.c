/*
 * Client invested A lv with monthly interest in B %. How will this
 * payment change if the client does not pull money during this period:
 * a / for 5 years;
 * b / for N years;
 * c / until the payment becomes greater than C lv;
 * Write a program. The numbers must be read from the user.
 */

#include <stdio.h>

// a - for 5 years;
int main()
{
    float A, B; // A - invested sum, B - monthly interest.
    int N = 5;
    float finalAmount = 0;

    // User input - invested sum.
    printf("Enter the money which you want to invest: ");
    scanf("%f", &A);
    // User input - monthly interest.
    printf("Enter the monthly interest in %%: ");
    scanf("%f", &B);

    // Calculate the simple interest.
    finalAmount = (A * (B * 12) * N) / 100 + A;

    // Print the result.
    printf("The final money for %d years will be: %.2flv\n", N, finalAmount);

    return 0;
}
// b - for N years;
int main()
{
    float A, B; // A - invested sum, B - monthly interest.
    int N; // N - period of investment.
    float finalAmount = 0; // Result.

    // User input - invested sum.
    printf("Enter the money which you want to invest: ");
    scanf("%f", &A);
    // User input - monthly interest.
    printf("Enter the monthly interest in %%: ");
    scanf("%f", &B);
    // User input - period of investment.
    printf("Enter the period you want to invest (in years): ");
    scanf("%d", &N);

    // Calculate the simple interest.
    finalAmount = (A * (B * 12) * N) / 100 + A;

    // Print the result.
    printf("The final money for %d years will be: %.2flv\n", N, finalAmount);

    return 0;
}
// c - until the payment becomes greater than C lv;
int main()
{
    // A - invested sum, B - monthly interest, N - years, C - target amount.
    float A, B, C;
    int N = 0;
    float finalAmount = 0;

    // User input - invested sum.
    printf("Enter the money which you want to invest: ");
    scanf("%f", &A);
    // User input - monthly interest.
    printf("Enter the monthly interest in %%: ");
    scanf("%f", &B);
    // User input - the target amount.
    printf("Enter the target amount: ");
    scanf("%f", &C);

    // Calculate the simple interest.
    while (finalAmount + A < C)
    {
        finalAmount += (A * (B * 12) * 1) / 100;
        N++;
    }

    // Print the result.
    printf("The target money %.2f will be reached in %d years.\n", C, N);

    return 0;
}