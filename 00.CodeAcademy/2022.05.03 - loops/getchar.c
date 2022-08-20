#include <stdio.h>

int main(void)
{
    char c;
	c = getchar();
	while(c != EOF)
	{
		putchar(c);
		c = getchar();
	}
	/*Break the loop with ctrl+c.*/
    return 0;
}