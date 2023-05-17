#include <stdio.h>
#include <stdlib.h>

struct date{
	int day;
	int month;
	int year;
};

int main()
{

	struct date graduateDate;
	
	printf("Enter day: ");
	scanf("%d", &graduateDate.day);
	printf("Enter month: ");
	scanf("%d", &graduateDate.month);
	printf("Enter year: ");
	scanf("%d", &graduateDate.year);
	
	printf("The graduation date is %d/%d/%d", graduateDate.day, graduateDate.month, graduateDate.year);
	printf("\n");
	return 0;
}