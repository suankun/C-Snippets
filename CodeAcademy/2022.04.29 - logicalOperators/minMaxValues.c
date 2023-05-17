#include <stdio.h>
#include <limits.h>
#include <float.h>

int main()
{
    printf("The minimum value of INT = %d\n", INT_MIN);
    printf("The maximum value of INT = %d\n", INT_MAX);

    printf("SHORT INT = %d Bytes\n", sizeof(short));
    printf("The minimum value of SHORT INT = %d\n", SHRT_MIN);
    printf("The maximum value of SHORT INT = %d\n", SHRT_MAX);
    printf("LONG INT = %d Bytes\n", sizeof(long));
    printf("The minimum value of LONG INT = %ld\n", LONG_MIN);
    printf("The maximum value of LING INT = %ld\n", LONG_MAX);
    
    printf("The minimum value of float = %.10e\n", FLT_MIN);
    printf("The maximum value of float = %.10e\n", FLT_MAX);

    return 0;
}