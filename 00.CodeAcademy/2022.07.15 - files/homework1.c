/*
Задача 1. Напишете програма, която чете стринг от стандартния вход и го
извежда на стандартния изход с функцията fgets();
*/
#include <stdio.h>

int main()
{
    char str[20];
    
    fgets(str, 20, stdin);
    puts(str);

    FILE *f = fopen("file.txt" , "r"); 

    if(f == NULL)
    {
        perror("Error opening file");
        return(-1); 
    }
    else
    { 
        fgets(str, 20, f);
        puts(str);
    }

    fclose(f);

    return(0);
}