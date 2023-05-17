// Задача 4. Напишете C програма за броене на главни, малки и специални
// символи в низ.

#include <stdio.h>
#include <stdlib.h>

int uppercase(char *str);
int lowercase(char *str);
int specialChars(char *str);

int main()
{
    char str[] = "! Two & Four $";
    char *p = str;
    printf("String: %s\n", p);

    printf("Uppercase chars: %d\n", uppercase(p));
    printf("Lowercase chars: %d\n", lowercase(p));
    printf("Special chars: %d\n", specialChars(p));

    return 0;
}

int uppercase(char *str)
{
    int count = 0;
    int i = 0;
    

    while (str[i] != '\0')
    {
        if (str[i] >=  'A' && str[i] <=  'Z')
        {
            count++;
        }
        i++;
    }

    return count;
}

int lowercase(char *str)
{
    int count = 0;
    int i = 0;
    

    while (str[i] != '\0')
    {
        if (str[i] >=  'a' && str[i] <=  'z')
        {
            count++;
        }
        i++;
    }

    return count;
}

int specialChars(char *str)
{
    int count = 0;
    int i = 0;
    

    while (str[i] != '\0')
    {
        if (str[i] >=  33 && str[i] <=  47)
        {
            count++;
        }
        i++;
    }

    return count;
}