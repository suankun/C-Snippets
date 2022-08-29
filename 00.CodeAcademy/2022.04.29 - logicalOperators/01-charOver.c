#include <stdio.h>

int main()
{
    unsigned char num = 255;
    num = num + 10;

    printf("%d\n", num);

    return 0;
}

// int main()
// {
//     printf("%d", (unsigned char)(255 + 10));

//     return 0;
// }