#include <stdio.h>
#include <stdlib.h>

int maxMultiple(int divisor, int bound) 
{
    int res = 0;
    for (int i = divisor; i <= bound; i++) {
        if (i % divisor == 0)
            res = i;
        else
            continue;
    }
    return res;
}

// int maxMultiple(int divisor, int bound) 
//{
//    return bound / divisor * divisor;
//}

int main() {

    int res = maxMultiple(2, 7);
    printf("%d", res);

    return 0;
}
