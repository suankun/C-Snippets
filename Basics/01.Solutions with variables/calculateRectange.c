#include <stdio.h>

int main()
{
	double height, width;
	double perimeter;
	printf("Enter height: ");
	scanf("%lf", &height);
	printf("Enter width: ");
	scanf("%lf", &width);
	perimeter = 2 * (height + width);
	printf("The perimeter of this rectangle = %lf\n", perimeter);

    return 0;
}
