// 12. Напишете примерна програма, която връща няколко стойности от функция, използвайки указател.

#include <stdio.h>

// add is the short name for address
void compare(int a, int b, int* ptr_great, int* ptr_small)
{
	if (a > b) {
		*ptr_great = a;
		*ptr_small = b;
	}
	else {
		*ptr_great = b;
		*ptr_small = a;
	}
}

int main()
{
	int great, small, x, y;

	printf("Enter two numbers: \n");
	scanf("%d%d", &x, &y);

	// The last two arguments are passed
	// by giving addresses of memory locations
	compare(x, y, &great, &small);
	printf("The greater number is %d and the smaller number is %d\n" , great, small);

	return 0;
}
