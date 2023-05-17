/*Програма извикваща функция зависеща от масив.*/
#include <stdio.h>

int max(int *a, int n)
{
    if(n == 1)
        return a[0];
    else
    {
        int m = a[n - 1];
        int maxn = max(a, n - 1);
        if (m < maxn)
            m = maxn;
        
        return m;
    }
    
}

int main()
{
    int a[5] = {1, 3, 4, 6, 7};
    max(a, 5);

    printf("\n");
    
    return 0;
}