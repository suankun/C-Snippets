#include <stdio.h>

int main()
{
    int nA;
    int nB = (nA == 1) ? 2 : 0;

    printf("Enter a value for A:" );
    scanf("%d", &nA);

    printf("A value is: %d\n", nA);
    printf("B value is: %d\n", nB);

    return 0;
}