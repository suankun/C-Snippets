#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
    int len;
    char str[30];

    printf("Enter string: ");
    gets(str);

    len = strlen(str); 

    printf("Length of %s is %d", str, len);
	printf("\n");

    return 0;
}