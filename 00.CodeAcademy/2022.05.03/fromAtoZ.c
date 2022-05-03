#include <stdio.h>

int main()
{
	char character = 'a';

	while(character <= 'z')
	{
		printf("%c\t", character);
		character++;
	}
	printf("\n");
	
	return 0;
}