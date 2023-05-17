/*Програма извикваща функция зависеща от масив.*/
#include <stdio.h>

void max(int *a, int n)
{
    int k;
    for (k = 0; k < n; k++)
    {
        printf("%d\t", a[k]);
    }
    
}

int main()
{
    int a[5] = {1, 3, 4, 6, 7};
    max(a, 5);

    printf("\n");
    
    return 0;
}