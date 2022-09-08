#include <stdio.h>
#include <string.h>

int main()
{
	char s[3] = "I ";
	char duma[5] = "have";

	printf("%s\n", strcat(s, duma));

	return 0;
}