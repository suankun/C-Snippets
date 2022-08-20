#include <stdio.h>
#include <string.h>

int main()
{
	char name[] = "asen";
	char ime[] = "boris";
	int result = strcmp(name, ime);
	printf("%d", result);
	printf("\n");

	char name1[] = "asen";
	char ime1[] = "asen";
	int result1 = strcmp(name1, ime1);
	printf("%d", result1);
	printf("\n");

	


	return 0;
}