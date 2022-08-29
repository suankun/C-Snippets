#include <stdio.h>

int readNumber();

int main()
{
    
    printf("%d\n", readNumber());
    
    return 0;
}

int readNumber()
{
    int n;
    scanf("%d", &n);

    return n;
}