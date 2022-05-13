#include <stdio.h>

int main()
{
    int i, num, counter = 0, max = 0, n;

    for(n = 200; n <= 2000; n++)
    {
        counter = 0;
        num = i;

        while (n != 1)
        {
            if(n % 2 == 0)
                n /= 2;
            else
                n = 3 * n + 1;
            counter++;
        }

        if(counter > max)
        {
            max = counter;
            n = i;
        }
    }

    printf("Number %d (%d).\n", n, counter);

    return 0;
}