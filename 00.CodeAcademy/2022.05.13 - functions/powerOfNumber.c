#include <stdio.h>

long stepen(int n, int k)
{
    if(k == 1)
        return n;
    if(k % 2 == 0)
        return stepen(n, k/2) * stepen(n, k/2);
    else
        return n * stepen(n, k - 1);
}

int main()
{
    int n, k;
    printf("Enter a number: ");
    scanf("%d", &n);
    printf("Enter a power: ");
    scanf("%d", &k);


    printf("%ld\n", stepen(n, k));

    return 0;
}