#include <stdio.h>

// int main()
// {
//     float a;

//     printf("Enter value: ");
//     scanf("%f", &a);
//     printf("Value = %f\n", a);
    
//     return 0;
// }

int main()
{
    // decalre variable
    int x;
    int y;
    int sum;

    // read values for x and y from standart input
    printf("Enter value for x: ");
    scanf("%d", &x);

    printf("Enter value for y: ");
    scanf("%d", &y);

    sum = x + y;

    // print
    printf("x = %d\n", x);
    printf("y = %d\n", y);
    printf("x + y = %d\n", sum);

    printf("%d + %d = %d\n", x, y, sum);
    printf("%d - %d = %d\n", x, y, (x - y));
    printf("%d * %d = %d\n", x, y, (x * y));

    return 0;
}