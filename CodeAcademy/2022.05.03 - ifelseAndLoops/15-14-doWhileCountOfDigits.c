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

// int main () {
// 	int num = 0, countOfDigits = 0;
// 	scanf("%d", &num);

// 	do {
// 		countOfDigits++;
// 		num /= 10;
// 	} while( num != 0 );

// 	printf("%d\n", countOfDigits);

// 	return 0;
// }