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

int main()
{
    Date graduationDate, todayDate;
    graduationDate = inputDate();
    todayDate = inputDate();
    printDate(graduationDate);
    printf("\n");
    printDate(todayDate);
    printf("\n");

    return 0;
}