#include <stdio.h>

int main()
{
    int i, j, mult = 1000;
	int num1, num2;
	int a1, b1, c1, d1;
	int a2, b2, c2, d2;
	int bull = 0, cow = 0;

	printf("Enter a 4 digits number: ");
	scanf("%d", &num1);
	printf("Enter a 4 digits number: ");
	scanf("%d", &num2);

	a1 = (num1 / 1000) % 10;
	b1 = (num1 / 100) % 10;
	c1 = (num1 / 10) % 10;
	d1 = num1 % 10;

	a2 = (num2 / 1000) % 10;
	b2 = (num2 / 100) % 10;
	c2 = (num2 / 10) % 10;
	d2 = num2 % 10;


	if(a1 == a2)
		bull++;
	if(b1 == b2)
		bull++;
	if(c1 == c2)
		bull++;
	if(d1 == d2)
		bull++;
	
	for(i = 0; i < 4; i++)
	{
		mult = 1000;
		for(j = 0; j < 0; j++)
		{
			num1 = (num1 / mult) % 10;
			if(num1 == num2)
				cow++;
			mult /= 10;
		}
	}
 

    return 0;
}