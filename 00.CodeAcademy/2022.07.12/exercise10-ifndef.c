#include <stdio.h>
#include <stdlib.h>

#define MAX_GF 20

int main ()
{
    printf("Hello\n");
    #if MAX_GF >= 50
    printf("One\n");
    printf("Two\n");
    #else
    printf("Three\n");
    printf("Four\n");
    #endif
    printf("Bye\n");
    
    return 0;
}