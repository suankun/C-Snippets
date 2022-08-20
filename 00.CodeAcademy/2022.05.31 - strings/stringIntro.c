#include <stdio.h>
#include <string.h>

int main()
{
	char s[] = "asdf23^";
	// printf("%c", s[6]);
	// printf("\n");

	char name[] = "abc";

	char strname[] = "student Ivan";

	strcpy(s, name);
	printf("%s\n", s);

	strcpy(s, strname);
	printf("%s\n", s);

	// char *u = "abc\nsdf";
	// printf("%c", *(u + 5));
	// printf("\n");

	// int d = strlen(s);
	// int d1 = strlen(u);
	// printf("s = %d", d);
	// printf("\n");
	// printf("u = %d", d1);
	// printf("\n");

	return 0;
}