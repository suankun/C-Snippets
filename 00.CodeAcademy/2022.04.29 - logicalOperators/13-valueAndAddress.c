#include <stdio.h>

int main()
{
    int iA = 13;
    int* pValue = NULL;

    pValue = &iA;

    printf("Address of variable iA is: %p\n", pValue);
    printf("Value of variable iA is: %d\n", *pValue);

    return 0;
}