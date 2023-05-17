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

////////////////////////////////

// int main()
// {
//     char *loc, buf1[80], buf2[80];

//     printf("Enter the string to be searched: ");
//     gets(buf1);
//     printf("Enter the target string: ");
//     gets(buf2);

//     loc = strstr(buf1, buf2);
//     if ( loc == NULL )
//         printf("No match was found.\n");
//     else
//         printf("%s was found at position %d.\n", buf2, loc-buf1);

//     return(0);
// }