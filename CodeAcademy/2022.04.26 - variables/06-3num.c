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

// int main() {
// 	int x = 0, y = 0, z = 0;
// 	scanf("%d %d %d", &x, &y, &z);

// 	int max = x;
// 	if (y > max) {max = y;}
// 	if (z > max) {max = z;}

// 	int min = x;
// 	if (y < min) {min = y;}
// 	if (z < min) {min = z;}

// 	int mid = x;
// 	if (x != min && x != max) { mid = x;}
// 	if (y != min && y != max) { mid = y;}
// 	if (z != min && z != max) { mid = z;}

// 	printf("%d %d %d\n", min, mid, max);

// 	return 0;
// }