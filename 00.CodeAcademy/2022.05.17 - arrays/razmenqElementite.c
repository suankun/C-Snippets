#include <stdio.h>

int main()
{
    int a[] = {1, 20, 3, 40, 5};
    int i;
    int size = sizeof(a) / sizeof(a[0]);

    for(i = 0; i < size / 2; i++)
    {
        int temp = *(a + i);
        *(a + i) = *(a + (size - 1 - i));
        *(a + (size - 1 - i)) = temp;
    }

    for(i = 0; i < 5; i++)
    {
        printf("%d\t", a[i]);
    }

    printf("\n");
    
    return 0;
}