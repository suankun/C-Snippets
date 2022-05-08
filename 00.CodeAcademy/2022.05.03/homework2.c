/*
 * Starting training, the athlete ran the first day A km.
 * Every next day he increased his daily norm by B % compared
 *  to the previous day. What a total path he will run the athlete for:
 * a / 10 days;
 * b / N days;
 * c / until the distance traveled per day becomes greater than X km
 * and on which day;
 * d / until the total mileage becomes greater than U km and for how many days.
 * Write a program. The numbers must be read from the user.
 */

#include <stdio.h>

// a - 10 days;
int main()
{
    // A - first day run, B - increase percentage.
    float A, B;
    // Variable for days of the run.
    int N = 10;
    // totalRun - result, tempRun - temporary variable for the for the loop.
    float totalRun = 0;
    float tempRun = 0;
    // Iteration variable for the loop.
    int i;

    // User input - first day run.
    printf("Enter the run on the initial day: ");
    scanf("%f", &A);
    // User input - increase percentage per day.
    printf("Enter the increase per day in %%: ");
    scanf("%f", &B);
    
    // Add the value of A to tempRun.
    tempRun = A;
    // Calculate the run with additional percent per day.
    for(i = 0; i < N; i++)
    {
        totalRun += tempRun * (B / 100);
        tempRun += totalRun;
    }

    // Add the run on the initial day.
    totalRun += A;

    // Print the result.
    printf("The total run for %d days will be: %.2fkm\n", N, totalRun);

    return 0;
}
// b - N days;
int main()
{
    // A - first day run, B - increase percentage.
    float A, B;
    // Variable for days of the run.
    int N;
    // totalRun - result, tempRun - temporary variable for the for the loop.
    float totalRun = 0;
    float tempRun = 0;
    // Iteration variable for the loop.
    int i;

    // User input - first day run.
    printf("Enter the run on the initial day: ");
    scanf("%f", &A);
    // User input - increase percentage per day.
    printf("Enter the increase per day in %%: ");
    scanf("%f", &B);
    // User input - days of the run.
    printf("Enter the days for run: ");
    scanf("%d", &N);
    
    // Add the value of A to tempRun.
    tempRun = A;
    // Calculate the run with additional percent per day.
    for(i = 0; i < N; i++)
    {
        totalRun += tempRun * (B / 100);
        tempRun += totalRun;
    }

    // Add the run on the initial day.
    totalRun += A;

    // Print the result.
    printf("The total run for %d days will be: %.2fkm\n", N, totalRun);

    return 0;
}
// c - until the distance traveled per day becomes greater than X km and on which day;
int main()
{
    // A - first day run, B - increase percentage, X - target km.
    float A, B, X;
    // Days counter.
    int N = 0;
    // totalRun - result, tempRun - temporary variable for the for the loop.
    float totalRun = 0;
    float tempRun = 0;
    // Iteration variable for the loop.
    int i;

    // User input - first day run.
    printf("Enter the run on the initial day: ");
    scanf("%f", &A);
    // User input - increase percentage per day.
    printf("Enter the increase per day in %%: ");
    scanf("%f", &B);
    // User input - target km.
    printf("Enter target km: ");
    scanf("%f", &X);
    
    // Add the value of A to tempRun.
    tempRun = A;
    // Calculate the run with additional percent per day.
    while (totalRun + A < X)
    {
        totalRun += tempRun * (B / 100);
        tempRun += totalRun;
        N++;
    }

    // Add the run on the initial day.
    totalRun += A;

    // Print the result.
    printf("The run on %dth day will be: %.2fkm\n", N, totalRun);

    return 0;
}
// d - until the total mileage becomes greater than U km and for how many days;
int main()
{
    // A - invested sum, B - increase percentage, U - target km.
    float A, B, U;
    // Days counter.
    int N = 0;
    // totalRun - result, tempRun - temporary variable for the for the loop.
    float totalRun = 0;
    float tempRun = 0;
    // Iteration variable for the loop.
    int i;

    // User input - first day run.
    printf("Enter the run on the initial day: ");
    scanf("%f", &A);
    // User input - increase percentage per day.
    printf("Enter the increase per day in %%: ");
    scanf("%f", &B);
    // User input - target km.
    printf("Enter target km: ");
    scanf("%f", &U);
    
    // Add the value of A to tempRun.
    tempRun = A;
    // Calculate the run with additional percent per day.
    while (totalRun + A < U)
    {
        totalRun += tempRun * (B / 100) + A;
        tempRun += totalRun;
        N++;
    }

    // Add the run on the initial day.
    totalRun += A;

    // Print the result.
    printf("The total run for %d days will be: %.2fkm\n", N, totalRun);

    return 0;
}