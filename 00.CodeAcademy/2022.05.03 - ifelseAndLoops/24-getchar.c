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

int main(void){
	int c = 0;
	while((c = getchar()) != EOF)
		putchar(c);

	return 0;
}