#include <stdio.h>

int main()
{
    int day = 0;
	
	/*user input*/
	printf("Enter the month number: ");
	scanf("%d", &day);
	
	/*printing the month name*/
	if (day == 1)
		printf("Monday\n");
	else if (day == 2)
		printf("Tuesday\n");
	else if (day == 3)
		printf("Wednesday\n");
	else if (day == 4)
		printf("Thursday\n");
	else if (day == 5)
		printf("Friday\n");
	else if (day == 6)
		printf("Saturday\n");
	else if (day == 7)
		printf("Sunday\n");
	else
		printf("The number has to be between 1 to 7\n");
	
	return 0;
}