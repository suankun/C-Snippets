#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *capitalize_vowels (char *string)
{
    int len = strlen(string);
    for (int i = 0; i < len; i++) {
        if (string[i] == 'a') {
        string[i] = 'A';
        } else if (string[i] == 'o') {
        string[i] = 'O';
        } else if (string[i] == 'u') {
        string[i] = 'U';
        } else if (string[i] == 'e') {
        string[i] = 'E';
        } else if (string[i] == 'i') {
        string[i] = 'I';
        }
    }
	return string;
}


// char *capitalize_vowels (char *string)
// {
//   for (char *p = string; *p; p++)
//     if (strchr("aeiou", *p)) *p = toupper(*p);
  
//   return string;
// }

int main() {
    char string[] = "Hello World!";
    printf("%s\n", capitalize_vowels(string));    

    return 0;
}
