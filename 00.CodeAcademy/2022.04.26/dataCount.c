#include <stdio.h>

int main()
{
    int height, weight;
    int dataCount;
    int result;

    dataCount = scanf("%d %d", &height, &weight);
    result = printf("%d\n", dataCount);
    printf("%d", result);
    
    return 0;
}