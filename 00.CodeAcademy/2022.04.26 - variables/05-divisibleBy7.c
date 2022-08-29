#include <stdio.h>

int main()
{
    int num;
    printf("Enter an integer: ");
    scanf("%d", &num);

    if(num % 7 == 0)
        printf("Yes!\n");
    else
        printf("No!\n");

    return 0;
}

// int main() {
// 	int num = 21;
// 	int res = num % 7 == 0 ? 1 : 0;
// 	printf("%d\n", res);

// 	return 0;
// }