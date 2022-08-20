#include <stdio.h>

int main()
{
    int i;
	int p = 1;

    for(i = 13; i <= 19; i++)
    {
        p *= i;
    }

	printf("%d\n", p);

    return 0;
}