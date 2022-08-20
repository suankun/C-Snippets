#include <stdio.h>

int main()
{
    int a, b, c;
    int min, max, mid;
    printf("Enter 3 number: ");
    scanf("%d%d%d", &a, &b, &c);

    min = a;
	max = b;

    if(a > b)
	{
		max = a;
		min = b;
	}

	if(max < c)
        max = c;
		
	if(min > c)
		min = c;

    if(a != min && a != max)
        mid = a;
    else if(b != min && b != max)
        mid = b;
    else if(c != min && c != max)
        mid = c;

    printf("%d, %d, %d\n", min, mid, max);

    return 0;
}