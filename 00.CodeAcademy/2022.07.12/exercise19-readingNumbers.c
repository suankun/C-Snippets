#include <stdio.h>
#include <stdlib.h>

int main()
{
	FILE* ptr;
	char ch;

	ptr = fopen("test.txt", "r");

	if (NULL == ptr) {
		printf("Error!\n");
	}

	do {
		ch = fgetc(ptr);
		if (ch >= '0' && ch <= '9')
		{
			printf("%c\n", ch);
		}

	} while (ch != EOF);

	fclose(ptr);
	return 0;
}
