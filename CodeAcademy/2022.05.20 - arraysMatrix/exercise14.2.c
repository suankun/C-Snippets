#include <stdio.h>
#include <stdbool.h>

bool isIdentity(int x[][], int y[][], int m, int n)
{
    int i, j;
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            if (x[i][j] != y[i][j])
            {
                return false;
            }
        }
    }
    return true;
}

int main()
{
    int a[3][4];
    int b[3][4];
    bool result = isIdentity(a, b, 3, 4);

    if (result)
        printf("Yes");
    else
        printf("No");
}