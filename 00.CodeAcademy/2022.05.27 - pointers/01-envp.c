#include <stdio.h>

int main (int argc, char *argv[], char *envp[])
{
    int envc = 0;
    char **p;
    for (p = envp, envc = 0; *p; p++, envc++)
    {
        printf("env \t %d \t %s \n", envc, *p);
    }

    return 0;
}