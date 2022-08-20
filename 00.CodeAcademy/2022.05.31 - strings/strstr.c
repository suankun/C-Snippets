#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
    char a[] = "abrakadabra";
	char b[] = "bra";

    char * p = strstr(a, b);
    char * q = strstr(p, b);

	printf("%s\n", p);
	printf("%s\n", q);

    return 0;
}