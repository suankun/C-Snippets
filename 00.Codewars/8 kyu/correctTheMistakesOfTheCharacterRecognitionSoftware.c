#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *correct(char *string);

int main()
{
    char str[] = "L0ND0N";

    printf("%s\n", str);
    correct(str);
    printf("%s\n", str);

    return 0;
}

char *correct(char *string)
{
  for (size_t i = 0; i < strlen(string); i++)
  {
    if (string[i] == '5')
      string[i] = 'S';
    else if (string[i] == '0')
      string[i] = 'O';
    else if (string[i] == '1')
      string[i] = 'I';
  }
  return string;
}

// Alternative solution:
char *correct(char *string){
    char* p = string;
    while(*p){
        switch(*p){
        case '5':
            *p = 'S';
            break;
        case '0':
            *p = 'O';
            break;
        case '1':
            *p = 'I';
            break;
        default:
            ;
        }
        ++p;
    }
    return string;
}