#include <stdio.h>

int main(void)
{
    char c;
	int countTab = 0, countSpace = 0;

	while ((c = getchar()) != EOF)
	{
		if(c == '\t')
		countTab++;
		if(c == ' ')
		countSpace++;
	}

	/*Break the loop with ctrl+c.*/
	printf("Tab = %d\tSpace = %d\n", countTab, countSpace);

    return 0;
}