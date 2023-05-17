#include <stdio.h>

int main () {
	int a = 5, b = 9; // sum is 35 (5 + 6 + 7 + 8 + 9)
	int sum = 0;

	do {
		sum += a;
		a++;
	} while( a <= b );

	printf("%d\n", sum);

	return 0;
}