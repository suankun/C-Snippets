#include <stdio.h>

int main()
{
    int i;
	int num;
	double p = 1;

	printf("Enter a num: ");
	scanf("%d", &num);

    for(i = 1; i <= num; i++)
    {
        if(i % 2 != 0)
			p *= i;
    }

	printf("%.2lf\n", p);

    return 0;
}