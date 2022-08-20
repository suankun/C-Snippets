#include <stdio.h>

struct firma
{
    struct people
    {
        char name[20];
        float salary;
        int year;
    } worker;
    char address[30];
    int year;
};

int main()
{
    struct firma myFirm = {{"Angel", 2.500, 28}, "Sofia", 2020};

    printf("%s\n", myFirm.worker.name);

    return 0;
}
