#include <stdio.h>

int main()
{
    char userInput;
	
	printf("Enter a character: ");
	scanf("%c", &userInput);

	if(userInput >= 'A' && userInput <= 'Z')
		printf("It's an uppercase!\n");
	else if(userInput >= 'a' && userInput <= 'z')
		printf("It's a lowercase!\n");
    else
        printf("Enter a valid character!\n");
	
    return 0;
}