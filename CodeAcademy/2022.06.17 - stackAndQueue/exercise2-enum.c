#include <stdio.h>
#include <stdlib.h>

enum bool {false, true};

int main()
{
    enum bool b = true;

    switch (b)
    {
    case true:
        printf("true\n");
        break;
    case false:
        printf("false\n");
        break;
    }

    return 0;
}