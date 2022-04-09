/*reverse the number of three digit*/

#include <stdio.h>

int main()
{
	int num;
	int reversedNum = 0;
	int units, tens, hundreds;
	
	printf("Enter 3 digits number: ");
	scanf("%d", &num); /*user input*/
	
	units = num % 10; /*taiking the last digit*/
	tens = (num / 10) % 10; /*taking the second digit*/
	hundreds = num / 100; /*taking the first digit*/
	
    /*creating a variable with the reversed number*/
	reversedNum = units;
    reversedNum = (reversedNum * 10) + tens;
    reversedNum = (reversedNum * 10) + hundreds; 
	
	/*printf("%d%d%d", units, tens, hundreds);*/
	printf("%d", reversedNum); /*printing the result*/
	
	return 0;
}