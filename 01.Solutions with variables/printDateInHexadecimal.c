/*
 * Program that prints date in hexadecimal.
 */

#include <stdio.h>

int main()
{
	int day, month, year;
	
	/*user input*/
	printf("Enter day: ");
	scanf("%d", &day);
	printf("Enter month: ");
	scanf("%d", &month);
	printf("Enter year: ");
	scanf("%d", &year);
	
	/*print the result*/
	printf("Day: 0x%X \n", day);
	printf("Month: 0x%X \n", month);
	printf("Year: 0x%X \n", year);
	
	
	return 0;
}