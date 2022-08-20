#include <stdio.h>
#include <stdlib.h>

char * getText()
{
	char * tmp;
	tmp = malloc(80);

	tmp = "Hello";
	
	return tmp;
}

int main()
{
	char * txt;
	txt = getText();

	printf("%s\n", txt);
	free(txt);

	return 0;
}