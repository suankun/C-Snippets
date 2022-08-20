#include <stdio.h>

int main()
{
    short int a[3] = {1, 2, 3};
    printf("%d\t", *a);
    printf("%d\t", a[0]);
    printf("0x%x\t", a); // адреса на началото на масива = адреса на а[0]
    printf("0x%x\n", &a[0]);

    printf("%d\t", a[1]);
    printf("%d\t", *(a + 1));
    printf("0x%x\t", (a + 1));
    printf("0x%x\n", &a[1]);

    printf("%d\t", a[2]);
    printf("%d\t", *(a + 2));
    printf("0x%x\t", (a + 2));
    printf("0x%x\n", &a[2]);

    printf("%d\t", a[3]);
    printf("%d\t", *(a + 3));
    printf("0x%x\t", (a + 3));
    printf("0x%x\n", &a[3]);

    return 0;
}