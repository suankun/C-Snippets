/* Sum of three digits number*/

#include <stdio.h>

int main()
{
	int num;
	int units, tens, hundreds;
	
	printf("Enter 3 digits number: ");
	scanf("%d", &num); /*user input*/

	units = num % 10; /*taking the last digit*/
	tens = (num / 10) % 10; /*taking the second digit*/
	hundreds = num / 100; /*taking the first digit*/
	
	printf("%d", units + tens + hundreds); /*printing the result*/
	
	return 0;
}