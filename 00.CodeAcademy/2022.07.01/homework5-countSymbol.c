// Задача 5. Напишете C програма за намиране на всички срещания на
// символ в низ.

#include <stdio.h>
#include <stdlib.h>

int countSymbol(char *str);

int main()
{
    char str[] = "! Two & Four $";
    char *p = str;
    printf("String: %s\n", p);

    printf("Count: %d\n", countSymbol(p));

    return 0;
}

int countSymbol(char *str)
{
    int count = 0;
    int i = 0;
    char ch;

    printf("Enter char to count: ");
    scanf("%c", &ch);    

    while (str[i] != '\0')
    {
        if (str[i] == ch)
        {
            count++;
        }
        i++;
    }

    return count;
}
