#include <stdio.h>

int main()
{
    int num;
	int counter = 0;

	printf("Enter a number: ");
	scanf("%d", &num);

	do
	{
		num /= 10;
		counter++;
	} while (num != 0);
    
	printf("%d\n", counter);

    return 0;
}