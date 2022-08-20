/*
 * Task 3. Write a program that calculates the difference of
 * two time periods, expressed in centuries, years, months, days,
 * minutes, seconds. Print the output periods and the result.
 */

#include <stdio.h>
#include <stdint.h>

struct TIME
{
    int centuries;
    int years;
    int months;
    int days;
    int minutes;
    int seconds;
};

int main()
{
    int64_t resultInSec = 0;

    struct TIME startPeriod, endPeriod, diff;

    printf("Enter the start period. \n");
    printf("Enter centuries, years, months, days, minutes and seconds: ");
    scanf("%d %d %d %d %d %d",
        &startPeriod.centuries,
        &startPeriod.years,
        &startPeriod.months,
        &startPeriod.days,
        &startPeriod.minutes,
        &startPeriod.seconds);

    printf("Enter the stop period. \n");
    printf("Enter centuries, years, months, days, minutes and seconds: ");
    scanf("%d %d %d %d %d %d",
        &endPeriod.centuries,
        &endPeriod.years,
        &endPeriod.months,
        &endPeriod.days,
        &endPeriod.minutes,
        &endPeriod.seconds);
    printf("\n");

    // Calculating the difference.
    // Assumptions: 1 month = 30 days, 1 year = 365 days.
    resultInSec =
        ((endPeriod.centuries - startPeriod.centuries) * 3153600000) +
        ((endPeriod.years - startPeriod.years) * 31536000) +
        ((endPeriod.months - startPeriod.months) * 2592000) +
        ((endPeriod.days - startPeriod.days) * 86400)+
        ((endPeriod.minutes - startPeriod.minutes) * 60) +
        (endPeriod.seconds - startPeriod.seconds);

    diff.centuries = resultInSec / 3153600000;
    resultInSec = resultInSec - (diff.centuries * 3153600000);
    diff.years = resultInSec / 31536000;
    resultInSec = resultInSec - (diff.years * 31536000);
    diff.months = resultInSec / 2592000;
    resultInSec = resultInSec - (diff.months * 2592000);
    diff.days = resultInSec / 86400;
    resultInSec = resultInSec - (diff.days * 86400);
    diff.minutes = resultInSec / 60;
    resultInSec = resultInSec - (diff.minutes * 60);
    diff.seconds = resultInSec;

    printf("Time Difference: %dcenturies, %dyears, %dmonths, %ddays, %dminutes, %dseconds\n",
        diff.centuries, diff.years, diff.months, diff.days, diff.minutes, diff.seconds);
    
    return 0;
}