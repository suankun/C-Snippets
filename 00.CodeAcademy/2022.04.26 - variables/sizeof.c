#include <stdio.h>
#include <stdbool.h>

int main()
{
    printf("bool = %d bytes\n", sizeof(bool));
    printf("char = %d bytes\n", sizeof(char));
    printf("int = %d bytes\n", sizeof(int));
    printf("short int = %d bytes\n", sizeof(short));
    printf("long int = %d bytes\n", sizeof(long));
    printf("long long int = %d bytes\n", sizeof(long long));

    printf("unsigned char = %d bytes\n", sizeof(unsigned char));
    printf("unsigned int = %d bytes\n", sizeof(unsigned int));

    printf("long double = %d bytes\n", sizeof(long double));
    printf("double = %d bytes\n", sizeof(double));
    printf("float = %d bytes\n", sizeof(float));

    return 0;
}