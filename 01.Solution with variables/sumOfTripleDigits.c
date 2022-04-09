#include <stdio.h>

int main()
{
	int num;
	int units, tens, hundreds;
	
	printf("Enter 3 digits number: ");
	scanf("%d", &num);
	units = num % 10;
	tens = (num / 10) % 10;
	hundreds = num / 100;
	
	printf("%d", units + tens + hundreds);
	
	return 0;
}