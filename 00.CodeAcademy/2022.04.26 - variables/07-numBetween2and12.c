#include <stdio.h>

int main()
{
    int num;

    do
    {
        printf("Enter a num: ");
        scanf("%d", &num);
    } while (num <= 2 || num >= 12);

    printf("The number is: %d\n", num);

    return 0;
}

// int main() {
// 	int num = 0;
//     do
//     {
//         scanf("%d", &num);
//     } while (num <= 2 || num >= 12);

// 	return 0;
// }
