#include <stdio.h>

long factorial(int num)
{
    if(num == 1)
        return 1;
        
    return num * factorial(num - 1);
}

int main()
{
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    printf("Result = %ld\n", factorial(num));

    return 0;
}