#include <stdio.h>

void hanoifun(int n, char A, char B, char C)
{
    if (n == 1)
    {
        printf("Move disk 1 from tower %c to tower %c\n", A, B);
        return;
    }
    hanoifun(n-1, A, C, B);
    printf("Move disk %d from tower %c to tower %c\n", n, A, B);
    hanoifun(n-1, C, B, A);
}
 
int main()
{
    int n = 4;
    hanoifun(n, 'A', 'B', 'C');
    return 0;
}