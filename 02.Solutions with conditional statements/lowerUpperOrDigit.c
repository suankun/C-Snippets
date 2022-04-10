/*
 * Program that should receive a character
 * from the user and print if the character
 * is lowercase, uppercase, digit or other.
 * (Withour using ready function)
 */

#include <stdio.h>

int main()
{
	char userInput;
	
	/*user input*/
	printf("Enter a character: ");
	scanf("%c", &userInput);

	/*defining the character*/
	if(userInput >= 'A' && userInput <= 'Z')
		printf("It's an uppercase!\n");
	else if(userInput >= 'a' && userInput <= 'z')
		printf("It's a lowercase!\n");
	else if(userInput >= '0' && userInput <= '9')
		printf("It's a digit!\n");
	else
		printf("Other..!\n");
	
	return 0;
}