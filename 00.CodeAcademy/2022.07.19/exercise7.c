#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n = 0, *ptr, i = 0;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    ptr = (int*) malloc(n * sizeof(int));

    printf("Enter elements: ");
    for(i = 0; i < n; ++i) {
        scanf("%d", ptr + i);
    }
    
    for(i = 0; i < n; ++i) {
        printf("%d ", *(ptr + i));
    }
    printf("\n");

    free(ptr);

    return 0;
}