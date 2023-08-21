#include <stdio.h>

int main()
{
	int min = 0;
    int a = 1, b = 5;
    min = (a > b) ? b : a;

    printf("%d", min);
	
	return 0;
}