#include <stdio.h>

int main(void)
{
    char c;
	int countRow = 0;

	while ((c = getchar()) != EOF)
	{
		if(c == '\n')
		countRow++;
	}

	/*Break the loop with ctrl+c.*/
	printf("%d\n", countRow);

    return 0;
}