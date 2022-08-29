
// Напишете програма, която обръща местата на елементите в един масив,
// използвайки указатели.

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

// int main()
// {
//     int a[] = {1, 20, 3, 40, 5};
//     int *p = NULL;
//     p = a;

//     int len = sizeof(a)/sizeof(a[0]);
//     int temp = 0;
//     for (size_t i = 0; i < len/2; i++)
//     {
//         temp = *(p+i);
//         *(p+i) = *((p+len)-i-1);
//         *((p+len)-i-1) = temp;
//     }
    
//     for (size_t j = 0; j < len; j++)
//     {
//         printf("%d ", *(p+j));
//     }
//     printf("\n");
    
//     return 0;
// }