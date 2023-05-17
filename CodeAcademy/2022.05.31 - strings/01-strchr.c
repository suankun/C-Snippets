#include <stdio.h>
#include <string.h>

int main()
{
	char *loc, buf[80];
	int ch;
	
	printf("Enter the string to be searched: ");
	gets(buf);
	printf("Enter the character to search for: ");
	ch = getchar();
	loc = strchr(buf, ch);

	if (loc == NULL)
		printf("The character %c was not found.", ch);
	else
		printf("The character %c was found at position %d.\n", ch, (loc-buf)+1);
	// loc-buf → от адреса на loc вади адреса на buf и получава
	// относителното отместване = позицията на символа в стринга

	return(0);
}