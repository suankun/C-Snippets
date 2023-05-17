#include <stdio.h>
#include <stdlib.h>

int min(int *subWin, int m)
{
    int min = *subWin;
    for (int i = 1; i < m; i++)
    {
        min =* (subWin + i);
    }

    return 0;
}

int main()
{
    int n = 0, m = 0;
    printf("n=");
    scanf("%d", &n);
    printf("m=");
    scanf("%d", &m);

    int *a = (int*)malloc(n * sizeof(int));
    for (int i = 0; i < n; i++)
    {
        scanf("%d", a + i);
    }

    for (int w = 0; w < n - m + 1; w += m)
    {
        int minim = min((a + w), m);
        printf("%d", minim);
    }
    printf("\n");

    return 0;
}