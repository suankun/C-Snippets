#include <stdio.h>

typedef struct  date
{
    int day;
    int month;
    int year;
}Date;

Date inputDate()
{
    Date dt;
    printf("Enter day (1-31):");
    scanf("%d", &dt.day);

    printf("Enter day (1-12):");
    scanf("%d", &dt.month);

    printf("Enter day (yyyy):");
    scanf("%d", &dt.year);
    return dt;
}

void printDate(Date dt)
{
    printf("Year = %d, Month = %d, Day = %d", dt.year, dt.month, dt.day);
}

void printNextDay(Date dt)
{
    dt.day++;
    if (dt.day > 31)
    {
        dt.day = 1;
        dt.month++;
        if (dt.month > 12)
        {
            dt.month = 1;
            dt.year++;
        }
    }
    printf("The next day is: \n");
    printDate(dt);
}

int main()
{
    Date todayDate = {31, 12, 2009};
    printf("Current Date: \n");
    printDate(todayDate);
    printf("\n");
    printNextDay(todayDate);
    printf("\n");

    return 0;
}