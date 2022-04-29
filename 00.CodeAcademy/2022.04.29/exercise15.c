#include <stdio.h>

int main()
{
    int nA = 40;
    int nB = 20;
    int nX = 20;
    int nY = 30;

    if(nA > nB && nA != 0)
    {
        printf("&& operator: Both conditions are true\n");
    }
    if(nX > nY || nY != 20)
    {
        printf("&& operator: Only one condition is true\n");
    }
    if(! (nA > nB && nB != 0))
    {
        printf("");
    }

    return 0;
}