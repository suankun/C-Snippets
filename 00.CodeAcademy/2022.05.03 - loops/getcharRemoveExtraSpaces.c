#include <stdio.h>

int main()
{
    char c;

	while ((c = getchar()) != EOF)
	{
		if(c == ' ')
		{
			putchar(c);
			while((c = getchar()) == ' ');
		}
		putchar(c);
	}

	/*Break the loop with ctrl+c, ctrl+d*/

    return 0;
}