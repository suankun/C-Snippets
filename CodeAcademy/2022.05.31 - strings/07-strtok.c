#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
	char s[] = "I hope that";

	char* dumi = strtok(s, " ");

	while (dumi != NULL)
	{
        printf("%s\n", dumi);
        dumi = strtok(NULL, "-");
    }

	printf("\n");

	return 0;
}