#include <stdio.h>
#include <stdlib.h>
 
typedef struct key
{
    char *string;
    int value;
}*key , arrKey[2];
 
int main ()
{
    key newKey = malloc(sizeof(key)*2);
    // arrKey newKey;
    for (size_t i = 0; i < 2; i++)
    {
        newKey[i].string = malloc(10);
        newKey[i].value = i;
        newKey[i].string = "hello";
    }
 
    for (size_t i = 0; i < 2; i++)
    {
 
        printf("%s\t%d\n", newKey[i].string, newKey[i].value);
 
 
    }
    for (size_t i = 0; i < 2; i++)
    {
        free(newKey[i].string);
    }
 
}